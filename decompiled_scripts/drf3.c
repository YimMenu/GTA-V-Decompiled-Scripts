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
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_139();
		func_134();
	}
	iLocal_70 = func_133();
	func_132(&cLocal_49, iLocal_70);
	bVar1 = func_131(0) < func_130(iLocal_70);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_48)
		{
			case 0:
				if (bVar1)
				{
					if (func_126(&uLocal_74, &uLocal_335, &uLocal_524, &iLocal_1261))
					{
						func_124(&uLocal_239, &uLocal_335, iLocal_1261);
						func_124(&uLocal_287, &uLocal_524, iLocal_1261);
						bVar2 = true;
					}
				}
				else
				{
					func_90(&uLocal_74, &uLocal_335, &uLocal_524, &iLocal_1261, &uLocal_769, &uLocal_878, &iLocal_1262, &uLocal_1043, &uLocal_1152, &iLocal_1263, &cLocal_49, iLocal_70);
					Global_95205 = 0;
					func_124(&uLocal_239, &uLocal_335, iLocal_1261);
					func_124(&uLocal_287, &uLocal_524, iLocal_1261);
					func_124(&uLocal_713, &uLocal_769, iLocal_1262);
					func_124(&uLocal_741, &uLocal_878, iLocal_1262);
					func_124(&uLocal_987, &uLocal_1043, iLocal_1263);
					func_124(&uLocal_1015, &uLocal_1152, iLocal_1263);
					iVar3 = 0;
				}
				iLocal_48 = 1;
				break;
			
			case 1:
				if (bVar1)
				{
					if (bVar2)
					{
						func_89(iLocal_1261, &uLocal_74, 36, "DrfAud", &uLocal_239, &uLocal_287, 9, 1, 0, 0, 0);
						iLocal_48 = 3;
					}
					else
					{
						iLocal_48 = 2;
					}
				}
				else if (func_77(iLocal_1261, &uLocal_74, 36, "DrfAud", &uLocal_239, &uLocal_287, "SHRINK_CELL_Q", 9, 1, 0, 0, 0))
				{
					func_76(iLocal_1262, iLocal_1263, &uLocal_713, &uLocal_741, &uLocal_987, &uLocal_1015);
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!MOBILE::CAN_PHONE_BE_SEEN_ON_SCREEN())
				{
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
					{
						SYSTEM::WAIT(0);
					}
					func_75("SHRINK_BROKE", -1);
					iLocal_48 = 5;
				}
				break;
			
			case 3:
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > iVar0)
				{
					iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
				if (func_74())
				{
					func_71(&uLocal_71);
					iVar3 = 1;
					iVar0 = -1;
					if (func_64(&uLocal_71, 30f))
					{
						func_63(1);
					}
				}
				if (PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					func_57(0);
				}
				if (func_56())
				{
					if ((!bVar1 && iVar3) && ((func_133() == 2 && iVar0 >= 8) || (func_133() == 3 && iVar0 >= 10)))
					{
						iLocal_48 = 4;
					}
					else
					{
						if (bVar1)
						{
							while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
							{
								SYSTEM::WAIT(0);
							}
							func_75("SHRINK_BROKE", -1);
						}
						iLocal_48 = 5;
					}
				}
				break;
			
			case 4:
				func_13(func_50(), 24, func_130(iLocal_70));
				func_11(0, 0);
				func_134();
				break;
			
			case 5:
				if (!bVar1 || !func_10("SHRINK_BROKE"))
				{
					func_1(0);
					func_134();
				}
				break;
		}
	}
}

void func_1(int iParam0)
{
	if (Global_111638.f_9080 || func_9(0))
	{
		iVar0 = func_8();
		if (!func_2(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_2(int iParam0)
{
	func_7();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_6(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_3(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_89532[iVar1].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_89496[iParam0].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_89496[iParam0].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_3(var uParam0, int iParam1)
{
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_5(Global_111638.f_18528[iVar0], &Var2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_4(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0] = { 0f, 0f, 0f };
				Global_96134[iVar0].f_9 = 0f;
				Global_96134[iVar0].f_12 = 0f;
				Global_96134[iVar0].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_10 = 0f;
				Global_96134[iVar0].f_13 = 0f;
				Global_96134[iVar0].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_11 = 0f;
				Global_96134[iVar0].f_14 = 0f;
				Global_96134[iVar0].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_26 = 0f;
				Global_96134[iVar0].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_27 = 0f;
				Global_96134[iVar0].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_4(var uParam0)
{
	*uParam0 = -15;
}

int func_5(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_5(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_5(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_6(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_7()
{
	Global_98779 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_50())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_50())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		MISC::SET_BIT(&(Global_98744.f_20), 25);
	}
}

int func_8()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_9(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

bool func_10(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_11(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_9(0) && Global_76868.f_1 == 1) && func_12(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_9(0))
	{
		iVar0 = func_8();
		iVar1 = Global_89496[iVar0];
		uVar2 = Global_76891.f_109[iVar1];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_89496[iVar0].f_1), 4);
		MISC::SET_BIT(&Global_76870, 1);
		Global_76886 = uVar2;
		Global_76887 = MISC::GET_GAME_TIMER();
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2)
{
	if (func_49(iParam0) == 3)
	{
		return 0;
	}
	if (func_49(iParam0) == 4)
	{
		return 0;
	}
	return func_14(func_49(iParam0), 0, iParam1, iParam2, 0);
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_48();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_47(99, 1);
					func_46(-656546900, iParam3);
					break;
				
				case 1:
					func_46(-2098183071, iParam3);
					break;
				
				case 2:
					func_46(1578119842, iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_25(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_46(-1190521599, iParam3);
							break;
						
						case 1:
							func_46(490143716, iParam3);
							break;
						
						case 2:
							func_46(121069433, iParam3);
							break;
					}
					if (func_25(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(219506691, iParam3);
							break;
						
						case 1:
							func_46(1871505786, iParam3);
							break;
						
						case 2:
							func_46(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(27639974, iParam3);
							break;
						
						case 1:
							func_46(422258364, iParam3);
							break;
						
						case 2:
							func_46(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_46(1806738963, iParam3);
							break;
						
						case 1:
							func_46(1576781520, iParam3);
							break;
						
						case 2:
							func_46(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_46(408653638, iParam3);
									break;
								
								case 1:
									func_46(-424799277, iParam3);
									break;
								
								case 2:
									func_46(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_46(2038531975, iParam3);
									break;
								
								case 1:
									func_46(-572903575, iParam3);
									break;
								
								case 2:
									func_46(-953947924, iParam3);
									break;
							}
							if (func_25(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_46(-445823242, iParam3);
									break;
								
								case 1:
									func_46(-1386757215, iParam3);
									break;
								
								case 2:
									func_46(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_46(-1744069936, iParam3);
									break;
								
								case 1:
									func_46(799609312, iParam3);
									break;
								
								case 2:
									func_46(181688102, iParam3);
									break;
							}
							func_24(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_17(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_17(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_46(-330339780, iParam3);
					break;
				
				case 1:
					func_46(1697564429, iParam3);
					break;
				
				case 2:
					func_46(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_16(iParam0);
	if (Global_41431 == 15)
	{
		func_15(0);
	}
	return 1;
}

void func_15(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(1153264002, iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(-1921710979, iVar0, 1);
			break;
	}
}

void func_17(int iParam0)
{
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_23(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_23(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_23(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_20(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_20(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_20(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_20(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_20(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_20(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_19()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_19()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_18(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_19()
{
	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312745;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_24(int iParam0)
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_25(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_27(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_27(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_27(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_27(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_26(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_26(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_26(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_26(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_26(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_26(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_19()].f_6174.f_10, iParam0);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_21(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_30(bool bParam0)
{
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)
{
	if (func_44(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_42(&Global_4270065))
	{
		if (func_40(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4270064 - 0.5f));
}

void func_37(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_39(var uParam0)
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_45(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_48()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_49(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_50()
{
	func_51();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_51()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_54(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_53(PLAYER::PLAYER_PED_ID());
			if (func_52(iVar0) && (!func_44(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_52(Global_111638.f_2358.f_539.f_4321))
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

bool func_52(int iParam0)
{
	return iParam0 < 3;
}

int func_53(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)
{
	if (func_52(iParam0))
	{
		return func_55(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_55(int iParam0)
{
	return Global_1798[iParam0];
}

int func_56()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0)
{
	if (func_62())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_61())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_19486.f_1 = 3;
	}
}

int func_58()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_60(0))
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

int func_60(int iParam0)
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

bool func_61()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_62()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_63(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 24);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 24);
	}
}

int func_64(var uParam0, float fParam1)
{
	if (func_66(uParam0, fParam1))
	{
		func_65(uParam0);
		return 1;
	}
	return 0;
}

void func_65(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_66(var uParam0, float fParam1)
{
	if (func_70(uParam0))
	{
		if (func_67(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_67(var uParam0)
{
	if (func_70(uParam0))
	{
		if (func_69(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_68(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_68(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_69(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_70(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_71(var uParam0)
{
	if (!func_70(uParam0))
	{
		func_72(uParam0);
	}
}

void func_72(var uParam0)
{
	func_73(uParam0, 0f);
}

void func_73(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_68(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_74()
{
	if (MISC::IS_BIT_SET(Global_7357, 23))
	{
		if (Global_20858 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_75(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_76(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (MISC::IS_BIT_SET(Global_7357, 9))
	{
		return 0;
	}
	MISC::SET_BIT(&Global_7357, 9);
	Global_21789 = iParam0;
	iVar0 = 0;
	while (iVar0 < iParam0 + 1)
	{
		StringCopy(&(Global_21064[iVar0]), (*uParam2)[iVar0], 24);
		StringCopy(&(Global_21426[iVar0]), (*uParam3)[iVar0], 24);
		iVar0++;
	}
	Global_21788 = iParam1;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		StringCopy(&(Global_21245[iVar1]), (*uParam4)[iVar1], 24);
		StringCopy(&(Global_21607[iVar1]), (*uParam5)[iVar1], 24);
		iVar1++;
	}
	return 1;
}

bool func_77(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	func_88(uParam1, iParam2, sParam3, iParam9, iParam10, 0);
	func_87();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_86(iParam0);
	Global_20857 = 1;
	StringCopy(&Global_20953, sParam6, 24);
	Global_20804 = 3;
	return func_78(uParam4, uParam5, iParam7, bParam11);
}

int func_78(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_85();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_83();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0] = { Global_20985[0] };
			Global_20959[1] = { Global_20985[1] };
			Global_21011[0] = { Global_21037[0] };
			Global_21011[1] = { Global_21037[1] };
			Global_20972[0] = { Global_20998[0] };
			Global_20972[1] = { Global_20998[1] };
			Global_21024[0] = { Global_21050[0] };
			Global_21024[1] = { Global_21050[1] };
		}
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam3)
			{
				func_82();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_81())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_58())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_80();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_79();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_85();
	}
	return 0;
}

void func_79()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_80()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_81()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_82()
{
	if (func_44(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_50();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_83()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_85()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_86(var uParam0)
{
	Global_20802 = uParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_87()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_88(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = uParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_89(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_88(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_87();
	if (iParam7 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_86(iParam0);
	return func_78(uParam4, uParam5, iParam6, bParam10);
}

void func_90(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, char* sParam10, int iParam11)
{
	HUD::REQUEST_ADDITIONAL_TEXT("SHRINK", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DrfAud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	func_123(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_123(uParam0, 1, 0, "FRIEDLANDER", 0, 1);
	func_122(uParam1, uParam2, iParam3, iParam11);
	Var1 = { func_118(iParam11, &uVar5, &uVar6, 1) };
	iVar0 = func_117(&Var1);
	func_113(uParam1, uParam2, iParam3, iVar0);
	func_112(uParam1, uParam2, iParam3, iParam11);
	func_105(uParam1, uParam2, iParam3, iParam11);
	func_104(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, iParam11);
	func_94(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, sParam10, iParam11);
	func_93(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, sParam10);
	func_91(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, iParam11);
	iVar7 = 0;
	while (iVar7 < 47)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar7]))
		{
			iVar7 = 47;
		}
		iVar7++;
	}
	iVar7 = 0;
	while (iVar7 < 27)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam4[iVar7]))
		{
			iVar7 = 27;
		}
		iVar7++;
	}
	iVar7 = 0;
	while (iVar7 < 27)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam7[iVar7]))
		{
			iVar7 = 27;
		}
		iVar7++;
	}
}

void func_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam6)
	{
		case 2:
			StringCopy(&Var0, "DRF_3", 16);
			iVar4 = 17;
			iVar5 = 7;
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_4", 16);
			iVar4 = 6;
			iVar5 = 17;
			break;
		
		default:
			break;
	}
	func_92(uParam0, uParam1, uParam4, &Var0, iVar4, iVar5, 0);
	func_92(uParam2, uParam3, uParam5, &Var0, iVar4, iVar5, 0);
}

void func_92(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	iVar4 = iParam4;
	while (iVar4 <= ((iParam4 + iParam5) - 1))
	{
		StringCopy(&Var0, sParam3, 16);
		StringConCat(&Var0, "_", 16);
		if (iVar4 < 9 && iParam6)
		{
			StringConCat(&Var0, "0", 16);
		}
		StringIntConCat(&Var0, iVar4 + 1, 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
		{
			iVar5 = (*uParam2 + iVar6);
			StringCopy(uParam0[iVar5], sParam3, 16);
			*uParam1[iVar5] = { Var0 };
			iVar6++;
		}
		iVar4++;
	}
	*uParam2 = (*uParam2 + iVar6);
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (uParam6->f_19)
	{
		case 1:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 8;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 2:
		case 4:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 9;
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 6;
					break;
				
				case 2:
					iVar0 = 7;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 5:
		case 6:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 3;
					break;
				
				case 1:
					iVar0 = 6;
					break;
				
				case 2:
					iVar0 = 7;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 7:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 4;
					break;
				
				case 2:
					iVar0 = 6;
					break;
				
				case 3:
					iVar0 = 7;
					break;
				
				case 4:
					iVar0 = 8;
					break;
				
				case 5:
					iVar0 = 9;
					break;
			}
			break;
		
		case 8:
		case 9:
		case 11:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 3;
					break;
				
				case 2:
					iVar0 = 4;
					break;
				
				case 3:
					iVar0 = 6;
					break;
				
				case 4:
					iVar0 = 7;
					break;
				
				case 5:
					iVar0 = 8;
					break;
				
				case 6:
					iVar0 = 9;
					break;
				
				case 7:
					iVar0 = 11;
					break;
			}
			break;
		
		case 10:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					iVar0 = 3;
					break;
				
				case 1:
					iVar0 = 4;
					break;
				
				case 2:
					iVar0 = 6;
					break;
				
				case 3:
					iVar0 = 7;
					break;
				
				case 4:
					iVar0 = 8;
					break;
				
				case 5:
					iVar0 = 9;
					break;
				
				case 6:
					iVar0 = 11;
					break;
			}
			break;
		
		case 12:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 9;
					break;
				
				case 3:
					iVar0 = 11;
					break;
			}
			break;
	}
	func_92(uParam0, uParam1, uParam4, "PMCSUM", (iVar0 - 1), 1, 0);
	func_92(uParam2, uParam3, uParam5, "PMCSUM", (iVar0 - 1), 1, 0);
}

void func_94(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	switch (iParam7)
	{
		case 2:
			iVar4 = 1;
			break;
		
		case 3:
			iVar4 = 3;
			break;
	}
	func_92(uParam0, uParam1, uParam4, "DRF_SEX", iVar4, 1, 0);
	func_92(uParam2, uParam3, uParam5, "DRF_SEX", iVar4, 1, 0);
	Var0 = { func_95(uParam6, &iVar5, iParam7, 1) };
	func_92(uParam0, uParam1, uParam4, &Var0, 0, iVar5, 0);
	func_92(uParam2, uParam3, uParam5, &Var0, 0, iVar5, 0);
}

struct<4> func_95(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_103() <= 0)
	{
		if (!func_102())
		{
			iVar4 = func_99(1, 2, 3, 4, 12);
		}
		else if (func_98() >= 1)
		{
			iVar4 = func_99(5, 6, 7, 0, 0);
		}
		else
		{
			iVar4 = func_99(5, 7, 0, 0, 0);
		}
	}
	else if (func_103() >= 2)
	{
		iVar4 = func_99(10, 11, 0, 0, 0);
	}
	else if (!func_102())
	{
		if (iParam2 != 4)
		{
			iVar4 = func_99(8, 9, 0, 0, 0);
		}
		else
		{
			iVar4 = 9;
		}
	}
	else if (iParam2 != 4)
	{
		iVar4 = func_99(8, 9, 10, 0, 0);
	}
	else
	{
		iVar4 = func_99(9, 10, 0, 0, 0);
	}
	func_97(uParam0, iVar4);
	if (bParam3)
	{
		func_96(&(Global_111638.f_19956), iVar4, 1);
	}
	StringCopy(&Var0, "DRF_PR_", 16);
	switch (iVar4)
	{
		case 1:
			StringConCat(&Var0, "1_A", 16);
			*uParam1 = 3;
			break;
		
		case 2:
			StringConCat(&Var0, "1_B", 16);
			*uParam1 = 5;
			break;
		
		case 3:
			StringConCat(&Var0, "1_C", 16);
			*uParam1 = 3;
			break;
		
		case 4:
			StringConCat(&Var0, "1_D", 16);
			*uParam1 = 3;
			break;
		
		case 5:
			StringConCat(&Var0, "1_STR", 16);
			*uParam1 = 3;
			break;
		
		case 6:
			StringConCat(&Var0, "5_T1B", 16);
			*uParam1 = 5;
			break;
		
		case 7:
			StringCopy(&Var0, "5_T1C", 16);
			*uParam1 = 4;
			break;
		
		case 8:
			StringConCat(&Var0, "5PROA", 16);
			*uParam1 = 5;
			break;
		
		case 9:
			StringConCat(&Var0, "5PROB", 16);
			*uParam1 = 5;
			break;
		
		case 10:
			StringConCat(&Var0, "5STRA", 16);
			*uParam1 = 7;
			break;
		
		case 11:
			StringConCat(&Var0, "5STRB", 16);
			*uParam1 = 4;
			break;
		
		case 12:
			StringConCat(&Var0, "5_NON", 16);
			*uParam1 = 5;
			break;
	}
	return Var0;
}

void func_96(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	iParam1 += 11;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

int func_98()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_95209[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	if ((iParam0 > 0 && iParam0 < 13) && !func_101(&(Global_111638.f_19956), iParam0))
	{
		iVar2[iParam0] = 0;
	}
	else if ((iParam1 > 0 && iParam1 < 13) && !func_101(&(Global_111638.f_19956), iParam1))
	{
		iVar2[iParam1] = 0;
	}
	else if ((iParam2 > 0 && iParam2 < 13) && !func_101(&(Global_111638.f_19956), iParam2))
	{
		iVar2[iParam2] = 0;
	}
	else if ((iParam3 > 0 && iParam3 < 13) && !func_101(&(Global_111638.f_19956), iParam3))
	{
		iVar2[iParam3] = 0;
	}
	else if ((iParam4 > 0 && iParam4 < 13) && !func_101(&(Global_111638.f_19956), iParam4))
	{
		iVar2[iParam4] = 0;
	}
	iVar1 = func_100(&iVar2, 13, 1, 13);
	if (iVar1 > 0)
	{
		return iVar1;
	}
	if (iParam2 <= 0 || iParam2 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	}
	else if (iParam3 <= 0 || iParam3 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	}
	else if (iParam4 <= 0 || iParam4 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	}
	switch (iVar1)
	{
		case 1:
			return iParam0;
		
		case 2:
			return iParam1;
		
		case 3:
			return iParam2;
		
		case 4:
			return iParam3;
		
		case 5:
			return iParam4;
		
		default:
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*iParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

bool func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return 0;
	}
	iParam1 += 11;
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

bool func_102()
{
	return Global_95211 > 0;
}

int func_103()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_95206[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_104(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam6)
	{
		case 2:
			iVar0 = 3;
			iVar1 = 1;
			break;
		
		case 3:
			iVar0 = 0;
			iVar1 = 3;
			break;
	}
	func_92(uParam0, uParam1, uParam4, "DRF_ACC", iVar0, 1, 0);
	func_92(uParam2, uParam3, uParam5, "DRF_DEN", iVar1, 1, 0);
}

void func_105(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam3)
	{
		case 2:
			iVar4 = 2;
			break;
		
		case 3:
			iVar4 = 3;
			break;
	}
	func_92(uParam0, uParam1, uParam2, "DRF_OPW", iVar4, 1, 0);
	Var0 = { func_106(iParam3, 0, 1, &iVar5) };
	func_92(uParam0, uParam1, uParam2, &Var0, 0, iVar5, 0);
}

struct<4> func_106(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	if ((((!func_111(&(Global_111638.f_19956), 8) && iParam1) && iParam0 != 4) && func_109(3) > 0) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216) < 0.75f)
	{
		iVar4 = 8;
		*uParam3 = 4;
	}
	else
	{
		if (!func_111(&(Global_111638.f_19956), 1) && func_109(5) > 0)
		{
			MISC::SET_BIT(&iVar5, 1);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 2) && func_109(7) >= 2)
		{
			MISC::SET_BIT(&iVar5, 2);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 3) && ((((func_109(8) > 0 || func_109(9) > 0) && func_109(7) > 0) && iParam1) && iParam0 != 4))
		{
			MISC::SET_BIT(&iVar5, 3);
			iVar6++;
		}
		if ((!func_111(&(Global_111638.f_19956), 4) && func_109(1) > 0) && func_109(1) < 3)
		{
			MISC::SET_BIT(&iVar5, 4);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 5) && func_109(1) >= 3)
		{
			MISC::SET_BIT(&iVar5, 5);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 6) && func_109(0) > 0)
		{
			MISC::SET_BIT(&iVar5, 6);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 7))
		{
			MISC::SET_BIT(&iVar5, 7);
			iVar6++;
		}
		if (((!func_111(&(Global_111638.f_19956), 8) && iParam1) && func_109(3) > 0) && iParam0 != 4)
		{
			MISC::SET_BIT(&iVar5, 8);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 9))
		{
			MISC::SET_BIT(&iVar5, 9);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 10))
		{
			MISC::SET_BIT(&iVar5, 10);
			iVar6++;
		}
		if (!func_111(&(Global_111638.f_19956), 11))
		{
			MISC::SET_BIT(&iVar5, 11);
			iVar6++;
		}
		if (iVar6 <= 0)
		{
			if (iParam0 != 4)
			{
				iVar4 = func_108(7, 9, 10, 11, 0);
			}
			else
			{
				iVar4 = func_108(7, 9, 10, 0, 0);
			}
		}
		else
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar6 + 1);
			iVar8 = 1;
			while (iVar7 > 0)
			{
				if (MISC::IS_BIT_SET(iVar5, iVar8))
				{
					iVar7 = (iVar7 - 1);
					if (iVar7 == 0)
					{
						iVar4 = iVar8;
					}
				}
				iVar8++;
			}
		}
		switch (iVar4)
		{
			case 1:
				*uParam3 = 5;
				break;
			
			case 2:
				*uParam3 = 5;
				break;
			
			case 3:
				*uParam3 = 7;
				break;
			
			case 4:
				*uParam3 = 4;
				break;
			
			case 5:
				*uParam3 = 4;
				break;
			
			case 6:
				*uParam3 = 5;
				break;
			
			case 7:
				*uParam3 = 4;
				break;
			
			case 8:
				*uParam3 = 4;
				break;
			
			case 9:
				*uParam3 = 4;
				break;
			
			case 10:
				*uParam3 = 5;
				break;
			
			case 11:
				*uParam3 = 7;
				break;
			}
	}
	if (bParam2)
	{
		func_107(&(Global_111638.f_19956), iVar4, 1);
	}
	StringCopy(&Var0, "DRF_OWR_", 16);
	if (iVar4 >= 1 && iVar4 <= 3)
	{
		StringIntConCat(&Var0, iVar4, 16);
	}
	else if (iVar4 < 7)
	{
		StringIntConCat(&Var0, 4, 16);
		if (iVar4 == 4)
		{
			StringConCat(&Var0, "A", 16);
		}
		else if (iVar4 == 5)
		{
			StringConCat(&Var0, "B", 16);
		}
		else
		{
			StringConCat(&Var0, "C", 16);
		}
	}
	else
	{
		StringIntConCat(&Var0, 7, 16);
		if (iVar4 == 7)
		{
			StringConCat(&Var0, "A", 16);
		}
		else if (iVar4 == 8)
		{
			StringConCat(&Var0, "B", 16);
		}
		else if (iVar4 == 9)
		{
			StringConCat(&Var0, "C", 16);
		}
		else if (iVar4 == 10)
		{
			StringConCat(&Var0, "D", 16);
		}
		else
		{
			StringConCat(&Var0, "E", 16);
		}
	}
	return Var0;
}

void func_107(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	if ((iParam0 > 0 && iParam0 < 12) && !func_111(&(Global_111638.f_19956), iParam0))
	{
		iVar2[iParam0] = 0;
		bVar15 = true;
	}
	if ((iParam1 > 0 && iParam1 < 12) && !func_111(&(Global_111638.f_19956), iParam1))
	{
		iVar2[iParam1] = 0;
		bVar15 = true;
	}
	if ((iParam2 > 0 && iParam2 < 12) && !func_111(&(Global_111638.f_19956), iParam2))
	{
		iVar2[iParam2] = 0;
		bVar15 = true;
	}
	if ((iParam3 > 0 && iParam3 < 12) && !func_111(&(Global_111638.f_19956), iParam3))
	{
		iVar2[iParam3] = 0;
		bVar15 = true;
	}
	if ((iParam4 > 0 && iParam4 < 12) && !func_111(&(Global_111638.f_19956), iParam4))
	{
		iVar2[iParam4] = 0;
		bVar15 = true;
	}
	if (!bVar15)
	{
		if (iParam0 > 0 && iParam0 < 12)
		{
			iVar2[iParam0] = 0;
		}
		if (iParam1 > 0 && iParam1 < 12)
		{
			iVar2[iParam1] = 0;
		}
		if (iParam2 > 0 && iParam2 < 12)
		{
			iVar2[iParam2] = 0;
		}
		if (iParam3 > 0 && iParam3 < 12)
		{
			iVar2[iParam3] = 0;
		}
		if (iParam4 > 0 && iParam4 < 12)
		{
			iVar2[iParam4] = 0;
		}
	}
	iVar1 = func_100(&iVar2, 12, 1, 12);
	if (iVar1 > 0)
	{
		return iVar1;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	switch (iVar1)
	{
		case 1:
			return iParam0;
		
		case 2:
			return iParam1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_110(&Global_95212, 1);
			break;
		
		case 1:
			return func_110(&Global_95214, 3);
			break;
		
		case 2:
			return func_110(&Global_95218, 1);
			break;
		
		case 3:
			return func_110(&Global_95220, 1);
			break;
		
		case 4:
			return func_110(&Global_95222, 1);
			break;
		
		case 5:
			return func_110(&Global_95224, 1);
			break;
		
		case 6:
			return func_110(&Global_95226, 1);
			break;
		
		case 7:
			return func_110(&Global_95228, 2);
			break;
		
		case 8:
			return func_110(&Global_95231, 1);
			break;
		
		case 9:
			return func_110(&Global_95233, 1);
			break;
	}
	return 0;
}

int func_110(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

void func_112(var uParam0, var uParam1, var uParam2, int iParam3)
{
	Var0 = { func_118(iParam3, &iVar4, &iVar5, 1) };
	func_92(uParam0, uParam1, uParam2, &Var0, iVar4, iVar5, 0);
}

void func_113(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		func_92(uParam0, uParam1, uParam2, "DRF_OVG", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 1, 0);
		func_92(uParam0, uParam1, uParam2, "DRF_TMG", func_115(func_116(), 0, 2), 1, 0);
	}
	else if (iParam3 == 1)
	{
		func_92(uParam0, uParam1, uParam2, "DRF_OVO", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 1, 0);
		func_114(uParam0, uParam1, uParam2, "PDRTMO", 3);
	}
	else
	{
		func_92(uParam0, uParam1, uParam2, "DRF_OVB", 0, 1, 0);
		func_92(uParam0, uParam1, uParam2, "DRF_TMB", 2, 1, 0);
	}
}

void func_114(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4)
{
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iParam4 + 1);
	StringCopy(uParam0[*uParam2], sParam3, 16);
	StringCopy(uParam1[*uParam2], sParam3, 16);
	StringConCat(uParam1[*uParam2], "_", 16);
	if (iVar0 < 10)
	{
		StringConCat(uParam1[*uParam2], "0", 16);
	}
	StringIntConCat(uParam1[*uParam2], iVar0, 16);
	*uParam2++;
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_116()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_117(var uParam0)
{
	iVar0 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return iVar0;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "DRF_SOL1"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "DRF_EXILE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "DRF_SOL2"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "DRF_MIC2"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

struct<4> func_118(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (func_121(59) && !func_121(45))
	{
		if (iParam0 == 2)
		{
			StringCopy(&Var0, "DRF_SOL1", 16);
			*uParam1 = 0;
			*uParam2 = 19;
			if (bParam3)
			{
				func_120(&(Global_111638.f_19956), 6);
			}
		}
	}
	else if (func_121(14) && !func_121(16))
	{
		StringCopy(&Var0, "DRF_EXILE", 16);
		*uParam1 = 0;
		*uParam2 = 9;
		if (bParam3)
		{
			func_120(&(Global_111638.f_19956), 7);
		}
	}
	else if (func_121(16) && !func_121(39))
	{
		StringCopy(&Var0, "DRF_EXILE", 16);
		*uParam1 = 9;
		*uParam2 = 10;
		if (bParam3)
		{
			func_120(&(Global_111638.f_19956), 8);
		}
	}
	else if ((func_121(39) && !func_121(47)) && !func_119(518202687))
	{
		StringCopy(&Var0, "DRF_SOL2", 16);
		*uParam1 = 0;
		*uParam2 = 15;
		if (bParam3)
		{
			func_120(&(Global_111638.f_19956), 9);
		}
	}
	else if (func_121(47) && !func_121(22))
	{
		StringCopy(&Var0, "DRF_MIC2", 16);
		*uParam1 = 0;
		*uParam2 = 13;
		if (bParam3)
		{
			func_120(&(Global_111638.f_19956), 10);
		}
	}
	return Var0;
}

int func_119(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 31);
	*uParam0 = (*uParam0 || iParam1);
}

int func_121(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_122(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam3)
	{
		case 2:
			StringCopy(&Var0, "DRF_3", 16);
			iVar4 = 17;
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_4", 16);
			iVar4 = 6;
			break;
		
		default:
			break;
	}
	func_92(uParam0, uParam1, uParam2, &Var0, 0, iVar4, 0);
	switch (iParam3)
	{
		case 2:
			StringCopy(&Var0, "DRF_OVR_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_OVR_5", 16);
			break;
	}
	StringCopy(uParam0[*uParam2], "DRF_OVR", 16);
	*uParam1[*uParam2] = { Var0 };
	*uParam2++;
}

void func_123(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_124(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		(*uParam0)[iVar0] = func_125(uParam1[iVar0]);
		iVar0++;
	}
}

var func_125(var uParam0)
{
	return uParam0;
}

int func_126(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (Global_95205 != 0 && (MISC::GET_GAME_TIMER() - Global_95205) < 1800000)
	{
		return 0;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SHRINK", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DrfAud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	if (!func_127(uParam1, uParam2, uParam3))
	{
		return 0;
	}
	func_123(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_123(uParam0, 1, 0, "FRIEDLANDER", 0, 1);
	Global_95205 = MISC::GET_GAME_TIMER();
	return 1;
}

int func_127(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_129(&(Global_111638.f_19956));
	switch (iVar0)
	{
		case 0:
			func_92(uParam0, uParam1, uParam2, "PBTNM", 0, 11, 0);
			func_128(&(Global_111638.f_19956), 1);
			break;
		
		case 1:
			func_92(uParam0, uParam1, uParam2, "PBTNM2", 0, 10, 0);
			func_128(&(Global_111638.f_19956), 2);
			break;
		
		case 2:
			func_92(uParam0, uParam1, uParam2, "PBTNM3", 0, 12, 0);
			func_128(&(Global_111638.f_19956), 3);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void func_128(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 3)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && SYSTEM::SHIFT_LEFT(3, 5)));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 5));
}

int func_129(var uParam0)
{
	return SYSTEM::SHIFT_RIGHT(*uParam0, 5) & 3;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 500;
			break;
		
		case 1:
			return 1000;
			break;
		
		case 2:
			return 1500;
			break;
		
		case 3:
			return 1500;
			break;
		
		case 4:
			return 2000;
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	return Global_58686[iParam0];
}

void func_132(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "DRF_MIC_1_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_1_CS_2", 24);
			sParam0->f_18 = 293200;
			break;
		
		case 1:
			StringCopy(sParam0, "DRF_MIC_2_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR2", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_2_CS_2", 24);
			sParam0->f_18 = 243600;
			break;
		
		case 2:
			StringCopy(sParam0, "PBTINT1", 24);
			StringCopy(&(sParam0->f_6), "PBTNR2", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT1", 24);
			break;
		
		case 3:
			StringCopy(sParam0, "PBTINT2", 24);
			StringCopy(&(sParam0->f_6), "PBTNR3", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT2", 24);
			break;
		
		case 4:
			StringCopy(sParam0, "DRF_MIC_3_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_3_CS_2", 24);
			sParam0->f_18 = 252700;
			break;
		
		default:
			break;
	}
}

int func_133()
{
	return 2;
}

void func_134()
{
	func_138();
	func_136();
	func_135();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_135()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_95209[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_95206[iVar0] = 0;
		iVar0++;
	}
}

void func_136()
{
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = iVar1;
		switch (iVar0)
		{
			case 0:
				func_137(&Global_95212, 1);
				break;
			
			case 1:
				func_137(&Global_95214, 3);
				break;
			
			case 2:
				func_137(&Global_95218, 1);
				break;
			
			case 3:
				func_137(&Global_95220, 1);
				break;
			
			case 4:
				func_137(&Global_95222, 1);
				break;
			
			case 5:
				func_137(&Global_95224, 1);
				break;
			
			case 6:
				func_137(&Global_95226, 1);
				break;
			
			case 7:
				func_137(&Global_95228, 2);
				break;
			
			case 8:
				func_137(&Global_95231, 1);
				break;
			
			case 9:
				func_137(&Global_95233, 1);
				break;
		}
		iVar1++;
	}
}

void func_137(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_138()
{
	Global_19671 = 0;
	func_85();
}

void func_139()
{
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_9(0))
	{
		if (!func_140())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_2(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_7();
		}
	}
}

int func_140()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

