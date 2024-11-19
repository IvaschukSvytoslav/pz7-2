using System;

namespace Lecture8.Example2
{
    class Program
    {
    // Універсальний метод для пошуку мінімального елемента
    static T FindMin<T>(T[] array) where T : IComparable<T>
    {
        if (array == null || array.Length == 0)
            throw new ArgumentException("Масив не повинен бути порожнім.");

        T min = array[0];
        foreach(var item in array)
        {
            if (item.CompareTo(min) < 0)
                min = item;
        }
        return min;
    }

        // Універсальний метод для пошуку максимального елемента
        static T FindMax<T>(T[] array) where T : IComparable<T>
        {
            if (array == null || array.Length == 0)
                throw new ArgumentException("Масив не повинен бути порожнім.");

            T max = array[0];
            foreach(var item in array)
            {
                if (item.CompareTo(max) > 0)
                    max = item;
            }
            return max;
        }

        static void Main(string[] args)
        {
        // Масив цілих чисел
        int[] intArray = { 3, 7, 1, 9, 4 };
        int minInt = FindMin(intArray);
        int maxInt = FindMax(intArray);

        Console.WriteLine($"Масив цілих чисел: [{string.Join(", ", intArray)}]");
        Console.WriteLine($"Мінімальний елемент: {minInt}, Максимальний елемент: {maxInt}");

        // Масив дійсних чисел
        double[] doubleArray = { 2.5, 7.8, 1.3, 9.0, 4.4 };
        double minDouble = FindMin(doubleArray);
        double maxDouble = FindMax(doubleArray);

        Console.WriteLine($"\nМасив дійсних чисел: [{string.Join(", ", doubleArray)}]");
        Console.WriteLine($"Мінімальний елемент: {minDouble}, Максимальний елемент: {maxDouble}");

        Console.ReadKey();
    }
}
}
