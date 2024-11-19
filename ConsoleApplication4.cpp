using System;

namespace Lecture8.Example2
{
    class Program
    {
    // ������������ ����� ��� ������ ���������� ��������
    static T FindMin<T>(T[] array) where T : IComparable<T>
    {
        if (array == null || array.Length == 0)
            throw new ArgumentException("����� �� ������� ���� �������.");

        T min = array[0];
        foreach(var item in array)
        {
            if (item.CompareTo(min) < 0)
                min = item;
        }
        return min;
    }

        // ������������ ����� ��� ������ ������������� ��������
        static T FindMax<T>(T[] array) where T : IComparable<T>
        {
            if (array == null || array.Length == 0)
                throw new ArgumentException("����� �� ������� ���� �������.");

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
        // ����� ����� �����
        int[] intArray = { 3, 7, 1, 9, 4 };
        int minInt = FindMin(intArray);
        int maxInt = FindMax(intArray);

        Console.WriteLine($"����� ����� �����: [{string.Join(", ", intArray)}]");
        Console.WriteLine($"̳�������� �������: {minInt}, ������������ �������: {maxInt}");

        // ����� ������ �����
        double[] doubleArray = { 2.5, 7.8, 1.3, 9.0, 4.4 };
        double minDouble = FindMin(doubleArray);
        double maxDouble = FindMax(doubleArray);

        Console.WriteLine($"\n����� ������ �����: [{string.Join(", ", doubleArray)}]");
        Console.WriteLine($"̳�������� �������: {minDouble}, ������������ �������: {maxDouble}");

        Console.ReadKey();
    }
}
}
