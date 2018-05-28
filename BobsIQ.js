function iqTest(numbers){
  var arr;
  var arrInt = [];
  var mode;
  var x;
  var posx;
  var posy;
  var countEv = 0;
  var countOd = 0;
  
  arr = numbers.split(" ");
  for (var i = 0; i < arr.length; i++)
    arrInt.push(parseInt(arr[i]));
  x = 0;
  pos = 0;
  while (x < arrInt.length)
  {
    if (arrInt[x] % 2 == 0)
    {
      countEv++;
      posx = x;
    } else {
    posy = x;
    countOd++;
    }
    x++;
  }
  if (countOd > countEv)
    return (posx + 1);
  else return (posy + 1);
  return (0);
}