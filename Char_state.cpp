Find :
if (fDist >= 4000.f)
{
  if (pkChrProtege)
    if(DISTANCE_APROX(GetX() - pkCharProtege->GetX(), GetY() - pkCharProtage->GetY()) > 1000)

      Follow(pkChrProtege, number(150, 400));

    return;

      }

Change :

#ifdef
if (fDist >= 10000.f)
{
  if (pkChrProtege)
    if(DISTANCE_APROX(GetX() - pkCharProtege->GetX(), GetY() - pkCharProtage->GetY()) > 1000)

      Follow(pkChrProtege, number(150, 400));

    return;
}
#else
if (fDist >= 4000.f)
{
  if (pkChrProtege)
    if(DISTANCE_APROX(GetX() - pkCharProtege->GetX(), GetY() - pkCharProtage->GetY()) > 1000)

      Follow(pkChrProtege, number(150, 400));

    return;

  }
#endif 
