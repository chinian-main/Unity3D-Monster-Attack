using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utility
{
    // Start is called before the first frame update
    public static T[] ShuffleArray<T>(T[] array, int seed)
    {
        System.Random prng = new System.Random(seed);
        for(int i = 0; i < array.Length; i++)
        {
            int randomIndex = prng.Next(i, array.Length);

            //Swap
            T tempItem = array[randomIndex];
            array[randomIndex] = array[i];
            array[i] = tempItem;
        }
        return array;
    } 
 
}
