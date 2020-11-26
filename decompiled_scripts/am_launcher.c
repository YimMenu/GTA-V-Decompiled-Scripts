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
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
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
	int iLocal_73 = 0;
	struct<21> Local_74 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<3> Local_84[32];
	struct<21> Local_85 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_78 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_220(ScriptParam_85))
		{
			func_219();
		}
	}
	while (true)
	{
		func_218();
		if (func_208())
		{
			func_219();
		}
		switch (func_207(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_206() == 1)
				{
					if (func_205())
					{
						Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_206() == 1)
				{
					func_122();
				}
				else if (func_206() == 3)
				{
					Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_219();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_206())
			{
				case 0:
					if (func_120())
					{
						Global_2506618 = 1;
					}
					break;
				
				case 1:
					if (func_119())
					{
						Global_2506618 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_219();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Global_2506618.f_2)
	{
		case 0:
			if (func_117())
			{
				func_116(&(Global_2506618.f_179));
				func_115(1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 21)
				{
					iVar1 = iVar0;
					if (func_106(iVar1))
					{
						func_104(iVar1, func_105(iVar1));
					}
					else
					{
						func_104(iVar1, 0f);
					}
					iVar0++;
				}
				func_115(3);
			}
			else
			{
				func_115(0);
			}
			break;
		
		case 3:
			iVar2 = func_103();
			if (iVar2 != -1)
			{
				Global_2506618.f_3 = { Global_2506618.f_8[iVar2 /*5*/] };
				func_115(4);
			}
			else
			{
				Global_2506618.f_181 = (Global_262145.f_8113 / 2);
				func_115(0);
			}
			break;
		
		case 4:
			switch (func_100(Global_2506618.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2506618.f_3)
					{
						case 1:
							func_97();
							if (func_96(4))
							{
								func_115(5);
							}
							else
							{
								func_115(6);
							}
							break;
						
						default:
							if (func_95(Global_2506618.f_3))
							{
								Global_2506618.f_183 = Global_2537071.f_6574;
								Global_2506618.f_184 = Global_2537071.f_6575;
								Global_2506618.f_185 = Global_2537071.f_6576;
								if (func_18(func_93(), &(Global_2506618.f_183), &(Global_2506618.f_184), func_92()))
								{
									func_115(6);
								}
								else
								{
									func_104(Global_2506618.f_3, 0f);
									func_115(3);
								}
							}
							else
							{
								func_115(6);
							}
							break;
					}
					break;
				
				case 2:
					func_104(Global_2506618.f_3, 0f);
					func_115(3);
					break;
			}
			break;
		
		case 5:
			if (!func_14())
			{
				func_115(6);
			}
			break;
		
		case 6:
			if (!func_11())
			{
				if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2506618.f_3.f_1), -1, false, 0))
				{
					func_115(7);
					func_4(Global_2506618.f_3);
				}
			}
			break;
		
		case 7:
			if (!func_3())
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2506618.f_3.f_1), -1, false, 0))
				{
					func_115(8);
				}
			}
			break;
		
		case 8:
			Global_2506618.f_181 = Global_262145.f_8113;
			Global_2506618.f_8[Global_2506618.f_3 /*5*/].f_4 = 1;
			if (func_96(1))
			{
				func_2(1);
			}
			if (func_96(4))
			{
				func_2(4);
			}
			Global_2506618.f_3 = -1;
			Global_2506618.f_3.f_1 = 0;
			Global_2506618.f_183 = -1;
			Global_2506618.f_184 = -1;
			Global_2506618.f_185 = -1;
			func_115(0);
			break;
	}
}

void func_2(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2506618.f_1, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2506618.f_1), iParam0);
	}
}

int func_3()
{
	if (Global_2506618.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2537071.f_1661)
	{
		func_115(8);
		Global_2537071.f_1661 = 0;
	}
	return 1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9 && !func_5(iParam0))
	{
		if (Global_262145.f_8111 > 0 && Global_262145.f_8111 <= 21)
		{
			if (!Global_2506618.f_114[(Global_262145.f_8111 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_8111 - 1))
				{
					Global_2506618.f_114[iVar0] = Global_2506618.f_114[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2506618.f_114[(Global_262145.f_8111 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2506618.f_136[iVar0 + 1 /*2*/] = { Global_2506618.f_136[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2506618.f_136[0 /*2*/] = iParam0;
	Global_2506618.f_136[0 /*2*/].f_1 = -1;
	Global_2506618.f_182 = iParam0;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return 1;
		
		default:
	}
	return 0;
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 161:
			return "dont_cross_the_line";
		
		case 164:
			return "grid_arcade_cabinet";
		
		case 165:
			return "scroll_arcade_cabinet";
		
		case 166:
			return "example_arcade";
		
		case 167:
			return "road_arcade";
		
		case 172:
			return "Degenatron Games";
		
		case 168:
			return "gunslinger_arcade";
		
		case 173:
			return "ggsm_arcade";
		
		case 169:
			return "wizard_arcade";
		
		case 170:
			return "AM_CASINO_LIMO";
		
		case 171:
			return "AM_CASINO_LUXURY_CAR";
		
		case 174:
			return "AM_QUB3D_ARCADE_CABINET";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 87:
			return "GB_BIKER_BAD_DEAL";
		
		case 88:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 89:
			return "GB_BIKER_LAST_RESPECTS";
		
		case 90:
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 91:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 92:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 93:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 94:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 102:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 95:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 75:
			return "GB_PLOUGHED";
		
		case 76:
			return "GB_FULLY_LOADED";
		
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
		
		case 78:
			return "GB_TRANSPORTER";
		
		case joaat("MPSV_LP0_31"):
			return "GB_FORTIFIED";
		
		case 80:
			return "GB_VELOCITY";
		
		case 81:
			return "GB_RAMPED_UP";
		
		case 82:
			return "GB_STOCKPILING";
		
		case 96:
			return "GB_BIKER_FREE_PRISONER";
		
		case 97:
			return "GB_BIKER_SAFECRACKER";
		
		case 98:
			return "GB_BIKER_STEAL_BIKES";
		
		case 99:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 100:
			return "AM_PENNED_IN";
		
		case 101:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 103:
			return "GB_BIKER_DESTROY_VANS";
		
		case 104:
			return "GB_BIKER_BURN_ASSETS";
		
		case 105:
			return "GB_BIKER_SHUTTLE";
		
		case 106:
			return "GB_BIKER_WHEELIE_RIDER";
		
		case 107:
		case 108:
			return "GB_GUNRUNNING";
		
		case 109:
			return "GB_GUNRUNNING_DEFEND";
		
		case 110:
		case 111:
		case 112:
			return "GB_SMUGGLER";
		
		case 113:
			return "GB_GANGOPS";
		
		case 114:
			return "BUSINESS_BATTLES";
		
		case 115:
			return "BUSINESS_BATTLES_SELL";
		
		case 116:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 117:
			return "GB_SECURITY_VAN";
		
		case 118:
			return "GB_TARGET_PURSUIT";
		
		case 119:
			return "GB_JEWEL_STORE_GRAB";
		
		case 120:
			return "GB_BANK_JOB";
		
		case 121:
			return "GB_DATA_HACK";
		
		case 122:
			return "GB_INFILTRATION";
		
		case 123:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 124:
			return "BUSINESS_BATTLES_SELL";
		
		case 125:
			return "GB_CASINO";
		
		case 126:
			return "GB_CASINO_HEIST";
		
		case 127:
			return "fm_content_business_battles";
		
		case 128:
			return "fm_content_drug_vehicle";
		
		case 129:
			return "fm_content_movie_props";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 130:
			return "AM_BOAT_TAXI";
		
		case 131:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 144:
			return "am_rollercoaster";
		
		case 145:
			return "am_ferriswheel";
		
		case 146:
			return "AM_LAUNCHER";
		
		case 147:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 132:
			return "fm_hold_up_tut";
		
		case 133:
			return "AM_CAR_MOD_TUT";
		
		case 134:
			return "AM_CONTACT_REQUESTS";
		
		case 135:
			return "am_mission_launch";
		
		case 136:
			return "am_npc_invites";
		
		case 137:
			return "am_lester_cut";
		
		case 140:
			return "AM_VEHICLE_SPAWN";
		
		case 141:
			return "am_ronTrevor_Cut";
		
		case 142:
			return "AM_ARMYBASE";
		
		case 143:
			return "AM_PRISON";
		
		case 148:
			return "AM_ArmWrestling";
		
		case 155:
			return "fm_Bj_race_controler";
		
		case 149:
			return "AM_Darts";
		
		case 156:
			return "fm_deathmatch_controler";
		
		case 154:
			return "FM_Impromptu_DM_Controler";
		
		case 157:
			return "fm_hideout_controler";
		
		case 150:
			return "golf_mp";
		
		case 153:
			return "Pilot_School_MP";
		
		case 158:
			return func_8();
		
		case 159:
			return "FM_Race_Controler";
		
		case 151:
			return "Range_Modern_MP";
		
		case 160:
			if (func_7(Global_4456448.f_232883))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 152:
			return "tennis_network_mp";
		
		case 138:
			return "am_heist_int";
		
		case 139:
			return "am_lowrider_int";
		
		case 162:
			return "am_darts_apartment";
		
		case 163:
			return "AM_Armwrestling_Apartment";
		
		case 176:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
			break;
	}
	return "";
}

bool func_7(int iParam0)
{
	return iParam0 == 998;
}

char* func_8()
{
	if (func_9())
	{
		return "fm_mission_controller";
	}
	return "fm_mission_controller_2020";
}

int func_9()
{
	if (func_10(2))
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)
{
	return Global_4456448.f_232884 >= iParam0;
}

int func_11()
{
	if (Global_2506618.f_3.f_1 != 19)
	{
		return 0;
	}
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0) != func_92())
	{
		func_12(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0)), 1);
		Global_2537071.f_1661 = 0;
		func_115(7);
		func_4(Global_2506618.f_3);
	}
	return 1;
}

void func_12(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 1391861344;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_13(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_14()
{
	if (Global_2506618.f_3.f_1 != 18)
	{
		return 0;
	}
	if (func_96(4))
	{
		if (!func_96(3))
		{
			func_116(&(Global_2506618.f_177));
			func_17(3);
		}
		else if (func_15(&(Global_2506618.f_177), (Global_262145.f_45 * 120000), 0))
		{
			func_2(3);
			func_115(6);
		}
	}
	else
	{
		func_115(6);
	}
	return 1;
}

int func_15(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_16(uParam0, bParam2, 0);
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

void func_16(var uParam0, bool bParam1, bool bParam2)
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

void func_17(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_2506618.f_1, iParam0))
	{
		MISC::SET_BIT(&(Global_2506618.f_1), iParam0);
	}
}

int func_18(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (*uParam1 != -1 && *uParam2 != -1)
	{
		return 1;
	}
	iVar0 = *uParam1;
	iVar1 = *uParam2;
	uVar2 = 1;
	if (iVar0 == -1)
	{
		iVar0 = func_76(iParam0, iParam3, &uVar2);
	}
	if (iVar0 != -1)
	{
		iVar1 = func_24(iParam0, iVar0, iParam3);
		if (*uParam1 == -1)
		{
			while (iVar1 == -1)
			{
				func_23(&uVar2, iVar0);
				iVar0 = func_19(iParam0, &uVar2);
				if (iVar0 == -1)
				{
				}
				else
				{
					iVar1 = func_24(iParam0, iVar0, iParam3);
				}
			}
		}
		if (iVar1 != -1)
		{
			*uParam1 = iVar0;
			*uParam2 = iVar1;
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0, var uParam1)
{
	var uVar0[30];
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	
	iVar3 = 0;
	while (iVar3 < func_22(iParam0))
	{
		if (func_21(uParam1, iVar3))
		{
			uVar0[iVar3] = func_20(iParam0, iVar3);
			fVar1 = (fVar1 + uVar0[iVar3]);
		}
		iVar3++;
	}
	if (fVar1 == 0f)
	{
		return -1;
	}
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar3 = 0;
	while (iVar3 < func_22(iParam0))
	{
		fVar2 = (fVar2 + uVar0[iVar3]);
		if (fVar4 < fVar2)
		{
			iVar5 = iVar3;
		}
		else
		{
			iVar3++;
		}
	}
	return iVar5;
}

float func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				
				default:
			}
			break;
	}
	return 1f;
}

bool func_21(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 3;
		
		case 24:
			return 1;
		
		case 26:
			return 3;
		
		default:
	}
	return 0;
}

void func_23(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2[30];
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	iVar0 = func_75(iParam0, iParam1);
	iVar1 = ((iVar0 + func_74(iParam0, iParam1)) - 1);
	if (iVar0 == iVar1)
	{
	}
	iVar5 = -1;
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (func_73(iParam0, iVar6))
		{
		}
		else if (func_72(iParam0, iVar6, iParam2))
		{
		}
		else if (!func_27(iParam0, iParam1, iVar6, iParam2))
		{
		}
		else if (!func_26(iParam0, iParam1, iVar6, iParam2))
		{
		}
		else
		{
			uVar2[iVar6] = func_25(iParam0, iVar6);
		}
		iVar6++;
	}
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		fVar3 = (fVar3 + uVar2[iVar6]);
		iVar6++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar3);
	iVar8 = -1;
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		fVar4 = (fVar4 + uVar2[iVar6]);
		if (fVar7 < fVar4)
		{
			iVar8 = iVar6;
		}
		else
		{
			iVar6++;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar5 != -1)
		{
			iVar8 = iVar5;
		}
	}
	return iVar8;
}

float func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				
				default:
			}
			break;
	}
	return 1f;
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return 1;
}

int func_27(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<1626> Var0;
	
	Var0.f_8 = 1;
	Var0.f_10.f_1 = -1;
	Var0.f_10.f_1.f_1 = 12;
	Var0.f_10.f_1.f_2 = 1065353216;
	Var0.f_10.f_5 = 8;
	Var0.f_10.f_5.f_1 = 1;
	Var0.f_10.f_5.f_1.f_10 = -1;
	Var0.f_10.f_5.f_1.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_112.f_1 = 30;
	Var0.f_112.f_1.f_1 = 1;
	Var0.f_112.f_1.f_1.f_8 = -1;
	Var0.f_112.f_1.f_1.f_10 = -1;
	Var0.f_112.f_1.f_1.f_11 = -1;
	Var0.f_112.f_1.f_1.f_12 = -1;
	Var0.f_112.f_1.f_1.f_13 = -1;
	Var0.f_112.f_1.f_1.f_15 = 2;
	Var0.f_112.f_1.f_1.f_16 = -1;
	Var0.f_112.f_1.f_1.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var0.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var0.f_112.f_602 = 1;
	Var0.f_112.f_602.f_1 = 1443296302;
	Var0.f_112.f_602.f_1.f_1 = 1;
	Var0.f_112.f_602.f_1.f_1.f_1 = -1;
	Var0.f_112.f_607 = 1;
	Var0.f_112.f_607.f_1 = 1;
	Var0.f_723.f_1 = 30;
	Var0.f_723.f_1.f_1 = 2;
	Var0.f_723.f_1.f_1.f_8 = -1;
	Var0.f_723.f_1.f_1.f_9 = -1;
	Var0.f_723.f_1.f_1.f_10 = -1;
	Var0.f_723.f_1.f_1.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_723.f_422 = -1;
	Var0.f_723.f_423 = 1;
	Var0.f_723.f_423.f_1 = -1;
	Var0.f_723.f_423.f_1.f_1 = -1;
	Var0.f_1149.f_1 = 30;
	Var0.f_1149.f_1.f_1 = 1;
	Var0.f_1149.f_1.f_1.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1452.f_1 = -1;
	Var0.f_1452.f_2 = 1132068864;
	Var0.f_1455 = -1;
	Var0.f_1463 = 1;
	Var0.f_1463.f_1.f_3 = -1082130432;
	Var0.f_1463.f_1.f_4 = 1;
	Var0.f_1463.f_1.f_6 = -1;
	Var0.f_1463.f_1.f_8 = -1;
	Var0.f_1463.f_1.f_8.f_1 = 12;
	Var0.f_1463.f_1.f_8.f_2 = 1065353216;
	Var0.f_1476 = 1;
	Var0.f_1481 = 1;
	Var0.f_1489 = 1;
	Var0.f_1489.f_1.f_3 = 1065353216;
	Var0.f_1489.f_1.f_4 = 12;
	Var0.f_1495 = 1;
	Var0.f_1495.f_1 = -1;
	Var0.f_1497 = 1;
	Var0.f_1497.f_1 = 1;
	Var0.f_1507 = 1;
	Var0.f_1528 = 12;
	Var0.f_1625 = 5;
	Var0.f_1625.f_1.f_8 = -1;
	Var0.f_1625.f_1.f_9.f_8 = -1;
	Var0.f_1625.f_1.f_9.f_9.f_8 = -1;
	Var0.f_1625.f_1.f_9.f_9.f_9.f_8 = -1;
	Var0.f_1625.f_1.f_9.f_9.f_9.f_9.f_8 = -1;
	Var0.f_1625.f_46 = 5;
	if (!func_67(&Var0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (!func_64(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_52(&Var0, iParam0, iParam3))
	{
		return 0;
	}
	if (!func_28(&Var0))
	{
		return 0;
	}
	return 1;
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = uParam0->f_10;
	iVar2 = uParam0->f_112;
	iVar3 = uParam0->f_723;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_51(&(uParam0->f_10.f_5[iVar0 /*12*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!func_50(&(uParam0->f_112.f_1[iVar0 /*20*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if (!func_29(&(uParam0->f_723.f_1[iVar0 /*14*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_49(uParam0, 31))
	{
		return 1;
	}
	iVar0 = uParam0->f_3;
	fVar1 = func_47(iVar0);
	Var2 = { uParam0->f_4 };
	if (fVar1 == 0f)
	{
		fVar1 = 10f;
	}
	if (!func_30(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, fVar1, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_30(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2405072.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam12 > 0f)
	{
		if (func_41(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_31(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_31(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_40(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_36(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_40(iVar1, 1, 1))
		{
			if (!func_33(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_32(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_36(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_36(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_34(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312745;
}

Vector3 func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_39() && Global_1590535[iVar0 /*876*/].f_847) && !func_38(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_37(iParam0);
}

Vector3 func_37(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_38(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_39()
{
	return Global_2450632.f_17;
}

int func_40(int iParam0, bool bParam1, bool bParam2)
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

int func_41(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_40(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_32(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_42(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_37(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (func_46(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_45(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_43(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (!iVar0 == func_92())
	{
		if (iVar0 == func_44(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 != func_92())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_92();
}

struct<13> func_45(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_46(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_45(iParam0) };
		Global_2513231 = { func_45(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_47(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	var uVar4;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	fVar2 = (Var1 - Var0);
	fVar3 = (Var1.f_1 - Var0.f_1);
	uVar4 = func_48(fVar2, fVar3);
	return uVar4;
}

float func_48(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_50(var uParam0, int iParam1)
{
	float fVar0;
	struct<3> Var1;
	
	if (func_49(uParam0, 22))
	{
		return 1;
	}
	fVar0 = 2f;
	Var1 = { uParam0->f_3 };
	if (!func_30(Var1, fVar0, fVar0, fVar0, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_51(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_49(uParam0, 11))
	{
		return 1;
	}
	if (uParam0->f_10 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_2;
	fVar1 = func_47(iVar0);
	Var2 = { uParam0->f_3 };
	if (!func_30(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_52(var uParam0, int iParam1, int iParam2)
{
	switch (func_63(iParam1))
	{
		case 0:
		case 2:
			if (iParam2 != func_92())
			{
				if (!func_62(uParam0->f_112, uParam0->f_723, uParam0->f_1149, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam2), false)))
				{
					return 0;
				}
			}
			break;
		
		case 1:
			if (!func_53(uParam0->f_112, uParam0->f_723, uParam0->f_1149, 1, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_61(iParam0, bParam3, bParam4) || func_60(iParam1, bParam3, bParam4)) || func_54(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(2, iParam0, 0, bParam1, bParam2);
}

int func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_59(iParam0) - func_58(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_57(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_58(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_56(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(1, iParam0, 0, bParam1, bParam2);
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(0, iParam0, 0, bParam1, bParam2);
}

int func_62(int iParam0, int iParam1, int iParam2, struct<3> Param3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	NETWORK::_0xE42D626EEC94E5D9(Param3, 0, &iVar0, &iVar1, &iVar2);
	if ((iParam0 <= (func_59(0) - iVar0) && iParam1 <= (func_59(1) - iVar1)) && iParam2 <= (func_59(2) - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		default:
	}
	return -1;
}

int func_64(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<1626> Var7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	float fVar11;
	
	iVar0 = func_66(iParam1);
	if (iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_74(iParam1, iParam2);
	if (iVar1 <= iVar0)
	{
		return 1;
	}
	iVar2 = func_75(iParam1, iParam2);
	iVar3 = ((iVar2 + iVar1) - 1);
	Var4 = { func_37(iParam4) };
	Var5 = { func_65(uParam0, iParam1) };
	fVar6 = SYSTEM::VDIST2(Var4, Var5);
	Var7.f_8 = 1;
	Var7.f_10.f_1 = -1;
	Var7.f_10.f_1.f_1 = 12;
	Var7.f_10.f_1.f_2 = 1065353216;
	Var7.f_10.f_5 = 8;
	Var7.f_10.f_5.f_1 = 1;
	Var7.f_10.f_5.f_1.f_10 = -1;
	Var7.f_10.f_5.f_1.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_10.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_112.f_1 = 30;
	Var7.f_112.f_1.f_1 = 1;
	Var7.f_112.f_1.f_1.f_8 = -1;
	Var7.f_112.f_1.f_1.f_10 = -1;
	Var7.f_112.f_1.f_1.f_11 = -1;
	Var7.f_112.f_1.f_1.f_12 = -1;
	Var7.f_112.f_1.f_1.f_13 = -1;
	Var7.f_112.f_1.f_1.f_15 = 2;
	Var7.f_112.f_1.f_1.f_16 = -1;
	Var7.f_112.f_1.f_1.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = 1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_8 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_11 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_12 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_15 = 2;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_16 = -1;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_17 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_18 = 1128792064;
	Var7.f_112.f_1.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_19 = -1082130432;
	Var7.f_112.f_602 = 1;
	Var7.f_112.f_602.f_1 = 1443296302;
	Var7.f_112.f_602.f_1.f_1 = 1;
	Var7.f_112.f_602.f_1.f_1.f_1 = -1;
	Var7.f_112.f_607 = 1;
	Var7.f_112.f_607.f_1 = 1;
	Var7.f_723.f_1 = 30;
	Var7.f_723.f_1.f_1 = 2;
	Var7.f_723.f_1.f_1.f_8 = -1;
	Var7.f_723.f_1.f_1.f_9 = -1;
	Var7.f_723.f_1.f_1.f_10 = -1;
	Var7.f_723.f_1.f_1.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var7.f_723.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var7.f_723.f_422 = -1;
	Var7.f_723.f_423 = 1;
	Var7.f_723.f_423.f_1 = -1;
	Var7.f_723.f_423.f_1.f_1 = -1;
	Var7.f_1149.f_1 = 30;
	Var7.f_1149.f_1.f_1 = 1;
	Var7.f_1149.f_1.f_1.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1149.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1452.f_1 = -1;
	Var7.f_1452.f_2 = 1132068864;
	Var7.f_1455 = -1;
	Var7.f_1463 = 1;
	Var7.f_1463.f_1.f_3 = -1082130432;
	Var7.f_1463.f_1.f_4 = 1;
	Var7.f_1463.f_1.f_6 = -1;
	Var7.f_1463.f_1.f_8 = -1;
	Var7.f_1463.f_1.f_8.f_1 = 12;
	Var7.f_1463.f_1.f_8.f_2 = 1065353216;
	Var7.f_1476 = 1;
	Var7.f_1481 = 1;
	Var7.f_1489 = 1;
	Var7.f_1489.f_1.f_3 = 1065353216;
	Var7.f_1489.f_1.f_4 = 12;
	Var7.f_1495 = 1;
	Var7.f_1495.f_1 = -1;
	Var7.f_1497 = 1;
	Var7.f_1497.f_1 = 1;
	Var7.f_1507 = 1;
	Var7.f_1528 = 12;
	Var7.f_1625 = 5;
	Var7.f_1625.f_1.f_8 = -1;
	Var7.f_1625.f_1.f_9.f_8 = -1;
	Var7.f_1625.f_1.f_9.f_9.f_8 = -1;
	Var7.f_1625.f_1.f_9.f_9.f_9.f_8 = -1;
	Var7.f_1625.f_1.f_9.f_9.f_9.f_9.f_8 = -1;
	Var7.f_1625.f_46 = 5;
	iVar9 = iVar2;
	while (iVar9 <= iVar3)
	{
		if (iVar9 == iParam3)
		{
		}
		else if (!func_67(&Var7, iParam1, iParam2, iVar9))
		{
		}
		else
		{
			Var10 = { func_65(&Var7, iParam1) };
			if (func_38(Var10))
			{
			}
			else
			{
				fVar11 = SYSTEM::VDIST2(Var4, Var10);
				if (fVar6 > fVar11)
				{
					iVar8++;
					if (iVar8 == iVar0)
					{
						return 0;
					}
				}
			}
		}
		iVar9++;
	}
	return 1;
}

Vector3 func_65(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 181:
			return uParam0->f_112.f_1[0 /*20*/].f_3;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 181:
			return -1;
		
		default:
	}
	return -1;
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 150:
			return func_71(uParam0, iParam2, iParam3);
		
		case 26:
			return func_70(uParam0, iParam2, iParam3);
		
		case 24:
			return func_68(uParam0, iParam2, iParam3);
		
		default:
	}
	return 0;
}

int func_68(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -97.6922f, 6398.02f, 30.4528f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 224.7997f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -91.9373f, 6397.541f, 30.6395f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 142.5995f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -95.2155f, 6395.659f, 30.452f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 224.7997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 1:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1669.066f, 4972.725f, 41.2851f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 129.7997f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1666.057f, 4966.523f, 41.2385f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 46.1994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1665.939f, 4970.212f, 41.2591f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 129.7997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 2:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 2647.825f, 4252.255f, 43.7752f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 278.7993f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 2649.159f, 4252.323f, 43.7695f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 87.3988f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 2647.317f, 4255.757f, 43.7764f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 121.5996f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 3:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1436.201f, 3666.007f, 33.1209f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 214.1987f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1430.508f, 3661.281f, 33.3264f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 299.1983f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1434.347f, 3662.849f, 33.1201f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 293.7999f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 4:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 861.486f, 2848.65f, 56.444f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 80.6f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 855.697f, 2853.605f, 56.709f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 222.8f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 857.869f, 2849.551f, 56.575f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 80.6f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 5:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -1896.857f, 2054.889f, 139.9683f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 79.7996f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -1902.724f, 2051.985f, 139.7039f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 349.5993f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -1901.913f, 2055.253f, 139.6933f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 343.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 6:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 2307.854f, 2539.586f, 45.7104f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 316.8f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 2315.623f, 2540.087f, 45.6677f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 82.7994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 2310.338f, 2542.258f, 45.6677f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 316.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 7:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -2229.24f, 4229.438f, 45.7707f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 163.9998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -2226.648f, 4224.902f, 46.0058f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 338.799f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -2230.174f, 4225.861f, 45.7994f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 163.9998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 8:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -2950.016f, 405.3059f, 14.0967f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 147.5995f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -2950.676f, 404.1714f, 14.0535f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 333.9988f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -2952.948f, 408.6126f, 14.1516f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 0f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 9:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1912.293f, 572.0425f, 174.6946f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 75.5999f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1910.68f, 576.1117f, 174.8203f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 166.5996f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1909.135f, 573.2956f, 174.8217f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 67.9999f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 10:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -288.5898f, 2527.691f, 73.5753f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 224.3995f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -287.8767f, 2526.482f, 73.591f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 43.7993f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -292.1817f, 2525.068f, 73.6532f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 89.3998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 11:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 766.9975f, 4180.013f, 39.7092f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 199.8f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 774.0271f, 4181.124f, 39.7092f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 87.5999f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 768.2521f, 4176.665f, 39.71f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 199.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 12:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 3331.676f, 5156.57f, 17.3025f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 331.8f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 3332.878f, 5163.645f, 17.2794f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 151.5995f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 3333.365f, 5159.849f, 17.3031f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 331.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 13:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -1509.074f, 1484.926f, 115.6317f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 189.9993f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -1508.838f, 1483.321f, 115.7968f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 11.5991f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -1513.606f, 1483.649f, 115.3705f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 92.1997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 14:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 2477.078f, 3424.631f, 48.8816f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 317.8f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 2477.981f, 3429.964f, 49.2091f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 147.3994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 2479.418f, 3427.102f, 48.8933f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 317.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 15:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1448.486f, -2234.274f, 59.959f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 181.1996f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1448.33f, -2235.854f, 60.1128f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 2.3993f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1451.42f, -2233.088f, 60.2259f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 35.1999f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 16:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 164.129f, -2649.536f, 4.996f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 205.7997f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 160.3552f, -2652.698f, 4.996f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = -0.2007f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 165.5644f, -2652.463f, 4.996f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 205.7997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 17:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 237.6193f, 25.5141f, 82.5936f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 160.1998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 234.0898f, 20.8284f, 82.5308f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 255.7994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 236.3487f, 22.5351f, 82.5743f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 160.1998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 18:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -1375.289f, -330.0093f, 38.2794f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 271.1997f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -1370.359f, -324.8496f, 38.2809f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 122.9995f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -1371.957f, -329.9002f, 38.1307f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 271.1997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 19:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -935.5189f, 305.1255f, 70.1446f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 1.2f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -938.2308f, 311.5183f, 70.2582f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 193.399f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -935.6755f, 308.411f, 70.2197f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 1.2f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 20:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -962.1614f, -1098.799f, 1.1503f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 193.5998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -963.353f, -1104.19f, 1.1503f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 316.5994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -961.3957f, -1102.007f, 1.1503f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 193.5998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 21:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1039.206f, -777.382f, 57.0187f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 18f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1039.729f, -773.9086f, 57.0183f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 283.1996f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1038.375f, -774.2705f, 57.014f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 13.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 22:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 341.31f, -2123.868f, 14.5471f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 142.7997f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 335.0284f, -2123.47f, 14.4369f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 242.1994f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 339.4617f, -2126.446f, 14.3374f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 142.7997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 23:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -28.9927f, -1496.947f, 29.3703f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 327.9998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -28.8313f, -1500.908f, 29.6289f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 56.7996f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -27.3763f, -1494.304f, 29.3621f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 327.9998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 24:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -358.6656f, -63.3636f, 53.4281f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 218.3995f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -357.8047f, -64.4234f, 53.4281f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 39.1992f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -355.7981f, -60.7046f, 53.4282f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 351.6f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 25:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 470.6023f, -1235.39f, 28.8894f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 361.9994f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 470.787f, -1233.972f, 28.859f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 182.7988f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 472.4747f, -1237.58f, 28.7487f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 142.9998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 26:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 1391.402f, -1533.309f, 56.3022f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 9.3993f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 1391.504f, -1531.99f, 56.2736f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 168.7988f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 1395.489f, -1533.557f, 56.5724f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 223.1997f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 27:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 33.9189f, -886.0068f, 29.2071f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 345.9998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 33.695f, -882.5641f, 29.2554f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 79.5988f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 35.097f, -882.8452f, 29.2553f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 338.8f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 28:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { -998.7402f, -2527.484f, 12.8308f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 116.5998f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { -1001.071f, -2530.02f, 12.8308f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 215.7996f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { -1001.537f, -2528.857f, 12.8308f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 116.5998f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		case 29:
			uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[0 /*20*/].f_3 = { 2676.396f, 1565.767f, 23.501f };
			uParam0->f_112.f_1[0 /*20*/].f_6 = 37.7999f;
			uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_microsmg");
			uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
			StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
			uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
			uParam0->f_112.f_1[1 /*20*/].f_3 = { 2671.897f, 1562.597f, 23.6967f };
			uParam0->f_112.f_1[1 /*20*/].f_6 = 267.3996f;
			uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pistol");
			uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
			StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
			uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("faction");
			uParam0->f_723.f_1[0 /*14*/].f_4 = { 2674.505f, 1568.294f, 23.5007f };
			uParam0->f_723.f_1[0 /*14*/].f_7 = 37.7999f;
			func_69(0, 7);
			uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
			uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
			uParam0->f_10 = 1;
			uParam0->f_112 = 2;
			uParam0->f_723 = 1;
			uParam0->f_1149 = 0;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_69(int iParam0, int iParam1)
{
}

int func_70(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -288.499f, 6299.241f, 30.492f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 42.6f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_assaultrifle");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -286.484f, 6304.44f, 30.492f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 28.199f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -286.935f, 6305.677f, 30.492f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 206.799f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rebel");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -290.654f, 6303.431f, 30.492f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 115f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 1:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -79.668f, 6535.546f, 30.491f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 315.6f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_assaultrifle");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -72.927f, 6538.502f, 30.491f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 14.6f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -73.187f, 6539.921f, 30.491f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 193.799f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rebel");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -77.11f, 6537.942f, 30.491f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 315.6f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 2:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 1253.8f, 6483.887f, 21.376f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 269.2f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("a_m_m_salton_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 1254.129f, 6483.602f, 21.44f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 269.2f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rebel");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 1254.091f, 6483.862f, 19.618f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 269.2f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 2;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 3:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("a_m_y_epsilon_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -670.294f, 80.811f, 50.435f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 247.6f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_knife");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("a_m_y_epsilon_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -671.64f, 80.162f, 50.35f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 267.399f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_IMPATIENT", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("a_m_y_epsilon_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -667.864f, 84.508f, 50.928f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 172.199f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("pony");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -667.25f, 80.216f, 50.139f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 260.8f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 4:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("a_m_y_business_03");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -2314.76f, 277.063f, 168.591f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 22f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_crowbar");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("a_m_y_business_03");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -2315.667f, 273.35f, 168.602f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 68.2f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("a_m_y_business_03");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -2316.671f, 273.687f, 168.602f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 229.4f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("pony");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -2316.255f, 280.381f, 168.467f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 24.4f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 5:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -1861.437f, 150.461f, 81.193f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 49.071f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_strpunk_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -1861.171f, 150.879f, 81.158f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 49.071f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("pony");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -1861.402f, 150.232f, 79.223f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 49.6f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 2;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 6:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 747.134f, -970.125f, 23.698f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 104.799f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 741.774f, -967.47f, 23.504f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 355.799f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_assaultrifle");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { 741.807f, -965.949f, 23.505f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 181.398f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rumpo");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 744.011f, -971.328f, 23.585f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 109.2f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 7:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 463.783f, -733.993f, 26.361f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 176.4f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 466.928f, -730.751f, 26.363f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 56.199f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_assaultrifle");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { 465.587f, -730.108f, 26.36f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 243.199f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rumpo");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 463.492f, -737.44f, 26.362f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 176.4f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 3;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				case 8:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 514.941f, -859.401f, 40.852f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 271.354f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_azteca_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 515.098f, -860.411f, 40.771f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 271.354f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("rumpo");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 514.737f, -859.692f, 38.819f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 270.754f;
					func_69(0, 7);
					uParam0->f_10.f_5[0 /*12*/].f_10 = 0;
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("prop_drug_package_02");
					uParam0->f_10 = 1;
					uParam0->f_112 = 2;
					uParam0->f_723 = 1;
					uParam0->f_1149 = 0;
					break;
				
				default:
					return 0;
			}
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_71(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 1:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -73.971f, 6256.04f, 30.09f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 57.797f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -74.882f, 6256.506f, 30.09f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 234.597f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -64.576f, 6239.626f, 30.091f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 160.797f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
					uParam0->f_112.f_1[3 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[3 /*20*/].f_3 = { -64.845f, 6238.499f, 30.091f };
					uParam0->f_112.f_1[3 /*20*/].f_6 = 340.196f;
					uParam0->f_112.f_1[3 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[3 /*20*/].f_10 = 3;
					StringCopy(&(uParam0->f_1528[3 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					uParam0->f_112.f_1[4 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[4 /*20*/].f_3 = { -70.54f, 6243.588f, 30.069f };
					uParam0->f_112.f_1[4 /*20*/].f_6 = 211.196f;
					uParam0->f_112.f_1[4 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[4 /*20*/].f_10 = 4;
					StringCopy(&(uParam0->f_1528[4 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					uParam0->f_112.f_1[5 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[5 /*20*/].f_3 = { -89.55f, 6237.827f, 30.09f };
					uParam0->f_112.f_1[5 /*20*/].f_6 = 206.996f;
					uParam0->f_112.f_1[5 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[6 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[6 /*20*/].f_3 = { -77.861f, 6224.064f, 30.09f };
					uParam0->f_112.f_1[6 /*20*/].f_6 = 20.996f;
					uParam0->f_112.f_1[6 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[7 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[7 /*20*/].f_3 = { -83.089f, 6224.388f, 30.09f };
					uParam0->f_112.f_1[7 /*20*/].f_6 = 310.796f;
					uParam0->f_112.f_1[7 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[8 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[8 /*20*/].f_3 = { -87.394f, 6229.065f, 30.09f };
					uParam0->f_112.f_1[8 /*20*/].f_6 = 310.796f;
					uParam0->f_112.f_1[8 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[9 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[9 /*20*/].f_3 = { -88.472f, 6210.57f, 30.088f };
					uParam0->f_112.f_1[9 /*20*/].f_6 = 361.395f;
					uParam0->f_112.f_1[9 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[10 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[10 /*20*/].f_3 = { -92.046f, 6214f, 30.025f };
					uParam0->f_112.f_1[10 /*20*/].f_6 = 259.195f;
					uParam0->f_112.f_1[10 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[11 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[11 /*20*/].f_3 = { -83.044f, 6214.456f, 30.09f };
					uParam0->f_112.f_1[11 /*20*/].f_6 = 334.795f;
					uParam0->f_112.f_1[11 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[12 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[12 /*20*/].f_3 = { -102.702f, 6201.701f, 30.025f };
					uParam0->f_112.f_1[12 /*20*/].f_6 = 334.795f;
					uParam0->f_112.f_1[12 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[13 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[13 /*20*/].f_3 = { -111.548f, 6200.503f, 30.026f };
					uParam0->f_112.f_1[13 /*20*/].f_6 = 284.194f;
					uParam0->f_112.f_1[13 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[14 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[14 /*20*/].f_3 = { -107.619f, 6207.304f, 30.026f };
					uParam0->f_112.f_1[14 /*20*/].f_6 = 239.794f;
					uParam0->f_112.f_1[14 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[15 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[15 /*20*/].f_3 = { -103.612f, 6211.622f, 30.025f };
					uParam0->f_112.f_1[15 /*20*/].f_6 = 252.994f;
					uParam0->f_112.f_1[15 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[16 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[16 /*20*/].f_3 = { -106.592f, 6187.752f, 30.025f };
					uParam0->f_112.f_1[16 /*20*/].f_6 = 339.994f;
					uParam0->f_112.f_1[16 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[17 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[17 /*20*/].f_3 = { -113.32f, 6178.651f, 30.022f };
					uParam0->f_112.f_1[17 /*20*/].f_6 = 339.994f;
					uParam0->f_112.f_1[17 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[18 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[18 /*20*/].f_3 = { -120.148f, 6177.347f, 30.017f };
					uParam0->f_112.f_1[18 /*20*/].f_6 = 313.393f;
					uParam0->f_112.f_1[18 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[19 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[19 /*20*/].f_3 = { -121.658f, 6171.132f, 30.025f };
					uParam0->f_112.f_1[19 /*20*/].f_6 = 331.593f;
					uParam0->f_112.f_1[19 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[20 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[20 /*20*/].f_3 = { -130.449f, 6166.134f, 30.025f };
					uParam0->f_112.f_1[20 /*20*/].f_6 = 318.393f;
					uParam0->f_112.f_1[20 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[21 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[21 /*20*/].f_3 = { -129.356f, 6162.866f, 30.025f };
					uParam0->f_112.f_1[21 /*20*/].f_6 = 336.593f;
					uParam0->f_112.f_1[21 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[22 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[22 /*20*/].f_3 = { -154.678f, 6141.968f, 31.335f };
					uParam0->f_112.f_1[22 /*20*/].f_6 = 345.593f;
					uParam0->f_112.f_1[22 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[23 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[23 /*20*/].f_3 = { -147.754f, 6146.933f, 31.335f };
					uParam0->f_112.f_1[23 /*20*/].f_6 = 3.792f;
					uParam0->f_112.f_1[23 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[24 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[24 /*20*/].f_3 = { -150.736f, 6151.301f, 30.206f };
					uParam0->f_112.f_1[24 /*20*/].f_6 = 359.392f;
					uParam0->f_112.f_1[24 /*20*/].f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_112.f_1[25 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[25 /*20*/].f_3 = { -121.467f, 6303.275f, 31.3319f };
					uParam0->f_112.f_1[25 /*20*/].f_6 = 219.3999f;
					uParam0->f_112.f_1[25 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[26 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[26 /*20*/].f_3 = { -121.7794f, 6303.724f, 31.4397f };
					uParam0->f_112.f_1[26 /*20*/].f_6 = 219.3999f;
					uParam0->f_112.f_1[26 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_112.f_1[27 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[27 /*20*/].f_3 = { -126.1517f, 6307.81f, 31.3738f };
					uParam0->f_112.f_1[27 /*20*/].f_6 = 219.3999f;
					uParam0->f_112.f_1[27 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[28 /*20*/].f_2 = joaat("g_m_m_chigoon_02");
					uParam0->f_112.f_1[28 /*20*/].f_3 = { -126.1517f, 6307.81f, 31.3738f };
					uParam0->f_112.f_1[28 /*20*/].f_6 = 219.3999f;
					uParam0->f_112.f_1[28 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("hakuchou");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -122.0785f, 6303.822f, 30.5009f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 219.3999f;
					uParam0->f_723.f_1[1 /*14*/].f_3 = joaat("hakuchou");
					uParam0->f_723.f_1[1 /*14*/].f_4 = { -126.1772f, 6307.958f, 30.5013f };
					uParam0->f_723.f_1[1 /*14*/].f_7 = 219.3999f;
					uParam0->f_1149.f_1[0 /*10*/].f_2 = joaat("prop_boxpile_04a");
					uParam0->f_1149.f_1[0 /*10*/].f_3 = { -159.213f, 6163.726f, 30.97f };
					uParam0->f_1149.f_1[0 /*10*/].f_6 = -45.2f;
					uParam0->f_1149.f_1[0 /*10*/].f_7 = { 0f, 0f, -45.2f };
					uParam0->f_1149.f_1[1 /*10*/].f_2 = joaat("prop_boxpile_04a");
					uParam0->f_1149.f_1[1 /*10*/].f_3 = { -168.011f, 6161.638f, 30.97f };
					uParam0->f_1149.f_1[1 /*10*/].f_6 = -45.2f;
					uParam0->f_1149.f_1[1 /*10*/].f_7 = { 0f, 0f, -45.2f };
					uParam0->f_1149.f_1[2 /*10*/].f_2 = joaat("prop_boxpile_04a");
					uParam0->f_1149.f_1[2 /*10*/].f_3 = { -166.797f, 6152.736f, 30.97f };
					uParam0->f_1149.f_1[2 /*10*/].f_6 = -45.2f;
					uParam0->f_1149.f_1[2 /*10*/].f_7 = { 0f, 0f, -45.2f };
					uParam0->f_1149.f_1[3 /*10*/].f_2 = joaat("prop_boxpile_04a");
					uParam0->f_1149.f_1[3 /*10*/].f_3 = { -174.846f, 6154.445f, 30.97f };
					uParam0->f_1149.f_1[3 /*10*/].f_6 = 225.399f;
					uParam0->f_1149.f_1[3 /*10*/].f_7 = { 0f, 0f, -134.601f };
					uParam0->f_1149.f_1[4 /*10*/].f_2 = joaat("prop_box_wood04a");
					uParam0->f_1149.f_1[4 /*10*/].f_3 = { -169.086f, 6172.342f, 30.21f };
					uParam0->f_1149.f_1[4 /*10*/].f_6 = -134.601f;
					uParam0->f_1149.f_1[4 /*10*/].f_7 = { 0f, 0f, -134.601f };
					uParam0->f_1149.f_1[5 /*10*/].f_2 = joaat("prop_box_wood04a");
					uParam0->f_1149.f_1[5 /*10*/].f_3 = { -170.895f, 6170.91f, 30.21f };
					uParam0->f_1149.f_1[5 /*10*/].f_6 = 190.6f;
					uParam0->f_1149.f_1[5 /*10*/].f_7 = { 0f, 0f, -169.4f };
					uParam0->f_1149.f_1[6 /*10*/].f_2 = joaat("ch_prop_ch_casino_shutter01x");
					uParam0->f_1149.f_1[6 /*10*/].f_3 = { -176.0689f, 6166.622f, 30.2064f };
					uParam0->f_1149.f_1[6 /*10*/].f_6 = 314.7994f;
					uParam0->f_1149.f_1[6 /*10*/].f_7 = { 0f, 0f, -45.2006f };
					uParam0->f_1149.f_1[7 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[7 /*10*/].f_3 = { -139.768f, 6149.346f, 33.093f };
					uParam0->f_1149.f_1[7 /*10*/].f_6 = 314.998f;
					uParam0->f_1149.f_1[7 /*10*/].f_7 = { 0f, 0f, -45.002f };
					uParam0->f_1149.f_1[8 /*10*/].f_2 = joaat("prop_ld_keypad_01");
					uParam0->f_1149.f_1[8 /*10*/].f_3 = { -100.89f, 6200.349f, 31.601f };
					uParam0->f_1149.f_1[8 /*10*/].f_6 = 224.797f;
					uParam0->f_1149.f_1[8 /*10*/].f_7 = { 0f, 0f, -135.203f };
					uParam0->f_1149.f_1[9 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[9 /*10*/].f_3 = { -67.043f, 6268.323f, 31.77f };
					uParam0->f_1149.f_1[9 /*10*/].f_6 = 213.197f;
					uParam0->f_1149.f_1[9 /*10*/].f_7 = { 0f, 0f, -146.803f };
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[0 /*12*/].f_3 = { -126.848f, 6164.668f, 31.286f };
					uParam0->f_10.f_5[0 /*12*/].f_6 = 18.2f;
					uParam0->f_10.f_5[0 /*12*/].f_7 = { 0f, 0f, 18.2f };
					uParam0->f_10.f_5[1 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[1 /*12*/].f_3 = { -117.768f, 6180.41f, 30.281f };
					uParam0->f_10.f_5[1 /*12*/].f_6 = 244.2f;
					uParam0->f_10.f_5[1 /*12*/].f_7 = { 0f, 0f, -115.8f };
					uParam0->f_10.f_5[2 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[2 /*12*/].f_3 = { -148.272f, 6151.61f, 31.784f };
					uParam0->f_10.f_5[2 /*12*/].f_6 = -115.8f;
					uParam0->f_10.f_5[2 /*12*/].f_7 = { 0f, 0f, -115.8f };
					uParam0->f_10.f_5[3 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[3 /*12*/].f_3 = { -156.258f, 6142.583f, 31.596f };
					uParam0->f_10.f_5[3 /*12*/].f_6 = 139.999f;
					uParam0->f_10.f_5[3 /*12*/].f_7 = { 0f, 0f, 139.999f };
					uParam0->f_10.f_5[4 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[4 /*12*/].f_3 = { -166.179f, 6142.06f, 30.864f };
					uParam0->f_10.f_5[4 /*12*/].f_6 = 112.799f;
					uParam0->f_10.f_5[4 /*12*/].f_7 = { 0f, 0f, 112.799f };
					uParam0->f_10.f_5[5 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[5 /*12*/].f_3 = { -165.259f, 6172.422f, 30.468f };
					uParam0->f_10.f_5[5 /*12*/].f_6 = 105.599f;
					uParam0->f_10.f_5[5 /*12*/].f_7 = { 0f, 0f, 105.599f };
					uParam0->f_10.f_5[6 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[6 /*12*/].f_3 = { -175.453f, 6171.22f, 30.468f };
					uParam0->f_10.f_5[6 /*12*/].f_6 = 29.799f;
					uParam0->f_10.f_5[6 /*12*/].f_7 = { 0f, 0f, 29.799f };
					uParam0->f_10.f_5[7 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[7 /*12*/].f_3 = { -163.061f, 6156.146f, 30.468f };
					uParam0->f_10.f_5[7 /*12*/].f_6 = 323.199f;
					uParam0->f_10.f_5[7 /*12*/].f_7 = { 0f, 0f, -36.801f };
					uParam0->f_10 = 8;
					uParam0->f_112 = 29;
					uParam0->f_723 = 2;
					uParam0->f_1149 = 10;
					return 1;
				
				case 2:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -619.818f, -1622.795f, 32.011f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 16.2f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -620.147f, -1621.771f, 32.011f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 194.8f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -625.317f, -1618.375f, 32.011f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 86.4f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_BINOCULARS", 32);
					uParam0->f_112.f_1[3 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[3 /*20*/].f_3 = { -615.344f, -1629.156f, 32.011f };
					uParam0->f_112.f_1[3 /*20*/].f_6 = 86.4f;
					uParam0->f_112.f_1[3 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[4 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[4 /*20*/].f_3 = { -606.992f, -1633.722f, 32.03f };
					uParam0->f_112.f_1[4 /*20*/].f_6 = 86.4f;
					uParam0->f_112.f_1[4 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[5 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[5 /*20*/].f_3 = { -606.743f, -1627.727f, 32.011f };
					uParam0->f_112.f_1[5 /*20*/].f_6 = 99.6f;
					uParam0->f_112.f_1[5 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[6 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[6 /*20*/].f_3 = { -595.592f, -1617.062f, 32.011f };
					uParam0->f_112.f_1[6 /*20*/].f_6 = 88.6f;
					uParam0->f_112.f_1[6 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[7 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[7 /*20*/].f_3 = { -591.772f, -1620.001f, 32.011f };
					uParam0->f_112.f_1[7 /*20*/].f_6 = 88.6f;
					uParam0->f_112.f_1[7 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[8 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[8 /*20*/].f_3 = { -584.624f, -1627.771f, 32.011f };
					uParam0->f_112.f_1[8 /*20*/].f_6 = 88.6f;
					uParam0->f_112.f_1[8 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[9 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[9 /*20*/].f_3 = { -577.523f, -1624.079f, 32.011f };
					uParam0->f_112.f_1[9 /*20*/].f_6 = 88.6f;
					uParam0->f_112.f_1[9 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[10 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[10 /*20*/].f_3 = { -573.245f, -1627.728f, 32.026f };
					uParam0->f_112.f_1[10 /*20*/].f_6 = 73f;
					uParam0->f_112.f_1[10 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[11 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[11 /*20*/].f_3 = { -562.376f, -1612.228f, 26.011f };
					uParam0->f_112.f_1[11 /*20*/].f_6 = 198.999f;
					uParam0->f_112.f_1[11 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[12 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[12 /*20*/].f_3 = { -560.163f, -1608.387f, 26.011f };
					uParam0->f_112.f_1[12 /*20*/].f_6 = 163.999f;
					uParam0->f_112.f_1[12 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[13 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[13 /*20*/].f_3 = { -562.298f, -1602.482f, 26.011f };
					uParam0->f_112.f_1[13 /*20*/].f_6 = 187.999f;
					uParam0->f_112.f_1[13 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[14 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[14 /*20*/].f_3 = { -574.062f, -1602.049f, 26.028f };
					uParam0->f_112.f_1[14 /*20*/].f_6 = 271.999f;
					uParam0->f_112.f_1[14 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[15 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[15 /*20*/].f_3 = { -571.21f, -1608.261f, 26.021f };
					uParam0->f_112.f_1[15 /*20*/].f_6 = 342.199f;
					uParam0->f_112.f_1[15 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[16 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[16 /*20*/].f_3 = { -581.235f, -1610.866f, 26.011f };
					uParam0->f_112.f_1[16 /*20*/].f_6 = 318.198f;
					uParam0->f_112.f_1[16 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[17 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[17 /*20*/].f_3 = { -578.373f, -1604.95f, 26.011f };
					uParam0->f_112.f_1[17 /*20*/].f_6 = 276.198f;
					uParam0->f_112.f_1[17 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[18 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[18 /*20*/].f_3 = { -585.537f, -1608.643f, 26.011f };
					uParam0->f_112.f_1[18 /*20*/].f_6 = 276.198f;
					uParam0->f_112.f_1[18 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[19 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[19 /*20*/].f_3 = { -584.277f, -1599.841f, 26.011f };
					uParam0->f_112.f_1[19 /*20*/].f_6 = 220.998f;
					uParam0->f_112.f_1[19 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[20 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[20 /*20*/].f_3 = { -586.854f, -1604.355f, 26.011f };
					uParam0->f_112.f_1[20 /*20*/].f_6 = 262.997f;
					uParam0->f_112.f_1[20 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[21 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[21 /*20*/].f_3 = { -591.606f, -1610.156f, 26.021f };
					uParam0->f_112.f_1[21 /*20*/].f_6 = 293.597f;
					uParam0->f_112.f_1[21 /*20*/].f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_112.f_1[22 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[22 /*20*/].f_3 = { -599.933f, -1611.344f, 26.091f };
					uParam0->f_112.f_1[22 /*20*/].f_6 = 293.597f;
					uParam0->f_112.f_1[22 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[23 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[23 /*20*/].f_3 = { -592.859f, -1601.717f, 26.011f };
					uParam0->f_112.f_1[23 /*20*/].f_6 = 269.597f;
					uParam0->f_112.f_1[23 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[24 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[24 /*20*/].f_3 = { -596.873f, -1603.715f, 26.04f };
					uParam0->f_112.f_1[24 /*20*/].f_6 = 235.397f;
					uParam0->f_112.f_1[24 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[25 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[25 /*20*/].f_3 = { -604.34f, -1606.907f, 26.011f };
					uParam0->f_112.f_1[25 /*20*/].f_6 = 280.397f;
					uParam0->f_112.f_1[25 /*20*/].f_7 = joaat("weapon_smg");
					uParam0->f_112.f_1[26 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[26 /*20*/].f_3 = { -680.97f, -1635.71f, 25.02f };
					uParam0->f_112.f_1[26 /*20*/].f_6 = 276.8f;
					uParam0->f_112.f_1[26 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[27 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[27 /*20*/].f_3 = { -681.559f, -1636.146f, 25.027f };
					uParam0->f_112.f_1[27 /*20*/].f_6 = 276.8f;
					uParam0->f_112.f_1[27 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_112.f_1[28 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[28 /*20*/].f_3 = { -673.589f, -1643.914f, 25.522f };
					uParam0->f_112.f_1[28 /*20*/].f_6 = 276.8f;
					uParam0->f_112.f_1[28 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[29 /*20*/].f_2 = joaat("g_m_y_pologoon_01");
					uParam0->f_112.f_1[29 /*20*/].f_3 = { -673.589f, -1643.914f, 25.522f };
					uParam0->f_112.f_1[29 /*20*/].f_6 = 276.8f;
					uParam0->f_112.f_1[29 /*20*/].f_7 = joaat("weapon_microsmg");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("baller2");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -681.8975f, -1634.902f, 23.2062f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 42.7997f;
					uParam0->f_723.f_1[1 /*14*/].f_3 = joaat("baller2");
					uParam0->f_723.f_1[1 /*14*/].f_4 = { -674.138f, -1643.254f, 23.6911f };
					uParam0->f_723.f_1[1 /*14*/].f_7 = 42.7997f;
					uParam0->f_1149.f_1[0 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[0 /*10*/].f_3 = { -611.601f, -1609.803f, 27.39f };
					uParam0->f_1149.f_1[0 /*10*/].f_6 = 175f;
					uParam0->f_1149.f_1[0 /*10*/].f_7 = { 0f, 0f, 175f };
					uParam0->f_1149.f_1[1 /*10*/].f_2 = joaat("prop_ld_keypad_01");
					uParam0->f_1149.f_1[1 /*10*/].f_3 = { -603.626f, -1620.467f, 33.483f };
					uParam0->f_1149.f_1[1 /*10*/].f_6 = 354.999f;
					uParam0->f_1149.f_1[1 /*10*/].f_7 = { 0f, 0f, -5.001f };
					uParam0->f_1149.f_1[2 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[2 /*10*/].f_3 = { -593.561f, -1628.942f, 27.495f };
					uParam0->f_1149.f_1[2 /*10*/].f_6 = 354.796f;
					uParam0->f_1149.f_1[2 /*10*/].f_7 = { 0f, 0f, -5.204f };
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[0 /*12*/].f_3 = { -569.177f, -1626.37f, 33.192f };
					uParam0->f_10.f_5[0 /*12*/].f_6 = 100.198f;
					uParam0->f_10.f_5[0 /*12*/].f_7 = { 1.868f, -1.315f, 100.198f };
					uParam0->f_10.f_5[1 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[1 /*12*/].f_3 = { -581.277f, -1626.881f, 33.189f };
					uParam0->f_10.f_5[1 /*12*/].f_6 = 100.198f;
					uParam0->f_10.f_5[1 /*12*/].f_7 = { 1.05f, 1.716f, 100.198f };
					uParam0->f_10.f_5[2 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[2 /*12*/].f_3 = { -570.275f, -1607.012f, 27.06f };
					uParam0->f_10.f_5[2 /*12*/].f_6 = 304.196f;
					uParam0->f_10.f_5[2 /*12*/].f_7 = { 0f, 0f, -55.804f };
					uParam0->f_10.f_5[3 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[3 /*12*/].f_3 = { -598.042f, -1610.856f, 27.415f };
					uParam0->f_10.f_5[3 /*12*/].f_6 = -55.804f;
					uParam0->f_10.f_5[3 /*12*/].f_7 = { 0f, 0f, -55.804f };
					uParam0->f_10.f_5[4 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[4 /*12*/].f_3 = { -602.378f, -1603.319f, 29.669f };
					uParam0->f_10.f_5[4 /*12*/].f_6 = 355.395f;
					uParam0->f_10.f_5[4 /*12*/].f_7 = { 0f, 0f, -4.605f };
					uParam0->f_10.f_5[5 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[5 /*12*/].f_3 = { -589.767f, -1601.636f, 27.372f };
					uParam0->f_10.f_5[5 /*12*/].f_6 = 11.595f;
					uParam0->f_10.f_5[5 /*12*/].f_7 = { 0f, 0f, 11.595f };
					uParam0->f_10.f_5[6 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[6 /*12*/].f_3 = { -583.487f, -1608.65f, 27.372f };
					uParam0->f_10.f_5[6 /*12*/].f_6 = 8.595f;
					uParam0->f_10.f_5[6 /*12*/].f_7 = { 0f, 0f, 8.595f };
					uParam0->f_10.f_5[7 /*12*/].f_2 = joaat("ba_prop_battle_case_sm_03");
					uParam0->f_10.f_5[7 /*12*/].f_3 = { -577.038f, -1601.638f, 27.372f };
					uParam0->f_10.f_5[7 /*12*/].f_6 = 8.595f;
					uParam0->f_10.f_5[7 /*12*/].f_7 = { 0f, 0f, 8.595f };
					uParam0->f_10 = 8;
					uParam0->f_112 = 30;
					uParam0->f_723 = 2;
					uParam0->f_1149 = 3;
					return 1;
				
				case 3:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 1083.277f, -2017.31f, 40.48f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 55.795f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 1092.067f, -2016.659f, 42.844f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 345.595f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { 1096.07f, -2019.189f, 42.86f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 345.595f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[3 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[3 /*20*/].f_3 = { 1113.683f, -2021.476f, 39.283f };
					uParam0->f_112.f_1[3 /*20*/].f_6 = 36.195f;
					uParam0->f_112.f_1[3 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[4 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[4 /*20*/].f_3 = { 1079.742f, -2003.171f, 36.222f };
					uParam0->f_112.f_1[4 /*20*/].f_6 = 36.195f;
					uParam0->f_112.f_1[4 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[5 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[5 /*20*/].f_3 = { 1096.154f, -2018.869f, 36.059f };
					uParam0->f_112.f_1[5 /*20*/].f_6 = 320.595f;
					uParam0->f_112.f_1[5 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[6 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[6 /*20*/].f_3 = { 1110.09f, -2013.562f, 34.457f };
					uParam0->f_112.f_1[6 /*20*/].f_6 = 342.794f;
					uParam0->f_112.f_1[6 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[7 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[7 /*20*/].f_3 = { 1119.589f, -2017.214f, 34.511f };
					uParam0->f_112.f_1[7 /*20*/].f_6 = 24.794f;
					uParam0->f_112.f_1[7 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[8 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[8 /*20*/].f_3 = { 1124.069f, -2010.972f, 34.444f };
					uParam0->f_112.f_1[8 /*20*/].f_6 = 24.794f;
					uParam0->f_112.f_1[8 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[9 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[9 /*20*/].f_3 = { 1128.804f, -2004.535f, 34.444f };
					uParam0->f_112.f_1[9 /*20*/].f_6 = 24.794f;
					uParam0->f_112.f_1[9 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[10 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[10 /*20*/].f_3 = { 1123.996f, -1999.992f, 34.444f };
					uParam0->f_112.f_1[10 /*20*/].f_6 = 24.794f;
					uParam0->f_112.f_1[10 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[11 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[11 /*20*/].f_3 = { 1118.288f, -1999.087f, 34.444f };
					uParam0->f_112.f_1[11 /*20*/].f_6 = 66.794f;
					uParam0->f_112.f_1[11 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[12 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[12 /*20*/].f_3 = { 1113.294f, -2004.103f, 34.444f };
					uParam0->f_112.f_1[12 /*20*/].f_6 = 66.794f;
					uParam0->f_112.f_1[12 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[13 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[13 /*20*/].f_3 = { 1114.555f, -1990.721f, 34.659f };
					uParam0->f_112.f_1[13 /*20*/].f_6 = 142.394f;
					uParam0->f_112.f_1[13 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[14 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[14 /*20*/].f_3 = { 1104.674f, -1993.913f, 29.917f };
					uParam0->f_112.f_1[14 /*20*/].f_6 = 107.194f;
					uParam0->f_112.f_1[14 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[15 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[15 /*20*/].f_3 = { 1078.367f, -1979.326f, 30.472f };
					uParam0->f_112.f_1[15 /*20*/].f_6 = 153.393f;
					uParam0->f_112.f_1[15 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[16 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[16 /*20*/].f_3 = { 1077.577f, -1980.252f, 33.621f };
					uParam0->f_112.f_1[16 /*20*/].f_6 = 228.993f;
					uParam0->f_112.f_1[16 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[17 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[17 /*20*/].f_3 = { 1076.616f, -1998.743f, 29.89f };
					uParam0->f_112.f_1[17 /*20*/].f_6 = 80.793f;
					uParam0->f_112.f_1[17 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[17 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[18 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[18 /*20*/].f_3 = { 1075.194f, -1998.496f, 29.891f };
					uParam0->f_112.f_1[18 /*20*/].f_6 = 254.593f;
					uParam0->f_112.f_1[18 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[18 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					uParam0->f_112.f_1[19 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[19 /*20*/].f_3 = { 1092.417f, -1996.114f, 28.572f };
					uParam0->f_112.f_1[19 /*20*/].f_6 = 58.792f;
					uParam0->f_112.f_1[19 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[20 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[20 /*20*/].f_3 = { 1094.115f, -1987.613f, 29.913f };
					uParam0->f_112.f_1[20 /*20*/].f_6 = 144.192f;
					uParam0->f_112.f_1[20 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[21 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[21 /*20*/].f_3 = { 1087.636f, -2006.016f, 30.367f };
					uParam0->f_112.f_1[21 /*20*/].f_6 = 59.592f;
					uParam0->f_112.f_1[21 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[22 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[22 /*20*/].f_3 = { 1082.686f, -1994.328f, 29.993f };
					uParam0->f_112.f_1[22 /*20*/].f_6 = 307.391f;
					uParam0->f_112.f_1[22 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[22 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "CODE_HUMAN_MEDIC_KNEEL", 32);
					uParam0->f_112.f_1[23 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[23 /*20*/].f_3 = { 1086.912f, -2012.717f, 36.059f };
					uParam0->f_112.f_1[23 /*20*/].f_6 = 34.991f;
					uParam0->f_112.f_1[23 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[24 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[24 /*20*/].f_3 = { 1102.927f, -2013.476f, 29.88f };
					uParam0->f_112.f_1[24 /*20*/].f_6 = -3.009f;
					uParam0->f_112.f_1[24 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[25 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[25 /*20*/].f_3 = { 1109.398f, -2023.712f, 34.451f };
					uParam0->f_112.f_1[25 /*20*/].f_6 = 66.991f;
					uParam0->f_112.f_1[25 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[26 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[26 /*20*/].f_3 = { 1063.088f, -1950.172f, 32.255f };
					uParam0->f_112.f_1[26 /*20*/].f_6 = 0f;
					uParam0->f_112.f_1[26 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[27 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[27 /*20*/].f_3 = { 1063.088f, -1950.172f, 32.255f };
					uParam0->f_112.f_1[27 /*20*/].f_6 = 0f;
					uParam0->f_112.f_1[27 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[28 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[28 /*20*/].f_3 = { 1063.409f, -1941.662f, 32.259f };
					uParam0->f_112.f_1[28 /*20*/].f_6 = 0f;
					uParam0->f_112.f_1[28 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[29 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[29 /*20*/].f_3 = { 1063.409f, -1941.662f, 32.259f };
					uParam0->f_112.f_1[29 /*20*/].f_6 = 0f;
					uParam0->f_112.f_1[29 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("mesa");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 1062.783f, -1948.88f, 30.0143f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 0f;
					uParam0->f_723.f_1[1 /*14*/].f_3 = joaat("mesa");
					uParam0->f_723.f_1[1 /*14*/].f_4 = { 1062.955f, -1940.51f, 30.0161f };
					uParam0->f_723.f_1[1 /*14*/].f_7 = 0f;
					uParam0->f_1149.f_1[0 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[0 /*10*/].f_3 = { 1082.416f, -1999.247f, 36.222f };
					uParam0->f_1149.f_1[0 /*10*/].f_6 = 144.8f;
					uParam0->f_1149.f_1[0 /*10*/].f_7 = { 0f, 0f, 144.8f };
					uParam0->f_1149.f_1[1 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[1 /*10*/].f_3 = { 1107.406f, -2011.606f, 34.444f };
					uParam0->f_1149.f_1[1 /*10*/].f_6 = 234.399f;
					uParam0->f_1149.f_1[1 /*10*/].f_7 = { 0f, 0f, -125.601f };
					uParam0->f_1149.f_1[2 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[2 /*10*/].f_3 = { 1106.512f, -2013.866f, 34.451f };
					uParam0->f_1149.f_1[2 /*10*/].f_6 = 281.798f;
					uParam0->f_1149.f_1[2 /*10*/].f_7 = { 0f, 0f, -78.201f };
					uParam0->f_1149.f_1[3 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[3 /*10*/].f_3 = { 1115.889f, -2000.654f, 34.444f };
					uParam0->f_1149.f_1[3 /*10*/].f_6 = 242.797f;
					uParam0->f_1149.f_1[3 /*10*/].f_7 = { 0f, 0f, -117.203f };
					uParam0->f_1149.f_1[4 /*10*/].f_2 = joaat("xm_prop_rsply_crate04a");
					uParam0->f_1149.f_1[4 /*10*/].f_3 = { 1123.584f, -1998.117f, 34.444f };
					uParam0->f_1149.f_1[4 /*10*/].f_6 = 319.397f;
					uParam0->f_1149.f_1[4 /*10*/].f_7 = { 0f, 0f, -40.603f };
					uParam0->f_1149.f_1[5 /*10*/].f_2 = joaat("prop_mb_crate_01a");
					uParam0->f_1149.f_1[5 /*10*/].f_3 = { 1083.479f, -2015.63f, 40.48f };
					uParam0->f_1149.f_1[5 /*10*/].f_6 = 325.397f;
					uParam0->f_1149.f_1[5 /*10*/].f_7 = { 0f, 0f, -34.603f };
					uParam0->f_1149.f_1[6 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[6 /*10*/].f_3 = { 1079.903f, -1981.728f, 33.718f };
					uParam0->f_1149.f_1[6 /*10*/].f_6 = 228.997f;
					uParam0->f_1149.f_1[6 /*10*/].f_7 = { 0f, 0f, -131.003f };
					uParam0->f_1149.f_1[7 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[7 /*10*/].f_3 = { 1079.059f, -1979.018f, 33.621f };
					uParam0->f_1149.f_1[7 /*10*/].f_6 = 235.796f;
					uParam0->f_1149.f_1[7 /*10*/].f_7 = { 0f, 0f, -124.203f };
					uParam0->f_1149.f_1[8 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[8 /*10*/].f_3 = { 1123.213f, -2014.601f, 34.495f };
					uParam0->f_1149.f_1[8 /*10*/].f_6 = 229.396f;
					uParam0->f_1149.f_1[8 /*10*/].f_7 = { 0f, 0f, -130.604f };
					uParam0->f_1149.f_1[9 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[9 /*10*/].f_3 = { 1097.229f, -2021.201f, 42.844f };
					uParam0->f_1149.f_1[9 /*10*/].f_6 = 236.196f;
					uParam0->f_1149.f_1[9 /*10*/].f_7 = { 0f, 0f, -123.804f };
					uParam0->f_1149.f_1[10 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[10 /*10*/].f_3 = { 1065.978f, -2004.448f, 32.477f };
					uParam0->f_1149.f_1[10 /*10*/].f_6 = 235f;
					uParam0->f_1149.f_1[10 /*10*/].f_7 = { 0f, 0f, -125f };
					uParam0->f_1149.f_1[11 /*10*/].f_2 = joaat("prop_ld_keypad_01");
					uParam0->f_1149.f_1[11 /*10*/].f_3 = { 1084.407f, -2019.847f, 41.844f };
					uParam0->f_1149.f_1[11 /*10*/].f_6 = 235.597f;
					uParam0->f_1149.f_1[11 /*10*/].f_7 = { 0f, 0f, -124.403f };
					uParam0->f_1149.f_1[12 /*10*/].f_2 = joaat("hei_prop_hei_securitypanel");
					uParam0->f_1149.f_1[12 /*10*/].f_3 = { 1083.287f, -1976.329f, 31.849f };
					uParam0->f_1149.f_1[12 /*10*/].f_6 = 234.996f;
					uParam0->f_1149.f_1[12 /*10*/].f_7 = { 0f, 0f, -125.004f };
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[0 /*12*/].f_3 = { 1081.111f, -2001.57f, 36.222f };
					uParam0->f_10.f_5[0 /*12*/].f_6 = 311.399f;
					uParam0->f_10.f_5[0 /*12*/].f_7 = { 0f, 0f, -48.601f };
					uParam0->f_10.f_5[1 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[1 /*12*/].f_3 = { 1108.225f, -2013.487f, 34.475f };
					uParam0->f_10.f_5[1 /*12*/].f_6 = 324.998f;
					uParam0->f_10.f_5[1 /*12*/].f_7 = { 0f, 0f, -35.002f };
					uParam0->f_10.f_5[2 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[2 /*12*/].f_3 = { 1116.809f, -1998.829f, 35.462f };
					uParam0->f_10.f_5[2 /*12*/].f_6 = 73.397f;
					uParam0->f_10.f_5[2 /*12*/].f_7 = { 0f, 0f, 73.397f };
					uParam0->f_10.f_5[3 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[3 /*12*/].f_3 = { 1084.912f, -2016.53f, 40.932f };
					uParam0->f_10.f_5[3 /*12*/].f_6 = 283.397f;
					uParam0->f_10.f_5[3 /*12*/].f_7 = { 0f, 0f, -76.603f };
					uParam0->f_10.f_5[4 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[4 /*12*/].f_3 = { 1078.652f, -1981.375f, 33.711f };
					uParam0->f_10.f_5[4 /*12*/].f_6 = 200.396f;
					uParam0->f_10.f_5[4 /*12*/].f_7 = { 1.69f, -2.278f, -159.604f };
					uParam0->f_10.f_5[5 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[5 /*12*/].f_3 = { 1077.026f, -1977.026f, 30.473f };
					uParam0->f_10.f_5[5 /*12*/].f_6 = 305.196f;
					uParam0->f_10.f_5[5 /*12*/].f_7 = { 0f, 0f, -54.804f };
					uParam0->f_10.f_5[6 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[6 /*12*/].f_3 = { 1122.577f, -2015.96f, 34.468f };
					uParam0->f_10.f_5[6 /*12*/].f_6 = 232.396f;
					uParam0->f_10.f_5[6 /*12*/].f_7 = { 0f, 0f, -127.604f };
					uParam0->f_10.f_5[7 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[7 /*12*/].f_3 = { 1096.314f, -2020.603f, 42.831f };
					uParam0->f_10.f_5[7 /*12*/].f_6 = 236.395f;
					uParam0->f_10.f_5[7 /*12*/].f_7 = { 0f, 0f, -123.605f };
					uParam0->f_10 = 8;
					uParam0->f_112 = 30;
					uParam0->f_723 = 2;
					uParam0->f_1149 = 13;
					return 1;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { 3094.687f, -4748.514f, 14.262f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 48.398f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { 3064.843f, -4667.521f, 14.261f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 122.198f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "WORLD_HUMAN_STAND_IMPATIENT", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { 3063.376f, -4668.326f, 14.261f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 288.997f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_112.f_1[3 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[3 /*20*/].f_3 = { 3068.265f, -4683.475f, 14.262f };
					uParam0->f_112.f_1[3 /*20*/].f_6 = 68.997f;
					uParam0->f_112.f_1[3 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[3 /*20*/].f_10 = 3;
					StringCopy(&(uParam0->f_1528[3 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[4 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[4 /*20*/].f_3 = { 3066.946f, -4682.825f, 14.262f };
					uParam0->f_112.f_1[4 /*20*/].f_6 = 245.397f;
					uParam0->f_112.f_1[4 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[4 /*20*/].f_10 = 4;
					StringCopy(&(uParam0->f_1528[4 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					uParam0->f_112.f_1[5 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[5 /*20*/].f_3 = { 3088.082f, -4724.969f, 14.262f };
					uParam0->f_112.f_1[5 /*20*/].f_6 = 111.797f;
					uParam0->f_112.f_1[5 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[5 /*20*/].f_10 = 5;
					StringCopy(&(uParam0->f_1528[5 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					uParam0->f_112.f_1[6 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[6 /*20*/].f_3 = { 3091.973f, -4723.988f, 26.288f };
					uParam0->f_112.f_1[6 /*20*/].f_6 = 193.797f;
					uParam0->f_112.f_1[6 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[6 /*20*/].f_10 = 6;
					StringCopy(&(uParam0->f_1528[6 /*8*/]), "WORLD_HUMAN_BINOCULARS", 32);
					uParam0->f_112.f_1[7 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[7 /*20*/].f_3 = { 3090.296f, -4689.964f, 26.252f };
					uParam0->f_112.f_1[7 /*20*/].f_6 = 287.397f;
					uParam0->f_112.f_1[7 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[7 /*20*/].f_10 = 7;
					StringCopy(&(uParam0->f_1528[7 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					uParam0->f_112.f_1[8 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[8 /*20*/].f_3 = { 3084.115f, -4687.252f, 26.252f };
					uParam0->f_112.f_1[8 /*20*/].f_6 = 13.997f;
					uParam0->f_112.f_1[8 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[8 /*20*/].f_10 = 6;
					uParam0->f_112.f_1[9 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[9 /*20*/].f_3 = { 3094.254f, -4702.987f, 17.315f };
					uParam0->f_112.f_1[9 /*20*/].f_6 = 104.996f;
					uParam0->f_112.f_1[9 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[9 /*20*/].f_10 = 5;
					uParam0->f_112.f_1[10 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[10 /*20*/].f_3 = { 3055.6f, -4735.574f, 9.742f };
					uParam0->f_112.f_1[10 /*20*/].f_6 = 292.596f;
					uParam0->f_112.f_1[10 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[10 /*20*/].f_10 = 5;
					uParam0->f_112.f_1[11 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[11 /*20*/].f_3 = { 3077.444f, -4750.969f, 5.077f };
					uParam0->f_112.f_1[11 /*20*/].f_6 = 130.195f;
					uParam0->f_112.f_1[11 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[11 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[12 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[12 /*20*/].f_3 = { 3076.263f, -4751.948f, 5.077f };
					uParam0->f_112.f_1[12 /*20*/].f_6 = 303.395f;
					uParam0->f_112.f_1[12 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[12 /*20*/].f_10 = 2;
					uParam0->f_112.f_1[13 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[13 /*20*/].f_3 = { 3069.151f, -4756.761f, 5.077f };
					uParam0->f_112.f_1[13 /*20*/].f_6 = 18.995f;
					uParam0->f_112.f_1[13 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[13 /*20*/].f_10 = 8;
					StringCopy(&(uParam0->f_1528[8 /*8*/]), "CODE_HUMAN_PATROL_2H", 32);
					uParam0->f_112.f_1[14 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[14 /*20*/].f_3 = { 3067.968f, -4740.718f, 5.077f };
					uParam0->f_112.f_1[14 /*20*/].f_6 = 250.995f;
					uParam0->f_112.f_1[14 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[14 /*20*/].f_10 = 0;
					uParam0->f_112.f_1[15 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[15 /*20*/].f_3 = { 3069.276f, -4741.511f, 5.077f };
					uParam0->f_112.f_1[15 /*20*/].f_6 = 70.395f;
					uParam0->f_112.f_1[15 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[15 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[16 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[16 /*20*/].f_3 = { 3075.16f, -4724.222f, 5.077f };
					uParam0->f_112.f_1[16 /*20*/].f_6 = 146.594f;
					uParam0->f_112.f_1[16 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[16 /*20*/].f_10 = 0;
					uParam0->f_112.f_1[17 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[17 /*20*/].f_3 = { 3062.228f, -4720.362f, 5.077f };
					uParam0->f_112.f_1[17 /*20*/].f_6 = 31.794f;
					uParam0->f_112.f_1[17 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[17 /*20*/].f_10 = 0;
					uParam0->f_112.f_1[18 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[18 /*20*/].f_3 = { 3056.421f, -4706.483f, 5.077f };
					uParam0->f_112.f_1[18 /*20*/].f_6 = 289.394f;
					uParam0->f_112.f_1[18 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[18 /*20*/].f_10 = 1;
					uParam0->f_112.f_1[19 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[19 /*20*/].f_3 = { 3057.54f, -4705.968f, 5.077f };
					uParam0->f_112.f_1[19 /*20*/].f_6 = 115.394f;
					uParam0->f_112.f_1[19 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[19 /*20*/].f_10 = 4;
					uParam0->f_112.f_1[20 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[20 /*20*/].f_3 = { 3063.979f, -4681.589f, 7.293f };
					uParam0->f_112.f_1[20 /*20*/].f_6 = 200.593f;
					uParam0->f_112.f_1[20 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[20 /*20*/].f_10 = 8;
					uParam0->f_112.f_1[21 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[21 /*20*/].f_3 = { 3034.458f, -4683.562f, 5.077f };
					uParam0->f_112.f_1[21 /*20*/].f_6 = 287.593f;
					uParam0->f_112.f_1[21 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[21 /*20*/].f_10 = 9;
					StringCopy(&(uParam0->f_1528[9 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
					uParam0->f_112.f_1[22 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[22 /*20*/].f_3 = { 3040.746f, -4640.564f, 5.077f };
					uParam0->f_112.f_1[22 /*20*/].f_6 = 266.593f;
					uParam0->f_112.f_1[22 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[22 /*20*/].f_10 = 4;
					uParam0->f_112.f_1[23 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[23 /*20*/].f_3 = { 3042.149f, -4640.666f, 5.077f };
					uParam0->f_112.f_1[23 /*20*/].f_6 = 85.993f;
					uParam0->f_112.f_1[23 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[23 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[24 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[24 /*20*/].f_3 = { 3062.849f, -4664.55f, 5.077f };
					uParam0->f_112.f_1[24 /*20*/].f_6 = 10.393f;
					uParam0->f_112.f_1[24 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[24 /*20*/].f_10 = 5;
					uParam0->f_112.f_1[25 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[25 /*20*/].f_3 = { 3047.132f, -4664.601f, 5.077f };
					uParam0->f_112.f_1[25 /*20*/].f_6 = 285.392f;
					uParam0->f_112.f_1[25 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[25 /*20*/].f_10 = 10;
					StringCopy(&(uParam0->f_1528[10 /*8*/]), "CODE_HUMAN_MEDIC_KNEEL", 32);
					uParam0->f_112.f_1[26 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[26 /*20*/].f_3 = { 3067.135f, -4708.579f, 5.077f };
					uParam0->f_112.f_1[26 /*20*/].f_6 = 345.392f;
					uParam0->f_112.f_1[26 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[26 /*20*/].f_10 = 9;
					uParam0->f_112.f_1[27 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[27 /*20*/].f_3 = { 3093.038f, -4747.359f, 14.262f };
					uParam0->f_112.f_1[27 /*20*/].f_6 = 235.393f;
					uParam0->f_112.f_1[27 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[27 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[28 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[28 /*20*/].f_3 = { 1286.253f, -3336.473f, 7.028f };
					uParam0->f_112.f_1[28 /*20*/].f_6 = 232.194f;
					uParam0->f_112.f_1[28 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_112.f_1[28 /*20*/].f_10 = 4;
					uParam0->f_112.f_1[29 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[29 /*20*/].f_3 = { 1286.158f, -3336.881f, 6.855f };
					uParam0->f_112.f_1[29 /*20*/].f_6 = 232.194f;
					uParam0->f_112.f_1[29 /*20*/].f_7 = joaat("weapon_assaultshotgun");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { 3108.854f, -4759.642f, 14.263f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 103.6f;
					uParam0->f_723.f_1[1 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[1 /*14*/].f_4 = { 3116.39f, -4788.099f, 14.262f };
					uParam0->f_723.f_1[1 /*14*/].f_7 = 103.6f;
					uParam0->f_723.f_1[2 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[2 /*14*/].f_4 = { 3102.528f, -4735.531f, 14.263f };
					uParam0->f_723.f_1[2 /*14*/].f_7 = 103.6f;
					uParam0->f_723.f_1[3 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[3 /*14*/].f_4 = { 3047.084f, -4761.392f, 14.261f };
					uParam0->f_723.f_1[3 /*14*/].f_7 = 283f;
					uParam0->f_723.f_1[4 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[4 /*14*/].f_4 = { 3085.837f, -4671.713f, 14.262f };
					uParam0->f_723.f_1[4 /*14*/].f_7 = 103.6f;
					uParam0->f_723.f_1[5 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[5 /*14*/].f_4 = { 3070.221f, -4616.792f, 14.261f };
					uParam0->f_723.f_1[5 /*14*/].f_7 = 103.6f;
					uParam0->f_723.f_1[6 /*14*/].f_3 = joaat("lazer");
					uParam0->f_723.f_1[6 /*14*/].f_4 = { 3041.829f, -4741.495f, 14.261f };
					uParam0->f_723.f_1[6 /*14*/].f_7 = 284.199f;
					uParam0->f_723.f_1[7 /*14*/].f_3 = joaat("titan");
					uParam0->f_723.f_1[7 /*14*/].f_4 = { 3052.563f, -4652.511f, 14.261f };
					uParam0->f_723.f_1[7 /*14*/].f_7 = 27.2f;
					uParam0->f_723.f_1[8 /*14*/].f_3 = joaat("dinghy");
					uParam0->f_723.f_1[8 /*14*/].f_4 = { 1082.488f, -2714.502f, 0f };
					uParam0->f_723.f_1[8 /*14*/].f_7 = 215.999f;
					uParam0->f_723.f_1[9 /*14*/].f_3 = joaat("dinghy");
					uParam0->f_723.f_1[9 /*14*/].f_4 = { 1117.503f, -2717.571f, 0f };
					uParam0->f_723.f_1[9 /*14*/].f_7 = 214.399f;
					uParam0->f_723.f_1[10 /*14*/].f_3 = joaat("dinghy");
					uParam0->f_723.f_1[10 /*14*/].f_4 = { 1185.511f, -2723.852f, 0.411f };
					uParam0->f_723.f_1[10 /*14*/].f_7 = 227.399f;
					uParam0->f_723.f_1[11 /*14*/].f_3 = joaat("dinghy");
					uParam0->f_723.f_1[11 /*14*/].f_4 = { 1159.204f, -2720.305f, 0f };
					uParam0->f_723.f_1[11 /*14*/].f_7 = 198.399f;
					uParam0->f_723.f_1[12 /*14*/].f_3 = joaat("buzzard");
					uParam0->f_723.f_1[12 /*14*/].f_4 = { 1284.757f, -3335.727f, 4.902f };
					uParam0->f_723.f_1[12 /*14*/].f_7 = 232.197f;
					uParam0->f_723.f_1[13 /*14*/].f_3 = joaat("buzzard2");
					uParam0->f_723.f_1[13 /*14*/].f_4 = { 3068.761f, -4697.998f, 14.262f };
					uParam0->f_723.f_1[13 /*14*/].f_7 = 79f;
					uParam0->f_723.f_1[14 /*14*/].f_3 = joaat("buzzard2");
					uParam0->f_723.f_1[14 /*14*/].f_4 = { 3093.045f, -4750.972f, 14.262f };
					uParam0->f_723.f_1[14 /*14*/].f_7 = 56.8f;
					uParam0->f_1149.f_1[0 /*10*/].f_2 = joaat("prop_mb_cargo_03a");
					uParam0->f_1149.f_1[0 /*10*/].f_3 = { 3053.546f, -4670.803f, 14.263f };
					uParam0->f_1149.f_1[0 /*10*/].f_6 = 25.799f;
					uParam0->f_1149.f_1[0 /*10*/].f_7 = { 0f, 0f, 25.799f };
					uParam0->f_1149.f_1[1 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[1 /*10*/].f_3 = { 3071.4f, -4686.302f, 14.251f };
					uParam0->f_1149.f_1[1 /*10*/].f_6 = 154.999f;
					uParam0->f_1149.f_1[1 /*10*/].f_7 = { 0f, 0f, 154.999f };
					uParam0->f_1149.f_1[2 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[2 /*10*/].f_3 = { 3063.819f, -4661.209f, 14.261f };
					uParam0->f_1149.f_1[2 /*10*/].f_6 = 105.599f;
					uParam0->f_1149.f_1[2 /*10*/].f_7 = { 0f, 0f, 105.599f };
					uParam0->f_1149.f_1[3 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[3 /*10*/].f_3 = { 3067.083f, -4686.996f, 14.262f };
					uParam0->f_1149.f_1[3 /*10*/].f_6 = 148.798f;
					uParam0->f_1149.f_1[3 /*10*/].f_7 = { 0f, 0f, 148.798f };
					uParam0->f_1149.f_1[4 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[4 /*10*/].f_3 = { 3067.134f, -4664.006f, 14.251f };
					uParam0->f_1149.f_1[4 /*10*/].f_6 = 219.999f;
					uParam0->f_1149.f_1[4 /*10*/].f_7 = { 0f, 0f, -140.001f };
					uParam0->f_1149.f_1[5 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[5 /*10*/].f_3 = { 3051.314f, -4655.083f, 5.077f };
					uParam0->f_1149.f_1[5 /*10*/].f_6 = 305.999f;
					uParam0->f_1149.f_1[5 /*10*/].f_7 = { 0f, 0f, -54.001f };
					uParam0->f_1149.f_1[6 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[6 /*10*/].f_3 = { 3046.874f, -4638.131f, 5.067f };
					uParam0->f_1149.f_1[6 /*10*/].f_6 = 218.999f;
					uParam0->f_1149.f_1[6 /*10*/].f_7 = { 0f, 0f, -141.001f };
					uParam0->f_1149.f_1[7 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[7 /*10*/].f_3 = { 3066.798f, -4710.338f, 5.067f };
					uParam0->f_1149.f_1[7 /*10*/].f_6 = 253.198f;
					uParam0->f_1149.f_1[7 /*10*/].f_7 = { 0f, 0f, -106.802f };
					uParam0->f_1149.f_1[8 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[8 /*10*/].f_3 = { 3070.108f, -4738.642f, 5.077f };
					uParam0->f_1149.f_1[8 /*10*/].f_6 = 248.998f;
					uParam0->f_1149.f_1[8 /*10*/].f_7 = { 0f, 0f, -111.002f };
					uParam0->f_1149.f_1[9 /*10*/].f_2 = joaat("prop_mb_cargo_03a");
					uParam0->f_1149.f_1[9 /*10*/].f_3 = { 3071.455f, -4724.657f, 5.078f };
					uParam0->f_1149.f_1[9 /*10*/].f_6 = 269.998f;
					uParam0->f_1149.f_1[9 /*10*/].f_7 = { 0f, 0f, -90.002f };
					uParam0->f_1149.f_1[10 /*10*/].f_2 = joaat("prop_mb_cargo_03a");
					uParam0->f_1149.f_1[10 /*10*/].f_3 = { 3082.217f, -4756.915f, 5.078f };
					uParam0->f_1149.f_1[10 /*10*/].f_6 = 173.198f;
					uParam0->f_1149.f_1[10 /*10*/].f_7 = { 0f, 0f, 173.198f };
					uParam0->f_1149.f_1[11 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[11 /*10*/].f_3 = { 3078.523f, -4756.028f, 5.077f };
					uParam0->f_1149.f_1[11 /*10*/].f_6 = 159.998f;
					uParam0->f_1149.f_1[11 /*10*/].f_7 = { 0f, 0f, 159.998f };
					uParam0->f_1149.f_1[12 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[12 /*10*/].f_3 = { 3090.39f, -4716.896f, 14.263f };
					uParam0->f_1149.f_1[12 /*10*/].f_6 = 72.998f;
					uParam0->f_1149.f_1[12 /*10*/].f_7 = { 0f, 0f, 72.998f };
					uParam0->f_1149.f_1[13 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[13 /*10*/].f_3 = { 3052.932f, -4653.263f, 15.516f };
					uParam0->f_1149.f_1[13 /*10*/].f_6 = 206.6f;
					uParam0->f_1149.f_1[13 /*10*/].f_7 = { 0f, 0f, -153.4f };
					uParam0->f_1149.f_1[14 /*10*/].f_2 = joaat("prop_laptop_01a");
					uParam0->f_1149.f_1[14 /*10*/].f_3 = { 3084.242f, -4685.789f, 26.943f };
					uParam0->f_1149.f_1[14 /*10*/].f_6 = 25.199f;
					uParam0->f_1149.f_1[14 /*10*/].f_7 = { 0f, 0f, 25.199f };
					uParam0->f_1149.f_1[15 /*10*/].f_2 = joaat("prop_laptop_01a");
					uParam0->f_1149.f_1[15 /*10*/].f_3 = { 3093.403f, -4722.336f, 26.947f };
					uParam0->f_1149.f_1[15 /*10*/].f_6 = 282.6f;
					uParam0->f_1149.f_1[15 /*10*/].f_7 = { 0f, 0f, -77.4f };
					uParam0->f_10.f_5[0 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[0 /*12*/].f_3 = { 3054.201f, -4655.738f, 15.513f };
					uParam0->f_10.f_5[0 /*12*/].f_6 = 26.8f;
					uParam0->f_10.f_5[0 /*12*/].f_7 = { 0f, 0f, 26.8f };
					uParam0->f_10.f_5[1 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[1 /*12*/].f_3 = { 3095.441f, -4719.058f, 14.263f };
					uParam0->f_10.f_5[1 /*12*/].f_6 = 260f;
					uParam0->f_10.f_5[1 /*12*/].f_7 = { 0f, 0f, -100f };
					uParam0->f_10.f_5[2 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[2 /*12*/].f_3 = { 3074.477f, -4725.333f, 5.646f };
					uParam0->f_10.f_5[2 /*12*/].f_6 = 139.599f;
					uParam0->f_10.f_5[2 /*12*/].f_7 = { 0f, 0f, 139.599f };
					uParam0->f_10.f_5[3 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[3 /*12*/].f_3 = { 3034.962f, -4689.281f, 5.077f };
					uParam0->f_10.f_5[3 /*12*/].f_6 = 104.799f;
					uParam0->f_10.f_5[3 /*12*/].f_7 = { 0f, 0f, 104.799f };
					uParam0->f_10.f_5[4 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[4 /*12*/].f_3 = { 3048.071f, -4645.388f, 6.038f };
					uParam0->f_10.f_5[4 /*12*/].f_6 = 326.999f;
					uParam0->f_10.f_5[4 /*12*/].f_7 = { 0f, 0f, -33.001f };
					uParam0->f_10.f_5[5 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[5 /*12*/].f_3 = { 3053.555f, -4713.921f, 5.077f };
					uParam0->f_10.f_5[5 /*12*/].f_6 = 127.199f;
					uParam0->f_10.f_5[5 /*12*/].f_7 = { 0f, 0f, 127.199f };
					uParam0->f_10.f_5[6 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[6 /*12*/].f_3 = { 3066.941f, -4689.153f, 14.262f };
					uParam0->f_10.f_5[6 /*12*/].f_6 = 148.6f;
					uParam0->f_10.f_5[6 /*12*/].f_7 = { 0f, 0f, 148.6f };
					uParam0->f_10.f_5[7 /*12*/].f_2 = joaat("ba_prop_battle_rsply_crate_02a");
					uParam0->f_10.f_5[7 /*12*/].f_3 = { 3091.707f, -4748.735f, 14.262f };
					uParam0->f_10.f_5[7 /*12*/].f_6 = 3.199f;
					uParam0->f_10.f_5[7 /*12*/].f_7 = { 0f, 0f, 3.199f };
					uParam0->f_10 = 8;
					uParam0->f_112 = 30;
					uParam0->f_723 = 15;
					uParam0->f_1149 = 16;
					return 1;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					uParam0->f_112.f_1[0 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[0 /*20*/].f_3 = { -1818.198f, 2969.156f, 31.81f };
					uParam0->f_112.f_1[0 /*20*/].f_6 = 201.598f;
					uParam0->f_112.f_1[0 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(uParam0->f_1528[0 /*8*/]), "WORLD_HUMAN_COP_IDLES", 32);
					uParam0->f_112.f_1[1 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[1 /*20*/].f_3 = { -1817.071f, 2968.209f, 31.81f };
					uParam0->f_112.f_1[1 /*20*/].f_6 = 62.998f;
					uParam0->f_112.f_1[1 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(uParam0->f_1528[1 /*8*/]), "CODE_HUMAN_MEDIC_TIME_OF_DEATH", 32);
					uParam0->f_112.f_1[2 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[2 /*20*/].f_3 = { -1818.385f, 2967.8f, 31.81f };
					uParam0->f_112.f_1[2 /*20*/].f_6 = 332.597f;
					uParam0->f_112.f_1[2 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(uParam0->f_1528[2 /*8*/]), "WORLD_HUMAN_STAND_IMPATIENT", 32);
					uParam0->f_112.f_1[3 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[3 /*20*/].f_3 = { -1845.028f, 2967.844f, 31.81f };
					uParam0->f_112.f_1[3 /*20*/].f_6 = 330.796f;
					uParam0->f_112.f_1[3 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[3 /*20*/].f_10 = 3;
					StringCopy(&(uParam0->f_1528[3 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					uParam0->f_112.f_1[4 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[4 /*20*/].f_3 = { -1844.452f, 2969.14f, 31.81f };
					uParam0->f_112.f_1[4 /*20*/].f_6 = 145.796f;
					uParam0->f_112.f_1[4 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[4 /*20*/].f_10 = 4;
					StringCopy(&(uParam0->f_1528[4 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					uParam0->f_112.f_1[5 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[5 /*20*/].f_3 = { -1803.769f, 2957.235f, 31.81f };
					uParam0->f_112.f_1[5 /*20*/].f_6 = 24.996f;
					uParam0->f_112.f_1[5 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[5 /*20*/].f_10 = 5;
					StringCopy(&(uParam0->f_1528[5 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					uParam0->f_112.f_1[6 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[6 /*20*/].f_3 = { -1831.011f, 2966.302f, 31.81f };
					uParam0->f_112.f_1[6 /*20*/].f_6 = 284.597f;
					uParam0->f_112.f_1[6 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[6 /*20*/].f_10 = 6;
					StringCopy(&(uParam0->f_1528[6 /*8*/]), "CODE_HUMAN_MEDIC_KNEEL", 32);
					uParam0->f_112.f_1[7 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[7 /*20*/].f_3 = { -1799.3f, 2973.757f, 31.809f };
					uParam0->f_112.f_1[7 /*20*/].f_6 = 258.197f;
					uParam0->f_112.f_1[7 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[7 /*20*/].f_10 = 6;
					uParam0->f_112.f_1[8 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[8 /*20*/].f_3 = { -1823.747f, 2951.466f, 31.81f };
					uParam0->f_112.f_1[8 /*20*/].f_6 = 11.597f;
					uParam0->f_112.f_1[8 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[8 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[9 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[9 /*20*/].f_3 = { -1824.178f, 2952.723f, 31.81f };
					uParam0->f_112.f_1[9 /*20*/].f_6 = 194.597f;
					uParam0->f_112.f_1[9 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[9 /*20*/].f_10 = 7;
					StringCopy(&(uParam0->f_1528[7 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
					uParam0->f_112.f_1[10 /*20*/].f_2 = joaat("s_m_m_scientist_01");
					uParam0->f_112.f_1[10 /*20*/].f_3 = { -1810.728f, 2985.417f, 31.81f };
					uParam0->f_112.f_1[10 /*20*/].f_6 = 277.196f;
					uParam0->f_112.f_1[10 /*20*/].f_7 = joaat("weapon_unarmed");
					uParam0->f_112.f_1[10 /*20*/].f_10 = 1;
					uParam0->f_112.f_1[11 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[11 /*20*/].f_3 = { -1809.528f, 2985.513f, 31.81f };
					uParam0->f_112.f_1[11 /*20*/].f_6 = 101.796f;
					uParam0->f_112.f_1[11 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[11 /*20*/].f_10 = 2;
					uParam0->f_112.f_1[12 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[12 /*20*/].f_3 = { -1808.458f, 2969.435f, 31.81f };
					uParam0->f_112.f_1[12 /*20*/].f_6 = 102.397f;
					uParam0->f_112.f_1[12 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[12 /*20*/].f_10 = 8;
					StringCopy(&(uParam0->f_1528[8 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					uParam0->f_112.f_1[13 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[13 /*20*/].f_3 = { -1822.344f, 2975.547f, 31.81f };
					uParam0->f_112.f_1[13 /*20*/].f_6 = 208.396f;
					uParam0->f_112.f_1[13 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[13 /*20*/].f_10 = 8;
					uParam0->f_112.f_1[14 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[14 /*20*/].f_3 = { -1823.742f, 2958.84f, 31.81f };
					uParam0->f_112.f_1[14 /*20*/].f_6 = 303.996f;
					uParam0->f_112.f_1[14 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[14 /*20*/].f_10 = 8;
					uParam0->f_112.f_1[15 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[15 /*20*/].f_3 = { -1847.071f, 2957.58f, 31.81f };
					uParam0->f_112.f_1[15 /*20*/].f_6 = 140.396f;
					uParam0->f_112.f_1[15 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[15 /*20*/].f_10 = 9;
					StringCopy(&(uParam0->f_1528[9 /*8*/]), "WORLD_HUMAN_TOURIST_MOBILE", 32);
					uParam0->f_112.f_1[16 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[16 /*20*/].f_3 = { -1820.341f, 2997.945f, 31.81f };
					uParam0->f_112.f_1[16 /*20*/].f_6 = 333.595f;
					uParam0->f_112.f_1[16 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[16 /*20*/].f_10 = 8;
					uParam0->f_112.f_1[17 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[17 /*20*/].f_3 = { -1815.588f, 2976.842f, 31.81f };
					uParam0->f_112.f_1[17 /*20*/].f_6 = 188.195f;
					uParam0->f_112.f_1[17 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[17 /*20*/].f_10 = 9;
					uParam0->f_112.f_1[18 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[18 /*20*/].f_3 = { -1845.614f, 2976.045f, 31.81f };
					uParam0->f_112.f_1[18 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[18 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[18 /*20*/].f_10 = 10;
					StringCopy(&(uParam0->f_1528[10 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					uParam0->f_112.f_1[19 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[19 /*20*/].f_3 = { -1840.854f, 2935.936f, 31.81f };
					uParam0->f_112.f_1[19 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[19 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[19 /*20*/].f_10 = 11;
					StringCopy(&(uParam0->f_1528[11 /*8*/]), "CODE_HUMAN_PATROL_2H", 32);
					uParam0->f_112.f_1[20 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[20 /*20*/].f_3 = { -1800.921f, 3004.704f, 31.81f };
					uParam0->f_112.f_1[20 /*20*/].f_6 = 150.194f;
					uParam0->f_112.f_1[20 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[20 /*20*/].f_10 = 11;
					uParam0->f_112.f_1[21 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[21 /*20*/].f_3 = { -1796.865f, 2959.138f, 31.81f };
					uParam0->f_112.f_1[21 /*20*/].f_6 = 62.793f;
					uParam0->f_112.f_1[21 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[21 /*20*/].f_10 = 10;
					uParam0->f_112.f_1[22 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[22 /*20*/].f_3 = { -1833.315f, 2983.79f, 31.81f };
					uParam0->f_112.f_1[22 /*20*/].f_6 = 11.998f;
					uParam0->f_112.f_1[22 /*20*/].f_7 = joaat("weapon_carbinerifle");
					uParam0->f_112.f_1[22 /*20*/].f_10 = 5;
					uParam0->f_112.f_1[23 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[23 /*20*/].f_3 = { -1833.466f, 2985.092f, 31.81f };
					uParam0->f_112.f_1[23 /*20*/].f_6 = 179.198f;
					uParam0->f_112.f_1[23 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[23 /*20*/].f_10 = 4;
					uParam0->f_112.f_1[24 /*20*/].f_2 = joaat("s_m_y_blackops_02");
					uParam0->f_112.f_1[24 /*20*/].f_3 = { -1804.306f, 2958.615f, 31.81f };
					uParam0->f_112.f_1[24 /*20*/].f_6 = 204.396f;
					uParam0->f_112.f_1[24 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[24 /*20*/].f_10 = 3;
					uParam0->f_112.f_1[25 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[25 /*20*/].f_3 = { -1927.829f, 2974.369f, 34.049f };
					uParam0->f_112.f_1[25 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[25 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[26 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[26 /*20*/].f_3 = { -1927.829f, 2974.369f, 34.049f };
					uParam0->f_112.f_1[26 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[26 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[27 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[27 /*20*/].f_3 = { -1933.332f, 2966.458f, 34.049f };
					uParam0->f_112.f_1[27 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[27 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_112.f_1[28 /*20*/].f_2 = joaat("s_m_y_blackops_01");
					uParam0->f_112.f_1[28 /*20*/].f_3 = { -1933.332f, 2966.458f, 34.049f };
					uParam0->f_112.f_1[28 /*20*/].f_6 = 331.994f;
					uParam0->f_112.f_1[28 /*20*/].f_7 = joaat("weapon_pistol");
					uParam0->f_723.f_1[0 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[0 /*14*/].f_4 = { -1860.906f, 3001.197f, 31.81f };
					uParam0->f_723.f_1[0 /*14*/].f_7 = 278.399f;
					uParam0->f_723.f_1[1 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[1 /*14*/].f_4 = { -1867.893f, 2989.224f, 31.81f };
					uParam0->f_723.f_1[1 /*14*/].f_7 = 320.399f;
					uParam0->f_723.f_1[2 /*14*/].f_3 = joaat("barracks");
					uParam0->f_723.f_1[2 /*14*/].f_4 = { -1848.411f, 2971.394f, 31.81f };
					uParam0->f_723.f_1[2 /*14*/].f_7 = 148.999f;
					uParam0->f_723.f_1[3 /*14*/].f_3 = joaat("barracks");
					uParam0->f_723.f_1[3 /*14*/].f_4 = { -1826.492f, 2985.986f, 31.81f };
					uParam0->f_723.f_1[3 /*14*/].f_7 = 285.798f;
					uParam0->f_723.f_1[4 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[4 /*14*/].f_4 = { -1806.595f, 2956.238f, 31.81f };
					uParam0->f_723.f_1[4 /*14*/].f_7 = 208.199f;
					uParam0->f_723.f_1[5 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[5 /*14*/].f_4 = { -1807.672f, 2962.245f, 31.81f };
					uParam0->f_723.f_1[5 /*14*/].f_7 = 266.399f;
					uParam0->f_723.f_1[6 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[6 /*14*/].f_4 = { -1926.389f, 2974.074f, 31.81f };
					uParam0->f_723.f_1[6 /*14*/].f_7 = 257.799f;
					uParam0->f_723.f_1[7 /*14*/].f_3 = joaat("mesa3");
					uParam0->f_723.f_1[7 /*14*/].f_4 = { -1931.754f, 2966.295f, 31.81f };
					uParam0->f_723.f_1[7 /*14*/].f_7 = 266.799f;
					uParam0->f_1149.f_1[0 /*10*/].f_2 = joaat("prop_conc_sacks_02a");
					uParam0->f_1149.f_1[0 /*10*/].f_3 = { -1860.872f, 2995.823f, 31.836f };
					uParam0->f_1149.f_1[0 /*10*/].f_6 = 223.8f;
					uParam0->f_1149.f_1[0 /*10*/].f_7 = { 0f, 0f, -136.2f };
					uParam0->f_1149.f_1[1 /*10*/].f_2 = joaat("prop_conc_sacks_02a");
					uParam0->f_1149.f_1[1 /*10*/].f_3 = { -1862.67f, 2993.118f, 31.836f };
					uParam0->f_1149.f_1[1 /*10*/].f_6 = 254.4f;
					uParam0->f_1149.f_1[1 /*10*/].f_7 = { 0f, 0f, -105.6f };
					uParam0->f_1149.f_1[2 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[2 /*10*/].f_3 = { -1825.893f, 2968.138f, 31.8f };
					uParam0->f_1149.f_1[2 /*10*/].f_6 = 148.198f;
					uParam0->f_1149.f_1[2 /*10*/].f_7 = { 0f, 0f, 148.198f };
					uParam0->f_1149.f_1[3 /*10*/].f_2 = joaat("prop_air_cargo_04a");
					uParam0->f_1149.f_1[3 /*10*/].f_3 = { -1812.914f, 2974.903f, 31.8f };
					uParam0->f_1149.f_1[3 /*10*/].f_6 = 96.798f;
					uParam0->f_1149.f_1[3 /*10*/].f_7 = { 0f, 0f, 96.798f };
					uParam0->f_1149.f_1[4 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[4 /*10*/].f_3 = { -1828.634f, 2951.333f, 31.81f };
					uParam0->f_1149.f_1[4 /*10*/].f_6 = 191.796f;
					uParam0->f_1149.f_1[4 /*10*/].f_7 = { 0f, 0f, -168.204f };
					uParam0->f_1149.f_1[5 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[5 /*10*/].f_3 = { -1811.934f, 2990.597f, 31.81f };
					uParam0->f_1149.f_1[5 /*10*/].f_6 = 107.596f;
					uParam0->f_1149.f_1[5 /*10*/].f_7 = { 0f, 0f, 107.595f };
					uParam0->f_1149.f_1[6 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[6 /*10*/].f_3 = { -1807.687f, 2990.75f, 31.81f };
					uParam0->f_1149.f_1[6 /*10*/].f_6 = 16.995f;
					uParam0->f_1149.f_1[6 /*10*/].f_7 = { 0f, 0f, 16.995f };
					uParam0->f_1149.f_1[7 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[7 /*10*/].f_3 = { -1795.865f, 2958.532f, 31.81f };
					uParam0->f_1149.f_1[7 /*10*/].f_6 = 60.795f;
					uParam0->f_1149.f_1[7 /*10*/].f_7 = { 0f, 0f, 60.795f };
					uParam0->f_1149.f_1[8 /*10*/].f_2 = joaat("prop_mb_cargo_04a");
					uParam0->f_1149.f_1[8 /*10*/].f_3 = { -1832.419f, 2951.276f, 31.81f };
					uParam0->f_1149.f_1[8 /*10*/].f_6 = 329.995f;
					uParam0->f_1149.f_1[8 /*10*/].f_7 = { 0f, 0f, -30.005f };
					uParam0->f_1149.f_1[9 /*10*/].f_2 = joaat("prop_mb_cargo_04b");
					uParam0->f_1149.f_1[9 /*10*/].f_3 = { -1796.675f, 2955.163f, 31.81f };
					uParam0->f_1149.f_1[9 /*10*/].f_6 = -30.005f;
					uParam0->f_1149.f_1[9 /*10*/].f_7 = { 0f, 0f, -30.005f };
					uParam0->f_1149.f_1[10 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[10 /*10*/].f_3 = { -1848.462f, 2956.31f, 31.81f };
					uParam0->f_1149.f_1[10 /*10*/].f_6 = 234.595f;
					uParam0->f_1149.f_1[10 /*10*/].f_7 = { 0f, 0f, -125.405f };
					uParam0->f_1149.f_1[11 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[11 /*10*/].f_3 = { -1828.273f, 2967.31f, 31.81f };
					uParam0->f_1149.f_1[11 /*10*/].f_6 = 108.595f;
					uParam0->f_1149.f_1[11 /*10*/].f_7 = { 0f, 0f, 108.595f };
					uParam0->f_1149.f_1[12 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[12 /*10*/].f_3 = { -1797.333f, 2975.091f, 31.809f };
					uParam0->f_1149.f_1[12 /*10*/].f_6 = 168.594f;
					uParam0->f_1149.f_1[12 /*10*/].f_7 = { 0f, 0f, 168.594f };
					uParam0->f_1149.f_1[13 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[13 /*10*/].f_3 = { -1818.753f, 3000.609f, 31.81f };
					uParam0->f_1149.f_1[13 /*10*/].f_6 = 149.794f;
					uParam0->f_1149.f_1[13 /*10*/].f_7 = { 0f, 0f, 149.794f };
					uParam0->f_1149.f_1[14 /*10*/].f_2 = joaat("prop_mb_crate_01b");
					uParam0->f_1149.f_1[14 /*10*/].f_3 = { -1815.243f, 2974.112f, 31.81f };
					uParam0->f_1149.f_1[14 /*10*/].f_6 = 6.394f;
					uParam0->f_1149.f_1[14 /*10*/].f_7 = { 0f, 0f, 6.394f };
					uParam0->f_1149.f_1[15 /*10*/].f_2 = 766526323;
					uParam0->f_1149.f_1[15 /*10*/].f_3 = { -1812.513f, 2965.576f, 42.917f };
					uParam0->f_1149.f_1[15 /*10*/].f_6 = 59.8f;
					uParam0->f_1149.f_1[15 /*10*/].f_7 = { -10.001f, 0f, 59.8f };
					uParam0->f_1149.f_1[16 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[16 /*10*/].f_3 = { -1839.59f, 2989.965f, 31.906f };
					uParam0->f_1149.f_1[16 /*10*/].f_6 = 33f;
					uParam0->f_1149.f_1[16 /*10*/].f_7 = { 0f, 0f, 33f };
					uParam0->f_1149.f_1[17 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[17 /*10*/].f_3 = { -1838.754f, 2959.786f, 31.906f };
					uParam0->f_1149.f_1[17 /*10*/].f_6 = 97.6f;
					uParam0->f_1149.f_1[17 /*10*/].f_7 = { 0f, 0f, 97.6f };
					uParam0->f_1149.f_1[18 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[18 /*10*/].f_3 = { -1800.252f, 2992.128f, 31.905f };
					uParam0->f_1149.f_1[18 /*10*/].f_6 = 331.2f;
					uParam0->f_1149.f_1[18 /*10*/].f_7 = { 0f, 0f, -28.8f };
					uParam0->f_1149.f_1[19 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[19 /*10*/].f_3 = { -1829.044f, 2941.093f, 31.906f };
					uParam0->f_1149.f_1[19 /*10*/].f_6 = 154.399f;
					uParam0->f_1149.f_1[19 /*10*/].f_7 = { 0f, 0f, 154.399f };
					uParam0->f_1149.f_1[20 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[20 /*10*/].f_3 = { -1799.968f, 2950.045f, 31.906f };
					uParam0->f_1149.f_1[20 /*10*/].f_6 = 230.399f;
					uParam0->f_1149.f_1[20 /*10*/].f_7 = { 0f, 0f, -129.601f };
					uParam0->f_1149.f_1[21 /*10*/].f_2 = joaat("prop_worklight_03b");
					uParam0->f_1149.f_1[21 /*10*/].f_3 = { -1792.75f, 2962.583f, 31.905f };
					uParam0->f_1149.f_1[21 /*10*/].f_6 = 257.599f;
					uParam0->f_1149.f_1[21 /*10*/].f_7 = { 0f, 0f, -102.401f };
					uParam0->f_1149.f_1[22 /*10*/].f_2 = 1711471446;
					uParam0->f_1149.f_1[22 /*10*/].f_3 = { -1857.55f, 2992.045f, 30.9805f };
					uParam0->f_1149.f_1[22 /*10*/].f_6 = 179.8002f;
					uParam0->f_1149.f_1[22 /*10*/].f_7 = { 0f, 0f, 179.8002f };
					uParam0->f_10.f_5[0 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[0 /*12*/].f_3 = { -1829.972f, 2966.744f, 32.457f };
					uParam0->f_10.f_5[0 /*12*/].f_6 = 62.793f;
					uParam0->f_10.f_5[0 /*12*/].f_7 = { 0f, 0f, 62.793f };
					uParam0->f_10.f_5[1 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[1 /*12*/].f_3 = { -1815.439f, 2975.941f, 32.46f };
					uParam0->f_10.f_5[1 /*12*/].f_6 = 62.793f;
					uParam0->f_10.f_5[1 /*12*/].f_7 = { 0f, 0f, 62.793f };
					uParam0->f_10.f_5[2 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[2 /*12*/].f_3 = { -1798.064f, 2973.407f, 32.485f };
					uParam0->f_10.f_5[2 /*12*/].f_6 = 62.793f;
					uParam0->f_10.f_5[2 /*12*/].f_7 = { 0f, 0f, 62.793f };
					uParam0->f_10.f_5[3 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[3 /*12*/].f_3 = { -1818.89f, 2953.357f, 35.65f };
					uParam0->f_10.f_5[3 /*12*/].f_6 = 56.596f;
					uParam0->f_10.f_5[3 /*12*/].f_7 = { 0f, 0f, 56.596f };
					uParam0->f_10.f_5[4 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[4 /*12*/].f_3 = { -1829.727f, 2952.24f, 33.385f };
					uParam0->f_10.f_5[4 /*12*/].f_6 = 162.196f;
					uParam0->f_10.f_5[4 /*12*/].f_7 = { 0f, 0f, 162.196f };
					uParam0->f_10.f_5[5 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[5 /*12*/].f_3 = { -1807.493f, 2990.33f, 33.386f };
					uParam0->f_10.f_5[5 /*12*/].f_6 = 180.796f;
					uParam0->f_10.f_5[5 /*12*/].f_7 = { 0f, 0f, -179.204f };
					uParam0->f_10.f_5[6 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[6 /*12*/].f_3 = { -1796.252f, 2958.777f, 33.377f };
					uParam0->f_10.f_5[6 /*12*/].f_6 = -179.204f;
					uParam0->f_10.f_5[6 /*12*/].f_7 = { 0f, 0f, -179.204f };
					uParam0->f_10.f_5[7 /*12*/].f_2 = -821344206;
					uParam0->f_10.f_5[7 /*12*/].f_3 = { -1847.979f, 2956.12f, 33.051f };
					uParam0->f_10.f_5[7 /*12*/].f_6 = 164.596f;
					uParam0->f_10.f_5[7 /*12*/].f_7 = { 0f, 0f, 164.596f };
					uParam0->f_10 = 8;
					uParam0->f_112 = 29;
					uParam0->f_723 = 8;
					uParam0->f_1149 = 23;
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				default:
			}
			break;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 3:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 3;
				
				case 2:
					return 1;
				
				default:
			}
			break;
		
		case 24:
			return 30;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 3;
				
				default:
			}
			break;
	}
	return -1;
}

int func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 4;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 6;
				
				default:
			}
			break;
		
		case 24:
			return 0;
	}
	return -1;
}

int func_76(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_22(iParam0))
	{
		if (func_91(iParam0, iVar0))
		{
		}
		else if (!func_78(iParam0, iVar0, uParam1))
		{
		}
		else
		{
			func_77(uParam2, iVar0);
		}
		iVar0++;
	}
	return func_19(iParam0, uParam2);
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

int func_78(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 2:
					iVar0 = func_79(func_80());
					return (iVar0 >= 19 || iVar0 <= 3);
					break;
			}
			break;
	}
	return 1;
}

int func_79(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_80()
{
	var uVar0;
	
	func_90(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_89(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_88(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_83(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_82(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_81(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_81(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_85(*uParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_84(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_85(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_86(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_86(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(var uParam0)
{
	return uParam0 & 15;
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			iParam1 = iParam1;
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return !Global_262145.f_28852;
				
				case 2:
					return !Global_262145.f_28860;
				
				case 1:
					return !Global_262145.f_28856;
				
				default:
			}
			break;
	}
	return 0;
}

int func_92()
{
	return -1;
}

int func_93()
{
	return func_94(Global_2506618.f_3.f_1);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 15;
		
		case 155:
			return 8;
		
		case 149:
			return 14;
		
		case 153:
			return 122;
		
		case 156:
			return 1;
		
		case 154:
			return 5;
		
		case 157:
			return 6;
		
		case 150:
			return 11;
		
		case 158:
			return 0;
		
		case 159:
			return 2;
		
		case 151:
			return 13;
		
		case 160:
			return 3;
		
		case 152:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("MPSV_LP0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		default:
	}
	return 256;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 20:
			return 1;
		
		default:
	}
	return 0;
}

bool func_96(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2506618.f_1, iParam0);
}

void func_97()
{
	func_98(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_99(), -1, 0)), 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_127)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_128)
		{
			func_98(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_99(), -1, 0)), 1);
			func_17(4);
		}
	}
}

void func_98(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -1558302804;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

char* func_99()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_100(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iLocal_75 = 0;
	iVar0 = 0;
	while (iVar0 < func_102())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_40(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_84[iVar0 /*3*/].f_1, 0))
			{
				if (!MISC::IS_BIT_SET(Local_84[iVar0 /*3*/].f_1, 4))
				{
					iLocal_75++;
				}
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= func_101(Param0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_75 >= func_101(Param0))
				{
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(Local_84[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!MISC::IS_BIT_SET(Local_84[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4719;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return Global_262145.f_11115;
		
		case 9:
			return Global_262145.f_11020;
		
		case 10:
			return Global_262145.f_11067;
		
		case 11:
			return Global_262145.f_11088;
		
		case 12:
			return Global_262145.f_11138;
		
		case 13:
			return Global_262145.f_11156;
		
		case 14:
			return Global_262145.f_11171;
		
		case 15:
			return Global_262145.f_11182;
		
		case 16:
			return Global_262145.f_11190;
		
		case 17:
			return Global_262145.f_11204;
		
		case 18:
			return Global_262145.f_11213;
		
		case 19:
			return Global_262145.f_23997;
		
		case 20:
			return Global_262145.f_23997;
		
		default:
	}
	return 0;
}

int func_102()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_103()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar1 = (fVar1 + Global_2506618.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar2 = (fVar2 + Global_2506618.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_104(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2506618.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

float func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8153;
		
		case 1:
			return Global_262145.f_8150;
		
		case 2:
			return Global_262145.f_8151;
		
		case 3:
			return Global_262145.f_8152;
		
		case 4:
			return Global_262145.f_8154;
		
		case 5:
			return Global_262145.f_8155;
		
		case 6:
			return Global_262145.f_8156;
		
		case 7:
			return Global_262145.f_8573;
		
		case 8:
			return Global_262145.f_10182;
		
		case 9:
			return Global_262145.f_10184;
		
		case 10:
			return Global_262145.f_10180;
		
		case 11:
			return Global_262145.f_10187;
		
		case 12:
			return Global_262145.f_10623;
		
		case 13:
			return Global_262145.f_10625;
		
		case 14:
			return Global_262145.f_10626;
		
		case 15:
			return Global_262145.f_10627;
		
		case 16:
			return Global_262145.f_10628;
		
		case 17:
			return Global_262145.f_10632;
		
		case 18:
			return Global_262145.f_11214;
		
		case 19:
			return Global_262145.f_23996;
		
		case 20:
			return Global_262145.f_28851;
		
		default:
	}
	return 0f;
}

int func_106(int iParam0)
{
	if (func_114(iParam0))
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	if (!func_53(func_111(iParam0), func_110(iParam0), func_109(iParam0), 1, 1))
	{
		return 0;
	}
	if (func_108(iParam0))
	{
		return 0;
	}
	if (!func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_107(int iParam0)
{
	return 1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6663;
		
		case 1:
			return Global_262145.f_6660;
		
		case 2:
			return Global_262145.f_6661;
		
		case 3:
			return Global_262145.f_6662;
		
		case 4:
			return Global_262145.f_8240;
		
		case 5:
			return Global_262145.f_8095;
		
		case 6:
			return Global_262145.f_8100;
		
		case 7:
			return Global_262145.f_8105;
		
		case 8:
			return Global_262145.f_10183;
		
		case 9:
			return Global_262145.f_10185;
		
		case 10:
			return Global_262145.f_10181;
		
		case 11:
			return (Global_262145.f_11361 && Global_262145.f_11360);
		
		case 12:
			return Global_262145.f_10617;
		
		case 13:
			return Global_262145.f_10619;
		
		case 14:
			return Global_262145.f_10620;
		
		case 15:
			return Global_262145.f_10621;
		
		case 16:
			return Global_262145.f_10622;
		
		case 17:
			return Global_262145.f_10631;
		
		case 18:
			return Global_262145.f_11215;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 24;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_112(int iParam0)
{
	if (Global_2506618.f_182 == -1)
	{
		return 0;
	}
	if (func_5(Global_2506618.f_182))
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	else if (!func_5(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9 || func_5(iParam0))
	{
		return 0;
	}
	if (Global_262145.f_8111 > 0 && Global_262145.f_8111 <= 21)
	{
		if (!Global_2506618.f_114[(Global_262145.f_8111 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_8111)
			{
				if (Global_2506618.f_114[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 == 12)
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_PENNED_IN", -1, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115(int iParam0)
{
	Global_2506618.f_2 = iParam0;
}

void func_116(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_117()
{
	return func_15(&(Global_2506618.f_179), func_118(), 0);
}

int func_118()
{
	return Global_2506618.f_181;
}

int func_119()
{
	return 0;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	Global_2506618.f_181 = Global_262145.f_8113;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		Global_2506618.f_8[iVar0 /*5*/] = iVar0;
		Global_2506618.f_8[iVar0 /*5*/].f_1 = func_121(iVar0);
		Global_2506618.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_8111 > 0 && Global_262145.f_8111 <= 21)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_8111)
		{
			Global_2506618.f_114[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2506618.f_136[iVar1 /*2*/] = -1;
			Global_2506618.f_136[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32;
		
		case 1:
			return 18;
		
		case 3:
			return 19;
		
		case 4:
			return 135;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 39;
		
		case 9:
			return 40;
		
		case 10:
			return 36;
		
		case 11:
			return 37;
		
		case 12:
			return 41;
		
		case 13:
			return 42;
		
		case 14:
			return 43;
		
		case 15:
			return 44;
		
		case 16:
			return 45;
		
		case 17:
			return 46;
		
		case 18:
			return 47;
		
		case 19:
			return 114;
		
		case 20:
			return 127;
		
		default:
	}
	return 0;
}

void func_122()
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = 10000;
	switch (Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Global_2506618.f_2 >= 4 && Global_2506618.f_2 != 8)
			{
				if (func_96(1))
				{
					MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
				if (!func_204(PLAYER::PLAYER_ID(), 1))
				{
					func_203(4);
				}
				else if (!func_204(PLAYER::PLAYER_ID(), 3))
				{
					func_116(&uLocal_76);
					MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
				else
				{
					if (MISC::IS_BIT_SET(iLocal_73, 1))
					{
						iVar0 = 500;
					}
					if (func_15(&uLocal_76, iVar0, 0))
					{
						MISC::CLEAR_BIT(&iLocal_73, 1);
						func_203(4);
						MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
					}
				}
			}
			else if (func_204(PLAYER::PLAYER_ID(), 1))
			{
				MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (func_204(PLAYER::PLAYER_ID(), 0))
			{
				if (Global_2506618.f_2 == 8)
				{
					func_203(8);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2506618.f_2 == 5)
				{
					func_203(5);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2506618.f_2 >= 6)
				{
					func_203(6);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2506618.f_2 == 3)
				{
					func_203(0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			else
			{
				if (func_179())
				{
					if (!func_166())
					{
						MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
					}
					if (func_149(Global_2506618.f_3))
					{
						if (!func_204(PLAYER::PLAYER_ID(), 0))
						{
							MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
						}
					}
				}
				if (!func_204(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_147() && !MISC::IS_BIT_SET(iLocal_73, 0))
					{
						MISC::SET_BIT(&iLocal_73, 1);
					}
					func_203(0);
					MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
					MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2506618.f_2 == 6)
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 1);
				MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 2);
				MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 3);
				func_203(6);
			}
			else if (func_96(3) && func_146(&(Global_2506618.f_177)))
			{
				func_128();
			}
			break;
		
		case 6:
			StringCopy(&cVar1, func_6(Global_2506618.f_3.f_1), 64);
			if (!func_127())
			{
				if (!func_204(PLAYER::PLAYER_ID(), 2))
				{
					Local_74.f_16 = -1;
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) == 0)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, false, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(&cVar1, -1, 0) < 32)
						{
							if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, true, 0))
							{
								Local_74 = Global_2506618.f_3.f_1;
								if (func_123(Local_74, 0))
								{
									MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
								}
							}
						}
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) != 0)
				{
					if (Global_2506618.f_2 == 7)
					{
						func_203(7);
						MISC::SET_BIT(&iLocal_73, 0);
						MISC::CLEAR_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
					}
				}
			}
			break;
		
		case 7:
			if (Global_2506618.f_2 != 7)
			{
				func_203(8);
			}
			break;
		
		case 8:
			func_203(0);
			break;
	}
}

int func_123(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	char cVar0[32];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (func_126())
	{
		return 0;
	}
	bParam5 = bParam5;
	StringCopy(&cVar0, func_6(Param0), 32);
	if (SCRIPT::DOES_SCRIPT_EXIST(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		if (SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
		{
			bVar1 = true;
			if (bParam5)
			{
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 16)
				{
					if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar2, bVar1, 0))
					{
						return 0;
					}
					iVar2++;
				}
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, Param0.f_16, bVar1, 0))
			{
				return 0;
			}
			iVar3 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Param0, 21, func_124(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar3 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 148:
		case 155:
		case 149:
		case 153:
		case 156:
		case 157:
		case 150:
		case 158:
		case 159:
		case 151:
		case 160:
		case 152:
		case 176:
		case 154:
		case 49:
		case 64:
		case 62:
		case 70:
		case 107:
		case 108:
		case 110:
		case 111:
		case 112:
		case 113:
		case 115:
		case 124:
		case 125:
		case 126:
		case 86:
			return 65000;
		
		default:
	}
	if (func_125(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_125(iParam0) == 7)
	{
		switch (iParam0)
		{
			case 45:
			case 43:
			case 39:
			case 37:
			case 41:
			case 47:
			case 40:
				return 8344;
			
			case 114:
			case 127:
				return 15400;
			
			default:
		}
		return 4500;
	}
	else if (func_125(iParam0) == 0)
	{
		return 4500;
	}
	else if (func_125(iParam0) == 2)
	{
		return 4500;
	}
	else if (func_125(iParam0) == 6)
	{
		switch (iParam0)
		{
			case 18:
			case 22:
			case 24:
			case 17:
			case 144:
			case 145:
			case 60:
			case 136:
			case 65:
			case 71:
			case 66:
			case 67:
			case 68:
			case 73:
			case 74:
			case 78:
			case 75:
			case joaat("MPSV_LP0_31"):
			case 80:
			case 82:
			case 81:
			case 88:
			case 89:
			case 91:
			case 92:
			case 93:
			case 90:
			case 99:
			case 85:
			case 84:
			case 100:
			case 101:
			case 97:
			case 98:
			case 103:
			case 104:
			case 105:
			case 106:
			case 96:
			case 109:
			case 116:
			case 117:
			case 118:
			case 119:
			case 120:
			case 121:
			case 122:
			case 123:
			case 128:
			case 129:
			case 146:
				return 4500;
			
			case 170:
				return 4500;
			
			case 171:
				return 1424;
			
			case 134:
				return 8344;
			
			case 87:
			case 77:
			case 76:
				return 8344;
			
			case 9:
			case 16:
			case 15:
			case 131:
			case 130:
			case 19:
			case 135:
			case 132:
			case 21:
			case 147:
				return 2050;
			
			case 140:
				return 3368;
			
			case 161:
			case 164:
				return 1828;
			
			case 165:
			case 166:
			case 167:
				return 4500;
			
			case 173:
			case 168:
			case 169:
			case 172:
			case 174:
				return 8344;
			}
		
		default:
	}
	return 1424;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
			return 7;
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 161:
			return 6;
		
		case 164:
			return 6;
		
		case 165:
			return 6;
		
		case 166:
			return 6;
		
		case 172:
			return 6;
		
		case 168:
			return 6;
		
		case 173:
			return 6;
		
		case 169:
			return 6;
		
		case 167:
			return 6;
		
		case 170:
			return 6;
		
		case 171:
			return 6;
		
		case 174:
			return 6;
		
		case 73:
		case 74:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case joaat("MPSV_LP0_31"):
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 84:
			return 6;
		
		case 83:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 91:
			return 6;
		
		case 92:
			return 6;
		
		case 93:
			return 6;
		
		case 94:
			return 6;
		
		case 102:
			return 6;
		
		case 95:
			return 6;
		
		case 96:
			return 6;
		
		case 97:
			return 6;
		
		case 98:
			return 6;
		
		case 99:
			return 6;
		
		case 100:
			return 6;
		
		case 101:
			return 6;
		
		case 103:
			return 6;
		
		case 104:
			return 6;
		
		case 105:
			return 6;
		
		case 106:
			return 6;
		
		case 107:
			return 6;
		
		case 108:
			return 6;
		
		case 109:
			return 6;
		
		case 110:
			return 6;
		
		case 111:
			return 6;
		
		case 112:
			return 6;
		
		case 113:
			return 6;
		
		case 114:
			return 7;
		
		case 115:
			return 6;
		
		case 116:
			return 6;
		
		case 117:
			return 6;
		
		case 118:
			return 6;
		
		case 119:
			return 6;
		
		case 120:
			return 6;
		
		case 121:
			return 6;
		
		case 122:
			return 6;
		
		case 123:
			return 6;
		
		case 124:
			return 6;
		
		case 125:
			return 6;
		
		case 126:
			return 6;
		
		case 127:
			return 7;
		
		case 128:
			return 6;
		
		case 129:
			return 6;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 130:
			return 6;
		
		case 131:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 134:
			return 6;
		
		case 144:
			return 6;
		
		case 145:
			return 6;
		
		case 146:
			return 6;
		
		case 147:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 142:
			return 6;
		
		case 143:
			return 6;
		
		case 132:
			return 6;
		
		case 135:
			return 6;
		
		case 136:
			return 6;
		
		case 133:
			return 6;
		
		case 137:
			return 6;
		
		case 140:
			return 6;
		
		case 141:
			return 6;
		
		case 148:
			return 6;
		
		case 155:
			return 0;
		
		case 149:
			return 6;
		
		case 156:
			return 0;
		
		case 154:
			return 0;
		
		case 157:
			return 0;
		
		case 150:
			return 6;
		
		case 158:
			return 0;
		
		case 153:
			return 6;
		
		case 159:
			return 0;
		
		case 151:
			return 6;
		
		case 160:
			return 0;
		
		case 152:
			return 6;
		
		case 138:
			return 6;
		
		case 139:
			return 6;
		
		case 176:
			return 6;
		
		case 162:
			return 6;
		
		case 163:
			return 6;
		
		default:
	}
	return 11;
}

bool func_126()
{
	return Global_2450632.f_593;
}

int func_127()
{
	if (Global_2506618.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2537071.f_1658)
	{
		if (Global_2506618.f_2 == 7)
		{
			func_203(7);
		}
	}
	else if (Global_2537071.f_1659)
	{
		Global_2537071.f_1659 = 0;
		func_203(0);
		MISC::SET_BIT(&(Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
	}
	return 1;
}

void func_128()
{
	if (Global_2419327.f_84.f_2 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2537071.f_206.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_145(&(Global_2506618.f_177), 0, 0)) < 360000)
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_206.f_1, 1))
				{
					if (func_135(31, 0, 0) && !func_134())
					{
						if (Global_262145.f_45 < 3)
						{
							func_129("ACD_TSCH", Global_262145.f_45);
						}
						else
						{
							func_129("ACD_TSCH", 3);
						}
					}
					MISC::SET_BIT(&(Global_2537071.f_206.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_145(&(Global_2506618.f_177), 0, 0)) < 600000)
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_206.f_1, 2))
				{
					if (func_135(31, 0, 0) && !func_134())
					{
						func_129("ACD_TSCH", 5);
					}
					MISC::SET_BIT(&(Global_2537071.f_206.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_145(&(Global_2506618.f_177), 0, 0)) < 1200000)
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_206.f_1, 3))
				{
					if (func_135(31, 0, 0) && !func_134())
					{
						func_129("ACD_TSCH", 10);
					}
					MISC::SET_BIT(&(Global_2537071.f_206.f_1), 3);
				}
			}
		}
	}
}

int func_129(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_130(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_130(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_133() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_33(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_131(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_132(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_133()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_134()
{
	return Global_1312877;
}

bool func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_140(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_139() || func_138())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_136())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574637[iVar1], iVar0);
}

int func_136()
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_139())
	{
		return 1;
	}
	if (func_138())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_137(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

bool func_138()
{
	return Global_1312865;
}

bool func_139()
{
	return Global_1312867;
}

bool func_140(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_143())
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_141(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_730, iVar1);
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_142()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_146, 3);
}

int func_143()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_139())
	{
		return 1;
	}
	if (func_138())
	{
		return 1;
	}
	return func_144(120, -1);
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2583656[iParam0 /*3*/][func_137(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_146(var uParam0)
{
	return uParam0->f_1;
}

int func_147()
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	return Global_1312467.f_18;
}

int func_149(int iParam0)
{
	if (!func_165(iParam0) && !func_163(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return (((func_155(0) && func_154(func_37(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f) && !func_153());
		
		case 4:
			return (((((func_135(20, 0, 0) && !func_152(PLAYER::PLAYER_ID(), 1)) && !func_152(PLAYER::PLAYER_ID(), 2)) && !func_152(PLAYER::PLAYER_ID(), 3)) && !Global_2439138.f_3747) && !func_150());
		
		default:
	}
	return 1;
}

int func_150()
{
	if (!func_151())
	{
		return 0;
	}
	if (Global_2404635.f_2 == Global_262145.f_8586 || Global_2404635.f_2 == Global_262145.f_8610)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	switch (Global_2404635)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

bool func_152(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_153()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_154(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Param1, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_160(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_159())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_135(19, 0, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_156(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_156(int iParam0)
{
	return !func_157(iParam0);
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_158(4))
			{
				return 0;
			}
			if (func_152(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_158(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_40(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2425662[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_159()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_161(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_161(int iParam0)
{
	return func_162(iParam0);
}

bool func_162(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

bool func_163(int iParam0)
{
	return func_135(func_164(iParam0), 0, 0);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 136;
		
		case 14:
			return 139;
		
		case 16:
			return 141;
		
		case 9:
			return 133;
		
		case 13:
			return 138;
		
		case 17:
			return 144;
		
		case 8:
			return 132;
		
		case 10:
			return 131;
		
		case 18:
			return 146;
		
		case 11:
			return 129;
		
		case 15:
			return 140;
		
		case 19:
			return 236;
		
		case 20:
			return 150;
		
		default:
	}
	return -1;
}

int func_165(int iParam0)
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
			return 0;
		
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
			return func_33(PLAYER::PLAYER_ID(), 0);
		
		default:
	}
	return 1;
}

int func_166()
{
	int iVar0;
	
	iVar0 = func_178(Global_2506618.f_3);
	if (((((iVar0 >= 0 && (func_176(iVar0) || func_176(0))) || func_174(PLAYER::PLAYER_ID())) || func_172(PLAYER::PLAYER_ID())) || !func_171(PLAYER::PLAYER_ID())) || !func_167())
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	if (func_5(Global_2506618.f_3))
	{
		return !func_168(0);
	}
	return 1;
}

bool func_168(bool bParam0)
{
	return func_169(PLAYER::PLAYER_ID(), bParam0);
}

bool func_169(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_170(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_92();
}

int func_170(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_92())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_171(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_142, 22);
}

int func_172(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_173())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_174(int iParam0)
{
	if (func_175(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 8);
}

bool func_175(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 2);
}

bool func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = func_177(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_137(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 15;
		
		case 2:
			return 16;
		
		case 3:
			return 17;
		
		case 4:
			return 18;
		
		case 5:
			return 19;
		
		case 6:
			return 21;
		
		case 7:
			return 20;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 10;
		
		case 11:
			return 8;
		
		case 12:
			return 11;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 4;
		
		case 16:
			return 9;
		
		case 17:
			return 3;
		
		case 18:
			return 7;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		default:
	}
	return -1;
}

bool func_179()
{
	return ((((((((((((((((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_202(PLAYER::PLAYER_ID())) && !func_159()) && !func_201()) && !func_134()) && !func_200()) && !func_198(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_161(PLAYER::PLAYER_ID())) && func_147()) && !func_152(PLAYER::PLAYER_ID(), 0)) && !func_152(PLAYER::PLAYER_ID(), 7)) && !func_152(PLAYER::PLAYER_ID(), 21)) && !func_152(PLAYER::PLAYER_ID(), 25)) && (!func_185(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || Global_2506618.f_3 == 11)) && func_40(PLAYER::PLAYER_ID(), 1, 1)) && !func_184(PLAYER::PLAYER_ID())) && func_171(PLAYER::PLAYER_ID())) && !func_183(PLAYER::PLAYER_ID())) && !func_182(PLAYER::PLAYER_ID())) && !func_180(PLAYER::PLAYER_ID()));
}

int func_180(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
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
		case joaat("MPSV_LP0_31"):
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

int func_182(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_197(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_196(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_195(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_194(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_193(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_192(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_191(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_188(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_183(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_180(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_188(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_92())
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_92())
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	switch (func_199(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 34:
		case 25:
		case 33:
			return 1;
		
		default:
	}
	return 0;
}

int func_199(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

bool func_200()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_201()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

int func_202(int iParam0)
{
	if (func_160(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_203(int iParam0)
{
	Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2 = iParam0;
}

bool func_204(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_84[iParam0 /*3*/].f_1, iParam1);
}

int func_205()
{
	return 1;
}

int func_206()
{
	return Global_2506618;
}

int func_207(int iParam0)
{
	return Local_84[iParam0 /*3*/];
}

int func_208()
{
	var uVar0;
	
	func_215(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_126())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213(159))
	{
		if (!func_212())
		{
			return 1;
		}
	}
	if (func_213(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_209() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_209()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_209()
{
	switch (func_211())
	{
		case 0:
			return func_210();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_210()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_211()
{
	return Global_30768;
}

bool func_212()
{
	return Global_2450632.f_598;
}

int func_213(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return Global_2460680;
}

void func_215(var uParam0)
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
					func_216(iVar0);
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

void func_216(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_40(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_217(iVar2, &bVar3))
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

int func_217(int iParam0, var uParam1)
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

void func_218()
{
	SYSTEM::WAIT(0);
}

void func_219()
{
	Global_2537071.f_1658 = 0;
	Global_2537071.f_1659 = 0;
	Global_2537071.f_1661 = 0;
	Global_2537071.f_1660 = 0;
	MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 1);
	MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 2);
	MISC::CLEAR_BIT(&(Global_2537071.f_206.f_1), 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_220(struct<21> Param0)
{
	func_226();
	func_224(func_225(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_221(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_2506618, 186);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_84, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_84[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 0;
	func_203(0);
	return 1;
}

int func_221(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_223();
			}
			else
			{
				return 0;
			}
		}
		if (!func_222())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_126())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_213(157))
				{
					if (!bParam2)
					{
						func_223();
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
					func_223();
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
				func_223();
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
			func_223();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_222()
{
	return Global_1312854;
}

void func_223()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_224(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_223();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

void func_226()
{
	struct<186> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 21;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_114 = 21;
	Var0.f_136 = 20;
	Var0.f_136.f_1 = -1;
	Var0.f_136.f_1.f_1 = -1;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_182 = -1;
	Var0.f_183 = -1;
	Var0.f_184 = -1;
	Var0.f_185 = -1;
	Global_2506618 = { Var0 };
}

