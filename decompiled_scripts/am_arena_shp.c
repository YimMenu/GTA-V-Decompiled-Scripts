#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_52(ScriptParam_87);
	}
	else
	{
		func_50();
	}
	while (true)
	{
		func_49();
		if (Global_262145.f_23568)
		{
			func_50();
		}
		if (func_38())
		{
			func_50();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4264520)
	{
		if (Global_4268347[iLocal_21 /*12*/].f_11)
		{
			func_35(iLocal_21);
			Global_4268347[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4264521) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4263954[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_50();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if ((MISC::GET_FRAME_COUNT() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (MISC::GET_FRAME_COUNT() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4263954[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4263954[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_50();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1312745;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4264523;
			break;
		
		case 1:
			return Global_4264522;
			break;
	}
	return 0;
}

int func_13()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_14()
{
	return Global_98796.f_346 > 0;
}

void func_15(bool bParam0)
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != -1)
		{
			Global_4263954[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4263954[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4263954[iVar3 /*85*/].f_66.f_18 = MISC::GET_FRAME_COUNT();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4263954[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4264508.f_4 = Var0.f_2;
			Global_4264508.f_6 = Var0.f_3;
			Global_4264508.f_7 = Var0.f_4;
			Global_4264508.f_8 = Var0.f_5;
			Global_4264508.f_9 = Var0.f_6;
			if (Global_4264508.f_10 == 0)
			{
				Global_4264508.f_10 = MISC::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4268347[iVar3 /*12*/] = Global_4263954[iVar3 /*85*/].f_66.f_3;
					Global_4268347[iVar3 /*12*/].f_1 = Global_4263954[iVar3 /*85*/].f_66.f_7;
					Global_4268347[iVar3 /*12*/].f_2 = Global_4263954[iVar3 /*85*/].f_66.f_4;
					Global_4268347[iVar3 /*12*/].f_3 = Global_4263954[iVar3 /*85*/].f_66.f_1;
					Global_4268347[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4268347[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4268347[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4268347[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4268347[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4268347[iVar3 /*12*/].f_11 = 1;
					Global_4263954[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4263954[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4263954[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4263954[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4263954[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4263954[iVar3 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4263954[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4263954[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4263954[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4264538 = Global_4263954[iVar3 /*85*/].f_66.f_4;
								Global_4264540 = Global_4263954[iVar3 /*85*/].f_66.f_6;
								Global_4264541 = Var0.f_2;
								Global_4264539 = Global_4263954[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4264538) && func_13())
								{
									if (!func_22(Global_4263954[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4264465[iVar7 /*7*/] = Global_4263954[iVar3 /*85*/].f_66;
										Global_4264465[iVar7 /*7*/].f_2 = Global_4264538;
										Global_4264465[iVar7 /*7*/].f_3 = Global_4264540;
										Global_4264465[iVar7 /*7*/].f_1 = Global_4264539;
										Global_4264465[iVar7 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
									}
								}
								else
								{
									Global_4264535 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4263954[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4263954[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4263954[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4264538 = Global_4263954[iVar3 /*85*/].f_66.f_4;
							Global_4264540 = Global_4263954[iVar3 /*85*/].f_66.f_6;
							Global_4264541 = Var0.f_2;
							Global_4264539 = Global_4263954[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4264538) && func_13())
							{
								if (!func_22(Global_4263954[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4264465[iVar8 /*7*/] = Global_4263954[iVar3 /*85*/].f_66;
									Global_4264465[iVar8 /*7*/].f_2 = Global_4264538;
									Global_4264465[iVar8 /*7*/].f_3 = Global_4264540;
									Global_4264465[iVar8 /*7*/].f_1 = Global_4264539;
									Global_4264465[iVar8 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
								}
							}
							else
							{
								Global_4264535 = 1;
							}
						}
					}
					else if (Global_4263954[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4264538 = Global_4263954[iVar3 /*85*/].f_66.f_4;
						Global_4264540 = Global_4263954[iVar3 /*85*/].f_66.f_6;
						Global_4264541 = Var0.f_2;
						Global_4264539 = Global_4263954[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4264538) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4263954[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4264465[iVar9 /*7*/] = Global_4263954[iVar3 /*85*/].f_66;
								Global_4264465[iVar9 /*7*/].f_2 = Global_4264538;
								Global_4264465[iVar9 /*7*/].f_3 = Global_4264540;
								Global_4264465[iVar9 /*7*/].f_1 = Global_4264539;
								Global_4264465[iVar9 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
							}
						}
						else
						{
							Global_4264535 = 1;
						}
					}
					if (Global_4263954[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4263954[iVar3 /*85*/].f_66.f_4);
							Global_4264535 = 0;
						}
						if (Global_4263954[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4263954[iVar3 /*85*/].f_66.f_4, Global_4263954[iVar3 /*85*/].f_66.f_10, Global_4263954[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Global_4263954[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4263954[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4263954[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4263954[*iParam0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4263954[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4264465;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4264465[iVar0 /*7*/] != 0 && Global_4264465[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4264465;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4264465[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4264465[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4264465[iVar0 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
			Global_4264465[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_29(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_26()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return;
	}
	NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_28(iParam0));
	if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4263954[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	switch (Global_4263954[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			MONEY::_NETWORK_SPENT_MOVE_YACHT(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -180141073:
			MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case 68030260:
			MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case -982394051:
			MONEY::NETWORK_SPENT_CINEMA(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 454359403:
			MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, Global_4263954[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case -1586170317:
			MONEY::_0xD20D79671A598594(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			MONEY::NETWORK_SPENT_TELESCOPE(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 1654961868:
			MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case 1182673174:
			MONEY::NETWORK_SPENT_CARWASH(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 563463121:
			MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -1389227906:
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -516219046:
			MONEY::NETWORK_BUY_HEALTHCARE(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1398318418:
			MONEY::NETWORK_EARN_FROM_BETTING(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			MONEY::NETWORK_SPENT_CASH_DROP(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 277665518:
			MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1077156170:
			MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			MONEY::NETWORK_SPENT_BOUNTY(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 742499889:
			MONEY::_NETWORK_SPENT_WAGER(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			MONEY::_0xDBC966A01C02BCA7(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			MONEY::_NETWORK_SPENT_PAY_GOON(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			MONEY::_0xFC4EE00A7B3BFB76(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1027218631:
			MONEY::NETWORK_EARN_FROM_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			MONEY::_NETWORK_EARN_FROM_PREMIUM_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			MONEY::NETWORK_BUY_ITEM(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 14, 1, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		
		case 1612072658:
			MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -990286235:
			MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14), &(Global_4263954[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			MONEY::_NETWORK_EARN_FROM_GANG_PICKUP(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			MONEY::_NETWORK_EARN_FROM_CASHING_OUT(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			MONEY::_NETWORK_EARN_FROM_ARMOUR_TRUCK(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -585718395:
			MONEY::NETWORK_PAY_UTILITY_BILL(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 763367758:
			MONEY::_NETWORK_SPENT_VIP_UTILITY_CHARGES(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 1850983186:
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -2129781826:
			MONEY::_0xB49ECA122467D05F(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1941570214:
			MONEY::_0x0FE8E1FCD2B86B33(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1869490922:
			MONEY::_0xD7CCCBA28C4ECAF0(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -336803850:
			MONEY::_0xD7CCCBA28C4ECAF0(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -1412692765:
			MONEY::_0xD7CCCBA28C4ECAF0(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 618167454:
			MONEY::_0xD7CCCBA28C4ECAF0(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 980623936:
			MONEY::_0xD7CCCBA28C4ECAF0(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			MONEY::NETWORK_REFUND_CASH(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), &(Global_4263954[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		
		case 312105838:
			MONEY::NETWORK_EARN_FROM_ROCKSTAR(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 1839532116:
			MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4263954[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case 941287179:
			MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1834046564:
			MONEY::NETWORK_SPENT_TAXI(Global_4263954[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 393059668:
			MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_34), Global_4263954[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4263954[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		
		case -1359375127:
			MONEY::NETWORK_SPENT_PROSTITUTES(Global_4263954[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case 283351220:
			MONEY::NETWORK_BUY_ITEM(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		
		case -2085313189:
			switch (Global_4263954[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					MONEY::NETWORK_BUY_ITEM(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4263954[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case 1704445500:
			MONEY::NETWORK_SPENT_BETTING(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, &(Global_4263954[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		
		case 1620609399:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			MONEY::_0x08B0CA7A6AB3AC32(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			MONEY::_0xCDA1C62BE2777802(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			MONEY::_0x0CB1BE0633C024A8(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			MONEY::_NETWORK_EARN_FROM_CONTRABAND(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			MONEY::_0x84C0116D012E8FC2(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			MONEY::_0xE8B0B270B6E7C76E(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			MONEY::_0x05F04155A226FBBF(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			MONEY::_0x5BCDE0F640C773D2(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			MONEY::_0x0035BB914316F1E3(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			MONEY::_NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			MONEY::_0xA75CCF58A60A5FD1(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_10, Global_4263954[iParam0 /*85*/].f_11, Global_4263954[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			MONEY::_NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			MONEY::_NETWORK_EARN_FROM_SMUGGLING(Global_4263954[iParam0 /*85*/].f_6, Global_4263954[iParam0 /*85*/].f_7, Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			MONEY::_NETWORK_EARN_FROM_WAGE_PAYMENT_BONUS(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			MONEY::_NETWORK_EARN_FROM_WAGE_PAYMENT(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 599804707:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4263954[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			MONEY::NETWORK_EARN_FROM_PICKUP(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			MONEY::_0x9D4FDBB035229669(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			MONEY::_0x11B0A20C493F7E36(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), &(Global_4263954[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			MONEY::_NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			MONEY::_NETWORK_EARN_FROM_TARGET_REFUND(Global_4263954[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			MONEY::_NETWORK_EARN_FROM_TARGET_REFUND(Global_4263954[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_WAGES(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case -722894325:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_WAGES_BONUS(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_SETUP(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_FINALE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_AWARDS(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_ELITE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_ELITE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			MONEY::_NETWORK_EARN_FROM_GANGOPS_ELITE(Global_4263954[iParam0 /*85*/].f_66.f_1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			MONEY::_NETWORK_EARN_FROM_DOOMSDAY_FINALE_BONUS(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			MONEY::_NETWORK_SPENT_GANGOPS_START_MISSION(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			MONEY::_NETWORK_SPENT_GANGOPS_START_STRAND(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -2015399333:
			MONEY::_0xF6B170F9A02E9E87(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(PLAYER::INT_TO_PLAYERINDEX(Global_4263954[iParam0 /*85*/]), 0, 0))
			{
				MONEY::_NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4263954[iParam0 /*85*/]), Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		
		case 1678112166:
			MONEY::_NETWORK_SPENT_REHIRE_DJ(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], false, true);
			break;
		
		case -1143510182:
			MONEY::_NETWORK_SPENT_NIGHTCLUB_BAR_DRINK(Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -1574795641:
			MONEY::_0x42FCE14F50F27291(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			MONEY::_0xA75EAC69F59E96E7(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1135468152:
			MONEY::_0xC5156361F26E2212(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			MONEY::_0x0B39CF0D53F1C883(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_1, Global_4263954[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			MONEY::_0x1FDA0AA679C9919B(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			MONEY::_0xFFFBA1B1F7C0B6F4(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			MONEY::_NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		
		case 403506509:
			MONEY::_NETWORK_EARN_FROM_BB_EVENT_BONUS(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			MONEY::_NETWORK_EARN_FROM_ARENA_SKILL_LEVEL_PROGRESSION(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			MONEY::_NETWORK_EARN_FROM_ARENA_CAREER_PROGRESSION(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			MONEY::_NETWORK_SPENT_ARENA_SPECTATOR_BOX(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], false, true);
			break;
		
		case 1815541181:
			MONEY::_NETWORK_SPENT_MAKE_IT_RAIN(Global_4263954[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case -561012053:
			MONEY::_NETWORK_EARN_FROM_SPIN_THE_WHEEL_CASH(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			MONEY::_NETWORK_SPENT_SPIN_THE_WHEEL_PAYMENT(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		
		case 1240683675:
			MONEY::_NETWORK_EARN_FROM_ASSASSINATE_TARGET_KILLED_2(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			MONEY::_NETWORK_EARN_FROM_ARENA_WAR(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_16, Global_4263954[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			MONEY::_NETWORK_EARN_FROM_RC_TIME_TRIAL(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			MONEY::_NETWORK_EARN_FROM_DAILY_OBJECTIVE_EVENT(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			unk_0x24CC5BC765961690(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			unk_0xA8C1B24657FB32B3(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			unk_0xB42761A25890EDEA(Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			unk_0x2DF294D394338472(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			unk_0xFB43929E288533F1(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4263954[iParam0 /*85*/].f_14.f_26), Global_4263954[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0x0A920FD5AB632774(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			unk_0x0AE713861459290A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			unk_0x566FF9B925CB8BDA(Global_4263954[iParam0 /*85*/].f_9, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			unk_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0xFF90259E892D5F8A(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4263954[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			unk_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			unk_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 1, Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			unk_0xB0E03FD240577D6C(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0x2BAB01599473BCB8(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0x2BAB01599473BCB8(Global_4263954[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4263954[iParam0 /*85*/], Global_4263954[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0xC0DE18944A7A9044(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
		
		case -842062976:
			MONEY::_0x5C9B198AF5A54FA6(Global_4263954[iParam0 /*85*/].f_66.f_1, Global_4263954[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4263954[iParam0 /*85*/].f_66, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4263954[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4268347[iParam0 /*12*/].f_1 == Global_4268347[iParam0 /*12*/].f_6)
	{
		if (Global_4268347[iParam0 /*12*/].f_1 != 1445302971 && Global_4268347[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = MISC::GET_HASH_KEY(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4266291);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	MISC::CLEAR_BIT(&iVar0, 28);
	MISC::CLEAR_BIT(&iVar0, 29);
	MISC::CLEAR_BIT(&iVar0, 26);
	iVar3 = (Global_4268347[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4268347[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4268347[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4268347[iParam0 /*12*/] != Global_4268347[iParam0 /*12*/].f_5 || Global_4268347[iParam0 /*12*/].f_1 != Global_4268347[iParam0 /*12*/].f_6) || Global_4268347[iParam0 /*12*/].f_2 != iVar5) || Global_4268347[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_108340 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_37()
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_38()
{
	var uVar0;
	
	func_46(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_45())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	if (func_43(159))
	{
		if (!func_42())
		{
			return 1;
		}
	}
	if (func_43(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()
{
	switch (func_41())
	{
		case 0:
			return func_40();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_40()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_41()
{
	return Global_30768;
}

bool func_42()
{
	return Global_2450632.f_598;
}

int func_43(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return Global_2460680;
}

bool func_45()
{
	return Global_2450632.f_593;
}

void func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_47(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_47(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_33(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_48(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_48(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_49()
{
	SYSTEM::WAIT(0);
}

void func_50()
{
	func_51();
}

void func_51()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_52(struct<34> Param0)
{
	if (Global_262145.f_23568)
	{
		func_50();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4263954[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_50();
	}
	if (!func_53(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_50();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_53(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4263954[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4263954[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

