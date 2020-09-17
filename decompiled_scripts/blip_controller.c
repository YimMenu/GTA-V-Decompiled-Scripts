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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	Local_24 = { 1694.74f, 3276.502f, 41.2796f };
	Local_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_51();
	}
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		iVar1 = func_50(iVar0);
		func_47(iVar1, func_48(iVar0));
		iVar0++;
	}
	func_46(91, 1);
	func_46(92, 1);
	Global_31143 = 1;
	while (Global_31145)
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_55[iVar2] = -1;
		iVar2++;
	}
	GAMEPLAY::SET_BIT(&(Global_31146[iVar2].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar2].f_11), 18);
		iVar2++;
	}
	iLocal_71 = Global_37197;
	bVar3 = false;
	func_45();
	func_43();
	while (true)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_31143 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_31143)
		{
			func_45();
			func_43();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 18);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_37197)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 13))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 1))
						{
							if (!bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 2))
						{
							if (bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 7))
						{
							if (!func_32(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 16))
						{
							if (!func_30(Global_31146[iVar2].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 14))
						{
							if (func_32(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 8))
						{
							if (Global_31146[iVar2].f_16 != 4 && Global_31146[iVar2].f_16 != 8)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 19))
						{
							switch (iLocal_64)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 27))
						{
							if (bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_31146[iVar2].f_16 == 1)
						{
							func_23();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar2].f_11), 0);
						}
						else if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 15))
						{
							GAMEPLAY::SET_BIT(&(Global_31146[iVar2].f_11), 0);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 15))
					{
						GAMEPLAY::SET_BIT(&(Global_31146[iVar2].f_11), 0);
					}
					if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 0) && GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 3))
					{
						bVar10 = false;
						if (!UI::DOES_BLIP_EXIST(Global_31146[iVar2].f_19))
						{
							while (!UI::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 28))
										{
											Global_31146[iVar2].f_19 = UI::ADD_BLIP_FOR_RADIUS(Global_31146[iVar2][0], Global_31146[iVar2].f_10);
											UI::SET_BLIP_ALPHA(Global_31146[iVar2].f_19, 128);
											UI::_0x75A16C3DA34F1245(Global_31146[iVar2].f_19, 0);
										}
										else
										{
											Global_31146[iVar2].f_19 = UI::ADD_BLIP_FOR_COORD(Global_31146[iVar2][iLocal_64]);
											UI::SET_BLIP_SPRITE(Global_31146[iVar2].f_19, Global_31146[iVar2].f_12[iLocal_64]);
										}
										break;
									
									default:
										Global_31146[iVar2].f_19 = UI::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 28))
							{
								Global_31146[iVar2].f_19 = UI::ADD_BLIP_FOR_RADIUS(Global_31146[iVar2][0], Global_31146[iVar2].f_10);
								UI::SET_BLIP_ALPHA(Global_31146[iVar2].f_19, 128);
								UI::_0x75A16C3DA34F1245(Global_31146[iVar2].f_19, 0);
							}
							else
							{
								Global_31146[iVar2].f_19 = UI::ADD_BLIP_FOR_COORD(Global_31146[iVar2][0]);
								UI::SET_BLIP_SPRITE(Global_31146[iVar2].f_19, Global_31146[iVar2].f_12[0]);
							}
							if (Global_31146[iVar2].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										UI::SET_BLIP_COORDS(Global_31146[iVar2].f_19, Global_31146[iVar2][iLocal_64]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								UI::SET_BLIP_COORDS(Global_31146[iVar2].f_19, Global_31146[iVar2][0]);
							}
							if (GAMEPLAY::IS_BIT_SET(Global_31146[iVar2].f_11, 9))
							{
								if (iLocal_47)
								{
									UI::SET_BLIP_FLASHES(Global_31146[iVar2].f_19, 1);
									iLocal_47 = 0;
								}
								else
								{
									UI::SET_BLIP_FLASHES_ALTERNATE(Global_31146[iVar2].f_19, 1);
									iLocal_47 = 1;
								}
								UI::SET_BLIP_FLASH_TIMER(Global_31146[iVar2].f_19, 10000);
								GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar2].f_11), 9);
							}
							else
							{
								UI::SET_BLIP_FLASHES(Global_31146[iVar2].f_19, 0);
							}
						}
						func_20(Global_31146[iVar2].f_19, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (UI::DOES_BLIP_EXIST(Global_31146[iVar2].f_19))
						{
							UI::REMOVE_BLIP(&(Global_31146[iVar2].f_19));
							iVar5++;
							if (Global_31146[iVar2].f_16 == 1)
							{
								func_18(iVar2);
							}
						}
						Global_31146[iVar2].f_19 = 0;
					}
				}
				GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar2].f_11), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_31143 = Global_31144;
		Global_31144 = 0;
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			iLocal_64 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_2()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_4(PLAYER::PLAYER_PED_ID());
			if (func_3(iVar0) && (!func_32(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_3(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_6(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_6(int iParam0)
{
	return Global_1798[iParam0];
}

void func_7()
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_10(126))
				{
					if (func_9(138))
					{
						func_8(138, 0, 0);
					}
					if (!func_9(139))
					{
						if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-95143158) == 0)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
							{
								func_8(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_9(139))
					{
						func_8(139, 0, 0);
					}
					if (!func_9(138))
					{
						if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-95143158) == 0)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
							{
								func_8(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 0);
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 0);
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 0))
	{
		if (UI::DOES_BLIP_EXIST(Global_31146[iVar0].f_19))
		{
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			UI::REMOVE_BLIP(&(Global_31146[iVar0].f_19));
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

bool func_9(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return UI::DOES_BLIP_EXIST(Global_31146[iVar0].f_19);
}

int func_10(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_11()
{
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	Var0 = { func_17(PLAYER::GET_PLAYER_INDEX()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (UI::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5]].f_19))
			{
				fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, UI::GET_BLIP_COORDS(Global_31146[iLocal_55[iVar5]].f_19), 1);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_53 == iVar3)
	{
		return;
	}
	iLocal_53 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (UI::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5]].f_19))
				{
					func_16(iLocal_55[iVar5]);
				}
			}
			else if (UI::DOES_BLIP_EXIST(Global_31146[iLocal_55[iVar5]].f_19))
			{
				func_12(iLocal_55[iVar5]);
			}
		}
		iVar5++;
	}
}

void func_12(int iParam0)
{
	func_15(iParam0, 0, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

void func_13(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
}

void func_14(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 5);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 6);
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 11);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
}

void func_16(int iParam0)
{
	func_15(iParam0, 1, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

Vector3 func_17(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_18(int iParam0)
{
	if (iLocal_54 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			iLocal_54 = (iLocal_54 - 1);
			iLocal_55[iVar0] = -1;
			if (iParam0 == iLocal_53)
			{
				iLocal_53 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	if (iLocal_54 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_55[iVar1] = iParam0;
	iLocal_54++;
}

void func_20(var uParam0, int iParam1)
{
	iVar0 = func_1();
	UI::_0xC4278F70131BAA6D(uParam0, 1);
	UI::SET_BLIP_PRIORITY(uParam0, 2);
	UI::SET_BLIP_COLOUR(uParam0, func_22(iParam1));
	if (Global_31146[iParam1].f_16 == 4 || Global_31146[iParam1].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				UI::SET_BLIP_COLOUR(uParam0, 42);
				break;
			
			case 1:
				UI::SET_BLIP_COLOUR(uParam0, 43);
				break;
			
			case 2:
				UI::SET_BLIP_COLOUR(uParam0, 44);
				break;
			}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 28))
	{
		UI::SET_BLIP_SCALE(uParam0, 1f);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_31146[iParam1].f_20)))
	{
		if (UI::DOES_TEXT_LABEL_EXIST(&(Global_31146[iParam1].f_20)))
		{
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0, &(Global_31146[iParam1].f_20));
		}
	}
	bVar1 = GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 4);
	bVar2 = GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 5);
	bVar3 = GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 6);
	bVar4 = false;
	if (func_21(0))
	{
		bVar4 = GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 11);
	}
	if (bVar3 && !bVar4)
	{
		UI::SET_BLIP_AS_SHORT_RANGE(uParam0, false);
	}
	else
	{
		UI::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
	}
	if (bVar2 && bVar1)
	{
		UI::SET_BLIP_DISPLAY(uParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			UI::SET_BLIP_DISPLAY(uParam0, 5);
		}
		if (bVar1)
		{
			UI::SET_BLIP_DISPLAY(uParam0, 3);
		}
	}
	switch (Global_31146[iParam1].f_16)
	{
		case 7:
			UI::SET_BLIP_PRIORITY(uParam0, 2);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 6:
		case 5:
			UI::SET_BLIP_PRIORITY(uParam0, 2);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 1:
			UI::SET_BLIP_PRIORITY(uParam0, 3);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
		
		case 9:
			UI::SET_BLIP_PRIORITY(uParam0, 1);
			UI::SET_BLIP_CATEGORY(uParam0, 10);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 4:
		case 8:
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			if (Global_31146[iParam1].f_16 == 4)
			{
				UI::SET_BLIP_PRIORITY(uParam0, 7);
			}
			else
			{
				UI::SET_BLIP_PRIORITY(uParam0, 5);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 28))
					{
						UI::SET_BLIP_ALPHA(uParam0, 0);
					}
					else
					{
						if (Global_31146[iParam1].f_17 == 0)
						{
							UI::SET_BLIP_COLOUR(uParam0, 42);
						}
						if (Global_31146[iParam1].f_17 == 1)
						{
							UI::SET_BLIP_COLOUR(uParam0, 43);
						}
						if (Global_31146[iParam1].f_17 == 2)
						{
							UI::SET_BLIP_COLOUR(uParam0, 44);
						}
						if (Global_31146[iParam1].f_16 == 8)
						{
							UI::SET_BLIP_AS_SHORT_RANGE(uParam0, GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 5));
							UI::SET_BLIP_PRIORITY(uParam0, 3);
							UI::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
							UI::_0x54318C915D27E4CE(uParam0, 1);
							UI::SET_BLIP_SCALE(uParam0, 0.77f);
						}
						else
						{
							UI::SET_BLIP_SCALE(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 28))
					{
						UI::SET_BLIP_ALPHA(uParam0, 128);
					}
					if (Global_31146[iParam1].f_16 == 8)
					{
						UI::_0x54318C915D27E4CE(uParam0, 0);
					}
				}
			}
			break;
		
		default:
			UI::SET_BLIP_PRIORITY(uParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				UI::SET_BLIP_COORDS(Global_31146[iParam1].f_19, Global_31146[iParam1][iVar0]);
				break;
			}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 17))
	{
		UI::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 1);
	}
	else
	{
		UI::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 20))
	{
		UI::_SET_BLIP_CHECKED(uParam0, 1);
	}
	else
	{
		UI::_SET_BLIP_CHECKED(uParam0, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31146[iParam1].f_11, 29))
	{
		UI::SET_BLIP_COLOUR(uParam0, 39);
	}
}

int func_21(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	uVar1 = GAMEPLAY::GET_BITS_IN_RANGE(Global_31146[iVar0].f_11, 21, 26);
	return uVar1;
}

void func_23()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_93782[iParam0].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iParam0], 0))
	{
		if (Global_93782[iParam0].f_9 != func_28())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_25(6))
		{
			bVar0 = false;
		}
	}
	if (func_21(14))
	{
		bVar0 = false;
	}
	func_8(Global_93782[iParam0].f_7, bVar0, 0);
}

bool func_25(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iParam0], 0);
}

int func_26(int iParam0)
{
	if (Global_98796.f_343 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_27(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93782[iParam0].f_3, &sVar1);
		if (iVar9 != 0 && Global_98796.f_343 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_28()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_29(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 8))
	{
		return 0;
	}
	if (Global_31146[iVar0].f_17 == func_1())
	{
		return 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 10))
	{
		return 0;
	}
	if (Global_31146[iVar0].f_18 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, Global_41431);
}

int func_31(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_33()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iLocal_68 && GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 13))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if (iLocal_69 && ((GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 7) || GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 11)) || GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 16)))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if (iLocal_70 && GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 14))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if (iLocal_65 && ((GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 10) || GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 8)) || GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 19)))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if (bLocal_66)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if (iLocal_72 && GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 27))
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	if ((iLocal_73 && (GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 1) || GAMEPLAY::IS_BIT_SET(Global_31146[iParam0].f_11, 2))) || Global_31146[iParam0].f_16 == 1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iParam0].f_11), 18);
		return 1;
	}
	return 0;
}

int func_35()
{
	iVar0 = 0;
	if (func_41())
	{
		if (!iLocal_67)
		{
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_69)
		{
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_70)
		{
			iLocal_70 = 1;
			iVar0 = 1;
		}
	}
	bLocal_66 = false;
	if (Global_37197 != iLocal_71)
	{
		iLocal_71 = Global_37197;
		if (!bLocal_66)
		{
			bLocal_66 = true;
			iVar0 = 1;
		}
	}
	if (func_36())
	{
		if (!iLocal_73)
		{
			iLocal_73 = 1;
			iVar0 = 1;
		}
	}
	iLocal_64 = func_1();
	if (iLocal_64 != iLocal_63)
	{
		iLocal_63 = iLocal_64;
		iLocal_65 = 1;
		iVar0 = 1;
	}
	iLocal_46 = bLocal_45;
	if (func_10(130))
	{
		bLocal_45 = true;
	}
	if (func_10(131))
	{
		bLocal_45 = false;
	}
	if (bLocal_45 != iLocal_46)
	{
		if (!iLocal_72)
		{
			iVar0 = 1;
		}
		iLocal_72 = 1;
	}
	return iVar0;
}

int func_36()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
	{
		return 0;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_51 != iVar0)
	{
		iLocal_51 = iVar0;
		if (iVar0 == 0 || func_37(iVar0))
		{
			bLocal_50 = true;
		}
		else
		{
			bLocal_50 = false;
		}
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38()
{
	if (iLocal_52 != func_21(0))
	{
		iLocal_52 = func_21(0);
		return 1;
	}
	return 0;
}

bool func_39()
{
	bVar0 = Global_37198;
	Global_37198 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_40()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_49)
	{
		iLocal_49 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return 1;
	}
	return 0;
}

int func_41()
{
	if (Global_41431 != 15)
	{
		return 0;
	}
	if (TIME::GET_CLOCK_HOURS() != iLocal_48)
	{
		iLocal_48 = TIME::GET_CLOCK_HOURS();
		return 1;
	}
	return 0;
}

void func_42()
{
	iLocal_65 = 0;
	bLocal_66 = false;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
}

void func_43()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, 1, 0);
		func_8(113, 1, 0);
		func_8(114, 1, 0);
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_45()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, 0);
		func_8(157, 1, 0);
		func_8(161, 1, 0);
		func_8(160, 1, 0);
		func_8(158, 1, 0);
		func_12(158);
		func_8(159, 1, 0);
		func_12(159);
	}
}

void func_46(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 2);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 2);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 18);
}

void func_47(int iParam0, char* sParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_31146[iVar0].f_20), sParam1, 8);
	if (UI::DOES_BLIP_EXIST(Global_31146[iVar0].f_19))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(Global_31146[iVar0].f_19, sParam1);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_49(iParam0, 0);
			break;
		
		case 8:
			return func_49(iParam0, 0);
			break;
		
		case 9:
			return func_49(iParam0, 0);
			break;
		
		case 10:
			return func_49(iParam0, 0);
			break;
		
		case 11:
			return func_49(iParam0, 0);
			break;
		
		case 12:
			return func_49(iParam0, 0);
			break;
		
		case 13:
			return func_49(iParam0, 0);
			break;
		
		case 14:
			return func_49(iParam0, 0);
			break;
		
		case 15:
			return func_49(iParam0, 0);
			break;
		
		case 16:
			return func_49(iParam0, 0);
			break;
		
		case 17:
			return func_49(iParam0, 0);
			break;
		
		case 18:
			return func_49(iParam0, 0);
			break;
		
		case 19:
			return func_49(iParam0, 0);
			break;
		
		case 20:
			return func_49(iParam0, 0);
			break;
		
		case 21:
			return func_49(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_49(iParam0, 0);
			break;
		
		case 40:
			return func_49(iParam0, 0);
			break;
		
		case 41:
			return func_49(iParam0, 0);
			break;
		
		case 42:
			return func_49(iParam0, 0);
			break;
		
		case 43:
			return func_49(iParam0, 0);
			break;
		
		case 44:
			return func_49(iParam0, 0);
			break;
		
		case 45:
			return func_49(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_51()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

