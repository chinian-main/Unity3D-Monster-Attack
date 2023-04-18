Shader "Custom/BlendColorsOverlayTexture" {
	Properties {
		_Color1 ("Color1", Color) = (1,1,1,1)
		_Color2 ("Color2", Color) = (0.5,0.5,0.5,1)
		_MaskTex ("Mask (A)", 2D) = "white" {}
		_MainTex ("Detail", 2D) = "white" {}
		_Glossiness ("Smoothness", Range(0,1)) = 0.5
		_Metallic ("Metallic", Range(0,1)) = 0.0
	}
	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 200
		
		CGPROGRAM
		// Physically based Standard lighting model, and enable shadows on all light types
		#pragma surface surf Standard fullforwardshadows

		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

		sampler2D _MainTex;
		sampler2D _MaskTex;

		struct Input {
			float2 uv_MainTex;
		};

		half _Glossiness;
		half _Metallic;
		fixed4 _Color1;
		fixed4 _Color2;

		void surf (Input IN, inout SurfaceOutputStandard o) {
			// blend between two colors based on alpha of a texture
			fixed alpha = tex2D(_MaskTex, IN.uv_MainTex).a;
			fixed3 color = lerp(_Color1.rgb, _Color2.rgb, alpha).rgb;
			// overlay detail texture
			fixed4 detail = tex2D (_MainTex, IN.uv_MainTex);
			color = lerp(color, detail.rgb, detail.a);
			o.Albedo = color;
			// Metallic and smoothness come from slider variables
			o.Metallic = _Metallic;
			o.Smoothness = _Glossiness;
			o.Alpha = 1;
		}
		ENDCG
	} 
	FallBack "Diffuse"
}
