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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_48 = 94130617;
	Local_1088 = { 693.1158f, -1012.418f, 21.72802f };
	Local_1103 = { 692.8695f, -998.7867f, 22.3201f };
	Local_1106 = { 693.3784f, -1025.671f, 21.506f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_111();
		func_109();
		func_107();
	}
	func_99();
	MISC::SET_MISSION_FLAG(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1093)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1088, 200f, 200f, 200f, 0, 1, 0) && !CAM::IS_SPHERE_VISIBLE(Local_1088, 50f))
			{
				MISC::CLEAR_AREA(Local_1088, 50f, 1, 0, 0, 0);
				iLocal_1093 = 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1088, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_1093 = 0;
		}
		if (!iLocal_1098)
		{
			if (Global_95241.f_358 == MISC::GET_HASH_KEY("AHP1_TRUCKCALLED") || Global_95171)
			{
				func_98(543);
				Global_95241.f_358 = 0;
				iLocal_1098 = 1;
			}
		}
		func_97();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_911[iVar0]) && !PED::IS_PED_INJURED(iLocal_911[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_909))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_911[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
				{
					PED::SET_PED_KEEP_TASK(iLocal_911[iVar0], 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_911[iVar0], PLAYER::PLAYER_PED_ID(), 300f, 20000, 1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_911[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1134 < 8 && iLocal_1086 >= 0)
		{
			func_95();
		}
		switch (iLocal_1086)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_911)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_911[iVar1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) < 30f) && VEHICLE::IS_VEHICLE_MODEL(iVar2, 1938952078))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_920);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_920, 1862763509);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_94())
				{
					RECORDING::_0x293220DA1B46CEBC(15f, 15f, 4);
					AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
					iLocal_1086++;
				}
				break;
			
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_909))
				{
					func_94();
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == 1938952078)
					{
						iLocal_909 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_909, 1, 1);
					}
				}
				else
				{
					func_45();
					if (!iLocal_1094 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
					{
						func_44(iLocal_909, -1);
						func_43(iLocal_909, -1);
						func_42(541, 0);
						iLocal_1094 = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1088) < SYSTEM::POW(100f, 2f))
					{
						PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
					}
					func_94();
					if (bLocal_1099)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0))
						{
							func_36(iLocal_910);
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_910) && ENTITY::IS_ENTITY_AT_COORD(iLocal_909, Local_1088, Global_19, 1, 1, 0))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_907))
								{
									HUD::REMOVE_BLIP(&uLocal_907);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
								iLocal_1086++;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
					{
						func_36(iLocal_909);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909) && ENTITY::IS_ENTITY_AT_COORD(iLocal_909, Local_1088, Global_19, 1, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_907))
							{
								HUD::REMOVE_BLIP(&uLocal_907);
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
							iLocal_1086++;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_1086 = 100;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
				{
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_909, 1)) > 22500f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_909)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_909, 1)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
				{
					if (func_12(iLocal_909, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1097)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1097 = 1;
						}
						AUDIO::TRIGGER_MUSIC_EVENT("AHP1_STOP");
						RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
						iLocal_1086++;
					}
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_909, Local_1088, Global_19 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_1086 = 0;
					}
					else if (bLocal_1099)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_910))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_910, iLocal_909))
							{
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_909, 0, 0);
								if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_909))
								{
									VEHICLE::SET_VEHICLE_SIREN(iLocal_909, 0);
								}
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_909, 2);
								HUD::CLEAR_PRINTS();
								SYSTEM::SETTIMERA(0);
								iLocal_1086++;
							}
							else
							{
								VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_910, iLocal_909);
							}
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, 0))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_909))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_909, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_909, 2);
						HUD::CLEAR_PRINTS();
						SYSTEM::SETTIMERA(0);
						iLocal_1086++;
					}
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (HUD::DOES_BLIP_EXIST(uLocal_907))
				{
					HUD::REMOVE_BLIP(&uLocal_907);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1086++;
				break;
			
			case 101:
				func_94();
				if (bLocal_1099)
				{
					func_36(iLocal_910);
				}
				else
				{
					func_36(iLocal_909);
				}
				if (!iLocal_1100)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, 0)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_910, 0)))
					{
						if ((ENTITY::IS_ENTITY_IN_ZONE(PLAYER::PLAYER_PED_ID(), "DAVIS") && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (func_3())
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1100 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						HUD::CLEAR_PRINTS();
						iLocal_1086 = 0;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909))
					{
						if (!iLocal_1096)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1096 = 1;
							iLocal_1087 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((iLocal_1096 && (MISC::GET_GAME_TIMER() - iLocal_1087) < 7500) && HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_909, 1)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_909))
		{
			if (!func_2(iLocal_909))
			{
				func_1(iLocal_909, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_6()
{
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	func_7(0, 0);
	func_107();
}

void func_7(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_10(0) && Global_76868.f_1 == 1) && func_9(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_10(0))
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

int func_9(int iParam0)
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

bool func_10(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_12(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_13(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

void func_14(char* sParam0)
{
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	func_20(sParam0);
	while (!func_19())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_909))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, 0))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_909);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_911)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_911[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_911[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_95241.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_95241.f_9[iVar0]))
		{
			PED::DELETE_PED(&(Global_95241.f_9[iVar0]));
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 1, 0, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	if (func_18())
	{
		func_111();
	}
	else if (func_17())
	{
		func_15(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_107();
}

void func_15(struct<3> Param0, float fParam3)
{
	if (func_16(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { Param0 };
		Global_76865 = fParam3;
	}
}

bool func_16(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18()
{
	if (Global_98744 == 7)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0)
{
	func_35(sParam0);
	func_21(0);
}

void func_21(int iParam0)
{
	if (Global_111638.f_9080 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_22(int iParam0)
{
	func_27();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_26(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_23(&(Global_111638.f_2358.f_539), iVar1);
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

void func_23(var uParam0, int iParam1)
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
			if (!func_25(Global_111638.f_18528[iVar0], &Var2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_24(&(uParam0->f_2296[iVar0]));
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

void func_24(var uParam0)
{
	*uParam0 = -15;
}

int func_25(int iParam0, var uParam1, float fParam2)
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
			return func_25(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_25(8, uParam1, fParam2);
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

void func_26(int iParam0, bool bParam1)
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

void func_27()
{
	Global_98779 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_28())
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
			switch (func_28())
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

int func_28()
{
	func_29();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_29()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0];
}

void func_35(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_36(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_908))
					{
						HUD::REMOVE_BLIP(&uLocal_908);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_908))
				{
					uLocal_908 = func_40(iParam0, 0, 0);
				}
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_908))
			{
				HUD::REMOVE_BLIP(&uLocal_908);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_907))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1092)
				{
					func_39("AHP_DROPOFF", 7500, 1);
					iLocal_1092 = 1;
				}
				uLocal_907 = func_37(Local_1088, 1);
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_907))
			{
				HUD::REMOVE_BLIP(&uLocal_907);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_908))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1091)
				{
					func_39("AHP_GETBAKIN", 7500, 1);
					iLocal_1091 = 1;
				}
				uLocal_908 = func_40(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_908))
		{
			HUD::REMOVE_BLIP(&uLocal_908);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_907))
		{
			HUD::REMOVE_BLIP(&uLocal_907);
		}
	}
}

var func_37(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_42(int iParam0, bool bParam1)
{
	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0] == iParam0)
			{
				Global_73608[iVar0].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_43(int iParam0, int iParam1)
{
	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0] == iParam1)
		{
			if (Global_73608[iVar0].f_6 != iParam0)
			{
				Global_73608[iVar0].f_6 = iParam0;
				Global_73608[iVar0].f_7 = 1;
				Global_73608[iVar0].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_45()
{
	if (bLocal_1099)
	{
		iVar0 = iLocal_910;
	}
	else
	{
		iVar0 = iLocal_909;
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		switch (iLocal_1101)
		{
			case 0:
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_92(iVar1);
						if ((!PED::IS_PED_INJURED(iVar2) && PED::IS_PED_IN_VEHICLE(iVar2, iVar0, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == iVar2)
						{
							if (!func_91(iVar2) && func_90(iVar2, 0))
							{
								if (func_89(iVar2, 0))
								{
									iLocal_1133 = 0;
									iLocal_1102 = iVar1;
									iLocal_1101 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if ((((PED::IS_PED_INJURED(func_92(iLocal_1102)) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != func_92(iLocal_1102)) || !PED::IS_PED_IN_VEHICLE(func_92(iLocal_1102), iVar0, 0)) || !func_91(func_92(iLocal_1102))) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
					{
						func_88(func_92(iLocal_1102));
						iLocal_1101 = 0;
					}
					else
					{
						switch (iLocal_1133)
						{
							case 0:
								iLocal_1133 = 2;
								break;
							
							case 1:
								if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(Local_1109, Local_1109.f_1, Local_1112, Local_1112.f_1))
								{
									iLocal_1133++;
								}
								break;
							
							case 2:
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_1102), iVar0, Local_1088, 15f, 0, 1938952078, 786484, 5f, 5f);
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1088) > 250f)
								{
									VEHICLE::_0x182F266C2D9E2BEB(iVar0, SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_909, 1), Local_1088));
								}
								iLocal_1133++;
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, 1, 0))
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1103) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1106))
									{
										if (bLocal_1099)
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_1102), iVar0, Local_1106, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
										}
										else
										{
											TASK::TASK_VEHICLE_PARK(func_92(iLocal_1102), iVar0, Local_1088, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1099)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_1102), iVar0, Local_1103, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
									}
									else
									{
										TASK::TASK_VEHICLE_PARK(func_92(iLocal_1102), iVar0, Local_1088, 0f, 1, 15f, 0);
									}
									iLocal_1133++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_46();
				break;
		}
	}
	else if (iLocal_1101 != 0)
	{
		if (func_88(func_92(iLocal_1102)))
		{
			iLocal_1101 = 0;
		}
	}
}

void func_46()
{
	bVar0 = false;
	if (!PED::IS_PED_INJURED(func_92(iLocal_1102)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_909) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, 0)) && PED::IS_PED_IN_VEHICLE(func_92(iLocal_1102), iLocal_909, 0)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_910) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_910, 0)) && PED::IS_PED_IN_VEHICLE(func_92(iLocal_1102), iLocal_910, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1115)
	{
		case 0:
			iVar1 = func_85();
			if (func_71(0, 1, 145, 0, iVar1, &cLocal_1116, &cLocal_1120, 1))
			{
				func_70(&uLocal_921, 0);
				func_70(&uLocal_921, 1);
				func_70(&uLocal_921, 2);
				if (func_28() == 1)
				{
					func_69(&uLocal_921, 0, func_92(0), "MICHAEL", 0, 1);
					func_69(&uLocal_921, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_69(&uLocal_921, 1, func_92(1), "FRANKLIN", 0, 1);
					func_69(&uLocal_921, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1125)
				{
					iLocal_1132 = MISC::GET_GAME_TIMER();
				}
				iLocal_1115 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1132) > 5000 || iLocal_1125)
				{
					if (func_68(&uLocal_921, &cLocal_1116, &cLocal_1120, 8, 0, 0, 0))
					{
						iLocal_1125 = 1;
						iLocal_1115 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1124)
			{
				if (!bVar0)
				{
					cLocal_1126 = { func_67() };
					func_66();
					bLocal_1124 = true;
				}
			}
			else if (bVar0)
			{
				if (func_50(&uLocal_921, &cLocal_1116, &cLocal_1120, &cLocal_1126, 8, 0, 0))
				{
					bLocal_1124 = false;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (!bLocal_1124 && !func_49()))
			{
				func_47();
				iLocal_1115 = 3;
				iLocal_1132 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_1132) > 10000)
			{
				iLocal_1115 = 0;
			}
			break;
	}
}

void func_47()
{
	Global_19671 = 0;
	func_48();
}

void func_48()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

int func_49()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_50(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_51(sParam2, iParam4, 0);
}

int func_51(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_64();
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
		if (func_63(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_62();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_61();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
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
				if (func_60())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
			if (func_59())
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
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_58();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_57();
		func_52();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_64();
	}
	return 0;
}

void func_52()
{
	if (!func_53())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_53()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_56())
	{
		return 0;
	}
	if (func_54(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_54(int iParam0)
{
	return func_55(iParam0, 20);
}

bool func_55(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_56()
{
	return -1;
}

void func_57()
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

void func_58()
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

int func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()
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

void func_61()
{
	if (func_30(14))
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
		Global_19486 = func_28();
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

void func_62()
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

bool func_63(int iParam0, int iParam1)
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

void func_64()
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

void func_65(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
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

void func_66()
{
	Global_19671 = 0;
	func_64();
}

struct<6> func_67()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8])))
					{
						return Global_19673[iVar8];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_51(sParam2, iParam3, 0);
}

void func_69(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_70(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	iVar2 = func_82(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_81(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_80(&(Global_111638.f_18098.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_75(&(Global_111638.f_18098.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_80(&(Global_111638.f_18098.f_175[iVar5].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_175[iVar5].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_74(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_80(&(Global_111638.f_18098.f_347[iVar6]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_347[iVar6]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_72(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_79((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_78((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_77((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_76(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_77(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(uParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(uParam0, 8) & 15;
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(uParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(uParam0, 20) & 15;
}

int func_80(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_77((*uParam0)[*iParam2], &iVar6);
		if (MISC::IS_BIT_SET(iParam4, iVar6))
		{
			func_79((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_78((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_82(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_84())
	{
		return func_83(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_84())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_84()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_85()
{
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	if (Local_49.f_109 == 0)
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (func_5(128))
	{
		MISC::SET_BIT(&iVar0, 4);
		if (!func_87(24))
		{
			MISC::SET_BIT(&iVar0, 21);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (func_5(131))
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 5);
	}
	if (func_5(137))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	else if (func_5(126))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		if (func_5(135))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		if (func_5(136))
		{
			MISC::SET_BIT(&iVar0, 12);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 14);
		}
	}
	if (!func_87(20))
	{
		MISC::SET_BIT(&iVar0, 15);
	}
	if (!func_87(46))
	{
		MISC::SET_BIT(&iVar0, 16);
	}
	if (func_5(129) && !MISC::IS_BIT_SET(iVar0, 9))
	{
		MISC::SET_BIT(&iVar0, 17);
	}
	if (func_87(40) && !func_87(43))
	{
		MISC::SET_BIT(&iVar0, 18);
	}
	if (func_87(43) && !func_87(42))
	{
		MISC::SET_BIT(&iVar0, 19);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_86(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
		{
			MISC::SET_BIT(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_86(struct<2> Param0, Vector3 vParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_88(int iParam0)
{
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_94598, iVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_94598, iVar0);
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_94598, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_94597, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0, 1);
			MISC::SET_BIT(&Global_94598, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_94597, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_94598, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_28())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_96222[func_93(iParam0)];
}

int func_93(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_94()
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_909) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_910)
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1938952078))
		{
			iLocal_909 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_909, 1, 1);
			iLocal_1094 = 0;
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1323100960) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -442313018))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0))
				{
					iLocal_910 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_910, 1, 1);
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_910)) != iLocal_909)
					{
						iLocal_909 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
						iLocal_1094 = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_909, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()
{
	bVar0 = false;
	if (iLocal_1134 < 8)
	{
		if (iLocal_1134 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_95241.f_9[iLocal_1134]))
			{
				if (!PED::IS_PED_INJURED(Global_95241.f_9[iLocal_1134]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_95241.f_9[iLocal_1134], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_95241.f_9[iLocal_1134], 1, 1);
						iLocal_911[iLocal_1134] = Global_95241.f_9[iLocal_1134];
						bVar0 = true;
						Global_95241.f_9[iLocal_1134] = 0;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_95241.f_9[iLocal_1134], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f && ENTITY::IS_ENTITY_OCCLUDED(Global_95241.f_9[iLocal_1134]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_95241.f_9[iLocal_1134], 1, 1);
						PED::DELETE_PED(&(Global_95241.f_9[iLocal_1134]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && !func_96(iVar1, &iLocal_911))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
					iLocal_911[iLocal_1134] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!PED::IS_PED_INJURED(iLocal_911[iLocal_1134]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_911[iLocal_1134], iLocal_920);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_911[iLocal_1134], 17, 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			}
			iLocal_1134++;
		}
	}
}

int func_96(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_97()
{
	if (bLocal_1099)
	{
		if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_909, iLocal_910))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, 0))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_910) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_910, 1)) > 250f))
		{
			bLocal_1099 = false;
		}
	}
	else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_910, 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_909, iLocal_910))
	{
		bLocal_1099 = true;
	}
}

void func_98(int iParam0)
{
	Global_61513 = 0;
	if (!Global_61737[iParam0] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1].f_1 = 1;
			Global_73608[iVar1].f_2 = 0f;
			if (Global_73608[iVar1].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_99()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Global_95241[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_95241[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_95241[0], 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_95241[0], 1, 1);
		iLocal_909 = Global_95241[0];
		Global_95241[0] = 0;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_95241[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_95241[1], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_95241[1], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_95241[1], 1, 1);
			iLocal_910 = Global_95241[1];
			Global_95241[1] = 0;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_95241[0], 1, 1);
			iLocal_909 = Global_95241[0];
			Global_95241[0] = 0;
			bLocal_1099 = true;
		}
	}
	HUD::REQUEST_ADDITIONAL_TEXT("AHPREP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("FireMen", &iLocal_920);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_920);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_920, 1862763509);
	if (func_10(0))
	{
		STREAMING::REQUEST_MODEL(-1229853272);
		while (!STREAMING::HAS_MODEL_LOADED(-1229853272))
		{
			SYSTEM::WAIT(0);
		}
		Var0 = { 202.0504f, -1655.773f, 28.8031f };
		uLocal_1135 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Var0, 20f, 1, 0, 0, 0);
		iLocal_911[0] = PED::CREATE_PED(21, -1229853272, 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
		iLocal_911[1] = PED::CREATE_PED(21, -1229853272, 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
		iLocal_911[2] = PED::CREATE_PED(21, -1229853272, 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
		iVar3 = 0;
		while (iVar3 <= (iLocal_911 - 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_911[iVar3]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_911[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_911[iVar3], 17, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_911[iVar3], iLocal_920);
			}
			iVar3++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_920);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_920, 1862763509);
		iLocal_1086 = -1;
		if (func_106())
		{
			func_105(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
			func_102(0, -1, 1);
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (func_17())
	{
		iLocal_1095 = 1;
	}
	if (!func_10(0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
	}
	iLocal_1094 = 0;
	func_100(68);
}

void func_100(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_101(2);
			func_101(4);
			break;
		
		case 73:
			func_101(0);
			func_101(1);
			func_101(7);
			break;
		
		case 92:
			func_101(10);
			func_101(9);
			func_101(13);
			func_101(6);
			break;
		
		case 68:
			func_101(11);
			break;
		
		case 78:
			func_101(14);
			break;
		
		case 79:
			func_101(3);
			break;
		
		default:
			break;
	}
}

void func_101(int iParam0)
{
	MISC::SET_BIT(&Global_94599, iParam0);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (func_106() && func_104())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_103(0);
	}
}

void func_103(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_98744.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_98744.f_20), 13);
	}
}

bool func_104()
{
	return MISC::IS_BIT_SET(Global_98744.f_20, 13);
}

void func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_106())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_98744.f_20), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_98740 = { Param0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 24);
		}
		func_103(1);
	}
}

int func_106()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	func_108();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_909))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_909);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1135, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_108()
{
	Global_94599 = 0;
}

void func_109()
{
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_10(0))
	{
		if (!func_110())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

int func_110()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_111()
{
	if (iLocal_1095 == 1)
	{
		func_15(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

