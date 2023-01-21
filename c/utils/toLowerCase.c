int lower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}
int toUpperCase(int c)
{
  if (c >= 'a' && c <= 'z')
    return c + 'A' - 'a';
  else
    return c;
}