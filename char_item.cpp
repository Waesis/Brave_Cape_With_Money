#include service.h
 //Search :
AggregateMonster();
  
///Replace with :
#ifdef ENABLE_BRAVE_CAPE_WITH_MONEY
#ifdef LEVEL_LIMIT_FOR_TAX_PER_USE
								// Level req
								static int incepator = 30;
								static int mediu = 60;
								static int avansat = 90;
								static int maestru = 120;
								//  Money Request
								static int LowLevel = 5 * 1000; //  5000
								static int MediumLevel = 10* 1000; // 10000
								static int MaxLevel = 25 * 1000; // 25000


#endif 
								if(GetLevel() <= incepator )
								{
									// Under Level 30 don`t take taxe
								#ifdef EFFECT_BRAVE_CAPE
									this->EffectPacket(SE_MANTELLO);
								#endif
								#ifdef ENABLE_RANGE_MONSTER_BRAVE_CAPE
									AggregateRangeMonster();
								#endif
									AggregateMonster();
								}
								else if(GetLevel() <= mediu)
								{

									if (GetGold() < LowLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 5000 yang.");
									}
									else
									{
										#ifdef EFFECT_BRAVE_CAPE
										this->EffectPacket(SE_MANTELLO);
									#endif
										AggregateMonster();
									#ifdef ENABLE_RANGE_MONSTER_BRAVE_CAPE
										AggregateRangeMonster();
									#endif
										PointChange(POINT_GOLD, -LowLevel);//5k yang
									}
								}
								else if(GetLevel() <= avansat)
								{

									if (GetGold() < MediumLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 10000 yang.");
									}
									else
									{
										#ifdef EFFECT_BRAVE_CAPE
										this->EffectPacket(SE_MANTELLO);
									#endif
										AggregateMonster();
									#ifdef ENABLE_RANGE_MONSTER_BRAVE_CAPE
										AggregateRangeMonster();
									#endif
										PointChange(POINT_GOLD, -MediumLevel);//10k yang
									}
								}
								else if(GetLevel() <= maestru)
								{

									if (GetGold() < MaxLevel) 
									{
										ChatPacket(CHAT_TYPE_INFO, "<Cape System> You need 25000 yang.");
									}
									else
									{
										#ifdef EFFECT_BRAVE_CAPE
										this->EffectPacket(SE_MANTELLO);
									#endif
									#ifdef ENABLE_RANGE_MONSTER_BRAVE_CAPE
										AggregateRangeMonster();
									#endif
										AggregateMonster();
										PointChange(POINT_GOLD, -MaxLevel);//25k yang
									}
								}
#endif
