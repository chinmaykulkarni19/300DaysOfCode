bool valid(int n)
{
    while (n > 0)
    {
        int key = n % 10;
        if (key == 0 or key >= 4)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
void findAll()
{
    for (int i = 0; i < 1e6 + 1; i++)
    {
        if (valid(i))
        {
            mp[i]++;
        }
    }
}