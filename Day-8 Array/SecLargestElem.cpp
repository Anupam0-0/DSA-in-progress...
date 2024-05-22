//Ques link: https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int max = -1;
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                arr[i] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > temp)
            {
                temp = arr[i];
            }
        }

        return temp;
    }
};