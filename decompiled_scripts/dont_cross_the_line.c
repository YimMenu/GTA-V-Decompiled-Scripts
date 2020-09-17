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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0.5f;
	iLocal_237 = -1;
	iLocal_239 = -1;
	ScriptParam_0 = 161;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_223(ScriptParam_0);
	}
	func_222(1);
	while (true)
	{
		func_221();
		if (func_211())
		{
			func_210();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_1(&uLocal_394);
		}
		else
		{
			func_210();
		}
	}
}

void func_1(var uParam0)
{
	if (Local_307 < 11)
	{
		func_189(uParam0);
	}
	switch (*uParam0)
	{
		case 0:
			if (Local_307 > 3 && !Local_307 == 9)
			{
				func_188(uParam0, 11);
				return;
			}
			func_186(uParam0);
			break;
		
		case 1:
			func_183(uParam0);
			break;
		
		case 2:
			func_179(uParam0);
			break;
		
		case 3:
			func_175(uParam0);
			break;
		
		case 4:
			func_173(uParam0);
			break;
		
		case 5:
			func_171(uParam0);
			break;
		
		case 6:
			func_167(uParam0);
			break;
		
		case 7:
			func_130(uParam0);
			break;
		
		case 8:
			func_86(uParam0);
			break;
		
		case 9:
			func_62(uParam0);
			break;
		
		case 10:
			func_53(uParam0);
			break;
		
		case 11:
			func_29(uParam0);
			break;
	}
	switch (Local_307)
	{
		case 0:
			func_28(uParam0);
			break;
		
		case 1:
			func_27(uParam0);
			break;
		
		case 2:
			func_26(uParam0);
			break;
		
		case 3:
			func_25(uParam0);
			break;
		
		case 4:
			func_23(uParam0);
			break;
		
		case 5:
			func_22(uParam0);
			break;
		
		case 6:
			func_18(uParam0);
			break;
		
		case 7:
			func_17(uParam0);
			break;
		
		case 8:
			func_13(uParam0);
			break;
		
		case 9:
			func_4(uParam0);
			break;
		
		case 10:
			break;
		
		case 11:
			break;
	}
	func_2(uParam0);
}

void func_2(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 5))
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
	MISC::CLEAR_BIT(&(uParam0->f_2), 5);
	if (((*uParam0 > 1 && *uParam0 < 11) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34)) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_34, 255, 255, 255, 255, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_2, 17))
	{
		func_3(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 17);
	}
}

void func_3(var uParam0)
{
	GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0);
}

void func_4(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		bVar0 = true;
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) && Local_385[iVar4] > -1)
			{
				if (!MISC::IS_BIT_SET(Local_385[iVar4].f_1, 6))
				{
					bVar2 = true;
				}
				if (MISC::IS_BIT_SET(Local_385[iVar4].f_1, 2))
				{
					bVar1 = true;
				}
				if (!MISC::IS_BIT_SET(Local_385[iVar4].f_1, 4))
				{
					bVar0 = false;
				}
				if (MISC::IS_BIT_SET(Local_385[iVar4].f_1, 3))
				{
					iVar3++;
				}
			}
			else if (Local_307.f_7[iVar4] != 0)
			{
				Local_307.f_7[iVar4] = 0;
			}
			iVar4++;
		}
		if ((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_28), 0, 0);
		}
		else
		{
			if ((bVar2 || bVar1) || func_11(uParam0))
			{
				func_9(&(uParam0->f_28));
			}
			if (((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1)
			{
				if (bVar0)
				{
					func_7(uParam0, 10);
					return;
				}
				else if (!bVar1)
				{
					Local_307.f_77 = 0;
					func_7(uParam0, 4);
					Local_307.f_1 = -1;
					return;
				}
			}
		}
		if (!func_12(&(uParam0->f_26)) && !bVar2)
		{
			func_10(&(uParam0->f_26), 0, 0);
		}
		else
		{
			if (bVar2)
			{
				func_9(&(uParam0->f_26));
				return;
			}
			if (func_8(&(uParam0->f_26), 10000, 0))
			{
				if (iVar3 > 1)
				{
					func_6(0);
					func_5(0, 0);
					Local_307.f_77 = 0;
					func_7(uParam0, 4);
				}
				else
				{
					func_7(uParam0, 10);
				}
			}
		}
	}
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_3, 0))
		{
			MISC::SET_BIT(&Global_1661999, 7);
		}
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1661999, 4))
			{
				MISC::CLEAR_BIT(&Global_1661999, 4);
			}
			if (MISC::IS_BIT_SET(Global_1661999, 0))
			{
				MISC::SET_BIT(&Global_1661999, 1);
				MISC::CLEAR_BIT(&Global_1661999, 0);
			}
		}
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 0);
	}
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 1);
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	Local_307 = iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 6) && (*uParam0 != 9 || *uParam0 != 3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_12(&(uParam0->f_22)))
		{
			func_10(&(uParam0->f_22), 0, 0);
			if (Local_307.f_1 != -1)
			{
				Local_307.f_7[Local_307.f_1]++;
			}
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					Local_307.f_7[iVar0] = 0;
				}
				iVar0++;
			}
		}
		else if (func_8(&(uParam0->f_22), 3000, 0))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
				{
					if (!MISC::IS_BIT_SET(Local_385[iVar0].f_1, 2))
					{
						bVar1 = false;
					}
					else
					{
						iVar0++;
					}
					if (bVar1)
					{
						func_14(uParam0);
						func_5(1, 0);
						func_7(uParam0, 9);
					}
				}

void func_14(var uParam0)
{
	func_9(&(uParam0->f_12));
	func_9(&(uParam0->f_16));
	func_9(&(uParam0->f_18));
	func_9(&(uParam0->f_20));
	func_9(&(uParam0->f_22));
	func_9(&(uParam0->f_26));
	func_9(&(uParam0->f_28));
	func_9(&(uParam0->f_30));
	func_9(&(uParam0->f_24));
	MISC::CLEAR_BIT(&(uParam0->f_2), 0);
	MISC::CLEAR_BIT(&(uParam0->f_2), 1);
	MISC::CLEAR_BIT(&(uParam0->f_2), 2);
	MISC::CLEAR_BIT(&(uParam0->f_2), 3);
	MISC::CLEAR_BIT(&(uParam0->f_2), 9);
	MISC::CLEAR_BIT(&(uParam0->f_2), 8);
	MISC::CLEAR_BIT(&(uParam0->f_2), 7);
	MISC::CLEAR_BIT(&(uParam0->f_2), 10);
	MISC::CLEAR_BIT(&(uParam0->f_2), 12);
	MISC::CLEAR_BIT(&(uParam0->f_2), 6);
	MISC::CLEAR_BIT(&(uParam0->f_2), 11);
	MISC::CLEAR_BIT(&(uParam0->f_2), 13);
	MISC::CLEAR_BIT(&(uParam0->f_2), 15);
	MISC::CLEAR_BIT(&(uParam0->f_2), 16);
	MISC::CLEAR_BIT(&(uParam0->f_2), 18);
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (iVar0 < 4)
		{
			uParam0->f_35[iVar0].f_3 = 0;
			uParam0->f_35[iVar0].f_18 = 1f;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			func_16(&(uParam0->f_35), 0, iVar0);
		}
		else
		{
			func_15(&(uParam0->f_35[iVar0].f_19));
			func_16(&(uParam0->f_35), 3, iVar0);
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		iVar0++;
	}
}

void func_16(var uParam0, int iParam1, int iParam2)
{
	(*uParam0)[iParam2] = iParam1;
}

void func_17(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = 4;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
			{
				if (uParam0->f_35[iVar0] == 3)
				{
					iVar1 = (iVar1 - 1);
				}
				else if (uParam0->f_35[iVar0] == 2)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (!func_12(&(uParam0->f_24)))
			{
				func_10(&(uParam0->f_24), 0, 0);
			}
			else if (func_8(&(uParam0->f_24), 1000, 0))
			{
				func_7(uParam0, 8);
			}
			else if (func_8(&(uParam0->f_24), 500, 0))
			{
				if (iVar2 > -1)
				{
					Local_307.f_1 = iVar2;
				}
			}
		}
	}
}

void func_18(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_12(&(uParam0->f_18)))
		{
			if (func_8(&(uParam0->f_18), 2000, 0) && !MISC::IS_BIT_SET(iLocal_238, 1))
			{
				func_19(NETWORK::GET_NETWORK_TIME_ACCURATE() + 1250);
				MISC::SET_BIT(&iLocal_238, 1);
			}
			if (func_8(&(uParam0->f_18), 3000, 0))
			{
				func_7(uParam0, 7);
				MISC::CLEAR_BIT(&iLocal_238, 1);
			}
		}
	}
}

void func_19(var uParam0)
{
	Var0.x = -1881515167;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = uParam0;
	iVar3 = func_20(1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_20(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_21(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
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

void func_22(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		if (iVar0 == 1)
		{
			func_7(uParam0, 10);
			return;
		}
		if (func_12(&(uParam0->f_16)))
		{
			if (func_8(&(uParam0->f_16), 2000, 0))
			{
				func_7(uParam0, 6);
			}
		}
	}
}

void func_23(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_12(&(uParam0->f_32)))
		{
			func_10(&(uParam0->f_32), 0, 0);
		}
		else if (func_8(&(uParam0->f_32), 1000, 0))
		{
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
			if (iVar0 == 1)
			{
				func_7(uParam0, 10);
				return;
			}
			bVar4 = true;
			switch (Local_307.f_77)
			{
				case 0:
					iVar1 = 0;
					while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_385[iVar1] > -1)
						{
							Local_307.f_2[iVar1] = Local_385[iVar1];
						}
						else
						{
							Local_307.f_2[iVar1] = -1;
						}
						iVar1++;
					}
					Local_307.f_77 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
						{
							if (Local_307.f_2[iVar1] == -1)
							{
								Local_307.f_2[iVar1] = func_24();
							}
						}
						iVar1++;
					}
					Local_307.f_77 = 2;
					break;
				
				case 2:
					iVar1 = 0;
					while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
						{
							iVar2 = 0;
							while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
							{
								if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
								{
									if (iVar2 != iVar1 && (Local_307.f_2[iVar1] == Local_307.f_2[iVar2] || Local_307.f_2[iVar1] == -1))
									{
										Local_307.f_2[iVar1] = -1;
										Local_307.f_77 = 1;
										return;
									}
								}
								iVar2++;
							}
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
						{
							if (Local_307.f_2[iVar1] != -1)
							{
								iVar3 = func_24();
								if (iVar3 != -1 && iVar3 < Local_307.f_2[iVar1])
								{
									Local_307.f_2[iVar1] = iVar3;
									return;
								}
							}
						}
						iVar1++;
					}
					Local_307.f_77 = 3;
					break;
				
				case 3:
					iVar1 = 0;
					while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
						{
							if (!MISC::IS_BIT_SET(Local_385[iVar1].f_1, 5))
							{
								bVar4 = false;
							}
						}
						iVar1++;
					}
					if (bVar4)
					{
						func_9(&(uParam0->f_12));
						func_9(&(uParam0->f_32));
						func_7(uParam0, 5);
					}
					break;
				}
			}
	}
}

int func_24()
{
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (Local_307.f_2[iVar1] == iVar0)
			{
				iVar2 = 1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 1;
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && Local_385[iVar2] > -1)
			{
				if (!MISC::IS_BIT_SET(Local_385[iVar2].f_1, 6))
				{
					bVar1 = true;
				}
				if (MISC::IS_BIT_SET(Local_385[iVar2].f_1, 2))
				{
					iVar0 = 0;
				}
			}
			iVar2++;
		}
		if ((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_14), 0, 0);
		}
		else
		{
			if (bVar1 || func_11(uParam0))
			{
				func_9(&(uParam0->f_14));
				return;
			}
			iVar3 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
			iVar4 = 30000;
			if (iVar3 == 1 && !func_11(uParam0))
			{
				iVar4 = (iVar4 / 2);
			}
			if ((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), iVar4, 0))
			{
				if (!func_12(&(uParam0->f_12)))
				{
					func_10(&(uParam0->f_12), 0, 0);
				}
				else if (func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0))
				{
					func_9(&(uParam0->f_12));
					if (iVar3 == 1)
					{
						func_7(uParam0, 10);
						return;
					}
					Local_307.f_77 = 0;
					func_7(uParam0, 4);
					func_6(0);
					func_5(0, 0);
				}
			}
		}
	}
}

void func_26(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_385[iVar1] > -1)
			{
				if (!MISC::IS_BIT_SET(Local_385[iVar1].f_1, 1))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 3);
				}
			}

void func_27(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_385[iVar1] > -1)
			{
				if (!MISC::IS_BIT_SET(Local_385[iVar1].f_1, 0))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 2);
				}
			}

void func_28(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (Local_385[iVar0] == -1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_7(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	AUDIO::STOP_AUDIO_SCENE("DLC_Exec_Arc_Mac_Playing_Game_Scene");
	AUDIO::STOP_SOUND(uParam0->f_3);
	AUDIO::STOP_SOUND(uParam0->f_7);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_35[NETWORK::PARTICIPANT_ID_TO_INT()].f_5);
		}
	}
	if (AUDIO::IS_STREAM_PLAYING())
	{
		AUDIO::STOP_STREAM();
	}
	func_51();
	Global_4456448.f_227352 = 0;
	func_50();
	Global_1590535[PLAYER::PLAYER_ID()].f_750 = 0;
	func_49(0, 1, 1, 0);
	func_48();
	func_47();
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_34));
	}
	if (func_45() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_32(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_31(1);
	func_188(uParam0, 12);
	func_222(0);
	func_30();
}

void func_30()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_31(bool bParam0)
{
	Global_1661999.f_1 = 0;
	Global_1661999 = 0;
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_3 = 0;
	}
	if (bParam0)
	{
		func_10(&(Global_1661999.f_2), 0, 0);
	}
	else
	{
		func_9(&(Global_1661999.f_2));
	}
}

void func_32(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_44())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_45())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_41(PLAYER::PLAYER_ID(), 0) && !func_40()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_37(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_36(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_35();
					func_34();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_36(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
						}
					}
					if (func_33(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_33(int iParam0)
{
	return iParam0 == 17;
}

void func_34()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_35()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_36(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_39();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_41(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_38(-2008016205, iParam0);
	}
}

void func_38(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_39()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_40()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_41(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_42(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_42(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_43()
{
	return Global_1312745;
}

int func_44()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_46() == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	return Global_1312467.f_18;
}

void func_47()
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("LineArcadeMinigame");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM");
	HUD::CLEAR_ADDITIONAL_TEXT(3, 0);
	MISC::CLEAR_BIT(&Global_1661999, 6);
	MISC::CLEAR_BIT(&Global_1661999, 7);
}

void func_48()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

void func_51()
{
	if (!Global_1312575)
	{
		return;
	}
	func_52();
}

void func_52()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_53(var uParam0)
{
	func_60(uParam0);
	func_56(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_2, 16))
	{
		func_55(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 16);
	}
	if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_7))
	{
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	if (!func_12(&(uParam0->f_30)))
	{
		func_10(&(uParam0->f_30), 0, 0);
	}
	else if (func_8(&(uParam0->f_30), 5000, 0))
	{
		func_188(uParam0, 11);
		func_54(0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		func_188(uParam0, 11);
		func_54(0);
	}
}

void func_54(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 5);
	}
}

void func_55(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_LOBBY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_56(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 12))
	{
		func_57(uParam0, "DCTL_GAMEOVER", 0, 1);
		MISC::SET_BIT(&(uParam0->f_2), 12);
	}
}

void func_57(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		func_58("");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_58(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_59(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_60(var uParam0)
{
	iVar0 = 255;
	func_61(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
	GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0);
}

void func_61(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_62(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_2, 15))
	{
		func_85(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_80(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3)) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
		{
			func_79(3);
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3)) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if (!MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 4))
		{
			HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_REPLAYHELP", 0);
			MISC::SET_BIT(&(uParam0->f_2), 5);
		}
	}
	func_64(uParam0, 1);
	func_63(uParam0);
	if (Local_307 == 10)
	{
		AUDIO::STOP_SOUND(uParam0->f_3);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		MISC::SET_BIT(&(uParam0->f_2), 4);
		func_188(uParam0, 10);
		func_54(1);
		func_6(0);
		func_5(0, 0);
	}
	else if (Local_307 == 4)
	{
		if (MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4) || MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 2))
		{
			func_188(uParam0, 11);
			return;
		}
		MISC::CLEAR_BIT(&iLocal_238, 0);
		func_14(uParam0);
		func_6(0);
		func_5(0, 0);
		MISC::SET_BIT(&(uParam0->f_2), 4);
		func_188(uParam0, 4);
	}
}

void func_63(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			if (MISC::IS_BIT_SET(Local_385[iVar0].f_1, 3) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				MISC::SET_BIT(&(uParam0->f_35[iVar0].f_3), 2);
				if (MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 3))
				{
					MISC::CLEAR_BIT(&(uParam0->f_35[iVar0].f_3), 3);
				}
			}
			else if (MISC::IS_BIT_SET(Local_385[iVar0].f_1, 4) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				MISC::SET_BIT(&(uParam0->f_35[iVar0].f_3), 3);
				if (MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 2))
				{
					MISC::CLEAR_BIT(&(uParam0->f_35[iVar0].f_3), 2);
				}
			}
		}
		iVar0++;
	}
}

void func_64(var uParam0, bool bParam1)
{
	if (Local_307.f_2[iLocal_237] != Local_385[iLocal_237])
	{
		Local_385[iLocal_237] = Local_307.f_2[iLocal_237];
	}
	if (!MISC::IS_BIT_SET(iLocal_238, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (Local_385[iVar0] > -1 && (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_307.f_12[iVar0])) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_242[iVar0]))))
				{
					MISC::SET_BIT(&iLocal_238, 2);
				}
			}
			else if (!(MISC::IS_STRING_NULL_OR_EMPTY(&(Local_307.f_12[iVar0])) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_242[iVar0]))))
			{
				MISC::SET_BIT(&iLocal_238, 2);
			}
			iVar0++;
		}
	}
	if (MISC::IS_BIT_SET(iLocal_238, 2))
	{
		func_70();
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if ((Local_385[iVar0] == -1 || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_307.f_12[iVar0]))) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_242[iVar0])))
				{
					iVar1 = 0;
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_307.f_12[iVar0])) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_242[iVar0])))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (bParam1)
			{
				func_65(uParam0, "DCTL_REPLAY", 0);
			}
			else
			{
				func_65(uParam0, "DCTL_INSERT", 0);
			}
			MISC::CLEAR_BIT(&iLocal_238, 2);
		}
	}
}

void func_65(var uParam0, char* sParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "INIT_LOBBY");
		func_59(sParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		func_66(0);
		func_66(1);
		func_66(2);
		func_66(3);
		if (iLocal_237 > -1 && Local_385[iLocal_237] > -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_385[iLocal_237]);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_66(int iParam0)
{
	Var0 = { func_69(iParam0) };
	Var16 = { func_67(iParam0) };
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&Var16);
	func_58(&Var0);
}

struct<16> func_67(int iParam0)
{
	StringCopy(&Var0, func_68(), 64);
	iVar16 = 0;
	while (iVar16 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar16)) && Local_385[iVar16] == iParam0)
		{
			Var0 = { Local_242[iVar16] };
		}
		iVar16++;
	}
	return Var0;
}

var func_68()
{
	return uVar0;
}

struct<16> func_69(int iParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = 0;
	while (iVar16 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar16)) && Local_385[iVar16] == iParam0)
		{
			Var0 = { Local_307.f_12[iVar16] };
		}
		iVar16++;
	}
	return Var0;
}

void func_70()
{
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (iVar0 < 4)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				StringCopy(&(Local_307.f_12[iVar0]), "", 64);
			}
			StringCopy(&(Local_242[iVar0]), func_68(), 64);
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				StringCopy(&(Local_307.f_12[iVar0]), PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))), 64);
			}
			iVar1 = func_71(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (iVar1 != 0)
			{
				StringCopy(&(Local_242[iVar0]), PED::GET_PEDHEADSHOT_TXD_STRING(iVar1), 64);
			}
		}
		iVar0++;
	}
}

int func_71(int iParam0)
{
	iVar0 = func_74(iParam0);
	if (iVar0 == -1)
	{
		func_72(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_72(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0, 1))
	{
		return;
	}
	if (func_74(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_73(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_73(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	if (!func_21(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_75(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_76(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_76(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_77();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_77()
{
	return -1;
}

int func_78()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (MISC::IS_BIT_SET(Local_385[iVar1].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_79(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_385[iLocal_237].f_1), 2);
	MISC::CLEAR_BIT(&(Local_385[iLocal_237].f_1), 3);
	MISC::CLEAR_BIT(&(Local_385[iLocal_237].f_1), 4);
	MISC::SET_BIT(&(Local_385[iLocal_237].f_1), iParam0);
}

void func_80(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 16))
	{
		func_65(uParam0, "DCTL_REPLAY", 0);
		MISC::SET_BIT(&(uParam0->f_2), 16);
	}
	func_83(uParam0);
	func_81(uParam0);
}

void func_81(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_MICS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_82(0));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_82(1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_82(2));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_82(3));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_82(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] == iParam0)
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(iVar1))
			{
				return 0;
			}
			if (NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(iVar1))
			{
				return 1;
			}
			if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar1))
			{
				return 3;
			}
			return 2;
		}
		iVar0++;
	}
	return 0;
}

void func_83(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "UPDATE_LOBBY");
		func_84(0);
		func_84(1);
		func_84(2);
		func_84(3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_84(int iParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_385)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_385[iVar1] == iParam0)
		{
			bVar0 = true;
			if (MISC::IS_BIT_SET(Local_385[iVar1].f_1, 3))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			}
			else if (MISC::IS_BIT_SET(Local_385[iVar1].f_1, 4))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	}
}

void func_85(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_HUD");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_86(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_2, 15))
	{
		func_85(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_127(uParam0);
	if (Local_307 >= 9)
	{
		func_5(1, 0);
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		}
		iVar0 = func_126(3790, -1, 0);
		iVar0++;
		func_125(3790, iVar0, -1, 1, 0);
		if (Local_307.f_1 == iLocal_237)
		{
			iVar1 = func_126(3789, -1, 0);
			iVar1++;
			func_125(3789, iVar1, -1, 1, 0);
			if (iVar1 >= Global_262145.f_16308)
			{
				func_124(7551, 1, -1, 1);
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == 1885233650)
				{
					func_87(func_121(-621355603, 3), 1, 1, 0, 0, -1);
				}
				else
				{
					func_87(func_121(-46521805, 4), 1, 1, 0, 0, -1);
				}
			}
		}
		func_70();
		func_188(uParam0, 9);
	}
	if (!MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 2))
	{
		func_79(2);
	}
}

void func_87(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_120(1238, iParam5);
			}
		}
		else
		{
			func_120(1238, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_119(iParam0, iParam5))
		{
			func_116(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_114(iParam0) == 0)
			{
				func_108(12, func_113(iParam0, 3), func_112(iParam0, 3), func_111(iParam0, 3), func_110(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_107(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_102(iParam0, 1, iParam5);
		}
		if (Global_1377170.f_1043 == 0)
		{
			Global_1377170.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_119(iParam0, iParam5))
		{
			func_116(iParam0, 0, iParam5);
			func_98(1238, -1, iParam5);
		}
		if (iParam0 < 129)
		{
			if (func_114(iParam0) == 1)
			{
				func_107(iParam0, 0);
			}
		}
		if (func_97(iParam0, iParam5))
		{
			func_88(iParam0, 0, iParam5);
		}
	}
}

void func_88(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_97(iParam0, iParam2))
		{
			func_89(iParam0, 1, iParam2);
		}
	}
	else if (func_97(iParam0, iParam2))
	{
		func_89(iParam0, 0, iParam2);
	}
}

void func_89(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_96(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_95(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_95(iVar1));
		}
		if (!func_94())
		{
			iVar2 = func_90(iParam0);
			if (iVar2 != 11511)
			{
				func_125(iVar2, iVar0, iParam2, 1, 0);
			}
		}
	}
}

int func_90(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8499;
				break;
			
			case 40:
				return 8502;
				break;
			
			case 41:
				return 8505;
				break;
			
			case 42:
				return 8508;
				break;
			
			case 43:
				return 8902;
				break;
			
			case 44:
				return 8905;
				break;
			
			case 45:
				return 8908;
				break;
			
			case 46:
				break;
		}
		return 11511;
	}
	if (func_92() == 2 && func_91() == 2)
	{
		return 11511;
	}
	return 11511;
}

int func_91()
{
	return Global_30769;
}

int func_92()
{
	return Global_30768;
}

int func_93(int iParam0)
{
	return (iParam0 / 32);
}

bool func_94()
{
	return Global_1312854;
}

int func_95(int iParam0)
{
	return (iParam0 % 32);
}

int func_96(int iParam0, int iParam1)
{
	iVar0 = func_90(iParam0);
	if (iVar0 == 11511)
	{
		if (func_92() == 2 && func_91() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	uVar1 = func_126(iVar0, iParam1, 0);
	return uVar1;
}

bool func_97(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_96(iParam0, iParam1);
	iVar1 = func_95(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(iVar0, iVar1);
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_126(iParam0, func_101(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_100(iParam0))
	{
		func_125(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam2, 1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_101(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_101(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_101(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_101(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_101(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_101(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_101(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_101(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_101(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_101(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_101(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_101(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_101(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_101(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_101(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_101(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_101(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_101(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_101(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_101(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_101(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_101(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_101(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_101(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_101(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_101(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_101(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_101(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_101(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_101(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_101(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_101(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_101(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_101(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_101(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_101(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_101(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_101(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_101(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_101(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_101(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_101(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_101(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_101(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_101(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_101(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_101(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_101(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_101(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_101(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_101(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_101(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_101(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_101(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_101(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_101(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_101(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_101(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_101(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_101(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_101(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_101(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_101(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_101(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_101(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_101(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_101(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_101(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_101(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_101(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_101(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_101(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_101(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_101(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_101(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_101(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_101(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_101(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_101(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_101(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_101(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_101(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_101(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_101(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_101(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_101(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_101(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_101(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_101(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_101(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_101(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_101(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_101(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_101(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_101(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_101(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_101(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_101(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_101(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_101(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_101(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_101(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_101(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_101(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_101(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_101(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_100(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_101(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_106(iParam0))
		{
			func_103(iParam0, 1, iParam2);
		}
	}
	else if (func_106(iParam0))
	{
		func_103(iParam0, 0, iParam2);
	}
}

void func_103(var uParam0, bool bParam1, int iParam2)
{
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_95(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_95(iVar1));
		}
		func_125(func_104(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_104(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1043;
				break;
			
			case 1:
				return 1044;
				break;
			
			case 2:
				return 1045;
				break;
			
			case 3:
				return 1046;
				break;
			
			case 4:
				return 1047;
				break;
			
			case 5:
				return 1491;
				break;
			
			case 6:
				return 1492;
				break;
			
			case 7:
				return 1493;
				break;
			
			case 8:
				return 1494;
				break;
			
			case 9:
				return 1943;
				break;
			
			case 10:
				return 1944;
				break;
			
			case 11:
				return 1945;
				break;
			
			case 12:
				return 1946;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8903;
				break;
			
			case 44:
				return 8906;
				break;
			
			case 45:
				return 8909;
				break;
		}
	}
	return 11511;
}

var func_105(var uParam0)
{
	uVar0 = func_126(func_104(uParam0), -1, 0);
	return uVar0;
}

bool func_106(var uParam0)
{
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(iVar0, func_95(iVar1));
}

void func_107(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2547060.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2547060.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
	}
}

void func_108(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	iVar0 = func_109(&Global_1385029);
	Global_1385029[iVar0] = iParam0;
	StringCopy(&(Global_1385029[iVar0].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0].f_49), sParam2, 64);
	Global_1385029[iVar0].f_97 = iParam5;
	Global_1385029[iVar0].f_104 = iParam9;
	Global_1385029[iVar0].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0].f_98), sParam8, 24);
	}
}

int func_109(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_110(int iParam0, int iParam1)
{
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_111(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_112(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_113(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_114(int iParam0)
{
	iVar0 = func_115(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_95(iVar1));
}

var func_115(int iParam0)
{
	uVar0 = Global_2547060.f_1032[func_93(iParam0)];
	return uVar0;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	if (func_118(iParam0) == 11511)
	{
		return;
	}
	iVar0 = func_117(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_95(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_95(iVar1));
		}
		func_125(func_118(iParam0), iVar0, iParam2, 1, 0);
	}
}

var func_117(var uParam0, int iParam1)
{
	uVar0 = func_126(func_118(uParam0), iParam1, 0);
	return uVar0;
}

int func_118(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

bool func_119(int iParam0, int iParam1)
{
	if (func_118(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_117(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_95(iVar1));
}

void func_120(int iParam0, int iParam1)
{
	iVar0 = func_126(iParam0, func_101(iParam1), 0);
	iVar0++;
	if (!func_100(iParam0))
	{
		func_125(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam1, 1);
	}
}

int func_121(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (func_123(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_122(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILES::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILES::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_122(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
		
		case -503061408:
			iVar0 = 1126;
			break;
		
		case -511607931:
			iVar0 = 1127;
			break;
		
		case -1252323352:
			iVar0 = 1128;
			break;
		
		case -1836767787:
			iVar0 = 1129;
			break;
		
		case 2104165007:
			iVar0 = 1130;
			break;
		
		case -1020450678:
			iVar0 = 1131;
			break;
		
		case 361610929:
			iVar0 = 1132;
			break;
		
		case -1060893559:
			iVar0 = 1133;
			break;
		
		case -1918931165:
			iVar0 = 1134;
			break;
		
		case 516389880:
			iVar0 = 1135;
			break;
		
		case 2047957618:
			iVar0 = 1136;
			break;
		
		case -1461327573:
			iVar0 = 1137;
			break;
		
		case -1710764657:
			iVar0 = 1138;
			break;
		
		case -815856869:
			iVar0 = 1139;
			break;
		
		case 1293748604:
			iVar0 = 1140;
			break;
		
		case -906850579:
			iVar0 = 1141;
			break;
		
		case -504902857:
			iVar0 = 1142;
			break;
		
		case -1891206996:
			iVar0 = 1143;
			break;
		
		case -6720974:
			iVar0 = 1144;
			break;
		
		case -2069848364:
			iVar0 = 1145;
			break;
		
		case 778786183:
			iVar0 = 1146;
			break;
		
		case -1337421708:
			iVar0 = 1147;
			break;
		
		case -1890546602:
			iVar0 = 1148;
			break;
		
		case 218123795:
			iVar0 = 1149;
			break;
		
		case -636242520:
			iVar0 = 1150;
			break;
		
		case -1180398682:
			iVar0 = 1151;
			break;
		
		case 1694157857:
			iVar0 = 1152;
			break;
		
		case -1696611500:
			iVar0 = 1153;
			break;
		
		case 1988941728:
			iVar0 = 1154;
			break;
		
		case -1693251432:
			iVar0 = 1155;
			break;
		
		case -1235260480:
			iVar0 = 1156;
			break;
		
		case -2013104967:
			iVar0 = 1157;
			break;
		
		case -1763320016:
			iVar0 = 1158;
			break;
		
		case 1141954591:
			iVar0 = 1159;
			break;
		
		case 24176579:
			iVar0 = 1160;
			break;
		
		case 501566279:
			iVar0 = 1161;
			break;
		
		case -909438267:
			iVar0 = 1162;
			break;
		
		case -1286663634:
			iVar0 = 1163;
			break;
		
		case -1840235222:
			iVar0 = 1164;
			break;
		
		case -888873465:
			iVar0 = 1165;
			break;
		
		case -1426756926:
			iVar0 = 1166;
			break;
		
		case 2130054214:
			iVar0 = 1167;
			break;
		
		case 836015556:
			iVar0 = 1168;
			break;
		
		case -502214028:
			iVar0 = 1169;
			break;
		
		case -1838365509:
			iVar0 = 1170;
			break;
		
		case -547605203:
			iVar0 = 1171;
			break;
		
		case 1848216712:
			iVar0 = 1172;
			break;
		
		case 223413431:
			iVar0 = 1173;
			break;
		
		case -432155816:
			iVar0 = 1174;
			break;
		
		case -104345338:
			iVar0 = 1175;
			break;
		
		case 1184426490:
			iVar0 = 1176;
			break;
		
		case 47527010:
			iVar0 = 1177;
			break;
		
		case -1576036346:
			iVar0 = 1178;
			break;
		
		case -809444617:
			iVar0 = 1179;
			break;
		
		case -1643354138:
			iVar0 = 1180;
			break;
		
		case -73524046:
			iVar0 = 1181;
			break;
		
		case -1843193891:
			iVar0 = 1182;
			break;
		
		case -1224204417:
			iVar0 = 1183;
			break;
		
		case 921109652:
			iVar0 = 1184;
			break;
		
		case -1009122462:
			iVar0 = 1185;
			break;
		
		case -2143877160:
			iVar0 = 1186;
			break;
		
		case 985961343:
			iVar0 = 1187;
			break;
		
		case 906071982:
			iVar0 = 1188;
			break;
		
		case 566663142:
			iVar0 = 1189;
			break;
		
		case 764251611:
			iVar0 = 1190;
			break;
		
		case -1575240476:
			iVar0 = 1191;
			break;
		
		case 676807987:
			iVar0 = 1192;
			break;
		
		case 272160153:
			iVar0 = 1193;
			break;
		
		case 1593344440:
			iVar0 = 1194;
			break;
		
		case 546222390:
			iVar0 = 1195;
			break;
		
		case 1983375900:
			iVar0 = 1196;
			break;
		
		case -620589387:
			iVar0 = 1197;
			break;
		
		case 383923929:
			iVar0 = 1198;
			break;
		
		case -1703406594:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -398286533:
			iVar0 = 1200;
			break;
		
		case -80478106:
			iVar0 = 1201;
			break;
		
		case 1835331655:
			iVar0 = 1202;
			break;
		
		case -1650596870:
			iVar0 = 1203;
			break;
		
		case 1231926496:
			iVar0 = 1204;
			break;
		
		case -1506181253:
			iVar0 = 1205;
			break;
		
		case -1737145605:
			iVar0 = 1206;
			break;
		
		case 1673851512:
			iVar0 = 1207;
			break;
		
		case 1023339598:
			iVar0 = 1208;
			break;
		
		case -163738770:
			iVar0 = 1209;
			break;
		
		case 1863218823:
			iVar0 = 1210;
			break;
		
		case 333966447:
			iVar0 = 1211;
			break;
		
		case 1412626052:
			iVar0 = 1212;
			break;
		
		case -39100956:
			iVar0 = 1213;
			break;
		
		case 1631533003:
			iVar0 = 1214;
			break;
		
		case 1493430918:
			iVar0 = 1215;
			break;
		
		case -196693334:
			iVar0 = 1216;
			break;
		
		case 553507495:
			iVar0 = 1217;
			break;
		
		case 2003474700:
			iVar0 = 1218;
			break;
		
		case 1121792228:
			iVar0 = 1219;
			break;
		
		case -1424651669:
			iVar0 = 1220;
			break;
		
		case -1454164346:
			iVar0 = 1221;
			break;
		
		case -779574408:
			iVar0 = 1222;
			break;
		
		case -1361908447:
			iVar0 = 1223;
			break;
		
		case 1250161120:
			iVar0 = 1224;
			break;
		
		case 1288201657:
			iVar0 = 1225;
			break;
		
		case 111412152:
			iVar0 = 1226;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_123(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case -1233846590:
			iVar0 = 820;
			break;
		
		case -1448569917:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case -416717212:
			iVar0 = 826;
			break;
		
		case -1228169566:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case -1572191963:
			iVar0 = 831;
			break;
		
		case -791841628:
			iVar0 = 832;
			break;
		
		case -1531355431:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case -2114317157:
			iVar0 = 835;
			break;
		
		case -2085191627:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case -1850499077:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case -911004337:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case -861144593:
			iVar0 = 844;
			break;
		
		case -29907878:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case -862474356:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case -225805790:
			iVar0 = 851;
			break;
		
		case -624586952:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case -242746043:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case -1097603268:
			iVar0 = 856;
			break;
		
		case -660672539:
			iVar0 = 857;
			break;
		
		case -4642188:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case -1226569770:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case -1557113221:
			iVar0 = 864;
			break;
		
		case -1690570414:
			iVar0 = 865;
			break;
		
		case -507204255:
			iVar0 = 866;
			break;
		
		case -1804897639:
			iVar0 = 867;
			break;
		
		case -1375233423:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case -2112155518:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case -627666528:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case -1448761813:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case -1021262861:
			iVar0 = 878;
			break;
		
		case -264447931:
			iVar0 = 879;
			break;
		
		case -652127435:
			iVar0 = 880;
			break;
		
		case -610014599:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case -898550276:
			iVar0 = 886;
			break;
		
		case -1074178691:
			iVar0 = 887;
			break;
		
		case -368616744:
			iVar0 = 888;
			break;
		
		case -78566501:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case -1229980240:
			iVar0 = 891;
			break;
		
		case -1558321426:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case -1996043294:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case -20709979:
			iVar0 = 896;
			break;
		
		case -1617383579:
			iVar0 = 897;
			break;
		
		case -525135065:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case -1195876295:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case -1564457471:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case -1961291349:
			iVar0 = 907;
			break;
		
		case -1912591074:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case -1015392647:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case -1855327598:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case -1423366674:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case -1578833665:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case -1786080093:
			iVar0 = 924;
			break;
		
		case -215923306:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case -1214009019:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case -1033895864:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case -574749266:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case -643353187:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case -94540936:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case -345261869:
			iVar0 = 938;
			break;
		
		case -1022859058:
			iVar0 = 939;
			break;
		
		case -1786322924:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case -506986385:
			iVar0 = 943;
			break;
		
		case -874081588:
			iVar0 = 944;
			break;
		
		case -2043405937:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case -657535677:
			iVar0 = 948;
			break;
		
		case -2093585025:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case -1608760399:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case -119951196:
			iVar0 = 954;
			break;
		
		case -1649842228:
			iVar0 = 955;
			break;
		
		case -1640764925:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case -1061215309:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case -1486297381:
			iVar0 = 963;
			break;
		
		case -540767159:
			iVar0 = 964;
			break;
		
		case -1235960692:
			iVar0 = 965;
			break;
		
		case -329316995:
			iVar0 = 966;
			break;
		
		case -581880272:
			iVar0 = 967;
			break;
		
		case -1807345434:
			iVar0 = 968;
			break;
		
		case -1018409435:
			iVar0 = 969;
			break;
		
		case -136011898:
			iVar0 = 970;
			break;
		
		case -2069494727:
			iVar0 = 971;
			break;
		
		case -642887005:
			iVar0 = 972;
			break;
		
		case -1810837638:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case -1533877336:
			iVar0 = 976;
			break;
		
		case -892254987:
			iVar0 = 977;
			break;
		
		case -654222260:
			iVar0 = 978;
			break;
		
		case -152607027:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case -1178363901:
			iVar0 = 981;
			break;
		
		case -170830010:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case -975101512:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case -737204659:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case -1470963239:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case -428330966:
			iVar0 = 993;
			break;
		
		case -532155133:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case -1103242747:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case -1996321684:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case -1232815296:
			iVar0 = 1000;
			break;
		
		case -942600475:
			iVar0 = 1001;
			break;
		
		case -157448893:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case -393833589:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case -1547493052:
			iVar0 = 1006;
			break;
		
		case -558224274:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case -1335458450:
			iVar0 = 1010;
			break;
		
		case -538608496:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case -1423594652:
			iVar0 = 1013;
			break;
		
		case -749306822:
			iVar0 = 1014;
			break;
		
		case -1357502125:
			iVar0 = 1015;
			break;
		
		case -1697184517:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case -1996334680:
			iVar0 = 1019;
			break;
		
		case -1718451770:
			iVar0 = 1020;
			break;
		
		case -1351890796:
			iVar0 = 1021;
			break;
		
		case -708316325:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case -755577025:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case -1277167165:
			iVar0 = 1032;
			break;
		
		case -2040688458:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
		
		case -599666460:
			iVar0 = 1036;
			break;
		
		case 2137077332:
			iVar0 = 1037;
			break;
		
		case -563836962:
			iVar0 = 1038;
			break;
		
		case 1757650301:
			iVar0 = 1039;
			break;
		
		case -1926213636:
			iVar0 = 1040;
			break;
		
		case 636926663:
			iVar0 = 1041;
			break;
		
		case 1864088729:
			iVar0 = 1042;
			break;
		
		case 373164468:
			iVar0 = 1043;
			break;
		
		case -1181875417:
			iVar0 = 1044;
			break;
		
		case 2125316672:
			iVar0 = 1045;
			break;
		
		case 1505585597:
			iVar0 = 1046;
			break;
		
		case -1563329786:
			iVar0 = 1047;
			break;
		
		case -546372951:
			iVar0 = 1048;
			break;
		
		case -276745962:
			iVar0 = 1049;
			break;
		
		case 98665018:
			iVar0 = 1050;
			break;
		
		case 1968556432:
			iVar0 = 1051;
			break;
		
		case -1559144195:
			iVar0 = 1052;
			break;
		
		case -1332960577:
			iVar0 = 1053;
			break;
		
		case 652305392:
			iVar0 = 1054;
			break;
		
		case 1894755292:
			iVar0 = 1055;
			break;
		
		case 1126903931:
			iVar0 = 1056;
			break;
		
		case -914706967:
			iVar0 = 1057;
			break;
		
		case -214853054:
			iVar0 = 1058;
			break;
		
		case -346130454:
			iVar0 = 1059;
			break;
		
		case 1352224647:
			iVar0 = 1060;
			break;
		
		case -1388894295:
			iVar0 = 1061;
			break;
		
		case 1928040960:
			iVar0 = 1062;
			break;
		
		case -721653798:
			iVar0 = 1063;
			break;
		
		case 1424803201:
			iVar0 = 1064;
			break;
		
		case 2024824081:
			iVar0 = 1065;
			break;
		
		case -822973907:
			iVar0 = 1066;
			break;
		
		case 1857392409:
			iVar0 = 1067;
			break;
		
		case -978468741:
			iVar0 = 1068;
			break;
		
		case -811517193:
			iVar0 = 1069;
			break;
		
		case -725236090:
			iVar0 = 1070;
			break;
		
		case -485989621:
			iVar0 = 1071;
			break;
		
		case 711356870:
			iVar0 = 1072;
			break;
		
		case 111487556:
			iVar0 = 1073;
			break;
		
		case 588276502:
			iVar0 = 1074;
			break;
		
		case -3335024:
			iVar0 = 1075;
			break;
		
		case 1184770609:
			iVar0 = 1076;
			break;
		
		case 359647189:
			iVar0 = 1077;
			break;
		
		case 1545327916:
			iVar0 = 1078;
			break;
		
		case 954502846:
			iVar0 = 1079;
			break;
		
		case -893208491:
			iVar0 = 1080;
			break;
		
		case -1661674318:
			iVar0 = 1081;
			break;
		
		case -1624645348:
			iVar0 = 1082;
			break;
		
		case 620358850:
			iVar0 = 1083;
			break;
		
		case 122204512:
			iVar0 = 1084;
			break;
		
		case -645147161:
			iVar0 = 1085;
			break;
		
		case -375556598:
			iVar0 = 1086;
			break;
		
		case 1841102407:
			iVar0 = 1087;
			break;
		
		case 831620593:
			iVar0 = 1088;
			break;
		
		case 1129884031:
			iVar0 = 1089;
			break;
		
		case 2092301321:
			iVar0 = 1090;
			break;
		
		case 580667351:
			iVar0 = 1091;
			break;
		
		case 1538832911:
			iVar0 = 1092;
			break;
		
		case -1355259635:
			iVar0 = 1093;
			break;
		
		case -1583168030:
			iVar0 = 1094;
			break;
		
		case -1831032746:
			iVar0 = 1095;
			break;
		
		case -2060448515:
			iVar0 = 1096;
			break;
		
		case -50365286:
			iVar0 = 1097;
			break;
		
		case -364095692:
			iVar0 = 1098;
			break;
		
		case -606979520:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case -1057062007:
			iVar0 = 1100;
			break;
		
		case -1253872621:
			iVar0 = 1101;
			break;
		
		case -1525625938:
			iVar0 = 1102;
			break;
		
		case 603801989:
			iVar0 = 1103;
			break;
		
		case 432289043:
			iVar0 = 1104;
			break;
		
		case 176592536:
			iVar0 = 1105;
			break;
		
		case -126291331:
			iVar0 = 1106;
			break;
		
		case 2093415191:
			iVar0 = 1107;
			break;
		
		case 1383966341:
			iVar0 = 1108;
			break;
		
		case 1061027846:
			iVar0 = 1109;
			break;
		
		case 610754913:
			iVar0 = 1110;
			break;
		
		case 1856271834:
			iVar0 = 1111;
			break;
		
		case 151235226:
			iVar0 = 1112;
			break;
		
		case 1292317344:
			iVar0 = 1113;
			break;
		
		case 1592055387:
			iVar0 = 1114;
			break;
		
		case 1048452439:
			iVar0 = 1115;
			break;
		
		case 211084:
			iVar0 = 1116;
			break;
		
		case -1009472289:
			iVar0 = 1117;
			break;
		
		case 156013410:
			iVar0 = 1118;
			break;
		
		case 2061696383:
			iVar0 = 1119;
			break;
		
		case -1462570018:
			iVar0 = 1120;
			break;
		
		case -1873628095:
			iVar0 = 1121;
			break;
		
		case -770265298:
			iVar0 = 1122;
			break;
		
		case 820753849:
			iVar0 = 1123;
			break;
		
		case -914435716:
			iVar0 = 1124;
			break;
		
		case -1170154756:
			iVar0 = 1125;
			break;
		
		case -880824798:
			iVar0 = 1126;
			break;
		
		case -249693258:
			iVar0 = 1127;
			break;
		
		case 1489278440:
			iVar0 = 1128;
			break;
		
		case -1512326404:
			iVar0 = 1129;
			break;
		
		case -1378330859:
			iVar0 = 1130;
			break;
		
		case 1459074393:
			iVar0 = 1131;
			break;
		
		case 1273491948:
			iVar0 = 1132;
			break;
		
		case -1406186689:
			iVar0 = 1133;
			break;
		
		case 2124190452:
			iVar0 = 1134;
			break;
		
		case -1740822263:
			iVar0 = 1135;
			break;
		
		case -969884576:
			iVar0 = 1136;
			break;
		
		case 335386038:
			iVar0 = 1137;
			break;
		
		case -1150178569:
			iVar0 = 1138;
			break;
		
		case 1521235675:
			iVar0 = 1139;
			break;
		
		case 1623611883:
			iVar0 = 1140;
			break;
		
		case 1329111213:
			iVar0 = 1141;
			break;
		
		case -1537321295:
			iVar0 = 1142;
			break;
		
		case -1628166034:
			iVar0 = 1143;
			break;
		
		case -132693345:
			iVar0 = 1144;
			break;
		
		case 874964805:
			iVar0 = 1145;
			break;
		
		case -1512427408:
			iVar0 = 1146;
			break;
		
		case 923836315:
			iVar0 = 1147;
			break;
		
		case -1580952699:
			iVar0 = 1148;
			break;
		
		case 1152609891:
			iVar0 = 1149;
			break;
		
		case -1637725121:
			iVar0 = 1150;
			break;
		
		case 1760547084:
			iVar0 = 1151;
			break;
		
		case -2138723176:
			iVar0 = 1152;
			break;
		
		case 1730799330:
			iVar0 = 1153;
			break;
		
		case -280222071:
			iVar0 = 1154;
			break;
		
		case 2067499855:
			iVar0 = 1155;
			break;
		
		case -1635988673:
			iVar0 = 1156;
			break;
		
		case -1849502305:
			iVar0 = 1157;
			break;
		
		case -1413356029:
			iVar0 = 1158;
			break;
		
		case -2062177771:
			iVar0 = 1159;
			break;
		
		case 2077453849:
			iVar0 = 1160;
			break;
		
		case -965460704:
			iVar0 = 1161;
			break;
		
		case -1917254263:
			iVar0 = 1162;
			break;
		
		case 1777785544:
			iVar0 = 1163;
			break;
		
		case 1505693935:
			iVar0 = 1164;
			break;
		
		case -1551981580:
			iVar0 = 1165;
			break;
		
		case 1572497951:
			iVar0 = 1166;
			break;
		
		case 585832887:
			iVar0 = 1167;
			break;
		
		case -498335731:
			iVar0 = 1168;
			break;
		
		case -137061435:
			iVar0 = 1169;
			break;
		
		case 1921321590:
			iVar0 = 1170;
			break;
		
		case -822177429:
			iVar0 = 1171;
			break;
		
		case -531271155:
			iVar0 = 1172;
			break;
		
		case 412829693:
			iVar0 = 1173;
			break;
		
		case -1411787934:
			iVar0 = 1174;
			break;
		
		case 653645139:
			iVar0 = 1175;
			break;
		
		case 1848048195:
			iVar0 = 1176;
			break;
		
		case -781400442:
			iVar0 = 1177;
			break;
		
		case 1507919906:
			iVar0 = 1178;
			break;
		
		case -1381102054:
			iVar0 = 1179;
			break;
		
		case 565394453:
			iVar0 = 1180;
			break;
		
		case -1265443416:
			iVar0 = 1181;
			break;
		
		case 1888753218:
			iVar0 = 1182;
			break;
		
		case -552467991:
			iVar0 = 1183;
			break;
		
		case -1655919948:
			iVar0 = 1184;
			break;
		
		case -917106601:
			iVar0 = 1185;
			break;
		
		case 1595446967:
			iVar0 = 1186;
			break;
		
		case -530593323:
			iVar0 = 1187;
			break;
		
		case 561619447:
			iVar0 = 1188;
			break;
		
		case -1913656173:
			iVar0 = 1189;
			break;
		
		case -1766901922:
			iVar0 = 1190;
			break;
		
		case 2091781849:
			iVar0 = 1191;
			break;
		
		case 1824588341:
			iVar0 = 1192;
			break;
		
		case 242597641:
			iVar0 = 1193;
			break;
		
		case 566785691:
			iVar0 = 1194;
			break;
		
		case -2091312957:
			iVar0 = 1195;
			break;
		
		case -2079214831:
			iVar0 = 1196;
			break;
		
		case 1359156274:
			iVar0 = 1197;
			break;
		
		case 1904247246:
			iVar0 = 1198;
			break;
		
		case -1351518396:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -797874817:
			iVar0 = 1200;
			break;
		
		case -385507297:
			iVar0 = 1201;
			break;
		
		case 2011910758:
			iVar0 = 1202;
			break;
		
		case -1953985443:
			iVar0 = 1203;
			break;
		
		case -1124222352:
			iVar0 = 1204;
			break;
		
		case -1806994767:
			iVar0 = 1205;
			break;
		
		case -1445761968:
			iVar0 = 1206;
			break;
		
		case -89186417:
			iVar0 = 1207;
			break;
		
		case -308083083:
			iVar0 = 1208;
			break;
		
		case 667714507:
			iVar0 = 1209;
			break;
		
		case -1610210252:
			iVar0 = 1210;
			break;
		
		case -417116499:
			iVar0 = 1211;
			break;
		
		case 1246110729:
			iVar0 = 1212;
			break;
		
		case 461575135:
			iVar0 = 1213;
			break;
		
		case -386163163:
			iVar0 = 1214;
			break;
		
		case -1414541879:
			iVar0 = 1215;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_43();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_101(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_101(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_127(var uParam0)
{
	if (Local_307.f_1 != -1)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 11))
		{
			Var0 = { func_69(Local_385[Local_307.f_1]) };
			iVar16 = func_129(Local_385[Local_307.f_1]);
			func_128(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar16);
			MISC::SET_BIT(&(uParam0->f_2), 11);
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_2, 11))
	{
		func_57(uParam0, "DCTL_DRAW", 0, 1);
		MISC::SET_BIT(&(uParam0->f_2), 11);
	}
}

void func_128(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		func_58(sParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 211;
		
		case 1:
			return 213;
		
		case 2:
			return 210;
		
		case 3:
			return 209;
		
		default:
	}
	return 0;
}

void func_130(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			uParam0->f_35[iVar0].f_8 = uParam0->f_35[iVar0].f_2;
			uParam0->f_35[iVar0].f_9 = uParam0->f_35[iVar0].f_2;
		}
		iVar0++;
	}
	func_161(uParam0);
	func_155(uParam0);
	func_153(uParam0);
	func_149(uParam0);
	func_148(uParam0);
	if (MISC::IS_BIT_SET(iLocal_238, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
			{
				func_133(uParam0, &(uParam0->f_35), iVar0);
				if (MISC::IS_BIT_SET(iLocal_238, (11 + iVar0)))
				{
					MISC::CLEAR_BIT(&iLocal_238, (11 + iVar0));
				}
				if (MISC::IS_BIT_SET(iLocal_238, (7 + iVar0)))
				{
					MISC::SET_BIT(&iLocal_238, (11 + iVar0));
					MISC::CLEAR_BIT(&iLocal_238, (7 + iVar0));
				}
			}
			else if (uParam0->f_35[iVar0] == 2)
			{
				func_16(&(uParam0->f_35), 3, iVar0);
				uParam0->f_35[iVar0].f_1 = 0;
			}
			iVar0++;
		}
		if (!func_12(&uLocal_240))
		{
			func_10(&uLocal_240, 0, 0);
		}
		else if (func_8(&uLocal_240, 500, 0))
		{
			iVar1 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
			if (iVar1 == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_188(uParam0, 10);
				return;
			}
			func_131(4, func_132(uParam0->f_35[iLocal_237].f_15, uParam0->f_35[iLocal_237].f_16, 9974), iLocal_237, 99999);
			func_9(&uLocal_240);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_2, 4) && uParam0->f_35[iLocal_237] == 2)
		{
			HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_GAMEHELP", 0);
			MISC::SET_BIT(&(uParam0->f_2), 5);
		}
		if (Local_307 >= 8)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				AUDIO::STOP_SOUND(uParam0->f_35[iVar0].f_5);
				iVar0++;
			}
			if (AUDIO::IS_STREAM_PLAYING())
			{
				AUDIO::STOP_STREAM();
			}
			MISC::CLEAR_BIT(&iLocal_238, 0);
			func_188(uParam0, 8);
		}
	}
	else if (iLocal_239 != -1 && NETWORK::GET_NETWORK_TIME_ACCURATE() >= iLocal_239)
	{
		MISC::SET_BIT(&iLocal_238, 0);
	}
}

void func_131(int iParam0, var uParam1, int iParam2, int iParam3)
{
	Var0.f_2 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 1012191104;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar6 = func_20(0);
	if (!iVar6 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iVar6);
	}
}

float func_132(float fParam0, float fParam1, int iParam2)
{
	fVar0 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	switch ((*uParam1)[iParam2])
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam1[iParam2]->f_4 = 0;
					uParam1[iParam2]->f_1 = 255;
					uParam1[iParam2]->f_3 = 0;
					uParam1[iParam2]->f_9 = -1;
					func_147(Local_385[iParam2], &(uParam1[iParam2]->f_2), &(uParam1[iParam2]->f_15), &(uParam1[iParam2]->f_16), &(uParam1[iParam2]->f_8));
					break;
				
				case 1:
					uParam1[iParam2]->f_4 = 0;
					uParam1[iParam2]->f_1 = 255;
					uParam1[iParam2]->f_3 = 0;
					uParam1[iParam2]->f_9 = -1;
					func_147(Local_385[iParam2], &(uParam1[iParam2]->f_2), &(uParam1[iParam2]->f_15), &(uParam1[iParam2]->f_16), &(uParam1[iParam2]->f_8));
					break;
				
				case 2:
					uParam1[iParam2]->f_4 = 0;
					uParam1[iParam2]->f_1 = 255;
					uParam1[iParam2]->f_3 = 0;
					uParam1[iParam2]->f_9 = -1;
					func_147(Local_385[iParam2], &(uParam1[iParam2]->f_2), &(uParam1[iParam2]->f_15), &(uParam1[iParam2]->f_16), &(uParam1[iParam2]->f_8));
					break;
				
				case 3:
					uParam1[iParam2]->f_4 = 0;
					uParam1[iParam2]->f_1 = 255;
					uParam1[iParam2]->f_3 = 0;
					uParam1[iParam2]->f_9 = -1;
					func_147(Local_385[iParam2], &(uParam1[iParam2]->f_2), &(uParam1[iParam2]->f_15), &(uParam1[iParam2]->f_16), &(uParam1[iParam2]->f_8));
					break;
			}
			MISC::CLEAR_BIT(&iLocal_238, (15 + iParam2));
			func_146(uParam1, iParam2);
			func_15(&(uParam1[iParam2]->f_19));
			func_16(uParam1, 1, iParam2);
			break;
		
		case 1:
			if (Local_307 == 7)
			{
				func_16(uParam1, 2, iParam2);
			}
			break;
		
		case 2:
			if (iParam2 == iLocal_237)
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					func_145(uParam1);
				}
			}
			if (func_144(uParam0) <= 1)
			{
				uParam1[iParam2]->f_18 = 0f;
				uParam1[iParam2]->f_9 = uParam1[iParam2]->f_2;
			}
			if (!MISC::IS_BIT_SET(iLocal_238, (3 + iParam2)))
			{
				func_141(uParam0, uParam1, iParam2);
			}
			MISC::CLEAR_BIT(&iLocal_238, (3 + iParam2));
			if (iParam2 == iLocal_237)
			{
				func_137(uParam0, uParam1, 1);
				if (func_136(uParam0, uParam1, iLocal_237))
				{
					func_135(iLocal_237);
				}
			}
			else if (func_136(uParam0, uParam1, iParam2))
			{
				uParam1[iParam2]->f_18 = 0f;
				if (uParam1[iParam2]->f_14 == -2147483647)
				{
					uParam1[iParam2]->f_14 = NETWORK::GET_NETWORK_TIME();
				}
			}
			else if (uParam1[iParam2]->f_14 != -2147483647)
			{
				uParam1[iParam2]->f_14 = -2147483647;
			}
			break;
		
		case 3:
			func_134(uParam1, iParam2);
			break;
	}
}

void func_134(var uParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(uParam0[iParam1]->f_1);
	fVar0 = (fVar0 - (300f * SYSTEM::TIMESTEP()));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	uParam0[iParam1]->f_1 = SYSTEM::FLOOR(fVar0);
}

void func_135(int iParam0)
{
	Var0.x = 1446324155;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam0;
	iVar3 = func_20(1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

int func_136(var uParam0, var uParam1, int iParam2)
{
	fVar0 = (0.5f - ((0.5f - uParam1[iParam2]->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	switch (uParam1[iParam2]->f_2)
	{
		case 0:
			if ((uParam1[iParam2]->f_16 - (0.012f * 0.42f)) <= 0.229f)
			{
				return 1;
			}
			break;
		
		case 1:
			if ((uParam1[iParam2]->f_16 + (0.012f * 0.42f)) >= 0.851f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 - (fVar1 * 0.42f)) <= (0.5f - (0.339f * uParam0->f_9))
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 + (fVar1 * 0.42f)) >= (0.5f + (0.343f * uParam0->f_9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_137(var uParam0, var uParam1, bool bParam2)
{
	fVar0 = (0.5f - ((0.5f - uParam1[iLocal_237]->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	iVar20 = (uParam1[iLocal_237]->f_4 - 1);
	if (iVar20 > -1 && iVar20 < 59)
	{
		func_140(uParam1[iLocal_237]->f_19[iVar20], &fVar12, &fVar13, 9974);
		if (uParam1[iLocal_237]->f_2 == 2)
		{
			fVar14 = (uParam1[iLocal_237]->f_15 + (fVar1 * 0.5f));
			fVar15 = uParam1[iLocal_237]->f_16;
			if (fVar14 > fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if (uParam1[iLocal_237]->f_2 == 3)
		{
			fVar14 = (uParam1[iLocal_237]->f_15 - (fVar1 * 0.5f));
			fVar15 = uParam1[iLocal_237]->f_16;
			if (fVar14 < fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if (uParam1[iLocal_237]->f_2 == 0)
		{
			fVar14 = uParam1[iLocal_237]->f_15;
			fVar15 = (uParam1[iLocal_237]->f_16 + (0.012f * 0.5f));
			if (fVar15 > fVar13)
			{
				fVar15 = fVar13;
			}
		}
		else if (uParam1[iLocal_237]->f_2 == 1)
		{
			fVar14 = uParam1[iLocal_237]->f_15;
			fVar15 = (uParam1[iLocal_237]->f_16 - (0.012f * 0.5f));
			if (fVar15 < fVar13)
			{
				fVar15 = fVar13;
			}
		}
	}
	iVar21 = 0;
	while (iVar21 <= 3)
	{
		bVar23 = false;
		if (iVar21 == iLocal_237)
		{
		}
		else if (uParam1[iVar21]->f_14 != -2147483647 && NETWORK::GET_NETWORK_TIME() > uParam1[iVar21]->f_14 + 1000)
		{
		}
		else if ((*uParam1)[iVar21] == 2 && (*uParam1)[iLocal_237] == 2)
		{
			iVar22 = 0;
			while (iVar22 <= 59)
			{
				func_140(uParam1[iVar21]->f_19[iVar22], &fVar2, &fVar3, 9974);
				if (fVar2 != 0f || fVar3 != 0f)
				{
					if (iVar22 + 1 >= 60)
					{
						fVar4 = uParam1[iVar21]->f_15;
						fVar5 = uParam1[iVar21]->f_16;
					}
					else
					{
						func_140(uParam1[iVar21]->f_19[iVar22 + 1], &fVar4, &fVar5, 9974);
						if (fVar4 == 0f && fVar5 == 0f)
						{
							fVar4 = uParam1[iVar21]->f_15;
							fVar5 = uParam1[iVar21]->f_16;
						}
					}
					fVar6 = (fVar4 - fVar2);
					fVar7 = (fVar5 - fVar3);
					fVar8 = (fVar2 + (fVar6 * 0.5f));
					fVar9 = (fVar3 + (fVar7 * 0.5f));
					if (MISC::ABSF(fVar6) > 0.001f)
					{
						fVar10 = (MISC::ABSF(fVar6) + (0.003f * 0.5f));
						fVar11 = (0.003f * uParam0->f_8);
					}
					else if (MISC::ABSF(fVar7) > 0.001f)
					{
						fVar10 = 0.003f;
						fVar11 = (MISC::ABSF(fVar7) + ((0.003f * 0.5f) * uParam0->f_8));
					}
					else
					{
						fVar10 = 0.0001f;
						fVar11 = 0.0001f;
					}
					fVar24 = (0.5f - ((0.5f - fVar8) * uParam0->f_9));
					fVar25 = (fVar10 * uParam0->f_9);
					bVar26 = false;
					if (uParam1[iLocal_237]->f_2 == 2 || uParam1[iLocal_237]->f_2 == 3)
					{
						bVar26 = func_139(fVar0, uParam1[iLocal_237]->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, (fVar25 * 0.95f), fVar11);
					}
					if (uParam1[iLocal_237]->f_2 == 0 || uParam1[iLocal_237]->f_2 == 1)
					{
						bVar26 = func_139(fVar0, uParam1[iLocal_237]->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, fVar25, (fVar11 * 0.95f));
					}
					if (bVar26)
					{
						if (bParam2)
						{
							func_135(iLocal_237);
						}
						bVar23 = true;
					}
					else if (!MISC::IS_BIT_SET(iLocal_238, (7 + iVar21)) && MISC::IS_BIT_SET(iLocal_238, (11 + iVar21)))
					{
						if (iVar22 == (uParam1[iVar21]->f_4 - 1))
						{
							if (((fVar12 != 0f && fVar13 != 0f) && fVar14 != 0f) && fVar15 != 0f)
							{
								func_138(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0.0015f);
								if (func_139(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19))
								{
									if (bParam2)
									{
										func_135(iLocal_237);
									}
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar22++;
			}
			if (!bVar23)
			{
				fVar27 = (0.5f - ((0.5f - uParam1[iVar21]->f_15) * uParam0->f_9));
				if (func_139(fVar0, uParam1[iLocal_237]->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar27, uParam1[iVar21]->f_16, (fVar1 * 0.42f), (0.012f * 0.42f)))
				{
					if (bParam2)
					{
						func_135(iLocal_237);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_138(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	if (fParam9 == 0f)
	{
		fParam9 = 0.003f;
	}
	fVar0 = (fParam3 - fParam1);
	fVar1 = (fParam4 - fParam2);
	*uParam5 = (fParam1 + (fVar0 * 0.5f));
	*uParam6 = (fParam2 + (fVar1 * 0.5f));
	if (MISC::ABSF(fVar0) > 0.001f)
	{
		*uParam7 = (MISC::ABSF(fVar0) + (fParam9 * 0.5f));
		*uParam8 = (fParam9 * uParam0->f_8);
	}
	else
	{
		*uParam7 = fParam9;
		*uParam8 = (MISC::ABSF(fVar1) + ((fParam9 * 0.5f) * uParam0->f_8));
	}
	*uParam5 = (0.5f - ((0.5f - *uParam5) * uParam0->f_9));
	*uParam7 = (*uParam7 * uParam0->f_9);
}

int func_139(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_140(float fParam0, float fParam1, float fParam2, int iParam3)
{
	*fParam1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

void func_141(var uParam0, var uParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2)) && (*uParam1)[iParam2] == 2)
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam1[iParam2]->f_5))
		{
			if (Local_385[iParam2] == 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_385[iParam2] == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_385[iParam2] == 2)
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
		}
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1[iParam2]->f_5))
		{
			AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_5, "X", uParam1[iParam2]->f_15);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_5, "Y", uParam1[iParam2]->f_16);
		}
	}
	if (uParam1[iParam2]->f_9 != uParam1[iParam2]->f_2 && uParam1[iParam2]->f_4 > 0)
	{
		func_140(uParam1[iParam2]->f_19[(uParam1[iParam2]->f_4 - 1)], &fVar0, &fVar1, 9974);
		fVar4 = 0.2f;
		if ((((uParam1[iParam2]->f_9 == 0 && uParam1[iParam2]->f_10[1] == 1) || (uParam1[iParam2]->f_9 == 1 && uParam1[iParam2]->f_10[1] == 0)) || (uParam1[iParam2]->f_9 == 2 && uParam1[iParam2]->f_10[1] == 3)) || (uParam1[iParam2]->f_9 == 3 && uParam1[iParam2]->f_10[1] == 2))
		{
			fVar4 = 0.25f;
		}
		if (uParam1[iParam2]->f_9 == 0 || uParam1[iParam2]->f_9 == 1)
		{
			fVar2 = MISC::ABSF((uParam1[iParam2]->f_15 - fVar0));
			fVar3 = ((0.0068f * uParam0->f_8) * fVar4);
		}
		else if (uParam1[iParam2]->f_9 == 2 || uParam1[iParam2]->f_9 == 3)
		{
			fVar2 = MISC::ABSF((uParam1[iParam2]->f_16 - fVar1));
			fVar3 = ((0.0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
		}
		if (fVar2 >= fVar3 || (iParam2 != iLocal_237 && !MISC::IS_BIT_SET(iLocal_238, (15 + iParam2))))
		{
			if (iParam2 == iLocal_237)
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_131(uParam1[iParam2]->f_9, func_132(uParam1[iParam2]->f_15, uParam1[iParam2]->f_16, 9974), iLocal_237, uLocal_232[iLocal_237]);
				func_9(&uLocal_240);
				uLocal_232[iLocal_237]++;
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam1[iParam2]->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_7, "X", uParam1[iParam2]->f_15);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_7, "Y", uParam1[iParam2]->f_16);
			if (!AUDIO::HAS_SOUND_FINISHED(uParam1[iParam2]->f_5))
			{
				AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_5, "Turning", 1f);
			}
			uParam1[iParam2]->f_2 = uParam1[iParam2]->f_9;
			uParam1[iParam2]->f_10[1] = uParam1[iParam2]->f_10[0];
			uParam1[iParam2]->f_10[0] = uParam1[iParam2]->f_2;
			uParam1[iParam2]->f_13 = MISC::GET_GAME_TIMER();
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(uParam1[iParam2]->f_5))
	{
		AUDIO::SET_VARIABLE_ON_SOUND(uParam1[iParam2]->f_5, "Turning", 0f);
	}
	func_143(uParam0, iParam2);
	func_142(uParam0, uParam1, iParam2);
	func_146(uParam1, iParam2);
	MISC::SET_BIT(&iLocal_238, (3 + iParam2));
}

void func_142(var uParam0, var uParam1, int iParam2)
{
	fVar0 = (0.06f * uParam1[iParam2]->f_18);
	fVar1 = ((0.06f * uParam1[iParam2]->f_18) * uParam0->f_8);
	switch (uParam1[iParam2]->f_2)
	{
		case 0:
			uParam1[iParam2]->f_16 = (uParam1[iParam2]->f_16 - (fVar1 * SYSTEM::TIMESTEP()));
			break;
		
		case 1:
			uParam1[iParam2]->f_16 = (uParam1[iParam2]->f_16 + (fVar1 * SYSTEM::TIMESTEP()));
			break;
		
		case 2:
			uParam1[iParam2]->f_15 = (uParam1[iParam2]->f_15 - (fVar0 * SYSTEM::TIMESTEP()));
			break;
		
		case 3:
			uParam1[iParam2]->f_15 = (uParam1[iParam2]->f_15 + (fVar0 * SYSTEM::TIMESTEP()));
			break;
	}
	uParam1[iParam2]->f_18 = 1f;
}

void func_143(var uParam0, int iParam1)
{
	if (uParam0->f_35[iParam1].f_4 == 0)
	{
		uParam0->f_35[iParam1].f_19[uParam0->f_35[iParam1].f_4] = func_132(uParam0->f_35[iParam1].f_15, uParam0->f_35[iParam1].f_16, 9974);
		uParam0->f_35[iParam1].f_4++;
	}
	if (uParam0->f_35[iParam1].f_2 != uParam0->f_35[iParam1].f_8)
	{
		if (uParam0->f_35[iParam1].f_4 >= 60)
		{
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				if (iVar0 == 59)
				{
					uParam0->f_35[iParam1].f_19[iVar0] = func_132(uParam0->f_35[iParam1].f_15, uParam0->f_35[iParam1].f_16, 9974);
				}
				else
				{
					fVar1 = 0f;
					fVar2 = 0f;
					func_140(uParam0->f_35[iParam1].f_19[iVar0 + 1], &fVar1, &fVar2, 9974);
					uParam0->f_35[iParam1].f_19[iVar0] = func_132(fVar1, fVar2, 9974);
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_35[iParam1].f_19[uParam0->f_35[iParam1].f_4] = func_132(uParam0->f_35[iParam1].f_15, uParam0->f_35[iParam1].f_16, 9974);
			uParam0->f_35[iParam1].f_4++;
		}
		uParam0->f_35[iParam1].f_8 = uParam0->f_35[iParam1].f_2;
	}
}

int func_144(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && Local_385[iVar1] > -1)
		{
			if (uParam0->f_35[iVar1] != 3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_145(var uParam0)
{
	if (uParam0[iLocal_237]->f_9 < 0)
	{
		uParam0[iLocal_237]->f_9 = uParam0[iLocal_237]->f_2;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0[iLocal_237]->f_13) >= 66)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
		fVar1 = PAD::GET_CONTROL_NORMAL(2, 219);
		if (fVar1 < -0.65f || PAD::IS_CONTROL_PRESSED(2, 188))
		{
			if (uParam0[iLocal_237]->f_2 != 1)
			{
				uParam0[iLocal_237]->f_9 = 0;
			}
		}
		if (fVar1 > 0.65f || PAD::IS_CONTROL_PRESSED(2, 187))
		{
			if (uParam0[iLocal_237]->f_2 != 0)
			{
				uParam0[iLocal_237]->f_9 = 1;
			}
		}
		if (fVar0 < -0.65f || PAD::IS_CONTROL_PRESSED(2, 189))
		{
			if (uParam0[iLocal_237]->f_2 != 3)
			{
				uParam0[iLocal_237]->f_9 = 2;
			}
		}
		if (fVar0 > 0.65f || PAD::IS_CONTROL_PRESSED(2, 190))
		{
			if (uParam0[iLocal_237]->f_2 != 2)
			{
				uParam0[iLocal_237]->f_9 = 3;
			}
		}
	}
}

void func_146(var uParam0, int iParam1)
{
	switch (uParam0[iParam1]->f_2)
	{
		case 0:
			uParam0[iParam1]->f_17 = 0f;
			break;
		
		case 1:
			uParam0[iParam1]->f_17 = 180f;
			break;
		
		case 2:
			uParam0[iParam1]->f_17 = 270f;
			break;
		
		case 3:
			uParam0[iParam1]->f_17 = 90f;
			break;
	}
}

void func_147(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*fParam2 = (0.5f + -0.32f);
			*fParam3 = 0.54f;
			*iParam1 = 3;
			*iParam4 = 3;
			break;
		
		case 1:
			*fParam2 = (0.5f + 0.321f);
			*fParam3 = 0.54f;
			*iParam1 = 2;
			*iParam4 = 2;
			break;
		
		case 2:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.26f;
			*iParam1 = 1;
			*iParam4 = 1;
			break;
		
		case 3:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.822f;
			*iParam1 = 0;
			*iParam4 = 0;
			break;
	}
}

void func_148(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_35[iVar0] == 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (*uParam0 < 7)
	{
		AUDIO::LOAD_STREAM("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
	}
	else if (iVar1 > 1)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 3))
		{
			AUDIO::PLAY_STREAM_FRONTEND();
			MISC::SET_BIT(&(uParam0->f_2), 3);
		}
	}
	else if (AUDIO::IS_STREAM_PLAYING())
	{
		AUDIO::STOP_STREAM();
	}
}

void func_149(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 15))
	{
		func_150(uParam0);
		MISC::SET_BIT(&(uParam0->f_2), 15);
	}
	func_81(uParam0);
}

void func_150(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SHOW_HUD");
		func_151(0);
		func_151(1);
		func_151(2);
		func_151(3);
		if (iLocal_237 > -1 && Local_385[iLocal_237] > -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_385[iLocal_237]);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_151(int iParam0)
{
	Var0 = { func_69(iParam0) };
	Var16 = { func_67(iParam0) };
	iVar32 = func_152(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar32);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&Var16);
	func_58(&Var0);
}

int func_152(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] == iParam0)
		{
			return Local_307.f_7[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_153(var uParam0)
{
	if (!func_8(&(uParam0->f_20), 1000, 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 10))
		{
			func_57(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
			MISC::SET_BIT(&(uParam0->f_2), 10);
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_2, 10))
	{
		func_154(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 10);
	}
}

void func_154(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_155(var uParam0)
{
	func_60(uParam0);
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			if (uParam0->f_35[iVar0].f_1 != 0)
			{
				func_156(uParam0, &(uParam0->f_35), iVar0);
			}
		}
		iVar0++;
	}
}

void func_156(var uParam0, var uParam1, int iParam2)
{
	if (uParam1[iParam2]->f_14 != -2147483647 && NETWORK::GET_NETWORK_TIME() > uParam1[iParam2]->f_14 + 1000)
	{
		return;
	}
	func_157(Local_385[iParam2], &iVar0, &iVar1, &iVar2);
	if ((*uParam1)[iParam2] == 3)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	fVar3 = (0.5f - ((0.5f - uParam1[iParam2]->f_15) * uParam0->f_9));
	fVar4 = (0.0068f * uParam0->f_9);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		func_140(uParam1[iParam2]->f_19[iVar5], &fVar7, &fVar8, 9974);
		if (fVar7 != 0f || fVar8 != 0f)
		{
			if (iVar5 + 1 >= 60)
			{
				fVar9 = uParam1[iParam2]->f_15;
				fVar10 = uParam1[iParam2]->f_16;
			}
			else
			{
				func_140(uParam1[iParam2]->f_19[iVar5 + 1], &fVar9, &fVar10, 9974);
				if (fVar9 == 0f && fVar10 == 0f)
				{
					fVar9 = uParam1[iParam2]->f_15;
					fVar10 = uParam1[iParam2]->f_16;
				}
			}
			fVar11 = (fVar9 - fVar7);
			fVar12 = (fVar10 - fVar8);
			fVar13 = (fVar7 + (fVar11 * 0.5f));
			fVar14 = (fVar8 + (fVar12 * 0.5f));
			if (MISC::ABSF(fVar11) > 0.001f)
			{
				if (fVar11 > 0f)
				{
					iVar6 = 3;
				}
				else
				{
					iVar6 = 2;
				}
				fVar15 = 90f;
				fVar16 = (MISC::ABSF(fVar11) + 0.003f);
				fVar17 = (0.003f * uParam0->f_8);
			}
			if (MISC::ABSF(fVar12) > 0.001f)
			{
				if (fVar12 > 0f)
				{
					iVar6 = 1;
				}
				else
				{
					iVar6 = 0;
				}
				fVar15 = 0f;
				fVar16 = 0.003f;
				fVar17 = (MISC::ABSF(fVar12) + ((0.003f * 0.5f) * uParam0->f_8));
			}
			fVar18 = (0.5f - ((0.5f - fVar13) * uParam0->f_9));
			fVar19 = (fVar16 * uParam0->f_9);
			GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, uParam1[iParam2]->f_1, 0);
			if (iParam2 == iLocal_237)
			{
				if ((*uParam1)[iParam2] == 2)
				{
					bVar20 = false;
					if (uParam1[iParam2]->f_2 == 2 || uParam1[iParam2]->f_2 == 3)
					{
						bVar20 = func_139(fVar3, uParam1[iParam2]->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, (fVar19 * 0.95f), fVar17);
					}
					if (uParam1[iParam2]->f_2 == 0 || uParam1[iParam2]->f_2 == 1)
					{
						bVar20 = func_139(fVar3, uParam1[iParam2]->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, fVar19, (fVar17 * 0.95f));
					}
					if (bVar20)
					{
						bVar21 = false;
						if (iVar5 == (uParam1[iParam2]->f_4 - 3))
						{
							if (iVar6 == uParam1[iParam2]->f_2)
							{
								bVar21 = true;
							}
						}
						if (iVar5 < (uParam1[iParam2]->f_4 - 2) && !bVar21)
						{
							func_135(iParam2);
						}
					}
				}
			}
			fVar15 = 0f;
			fVar16 = 0f;
			fVar17 = 0f;
		}
		iVar5++;
	}
	GRAPHICS::DRAW_SPRITE("LineArcadeMinigame", "HeadPixel", fVar3, uParam1[iParam2]->f_16, fVar4, 0.012f, uParam1[iParam2]->f_17, iVar0, iVar1, iVar2, uParam1[iParam2]->f_1, 0);
}

void func_157(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_158(func_159(func_129(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}

void func_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}

var func_159(var uParam0)
{
	HUD::GET_HUD_COLOUR(uParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_160(uVar0, uVar1, uVar2, uVar3);
}

var func_160(var uParam0, var uParam1, var uParam2, var uParam3)
{
	MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, uParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, uParam1);
	MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, uParam2);
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, uParam3);
	return uVar0;
}

void func_161(var uParam0)
{
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var13 = 32;
	Var13.f_1.f_2 = -1;
	Var13.f_1.f_3 = -1082130432;
	Var13.f_1.f_4 = -1;
	Var13.f_1.f_5 = -1;
	Var13.f_1.f_6.f_2 = -1;
	Var13.f_1.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_4 = -1;
	Var13.f_1.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	iVar206 = 0;
	iVar207 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 174)
		{
			if (MISC::IS_BIT_SET(iLocal_238, 0))
			{
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 6))
				{
					if (Var1 == 1012191104)
					{
						if (iVar206 < 16)
						{
							Var13[iVar206] = { Var1 };
							if (!MISC::IS_BIT_SET(iLocal_238, (7 + Var1.f_4)))
							{
								MISC::SET_BIT(&iLocal_238, (7 + Var1.f_4));
							}
							iVar206++;
						}
					}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var7, 3))
				{
					if (Var7.x == 1446324155)
					{
						func_166(&(uParam0->f_35), Var7.z);
					}
				}
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var10, 3))
			{
				if (Var10.x == -1881515167)
				{
					iLocal_239 = Var10.z;
				}
			}
		}
		iVar0++;
	}
	Var212.f_2 = -1;
	Var212.f_3 = -1082130432;
	Var212.f_4 = -1;
	Var212.f_5 = -1;
	iVar210 = iVar206;
	while (iVar210 <= 15)
	{
		if (Local_135[iVar210].f_5 < 99999 && Local_135[iVar210].f_5 > -1)
		{
			Var13[(iVar206 + iVar210)] = { Local_135[iVar210] };
			Local_135[iVar210] = { Var212 };
			iVar211++;
		}
		iVar210++;
	}
	iVar206 = (iVar206 + iVar211);
	if (iVar206 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar206 - 1))
		{
			iVar0++;
		}
		func_164(&Var13, 0, (iVar206 - 1));
		iVar0 = 0;
		while (iVar0 <= (iVar206 - 1))
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar206 - 1))
	{
		func_140(Var13[iVar0].f_3, &fVar208, &fVar209, 9974);
		if (Var13[iVar0].f_5 < 99999)
		{
			if (!uLocal_232[Var13[iVar0].f_4] == Var13[iVar0].f_4 * 10000)
			{
				if (Var13[iVar0].f_5 > uLocal_232[Var13[iVar0].f_4] + 2)
				{
					iVar218 = 0;
					if (func_163(&iVar218))
					{
						Local_135[iVar218] = { Var13[iVar0] };
					}
					if (Var13[iVar0].f_5 > uLocal_232[Var13[iVar0].f_4] + 4)
					{
						uLocal_232[Var13[iVar0].f_4]++;
					}
					Jump @2260; //curOff = 1569
				}
				else if (Var13[iVar0].f_5 < uLocal_232[Var13[iVar0].f_4])
				{
				}
				else
				{
					if (Var13[iVar0].f_5 == uLocal_232[Var13[iVar0].f_4] + 2)
					{
						fVar219 = 0f;
						fVar220 = 0f;
						fVar221 = 0f;
						fVar222 = 0f;
						iVar223 = -1;
						if (uParam0->f_35[Var13[iVar0].f_4].f_4 > 0)
						{
							func_140(uParam0->f_35[Var13[iVar0].f_4].f_19[(uParam0->f_35[Var13[iVar0].f_4].f_4 - 1)], &fVar221, &fVar222, 9974);
						}
						else
						{
							iVar224 = 0;
							iVar225 = 0;
							func_147(Local_385[Var13[iVar0].f_4], &iVar224, &fVar221, &fVar222, &iVar225);
						}
						switch (uParam0->f_35[Var13[iVar0].f_4].f_2)
						{
							case 0:
							case 1:
								if (fVar221 > fVar208)
								{
									iVar223 = 3;
								}
								else
								{
									iVar223 = 2;
								}
								break;
							
							case 3:
							case 2:
								if (fVar222 > fVar209)
								{
									iVar223 = 1;
								}
								else
								{
									iVar223 = 0;
								}
								break;
						}
						switch (iVar223)
						{
							case 0:
								fVar219 = fVar208;
								fVar220 = fVar222;
								break;
							
							case 1:
								fVar219 = fVar208;
								fVar220 = fVar222;
								break;
							
							case 3:
								fVar219 = fVar221;
								fVar220 = fVar209;
								break;
							
							case 2:
								fVar219 = fVar221;
								fVar220 = fVar209;
								break;
						}
						func_162(uParam0, Var13[iVar0].f_4, iVar223, fVar219, fVar220, &iVar207);
						func_141(uParam0, &(uParam0->f_35), Var13[iVar0].f_4);
						func_162(uParam0, Var13[iVar0].f_4, Var13[iVar0].f_2, fVar208, fVar209, &iVar207);
						func_141(uParam0, &(uParam0->f_35), Var13[iVar0].f_4);
					}
					else
					{
						if (!Var13[iVar0].f_5 == uLocal_232[Var13[iVar0].f_4] + 1 && !Var13[iVar0].f_5 == Var13[iVar0].f_4 * 10000)
						{
						}
						func_140(Var13[iVar0].f_3, &fVar208, &fVar209, 9974);
						func_162(uParam0, Var13[iVar0].f_4, Var13[iVar0].f_2, fVar208, fVar209, &iVar207);
						func_141(uParam0, &(uParam0->f_35), Var13[iVar0].f_4);
					}
					uLocal_232[Var13[iVar0].f_4] = Var13[iVar0].f_5;
					Jump @2260; //curOff = 2132
					if (Var13[iVar0].f_2 == 4 && !MISC::IS_BIT_SET(iVar207, Var13[iVar0].f_4))
					{
						if (!MISC::IS_BIT_SET(iLocal_238, (15 + Var13[iVar0].f_4)))
						{
							MISC::SET_BIT(&iLocal_238, (15 + Var13[iVar0].f_4));
						}
						uParam0->f_35[Var13[iVar0].f_4].f_15 = fVar208;
						uParam0->f_35[Var13[iVar0].f_4].f_16 = fVar209;
						func_141(uParam0, &(uParam0->f_35), Var13[iVar0].f_4);
					}
				}
				iVar0++;
			}

void func_162(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	uParam0->f_35[iParam1].f_9 = iParam2;
	uParam0->f_35[iParam1].f_15 = fParam3;
	uParam0->f_35[iParam1].f_16 = fParam4;
	if (MISC::IS_BIT_SET(*iParam5, iParam1))
	{
		uParam0->f_35[iParam1].f_8 = uParam0->f_35[iParam1].f_2;
	}
	else
	{
		MISC::SET_BIT(iParam5, iParam1);
	}
}

int func_163(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 <= 15)
	{
		if (Local_135[*iParam0].f_5 == -1)
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

void func_164(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_165(uParam0, iParam1, iParam2);
	if (iParam1 < (iVar0 - 1))
	{
		func_164(uParam0, iParam1, (iVar0 - 1));
	}
	if (iVar0 < iParam2)
	{
		func_164(uParam0, iVar0, iParam2);
	}
}

int func_165(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_2 = -1;
	Var2.f_3 = -1082130432;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar8 = (uParam0[((iParam1 + iParam2) / 2)])->f_5;
	while (iVar0 <= iVar1)
	{
		while (uParam0[iVar0]->f_5 < iVar8)
		{
			iVar0++;
		}
		while (uParam0[iVar1]->f_5 > iVar8)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var2 = { *uParam0[iVar0] };
			*uParam0[iVar0] = { *uParam0[iVar1] };
			*uParam0[iVar1] = { Var2 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_166(var uParam0, int iParam1)
{
	if (!AUDIO::HAS_SOUND_FINISHED(uParam0[iParam1]->f_5))
	{
		AUDIO::STOP_SOUND(uParam0[iParam1]->f_5);
	}
	if (iParam1 == iLocal_237)
	{
		AUDIO::PLAY_SOUND_FRONTEND(uParam0[iParam1]->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(uParam0[iParam1]->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(uParam0[iParam1]->f_6, "X", uParam0[iParam1]->f_15);
	AUDIO::SET_VARIABLE_ON_SOUND(uParam0[iParam1]->f_6, "Y", uParam0[iParam1]->f_16);
	func_16(uParam0, 3, iParam1);
}

void func_167(var uParam0)
{
	if (!func_12(&(uParam0->f_18)))
	{
		func_10(&(uParam0->f_18), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			func_133(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	func_155(uParam0);
	func_170(uParam0);
	func_149(uParam0);
	func_161(uParam0);
	func_169(uParam0);
	func_148(uParam0);
	if (Local_307 >= 7)
	{
		AUDIO::STOP_SOUND(uParam0->f_3);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		func_9(&(uParam0->f_18));
		func_168();
		func_188(uParam0, 7);
	}
}

void func_168()
{
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uLocal_232[iVar0] = iVar0 * 10000;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Local_135[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_169(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 2))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			MISC::SET_BIT(&(uParam0->f_2), 2);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			MISC::SET_BIT(&(uParam0->f_2), 1);
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_2, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		MISC::SET_BIT(&(uParam0->f_2), 0);
	}
}

void func_170(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 7))
		{
			func_57(uParam0, "DCTL_COUNTDOWN3", 0, 0);
			MISC::SET_BIT(&(uParam0->f_2), 7);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2, 8))
		{
			func_57(uParam0, "DCTL_COUNTDOWN2", 0, 0);
			MISC::SET_BIT(&(uParam0->f_2), 8);
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_2, 9))
	{
		func_57(uParam0, "DCTL_COUNTDOWN1", 0, 0);
		MISC::SET_BIT(&(uParam0->f_2), 9);
	}
}

void func_171(var uParam0)
{
	if (!func_12(&(uParam0->f_16)))
	{
		func_10(&(uParam0->f_16), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			func_133(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	if (MISC::IS_BIT_SET(uParam0->f_2, 16))
	{
		func_55(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 16);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2, 18))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		MISC::SET_BIT(&(uParam0->f_2), 18);
	}
	func_155(uParam0);
	func_172(uParam0);
	func_149(uParam0);
	func_148(uParam0);
	if (Local_307 == 10)
	{
		func_188(uParam0, 10);
		func_54(1);
	}
	else if (Local_307 >= 6)
	{
		func_188(uParam0, 6);
	}
}

void func_172(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 6))
	{
		func_57(uParam0, "DCTL_READY", 0, 2);
		MISC::SET_BIT(&(uParam0->f_2), 6);
	}
}

void func_173(var uParam0)
{
	func_60(uParam0);
	func_174(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_2, 16))
	{
		func_55(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 16);
	}
	if (Local_307.f_77 == 3 && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 5))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_307.f_2[iVar1] == -1)
				{
					bVar0 = false;
				}
				else
				{
					if (iVar1 == iLocal_237)
					{
						Local_385[iLocal_237] = Local_307.f_2[iLocal_237];
						func_147(Local_385[iVar1], &(uParam0->f_35[iVar1].f_2), &(uParam0->f_35[iVar1].f_15), &(uParam0->f_35[iVar1].f_16), &(uParam0->f_35[iVar1].f_8));
					}
					else if (Local_385[iVar1] == Local_307.f_2[iVar1])
					{
						func_147(Local_385[iVar1], &(uParam0->f_35[iVar1].f_2), &(uParam0->f_35[iVar1].f_15), &(uParam0->f_35[iVar1].f_16), &(uParam0->f_35[iVar1].f_8));
					}
					else
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (bVar0)
				{
					MISC::SET_BIT(&(Local_385[iLocal_237].f_1), 5);
				}
				if (Local_307 == 10)
				{
					AUDIO::STOP_SOUND(uParam0->f_3);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_188(uParam0, 10);
					func_54(0);
				}
				else if (Local_307 >= 5)
				{
					uParam0->f_5 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_3, "FadeOut", 7f);
					func_70();
					func_188(uParam0, 5);
					MISC::CLEAR_BIT(&(Local_385[iLocal_237].f_1), 5);
				}
			}

void func_174(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 13))
	{
		func_57(uParam0, "DCTL_LOADING", 0, 2);
		MISC::SET_BIT(&(uParam0->f_2), 13);
	}
}

void func_175(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_2, 14))
	{
		func_178(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_2), 14);
		MISC::SET_BIT(&(uParam0->f_2), 17);
	}
	func_60(uParam0);
	func_177(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3)) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
		{
			func_79(3);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3)) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if ((!MISC::IS_BIT_SET(uParam0->f_2, 4) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 3)) && !MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4))
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME("DCTL_TITLEHELP", 0);
		MISC::SET_BIT(&(uParam0->f_2), 5);
	}
	func_176(uParam0);
	func_148(uParam0);
	func_64(uParam0, 0);
	if (Local_307 > 3)
	{
		if (MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 4) || MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 2))
		{
			func_188(uParam0, 11);
		}
		else
		{
			if (Local_307 == 10)
			{
				func_6(0);
				func_5(0, 0);
				func_188(uParam0, 10);
				func_54(1);
				return;
			}
			func_14(uParam0);
			func_6(0);
			func_5(0, 0);
			if (Local_307 == 4)
			{
				func_188(uParam0, 4);
			}
			else
			{
				uParam0->f_5 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_3, "FadeOut", 7f);
				func_188(uParam0, 5);
			}
		}
	}
	else if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_3))
	{
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
}

void func_176(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_385[iVar0] > -1)
		{
			if (MISC::IS_BIT_SET(Local_385[iVar0].f_1, 3) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				MISC::SET_BIT(&(uParam0->f_35[iVar0].f_3), 0);
				if (MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 1))
				{
					MISC::CLEAR_BIT(&(uParam0->f_35[iVar0].f_3), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Local_385[iVar0].f_1, 4) && !MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				MISC::SET_BIT(&(uParam0->f_35[iVar0].f_3), 1);
				if (MISC::IS_BIT_SET(uParam0->f_35[iVar0].f_3, 0))
				{
					MISC::CLEAR_BIT(&(uParam0->f_35[iVar0].f_3), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_177(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2, 16))
	{
		MISC::SET_BIT(&(uParam0->f_2), 16);
	}
	func_65(uParam0, "DCTL_INSERT", 0);
	func_83(uParam0);
	func_81(uParam0);
}

void func_178(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "HIDE_LOADING_SCREEN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_179(var uParam0)
{
	if (!MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 1))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_32(PLAYER::PLAYER_ID(), 0, 0, 0);
			func_182();
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		func_49(1, 0, 1, 0);
		AUDIO::START_AUDIO_SCENE("DLC_Exec_Arc_Mac_Playing_Game_Scene");
		func_181(uParam0);
		func_10(&(uParam0->f_10), 0, 0);
		MISC::SET_BIT(&(uParam0->f_2), 14);
		MISC::SET_BIT(&(Local_385[iLocal_237].f_1), 1);
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_180(uParam0, 1);
				break;
			
			case 1:
				if (func_8(&(uParam0->f_10), 1800, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_180(uParam0, 2);
				}
				break;
			
			case 2:
				if (func_8(&(uParam0->f_10), 2250, 0))
				{
					if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_3))
					{
						AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					}
					func_180(uParam0, 3);
				}
				break;
		}
		if (func_8(&(uParam0->f_10), 2200, 0))
		{
			MISC::SET_BIT(&(uParam0->f_2), 17);
		}
		if (func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1 == 3 && func_8(&(uParam0->f_10), 3000, 0)) && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
		{
			MISC::SET_BIT(&(Local_385[iLocal_237].f_1), 6);
			func_70();
			if (Local_307 == 9)
			{
				func_188(uParam0, 9);
			}
			else if (Local_307 >= 3)
			{
				func_188(uParam0, 3);
			}
		}
	}
}

void func_180(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_181(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_34, "SHOW_LOADING_SCREEN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_182()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_183(var uParam0)
{
	if (!MISC::IS_BIT_SET(Local_385[iLocal_237].f_1, 0))
	{
		func_185();
		uParam0->f_34 = unk_0x67D02A194A2FC2BD("dont_cross_the_line");
		if (func_184() && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_34))
		{
			MISC::SET_BIT(&(Local_385[iLocal_237].f_1), 0);
			func_188(uParam0, 2);
		}
	}
}

int func_184()
{
	if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("LineArcadeMinigame")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("LineArcadeMinigame", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("DCTL", 3);
		MISC::SET_BIT(&Global_1661999, 6);
		return 1;
	}
	return 0;
}

void func_186(var uParam0)
{
	if (iLocal_237 == -1)
	{
		Global_4456448.f_227352 = 1;
		uParam0->f_8 = func_187();
		uParam0->f_3 = AUDIO::GET_SOUND_ID();
		uParam0->f_6 = AUDIO::GET_SOUND_ID();
		uParam0->f_7 = AUDIO::GET_SOUND_ID();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_35[iVar0].f_5 = AUDIO::GET_SOUND_ID();
			uParam0->f_35[iVar0].f_6 = AUDIO::GET_SOUND_ID();
			uParam0->f_35[iVar0].f_7 = AUDIO::GET_SOUND_ID();
			iVar0++;
		}
		Global_1590535[PLAYER::PLAYER_ID()].f_750 = 1;
		iLocal_237 = NETWORK::PARTICIPANT_ID_TO_INT();
		Local_385[iLocal_237] = -1;
		uParam0->f_34 = 0;
		func_79(2);
		func_180(uParam0, 0);
	}
	if (Local_385[iLocal_237] == -1)
	{
		if (Local_307.f_2[iLocal_237] > -1)
		{
			Local_385[iLocal_237] = Local_307.f_2[iLocal_237];
		}
	}
	else
	{
		func_188(uParam0, 1);
	}
	func_6(0);
}

float func_187()
{
	iVar0 = 0;
	iVar1 = 0;
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (MISC::IS_PC_VERSION())
	{
		if (fVar2 >= 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	*uParam0 = iParam1;
}

void func_189(var uParam0)
{
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	func_209(1);
	func_208(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_207();
	func_206();
	func_205();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if ((!func_203(PLAYER::PLAYER_ID()) && !func_202(PLAYER::PLAYER_ID())) && !func_200(PLAYER::PLAYER_ID()))
	{
		func_188(uParam0, 11);
	}
	if (!func_45())
	{
		func_188(uParam0, 11);
	}
	if (func_202(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_188(uParam0, 11);
	}
	if (func_200(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_188(uParam0, 11);
	}
	func_199();
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	if (Local_307 > 2)
	{
		func_192(0);
	}
	func_190(uParam0);
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && Local_307 > 2)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !Local_307 == 4)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_307.f_2[iVar1] == -1)
				{
					Local_307.f_2[iVar1] = func_24();
					bVar0 = true;
				}
			}
			else if (Local_307.f_2[iVar1] != -1)
			{
				Local_307.f_2[iVar1] = -1;
				bVar0 = true;
			}
			iVar1++;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
				{
					iVar2 = 0;
					while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
						{
							if (iVar2 != iVar1 && (Local_307.f_2[iVar1] == Local_307.f_2[iVar2] || Local_307.f_2[iVar1] == -1))
							{
								Local_307.f_2[iVar1] = -1;
								return;
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_190(var uParam0)
{
	uParam0->f_8 = func_187();
	uParam0->f_9 = func_191(uParam0->f_8);
}

float func_191(float fParam0)
{
	return (1.778f / fParam0);
}

void func_192(int iParam0)
{
	if (func_198())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_197(0))
		{
			func_193(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_193(int iParam0)
{
	if (func_198())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_196())
		{
			func_195(1, 1);
		}
		else
		{
			func_195(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_194())
	{
		Global_19486.f_1 = 3;
	}
}

int func_194()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_195(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_197(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_196()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_197(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_199()
{
	Global_22211.f_134 = 1;
}

int func_200(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_201(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_202(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_201(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (func_204(Global_1590535[iParam0].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

void func_205()
{
	Global_2537071.f_4532 = 0;
}

void func_206()
{
	Global_22211.f_6 = 1;
}

void func_207()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = MISC::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_208(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_209(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_210()
{
	func_29(&uLocal_394);
	func_30();
}

int func_211()
{
	func_218(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_217())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (func_215(159))
	{
		if (!func_214())
		{
			return 1;
		}
	}
	if (func_215(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_212() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_212()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_212()
{
	switch (func_92())
	{
		case 0:
			return func_213();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_213()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_214()
{
	return Global_2450632.f_598;
}

int func_215(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_2460680;
}

bool func_217()
{
	return Global_2450632.f_593;
}

void func_218(var uParam0)
{
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
					func_219(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_219(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_21(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_220(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_220(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_221()
{
	SYSTEM::WAIT(0);
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_3, 3))
		{
			func_185();
		}
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_3), 3);
	}
}

void func_223(struct<21> Param0)
{
	func_227(4, Param0);
	if (!func_226(0, -1, 1))
	{
		func_210();
	}
	func_225();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_307, 78);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_385, 9);
	if (!func_224())
	{
		func_210();
	}
}

int func_224()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_217())
		{
			return 0;
		}
		if (func_215(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_225()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_307.f_2[iVar0] = -1;
		iVar0++;
	}
}

int func_226(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
		if (!func_94())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_217())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_215(157))
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_30();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_30();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_227(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_30();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

