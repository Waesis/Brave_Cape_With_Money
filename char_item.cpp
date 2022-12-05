Search :
AggregateMonster();

Replace with :

#ifdef ENABLE_BRAVE_CAPE_WITH_MONEY
								if(GetLevel() <= 30)
								{
									// Under Level 30 don`t take taxe
									this->EffectPacket(SE_MANTELLO);
									AggregateMonster();
								}
								else if(GetLevel() <= 60)
								{
									static int LowLevel = 5000;
									if (GetGold() < LowLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 5000 yang.");
									}
									else
									{
										this->EffectPacket(SE_MANTELLO);
										AggregateMonster();
										PointChange(POINT_GOLD, -LowLevel);//5k yang
									}
								}
								else if(GetLevel() <= 90)
								{
									static int MediumLevel = 10000;
									if (GetGold() < MediumLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 10000 yang.");
									}
									else
									{
										this->EffectPacket(SE_MANTELLO);
										AggregateMonster();
										PointChange(POINT_GOLD, -MediumLevel);//10k yang
									}
								}
								else if(GetLevel() <=120)
								{
									static int MaxLevel = 25000;
									if (GetGold() < MaxLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 25000 yang.");
									}
									else
									{
										this->EffectPacket(SE_MANTELLO);
										AggregateMonster();
										PointChange(POINT_GOLD, -MaxLevel);//25k yang
									}
								}
#endif
