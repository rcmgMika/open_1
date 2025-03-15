// 0, 1, 2, 3, 4, 5, 6, 7, 8 = (len-1)/2 for odd
// 0, 1, 2, 3, 4, 5, 6, 7 = (len-1)/2 and ((len-1)/2)+1, then double = (l1+l2)/2
// 0, 2, 3, 7, 10, 11, 23
// 1, 2, 3, 45, 86, 345, 3456, 34522, 45657, 143254, 65635635 = 11

#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int left, int mid, int right)
{
    int s1 = mid - left + 1,
        s2 = right - mid, l[s1], r[s2];

    for (int i = 0; i < s1; i++)
        l[i] = arr[left + i];
    for (int j = 0; j < s2; j++)
        r[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < s1 && j < s2)
    {
        if (l[i] <= r[j])
            arr[k++] = l[i++];
        else
            arr[k++] = r[j++];
    }

    while (i < s1)
        arr[k++] = l[i++];
    while (j < s2)
        arr[k++] = r[j++];
}

void merge_me(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        merge_me(arr, left, mid);
        merge_me(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int *merge_arr(int *arr, int size, int *arr2, int size_2)
{
    int *temp = (int *)malloc((size + size_2) * sizeof(int));
    for (int i = 0; i < size + size_2; i++)
    {
        if (i < size)
        {
            temp[i] = arr[i];
        }
        else
        {
            temp[i] = arr2[i - size];
        }
    }
    return temp;
}

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int *arr = merge_arr(nums1, nums1Size, nums2, nums2Size), tot = nums1Size + nums2Size;
    merge_me(arr, 0, tot - 1);
    double temp;
    if (tot % 2 == 0)
        return temp = (double)(arr[(tot - 1) / 2] + arr[((tot - 1) / 2) + 1]) / 2;
    else
        return temp = (double)arr[(tot - 1) / 2];
}

int main()
{
    int p[] = {99, 23, 455, 6, 1, 2, 3, 5, 4};
    int s[] = {99, 39234, 324, 10, 22, 3};
    int size = sizeof(p) / sizeof(p[0]);
    int size_2 = sizeof(s) / sizeof(s[0]);

    int *cc = merge_arr(p, size, s, size_2);
    merge_me(cc, 0, size + size_2 - 1);
    for (int i = 0; i < size + size_2; i++)
    {
        printf("%d ", cc[i]);
    }
    double fuck = findMedianSortedArrays(p, size, s, size_2);
    printf("\nMedian: %lf", fuck);
}