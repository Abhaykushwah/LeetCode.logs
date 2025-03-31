class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int counter = 0;
        for (int i = 0; i < (flowerbed.size()); i = i + 1)
        {
            if (flowerbed[i] == 0)
            {
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
                if (leftEmpty && rightEmpty)
                {
                    flowerbed[i] = 1;
                    counter++;
                    i++;
                }
            }
        }

        if (counter >= n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};