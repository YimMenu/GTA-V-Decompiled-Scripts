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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	struct<21> Local_98 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	struct<3> Local_128[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_122 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_297(ScriptParam_0))
		{
			func_296();
		}
	}
	while (true)
	{
		func_295();
		if (func_285())
		{
			func_296();
		}
		switch (func_284(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_283() == 1)
				{
					if (func_282())
					{
						Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_283() == 1)
				{
					func_209();
				}
				else if (func_283() == 3)
				{
					Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_296();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_283())
			{
				case 0:
					if (func_207())
					{
						Global_2511173 = 1;
					}
					break;
				
				case 1:
					if (func_206())
					{
						Global_2511173 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_296();
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
	
	switch (Global_2511173.f_2)
	{
		case 0:
			if (func_204())
			{
				func_203(&(Global_2511173.f_179));
				func_202(1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 21)
				{
					iVar1 = iVar0;
					if (func_193(iVar1))
					{
						func_191(iVar1, func_192(iVar1));
					}
					else
					{
						func_191(iVar1, 0f);
					}
					iVar0++;
				}
				func_202(3);
			}
			else
			{
				func_202(0);
			}
			break;
		
		case 3:
			iVar2 = func_190();
			if (iVar2 != -1)
			{
				Global_2511173.f_3 = { Global_2511173.f_8[iVar2 /*5*/] };
				func_202(4);
			}
			else
			{
				Global_2511173.f_181 = (Global_262145.f_8284 / 2);
				func_202(0);
			}
			break;
		
		case 4:
			switch (func_187(Global_2511173.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2511173.f_3)
					{
						case 1:
							func_185();
							if (func_184(4))
							{
								func_202(5);
							}
							else
							{
								func_202(6);
							}
							break;
						
						default:
							if (func_182(Global_2511173.f_3))
							{
								Global_2511173.f_183 = Global_2544210.f_6677;
								Global_2511173.f_184 = Global_2544210.f_6678;
								Global_2511173.f_185 = Global_2544210.f_6679;
								if (func_18(func_180(), &(Global_2511173.f_183), &(Global_2511173.f_184), func_179()))
								{
									func_202(6);
								}
								else
								{
									func_191(Global_2511173.f_3, 0f);
									func_202(3);
								}
							}
							else
							{
								func_202(6);
							}
							break;
					}
					break;
				
				case 2:
					func_191(Global_2511173.f_3, 0f);
					func_202(3);
					break;
			}
			break;
		
		case 5:
			if (!func_14())
			{
				func_202(6);
			}
			break;
		
		case 6:
			if (!func_11())
			{
				if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2511173.f_3.f_1), -1, false, 0))
				{
					func_202(7);
					func_4(Global_2511173.f_3);
				}
			}
			break;
		
		case 7:
			if (!func_3())
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2511173.f_3.f_1), -1, false, 0))
				{
					func_202(8);
				}
			}
			break;
		
		case 8:
			Global_2511173.f_181 = Global_262145.f_8284;
			Global_2511173.f_8[Global_2511173.f_3 /*5*/].f_4 = 1;
			if (func_184(1))
			{
				func_2(1);
			}
			if (func_184(4))
			{
				func_2(4);
			}
			Global_2511173.f_3 = -1;
			Global_2511173.f_3.f_1 = 0;
			Global_2511173.f_183 = -1;
			Global_2511173.f_184 = -1;
			Global_2511173.f_185 = -1;
			func_202(0);
			break;
	}
}

void func_2(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2511173.f_1, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2511173.f_1), iParam0);
	}
}

int func_3()
{
	if (Global_2511173.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2544210.f_1724)
	{
		func_202(8);
		Global_2544210.f_1724 = 0;
	}
	return 1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9 && !func_5(iParam0))
	{
		if (Global_262145.f_8282 > 0 && Global_262145.f_8282 <= 21)
		{
			if (!Global_2511173.f_114[(Global_262145.f_8282 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_8282 - 1))
				{
					Global_2511173.f_114[iVar0] = Global_2511173.f_114[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2511173.f_114[(Global_262145.f_8282 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2511173.f_136[iVar0 + 1 /*2*/] = { Global_2511173.f_136[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2511173.f_136[0 /*2*/] = iParam0;
	Global_2511173.f_136[0 /*2*/].f_1 = -1;
	Global_2511173.f_182 = iParam0;
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
		
		case 172:
			return "dont_cross_the_line";
		
		case 175:
			return "grid_arcade_cabinet";
		
		case 176:
			return "scroll_arcade_cabinet";
		
		case 177:
			return "example_arcade";
		
		case 178:
			return "road_arcade";
		
		case 183:
			return "Degenatron Games";
		
		case 179:
			return "gunslinger_arcade";
		
		case 184:
			return "ggsm_arcade";
		
		case 180:
			return "wizard_arcade";
		
		case 181:
			return "AM_CASINO_LIMO";
		
		case 182:
			return "AM_CASINO_LUXURY_CAR";
		
		case 185:
			return "AM_QUB3D_ARCADE_CABINET";
		
		case 186:
			return "camhedz_arcade";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 86:
			return "";
		
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 130:
			return "fm_content_island_heist";
		
		case 131:
			return "fm_content_island_dj";
		
		case 133:
			return "fm_content_golden_gun";
		
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
		
		case 141:
			return "AM_BOAT_TAXI";
		
		case 142:
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
		
		case 155:
			return "am_rollercoaster";
		
		case 156:
			return "am_ferriswheel";
		
		case 157:
			return "AM_LAUNCHER";
		
		case 158:
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
		
		case 143:
			return "fm_hold_up_tut";
		
		case 144:
			return "AM_CAR_MOD_TUT";
		
		case 145:
			return "AM_CONTACT_REQUESTS";
		
		case 146:
			return "am_mission_launch";
		
		case 147:
			return "am_npc_invites";
		
		case 148:
			return "am_lester_cut";
		
		case 151:
			return "AM_VEHICLE_SPAWN";
		
		case 152:
			return "am_ronTrevor_Cut";
		
		case 153:
			return "AM_ARMYBASE";
		
		case 154:
			return "AM_PRISON";
		
		case 159:
			return "AM_ArmWrestling";
		
		case 166:
			return "fm_Bj_race_controler";
		
		case 160:
			return "AM_Darts";
		
		case 167:
			return "fm_deathmatch_controler";
		
		case 165:
			return "FM_Impromptu_DM_Controler";
		
		case 168:
			return "fm_hideout_controler";
		
		case 161:
			return "golf_mp";
		
		case 164:
			return "Pilot_School_MP";
		
		case 169:
			return func_8();
		
		case 170:
			return "FM_Race_Controler";
		
		case 162:
			return "Range_Modern_MP";
		
		case 171:
			if (func_7(Global_4456448.f_133963))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 163:
			return "tennis_network_mp";
		
		case 149:
			return "am_heist_int";
		
		case 150:
			return "am_lowrider_int";
		
		case 173:
			return "am_darts_apartment";
		
		case 174:
			return "AM_Armwrestling_Apartment";
		
		case 187:
			return "SCTV";
		
		case 0:
			return "";
	}
	switch (iParam0)
	{
		case 132:
			return "AM_ISLAND_BACKUP_HELI";
		
		case 134:
			return "fm_content_tuner_robbery";
		
		case 135:
			return "fm_content_vehicle_list";
		
		case 136:
			return "tuner_sandbox_activity";
		
		case 137:
			return "fm_content_auto_shop_delivery";
		
		case 138:
			return "fm_content_phantom_car";
		
		case 139:
			return "fm_content_slasher";
		
		case 140:
			return "fm_content_sightseeing";
		
		default:
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
	return Global_4456448.f_133964 >= iParam0;
}

int func_11()
{
	if (Global_2511173.f_3.f_1 != 19)
	{
		return 0;
	}
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0) != func_179())
	{
		func_12(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0)), 1);
		Global_2544210.f_1724 = 0;
		func_202(7);
		func_4(Global_2511173.f_3);
	}
	return 1;
}

void func_12(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 1595854775;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
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
	if (Global_2511173.f_3.f_1 != 18)
	{
		return 0;
	}
	if (func_184(4))
	{
		if (!func_184(3))
		{
			func_203(&(Global_2511173.f_177));
			func_17(3);
		}
		else if (func_15(&(Global_2511173.f_177), (Global_262145.f_45 * 120000), 0))
		{
			func_2(3);
			func_202(6);
		}
	}
	else
	{
		func_202(6);
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
	if (!MISC::IS_BIT_SET(Global_2511173.f_1, iParam0))
	{
		MISC::SET_BIT(&(Global_2511173.f_1), iParam0);
	}
}

int func_18(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = *uParam1;
	iVar1 = *uParam2;
	uVar2 = 1;
	if (iVar0 == -1)
	{
		iVar0 = func_162(iParam0, iParam3, &uVar2);
	}
	if (iVar0 != -1)
	{
		if (iVar1 == -1)
		{
			iVar1 = func_47(iParam0, iVar0, iParam3);
		}
		while (iVar1 == -1)
		{
			func_46(&uVar2, iVar0);
			iVar0 = func_42(iParam0, &uVar2);
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar1 = func_47(iParam0, iVar0, iParam3);
			}
		}
	}
	if (iVar0 != -1 && iVar1 != -1)
	{
		if (func_19(iParam0, iVar0, iVar1, iParam3))
		{
			*uParam1 = iVar0;
			*uParam2 = iVar1;
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<20> Var0;
	
	switch (func_41(iParam0))
	{
		case 0:
			Var0 = 18;
			if (func_24(iParam3, iParam0, iParam1, iParam2, &Var0))
			{
				if (!func_20(Var0, iParam3))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_20(var[] uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20)
{
	int iVar0;
	int iVar1;
	
	if (iParam20 == func_179())
	{
		return 0;
	}
	else if (!func_23(iParam20))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0) != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	func_21();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2419497.f_199.f_962[iVar0 /*75*/] == func_179() || Global_2419497.f_199.f_962[iVar0 /*75*/] == iParam20)
		{
			if (Global_2419497.f_199.f_962[iVar0 /*75*/] == iParam20)
			{
			}
			else
			{
				Global_2419497.f_199.f_962[iVar0 /*75*/] = iParam20;
			}
			iVar1 = 0;
			while (iVar1 < 18)
			{
				if (uParam0[iVar1] != 0)
				{
					Global_2419497.f_199.f_962[iVar0 /*75*/].f_1[iVar1] = uParam0[iVar1];
				}
				else
				{
					Global_2419497.f_199.f_962[iVar0 /*75*/].f_1[iVar1] = 0;
				}
				iVar1++;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_21()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0) == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Global_2419497.f_199.f_962[iVar0 /*75*/] == func_179())
			{
				iVar1 = iVar0;
				while (iVar1 <= 9)
				{
					if (Global_2419497.f_199.f_962[iVar1 /*75*/] != func_179())
					{
						Var2 = { Global_2419497.f_199.f_962[iVar1 /*75*/] };
						Global_2419497.f_199.f_962[iVar1 /*75*/] = { Global_2419497.f_199.f_962[iVar0 /*75*/] };
						Global_2419497.f_199.f_962[iVar0 /*75*/] = { Var2 };
					}
					else
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_22()
{
	switch (Global_2465851)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_23(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_179())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37(iParam1, iParam2, iParam3);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (func_26(iParam0, iParam1, iParam2, iParam3, 0) == 0)
	{
		return 0;
	}
	func_25(uParam4);
	uParam4->f_19 = iVar0;
	iVar1 = 0;
	while (iVar1 < uParam4->f_19)
	{
		(*uParam4)[iVar1] = func_26(iParam0, iParam1, iParam2, iParam3, iVar1);
		iVar1++;
	}
	return 1;
}

void func_25(var uParam0)
{
	int iVar0;
	
	uParam0->f_20 = 0;
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 181:
			return 795;
		
		case 256:
			return func_35(iParam2, iParam3, iParam4, iParam0);
		
		case 258:
			return func_34(iParam2, iParam3, iParam4, iParam0);
		
		case 271:
			return func_27(iParam2, iParam3, iParam4, iParam0);
		
		default:
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 22:
					return 771;
				
				case 23:
					return 772;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam2)
			{
				case 0:
					return 794;
				
				case 1:
					iVar0 = func_29(iParam3);
					if (iVar0 != -1)
					{
						return func_28(iVar0);
					}
					break;
			}
			break;
		
		case 14:
			return 793;
		
		case 16:
			return 792;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					return 789;
				
				case 1:
					return 790;
				
				case 2:
					return 791;
				
				default:
			}
			break;
		
		default:
			iVar1 = func_29(iParam3);
			if (iVar1 != -1)
			{
				return func_28(iVar1);
			}
			break;
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 145:
			return 795;
			break;
		
		case 147:
			return 757;
			break;
		
		case 148:
			return 765;
			break;
		
		case 149:
			return 766;
			break;
		
		case 150:
			return 767;
			break;
		
		case 151:
			return 768;
			break;
		
		case 152:
			return 769;
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_179())
	{
		iVar0 = func_33(iParam0);
		if (iVar0 != 0)
		{
			return func_30(iVar0);
		}
	}
	return -1;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_32(iVar0) == 21)
		{
			if (func_31(iVar0) == iParam0)
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
	switch (iParam0)
	{
		case 148:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 3;
		
		case 151:
			return 4;
		
		case 152:
			return 5;
		
		default:
	}
	return 0;
}

int func_32(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_33(int iParam0)
{
	if (iParam0 != func_179())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_452;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 755;
			break;
	}
	return 756;
}

int func_35(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
			if (func_36(iParam3) == 1)
			{
				return 762;
			}
			else
			{
				return 761;
			}
			break;
		
		case 9:
			return 758;
		
		case 7:
			return 764;
		
		case 8:
			return 759;
		
		case 13:
			return 760;
		
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
			return 757;
		
		case 1:
			return 763;
	}
	return 0;
}

int func_36(int iParam0)
{
	if (iParam0 == func_179())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_266;
}

int func_37(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 181:
			return 0;
		
		case 256:
			return func_40(iParam1, uParam2);
		
		case 258:
			return func_39(iParam1, uParam2);
		
		case 271:
			return func_38(iParam1, uParam2);
		
		default:
	}
	return 0;
}

int func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 16:
		case 8:
		case 10:
		case 13:
		case 15:
		case 4:
		case 14:
		case 7:
		case 11:
			return 1;
		
		case 9:
			return 2;
		
		case 1:
			return 3;
		
		default:
	}
	return 0;
}

int func_39(int iParam0, var uParam1)
{
	return 1;
}

int func_40(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
		case 9:
		case 7:
		case 8:
		case 13:
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_42(int iParam0, var uParam1)
{
	var uVar0[30];
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
	iVar33 = 0;
	while (iVar33 < func_45(iParam0))
	{
		if (func_44(uParam1, iVar33))
		{
			uVar0[iVar33] = func_43(iParam0, iVar33);
			fVar31 = (fVar31 + uVar0[iVar33]);
		}
		iVar33++;
	}
	if (fVar31 == 0f)
	{
		return -1;
	}
	fVar34 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar31);
	iVar33 = 0;
	while (iVar33 < func_45(iParam0))
	{
		fVar32 = (fVar32 + uVar0[iVar33]);
		if (fVar34 < fVar32)
		{
			iVar35 = iVar33;
		}
		else
		{
			iVar33++;
		}
	}
	return iVar35;
}

float func_43(int iParam0, int iParam1)
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

bool func_44(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 3;
		
		case 24:
			return 1;
		
		case 26:
			return 3;
		
		case 256:
			return 25;
		
		case 258:
			return 7;
		
		case 259:
			return 1;
		
		case 271:
			return 17;
		
		case 273:
			return 1;
		
		case 276:
			return 4;
		
		case 277:
			return 2;
		
		case 269:
			return 1;
		
		case 270:
			return 1;
		
		case 275:
			return 1;
		
		default:
	}
	return 0;
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2[70];
	float fVar73;
	float fVar74;
	int iVar75;
	int iVar76;
	float fVar77;
	int iVar78;
	
	iVar0 = func_161(iParam0, iParam1);
	iVar1 = ((iVar0 + func_160(iParam0, iParam1)) - 1);
	if (iVar0 == iVar1)
	{
	}
	iVar75 = func_159(iParam0, iParam1, iVar0, iVar1);
	iVar76 = iVar0;
	while (iVar76 <= iVar1)
	{
		if (func_158(iParam0, iVar76))
		{
		}
		else if (func_154(iParam0, iVar76, iParam2))
		{
		}
		else if (!func_65(iParam0, iParam1, iVar76, iParam2))
		{
		}
		else if (!func_49(iParam0, iParam1, iVar76, iParam2))
		{
		}
		else
		{
			uVar2[iVar76] = func_48(iParam0, iVar76);
		}
		iVar76++;
	}
	iVar76 = iVar0;
	while (iVar76 <= iVar1)
	{
		fVar73 = (fVar73 + uVar2[iVar76]);
		iVar76++;
	}
	fVar77 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar73);
	iVar78 = -1;
	iVar76 = iVar0;
	while (iVar76 <= iVar1)
	{
		fVar74 = (fVar74 + uVar2[iVar76]);
		if (fVar77 < fVar74)
		{
			iVar78 = iVar76;
		}
		else
		{
			iVar76++;
		}
	}
	if (iVar78 == -1)
	{
		if (iVar75 != -1)
		{
			iVar78 = iVar75;
		}
	}
	return iVar78;
}

float func_48(int iParam0, int iParam1)
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

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 256:
			return func_63(iParam1, iParam2, iParam3);
		
		case 270:
			return func_50();
		
		default:
	}
	return 1;
}

bool func_50()
{
	int iVar0;
	
	iVar0 = func_51(func_52());
	return (iVar0 >= 21 || iVar0 < 5);
}

int func_51(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_52()
{
	var uVar0;
	
	func_62(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_61(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_60(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_55(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_54(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_53(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_53(var uParam0, int iParam1)
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

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_55(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_59(*uParam0);
	iVar1 = func_57(*uParam0);
	if (iParam1 < 1 || iParam1 > func_56(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_56(int iParam0, int iParam1)
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

var func_57(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_58(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_58(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_59(var uParam0)
{
	return uParam0 & 15;
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_61(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 8:
					return !func_64(iParam2);
				
				case 9:
				case 10:
					return func_64(iParam2);
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 34:
					return !func_154(256, 35, iParam2);
				
				case 35:
					return !func_154(256, 34, iParam2);
				
				default:
			}
			break;
	}
	return 1;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1712192[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<1804> Var0;
	
	Var0.f_16 = 2;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_1 = 12;
	Var0.f_19.f_1.f_2 = 1065353216;
	Var0.f_19.f_5 = 8;
	Var0.f_19.f_5.f_1 = 1;
	Var0.f_19.f_5.f_1.f_10 = -1;
	Var0.f_19.f_5.f_1.f_11 = 2;
	Var0.f_19.f_5.f_1.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var0.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_129.f_1 = 30;
	Var0.f_129.f_1.f_1 = 1;
	Var0.f_129.f_1.f_1.f_8 = -1;
	Var0.f_129.f_1.f_1.f_10 = -1;
	Var0.f_129.f_1.f_1.f_11 = -1;
	Var0.f_129.f_1.f_1.f_12 = -1;
	Var0.f_129.f_1.f_1.f_13 = -1;
	Var0.f_129.f_1.f_1.f_15 = 2;
	Var0.f_129.f_1.f_1.f_16 = -1;
	Var0.f_129.f_1.f_1.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_129.f_632 = 1;
	Var0.f_129.f_632.f_1 = 1443296302;
	Var0.f_129.f_632.f_1.f_1 = 1;
	Var0.f_129.f_632.f_1.f_1.f_1 = -1;
	Var0.f_129.f_632.f_1.f_4 = -1;
	Var0.f_767.f_1 = 30;
	Var0.f_767.f_1.f_1 = 2;
	Var0.f_767.f_1.f_1.f_8 = -1;
	Var0.f_767.f_1.f_1.f_9 = -1;
	Var0.f_767.f_1.f_1.f_10 = -1;
	Var0.f_767.f_1.f_1.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var0.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var0.f_767.f_422 = -1;
	Var0.f_1190.f_1 = 30;
	Var0.f_1190.f_1.f_1 = 2;
	Var0.f_1190.f_1.f_1.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var0.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var0.f_1552.f_1 = -1;
	Var0.f_1552.f_2 = 1132068864;
	Var0.f_1555 = -1;
	Var0.f_1563 = 5;
	Var0.f_1563.f_1 = -1;
	Var0.f_1563.f_1.f_1 = -1;
	Var0.f_1563.f_1.f_1.f_1 = -1;
	Var0.f_1563.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1563.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1563.f_6 = 3;
	Var0.f_1563.f_7 = 15000;
	Var0.f_1563.f_8 = 5000;
	Var0.f_1563.f_9 = 1128792064;
	Var0.f_1574.f_1 = 1;
	Var0.f_1574.f_1.f_1.f_3 = -1082130432;
	Var0.f_1574.f_1.f_1.f_4 = 1;
	Var0.f_1574.f_1.f_1.f_7 = -1;
	Var0.f_1574.f_1.f_1.f_7.f_1 = 12;
	Var0.f_1574.f_1.f_1.f_7.f_2 = 1065353216;
	Var0.f_1587.f_1 = 1;
	Var0.f_1587.f_1.f_1 = 1;
	Var0.f_1598.f_1 = 1;
	Var0.f_1598.f_1.f_1 = -1;
	Var0.f_1598.f_1.f_1.f_1 = 1;
	Var0.f_1598.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1598.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var0.f_1610 = 12;
	Var0.f_1803 = 2;
	Var0.f_1803.f_1.f_4 = -1;
	Var0.f_1803.f_1.f_5 = -1;
	Var0.f_1803.f_1.f_6 = 1;
	Var0.f_1803.f_1.f_8.f_4 = -1;
	Var0.f_1803.f_1.f_8.f_5 = -1;
	Var0.f_1803.f_1.f_8.f_6 = 1;
	if (!func_123(&Var0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (!func_120(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_105(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_94(&Var0, iParam0, iParam3))
	{
		return 0;
	}
	if (Var0.f_19 > 0)
	{
		if (!func_92(Var0.f_19))
		{
			return 0;
		}
	}
	if (func_91(iParam0, iParam1, iParam2))
	{
		if (!func_66(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = uParam0->f_19;
	iVar2 = uParam0->f_129;
	iVar3 = uParam0->f_767;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_90(&(uParam0->f_19.f_5[iVar0 /*13*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!func_89(&(uParam0->f_129.f_1[iVar0 /*21*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if (!func_88(uParam0, iVar0) && !func_67(&(uParam0->f_767.f_1[iVar0 /*14*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_87(uParam0, 26) || uParam0->f_9 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_3;
	fVar1 = func_85(iVar0);
	Var2 = { uParam0->f_4 };
	if (fVar1 == 0f)
	{
		fVar1 = 10f;
	}
	if (!func_68(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, fVar1, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_68(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2405077.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam14 > 0f)
	{
		if (func_79(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_69(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_69(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_78(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_74(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
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
		if (func_78(iVar1, 1, 1))
		{
			if (!func_71(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_70(iVar1) || !bParam10) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_74(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_74(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
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

int func_70(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_72(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
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

int func_72(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_73()
{
	return Global_1312763;
}

Vector3 func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_77() && Global_1590908[iVar0 /*874*/].f_844) && !func_76(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_75(iParam0);
}

Vector3 func_75(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_76(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_77()
{
	return Global_2453009.f_19;
}

int func_78(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_79(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_78(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_70(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_80(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_75(iVar1), Param0, true) < fParam3)
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

int func_80(int iParam0)
{
	if (func_84(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_83(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2518253))
	{
		return 1;
	}
	if (func_81(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_179())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_179())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_179();
}

struct<13> func_83(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2518253 = { func_83(iParam0) };
		Global_2518266 = { func_83(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518253))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518266))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_85(int iParam0)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	float fVar7;
	var uVar8;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	fVar6 = (Var3 - Var0);
	fVar7 = (Var3.f_1 - Var0.f_1);
	uVar8 = func_86(fVar6, fVar7);
	return uVar8;
}

float func_86(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_87(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1563.f_10)
	{
		if (uParam0->f_1563[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)
{
	float fVar0;
	struct<3> Var1;
	
	if (func_87(uParam0, 16) || uParam0->f_12 != -1)
	{
		return 1;
	}
	fVar0 = 2f;
	Var1 = { uParam0->f_3 };
	if (!func_68(Var1, fVar0, fVar0, fVar0, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if ((func_87(uParam0, 11) || uParam0->f_12 != -1) || func_87(uParam0, 8))
	{
		return 1;
	}
	if (uParam0->f_10 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_2;
	fVar1 = func_85(iVar0);
	Var2 = { uParam0->f_3 };
	if (!func_68(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 256:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 4:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 269:
			return 0;
	}
	return 1;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (!func_93(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1))
		{
			iVar1++;
			if (iVar1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_93(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_179());
}

int func_94(var uParam0, int iParam1, int iParam2)
{
	switch (func_41(iParam1))
	{
		case 0:
		case 2:
			if (iParam2 != func_179())
			{
				if (!func_104(uParam0->f_129, uParam0->f_767, uParam0->f_1190, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam2), false)))
				{
					return 0;
				}
			}
			break;
		
		case 1:
			if (!func_95(uParam0->f_129, uParam0->f_767, uParam0->f_1190, 1, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_95(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_103(iParam0, bParam3, bParam4) || func_102(iParam1, bParam3, bParam4)) || func_96(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	return func_97(2, iParam0, 0, bParam1, bParam2);
}

int func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1391771, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_101(iParam0) - func_100(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_100(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_101(iParam0) - func_99(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_100(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_101(iParam0) - func_100(iParam0, 1));
		}
		if (!bParam4 && Global_1590908[PLAYER::PLAYER_ID() /*874*/] != 3)
		{
			iVar1 = (iVar1 - func_98(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0)
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

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391771.f_1;
			break;
		
		case 1:
			return Global_1391771.f_2;
			break;
		
		case 2:
			return Global_1391771.f_3;
			break;
	}
	return 0;
}

int func_100(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426865[iVar0 /*449*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426865[iVar0 /*449*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426865[iVar0 /*449*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391779;
			break;
		
		case 1:
			return Global_1391780;
			break;
		
		case 2:
			return Global_1391781;
			break;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	return func_97(1, iParam0, 0, bParam1, bParam2);
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	return func_97(0, iParam0, 0, bParam1, bParam2);
}

int func_104(int iParam0, int iParam1, int iParam2, struct<3> Param3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	NETWORK::_0xE42D626EEC94E5D9(Param3, 0, &iVar0, &iVar1, &iVar2);
	if ((iParam0 <= (func_101(0) - iVar0) && iParam1 <= (func_101(1) - iVar1)) && iParam2 <= (func_101(2) - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	
	if (func_78(iParam4, 0, 1))
	{
		iVar0 = func_119(iParam1, iParam2, iParam3, iParam4);
		if (iVar0 != -1)
		{
			Var1 = { func_109(uParam0, iParam1, iParam2, iParam3) };
			if (!func_76(Var1))
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1683970.f_516[iVar0 /*3*/], Var1, true);
				fVar5 = func_106(iParam1, iParam2);
				if (fVar4 < fVar5)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

float func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 277:
			return func_108();
		
		case 271:
			return func_107(iParam1);
		
		default:
	}
	return 1000f;
}

float func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 500f;
		
		default:
	}
	return 500f;
}

float func_108()
{
	return 500f;
}

Vector3 func_109(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 271:
			switch (iParam2)
			{
				case 14:
				case 16:
				case 10:
				case 9:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 277:
			return func_110(func_118(iParam2, iParam3));
	}
	return uParam0->f_1574.f_1[0 /*11*/];
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 747:
			return 2332.839f, 2582.595f, 45.6677f;
		
		case 748:
			return -436.1613f, 6028.733f, 30.3405f;
		
		case 749:
			return -1068.84f, -851.9506f, 3.8671f;
		
		case 750:
			return 1865.898f, 3699.468f, 32.5628f;
		
		case 751:
			return 446.1463f, -1019.909f, 27.5497f;
		
		case 752:
			return -104.1688f, 2796.184f, 52.3266f;
		
		case 753:
			return 934.3446f, -1803.678f, 29.7528f;
		
		case 754:
			return -138.0878f, -1396.641f, 28.8028f;
		
		case 795:
			return -1081.882f, -501.9055f, 35.6193f;
		
		case 756:
			return 934f, -2.6f, 78f;
		
		case 755:
			return -1079.98f, -2867.023f, 12.9505f;
		
		case 758:
			return -154.8892f, -2663.216f, 5.0002f;
		
		case 759:
			return -1615.657f, 5271.33f, -0.4f;
		
		case 760:
			return 1738.386f, 3280.542f, 40.1063f;
		
		case 761:
			return -1148.742f, -3403.921f, 12.945f;
		
		case 762:
			return -1394.095f, -3263.974f, 12.9448f;
		
		case 763:
			return 1376.011f, -4400.693f, 150.6801f;
		
		case 764:
			return -1294.799f, -3539.78f, 0.1343f;
		
		case 757:
			return func_111(0f, 30.6f, -1f);
		
		case 765:
			return 762.16f, -677.76f, 27.7908f;
		
		case 766:
			return -147.3731f, -1343.693f, 28.8769f;
		
		case 767:
			return -169.0834f, -34.9386f, 51.4423f;
		
		case 768:
			return 235.1787f, -1874.712f, 25.4822f;
		
		case 769:
			return 492.1651f, -894.889f, 24.742f;
		
		case 770:
			return 1170.16f, -2973.49f, 4.902108f;
		
		case 771:
			return 1445.205f, 2327.525f, 72.8152f;
		
		case 772:
			return 1411.023f, 2582.441f, 36.0159f;
		
		case 792:
			return -153.3114f, -2658.146f, 5.001f;
		
		case 793:
			return 194.9886f, 2742.808f, 42.4263f;
		
		case 794:
			return 407.2454f, -983.9472f, 28.2663f;
		
		case 773:
			return -538.8397f, 486.7372f, 102.0298f;
		
		case 774:
			return -994.163f, 789.741f, 171.291f;
		
		case 775:
			return -1948.359f, 201.3107f, 85.0223f;
		
		case 776:
			return 51.8459f, 562.2281f, 179.3021f;
		
		case 777:
			return -3081.445f, 222.5399f, 13.0176f;
		
		case 778:
			return -815.6112f, -1329.625f, 4.0004f;
		
		case 779:
			return -1853.117f, -361.2698f, 48.2661f;
		
		case 780:
			return -3234.458f, 948.7831f, 12.2371f;
		
		case 781:
			return 1716.731f, 4668.851f, 42.1248f;
		
		case 782:
			return -1107.208f, -1049.329f, 1.1504f;
		
		case 783:
			return -1162.099f, -1466.775f, 3.3097f;
		
		case 784:
			return -1808.288f, -631.7379f, 10.0042f;
		
		case 785:
			return 875.6288f, -507.5239f, 56.4763f;
		
		case 786:
			return -1562.304f, -288.0245f, 47.2757f;
		
		case 787:
			return -1018.469f, -2731.378f, 12.6965f;
		
		case 788:
			return -588.9297f, 191.3239f, 70.2865f;
		
		case 789:
			return -176.8f, -608.2f, 31.4f;
		
		case 790:
			return 140.1f, -726f, 32.1f;
		
		case 791:
			return 42.9f, -884.1f, 29.3f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_111(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_116(0))
	{
		iVar0 = func_114(func_115());
		if (func_113(iVar0))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Param0);
		}
		else
		{
			return func_112(757, func_115(), 0);
		}
	}
	else
	{
		iVar1 = func_114(PLAYER::PLAYER_ID());
		if (func_113(iVar1))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == func_179())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1689734.f_4981[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1630816[iParam1 /*597*/].f_554.f_16[iVar1 /*6*/];
	}
	return Global_1630816[iParam1 /*597*/].f_554.f_16[iVar1 /*6*/].f_3;
}

int func_113(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1700882[iParam0]))
		{
			return Global_1700882[iParam0];
		}
	}
	return -1;
}

int func_115()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
}

bool func_116(bool bParam0)
{
	return func_117(PLAYER::PLAYER_ID(), bParam0);
}

bool func_117(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_23(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_179();
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 773;
				
				case 1:
					return 774;
				
				case 2:
					return 775;
				
				case 3:
					return 776;
				
				case 4:
					return 777;
				
				case 5:
					return 778;
				
				case 6:
					return 779;
				
				case 7:
					return 780;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 8:
					return 781;
				
				case 9:
					return 782;
				
				case 10:
					return 783;
				
				case 11:
					return 784;
				
				case 12:
					return 785;
				
				case 13:
					return 786;
				
				case 14:
					return 787;
				
				case 15:
					return 788;
				
				default:
			}
			break;
	}
	return 0;
}

int func_119(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 271:
		case 277:
			iVar0 = func_33(iParam3);
			if (iVar0 != 0)
			{
				return func_30(iVar0);
			}
			break;
	}
	return -1;
}

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	struct<1804> Var11;
	int iVar1831;
	int iVar1832;
	struct<3> Var1833;
	float fVar1836;
	
	iVar0 = func_122(iParam1);
	if (iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_160(iParam1, iParam2);
	if (iVar1 <= iVar0)
	{
		return 1;
	}
	iVar2 = func_161(iParam1, iParam2);
	iVar3 = ((iVar2 + iVar1) - 1);
	Var4 = { func_75(iParam4) };
	Var7 = { func_121(uParam0, iParam1) };
	fVar10 = SYSTEM::VDIST2(Var4, Var7);
	Var11.f_16 = 2;
	Var11.f_19.f_1 = -1;
	Var11.f_19.f_1.f_1 = 12;
	Var11.f_19.f_1.f_2 = 1065353216;
	Var11.f_19.f_5 = 8;
	Var11.f_19.f_5.f_1 = 1;
	Var11.f_19.f_5.f_1.f_10 = -1;
	Var11.f_19.f_5.f_1.f_11 = 2;
	Var11.f_19.f_5.f_1.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = -1;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_11 = 2;
	Var11.f_19.f_5.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var11.f_129.f_1 = 30;
	Var11.f_129.f_1.f_1 = 1;
	Var11.f_129.f_1.f_1.f_8 = -1;
	Var11.f_129.f_1.f_1.f_10 = -1;
	Var11.f_129.f_1.f_1.f_11 = -1;
	Var11.f_129.f_1.f_1.f_12 = -1;
	Var11.f_129.f_1.f_1.f_13 = -1;
	Var11.f_129.f_1.f_1.f_15 = 2;
	Var11.f_129.f_1.f_1.f_16 = -1;
	Var11.f_129.f_1.f_1.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var11.f_129.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var11.f_129.f_632 = 1;
	Var11.f_129.f_632.f_1 = 1443296302;
	Var11.f_129.f_632.f_1.f_1 = 1;
	Var11.f_129.f_632.f_1.f_1.f_1 = -1;
	Var11.f_129.f_632.f_1.f_4 = -1;
	Var11.f_767.f_1 = 30;
	Var11.f_767.f_1.f_1 = 2;
	Var11.f_767.f_1.f_1.f_8 = -1;
	Var11.f_767.f_1.f_1.f_9 = -1;
	Var11.f_767.f_1.f_1.f_10 = -1;
	Var11.f_767.f_1.f_1.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14 = 2;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_8 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = -1;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_1 = 12;
	Var11.f_767.f_1.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10.f_2 = 1065353216;
	Var11.f_767.f_422 = -1;
	Var11.f_1190.f_1 = 30;
	Var11.f_1190.f_1.f_1 = 2;
	Var11.f_1190.f_1.f_1.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 2;
	Var11.f_1190.f_1.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = -1;
	Var11.f_1552.f_1 = -1;
	Var11.f_1552.f_2 = 1132068864;
	Var11.f_1555 = -1;
	Var11.f_1563 = 5;
	Var11.f_1563.f_1 = -1;
	Var11.f_1563.f_1.f_1 = -1;
	Var11.f_1563.f_1.f_1.f_1 = -1;
	Var11.f_1563.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1563.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1563.f_6 = 3;
	Var11.f_1563.f_7 = 15000;
	Var11.f_1563.f_8 = 5000;
	Var11.f_1563.f_9 = 1128792064;
	Var11.f_1574.f_1 = 1;
	Var11.f_1574.f_1.f_1.f_3 = -1082130432;
	Var11.f_1574.f_1.f_1.f_4 = 1;
	Var11.f_1574.f_1.f_1.f_7 = -1;
	Var11.f_1574.f_1.f_1.f_7.f_1 = 12;
	Var11.f_1574.f_1.f_1.f_7.f_2 = 1065353216;
	Var11.f_1587.f_1 = 1;
	Var11.f_1587.f_1.f_1 = 1;
	Var11.f_1598.f_1 = 1;
	Var11.f_1598.f_1.f_1 = -1;
	Var11.f_1598.f_1.f_1.f_1 = 1;
	Var11.f_1598.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1598.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var11.f_1610 = 12;
	Var11.f_1803 = 2;
	Var11.f_1803.f_1.f_4 = -1;
	Var11.f_1803.f_1.f_5 = -1;
	Var11.f_1803.f_1.f_6 = 1;
	Var11.f_1803.f_1.f_8.f_4 = -1;
	Var11.f_1803.f_1.f_8.f_5 = -1;
	Var11.f_1803.f_1.f_8.f_6 = 1;
	iVar1832 = iVar2;
	while (iVar1832 <= iVar3)
	{
		if (iVar1832 == iParam3)
		{
		}
		else if (!func_123(&Var11, iParam1, iParam2, iVar1832))
		{
		}
		else
		{
			Var1833 = { func_121(&Var11, iParam1) };
			if (func_76(Var1833))
			{
			}
			else
			{
				fVar1836 = SYSTEM::VDIST2(Var4, Var1833);
				if (fVar10 > fVar1836)
				{
					iVar1831++;
					if (iVar1831 == iVar0)
					{
						return 0;
					}
				}
			}
		}
		iVar1832++;
	}
	return 1;
}

Vector3 func_121(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 181:
			return uParam0->f_129.f_1[0 /*21*/].f_3;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 181:
			return -1;
		
		default:
	}
	return -1;
}

int func_123(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 275:
			return 1;
		
		case 270:
			return 1;
		
		default:
	}
	switch (iParam1)
	{
		case 276:
			return 1;
		
		case 277:
			return 1;
		
		case 273:
			return 1;
		
		default:
	}
	return func_124(func_144(iParam1, iParam2, iParam3), uParam0, &uLocal_77);
}

int func_124(char* sParam0, var uParam1, var uParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	func_143();
	if (!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0))
	{
		return 0;
	}
	func_126(uParam1);
	func_125(uParam2);
	return 1;
}

void func_125(var uParam0)
{
	DATAFILE::DATAFILE_DELETE(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_126(var uParam0)
{
	char* sVar0;
	var* uVar1;
	var uVar2;
	
	sVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(sVar0, "mission");
	Global_4456448.f_85965 = DATAFILE::DATADICT_GET_INT(sVar0, "debugOnlyVersion");
	func_127(&uVar1, uParam0, 0, &uVar2);
}

bool func_127(var* uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_128(uParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_128(var uParam0, var uParam1)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	var* uVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var* uVar11[1];
	int iVar13[1];
	var* uVar15;
	bool bVar16;
	var* uVar17;
	bool bVar18;
	var* uVar19;
	bool bVar20;
	var* uVar21;
	bool bVar22;
	var* uVar23;
	bool bVar24;
	var* uVar25;
	bool bVar26;
	var* uVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	var* uVar31[1];
	int iVar33[1];
	var* uVar35;
	bool bVar36;
	var* uVar37;
	bool bVar38;
	var* uVar39;
	bool bVar40;
	var* uVar41;
	bool bVar42;
	var* uVar43;
	bool bVar44;
	var* uVar45;
	bool bVar46;
	var* uVar47;
	bool bVar48;
	var* uVar49;
	bool bVar50;
	var* uVar51;
	bool bVar52;
	var* uVar53;
	bool bVar54;
	var* uVar55;
	bool bVar56;
	var* uVar57;
	bool bVar58;
	var* uVar59;
	bool bVar60;
	var* uVar61;
	bool bVar62;
	var* uVar63;
	bool bVar64;
	var* uVar65;
	bool bVar66;
	var* uVar67;
	bool bVar68;
	int iVar69;
	var uVar70;
	int iVar71;
	var* uVar72[1];
	int iVar74[1];
	var* uVar76;
	bool bVar77;
	var* uVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	var* uVar82[2];
	int iVar85[2];
	var* uVar88;
	bool bVar89;
	var* uVar90;
	bool bVar91;
	var* uVar92;
	bool bVar93;
	var* uVar94;
	bool bVar95;
	var* uVar96;
	bool bVar97;
	int iVar98;
	var* uVar99;
	bool bVar100;
	var* uVar101;
	bool bVar102;
	var* uVar103;
	bool bVar104;
	var* uVar105;
	bool bVar106;
	int iVar107;
	int iVar108;
	var* uVar109[2];
	int iVar112[2];
	var* uVar115;
	bool bVar116;
	var* uVar117;
	bool bVar118;
	var* uVar119;
	bool bVar120;
	var* uVar121;
	bool bVar122;
	var* uVar123;
	bool bVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	var* uVar129;
	bool bVar130;
	int iVar131;
	int iVar132;
	var* uVar133;
	bool bVar134;
	var* uVar135;
	bool bVar136;
	var* uVar137[1];
	int iVar139[1];
	var* uVar141;
	bool bVar142;
	int iVar143;
	var* uVar144;
	bool bVar145;
	var* uVar146;
	bool bVar147;
	var* uVar148;
	bool bVar149;
	var* uVar150;
	bool bVar151;
	int iVar152;
	int iVar153;
	var* uVar154[1];
	int iVar156[1];
	var* uVar158;
	bool bVar159;
	var* uVar160;
	bool bVar161;
	var* uVar162;
	bool bVar163;
	int iVar164;
	int iVar165;
	var* uVar166;
	bool bVar167;
	int iVar168;
	var* uVar169[1];
	int iVar171[1];
	var* uVar173[1];
	int iVar175[1];
	var* uVar177[1];
	int iVar179[1];
	var* uVar181[1];
	int iVar183[1];
	int iVar185;
	var* uVar186;
	bool bVar187;
	int iVar188;
	var* uVar189;
	bool bVar190;
	var* uVar191;
	bool bVar192;
	var* uVar193;
	bool bVar194;
	var* uVar195[1];
	int iVar197[1];
	
	func_142(&iVar8, *uParam0, "me");
	func_142(&iVar9, iVar8, "blp");
	func_142(&iVar10, iVar8, "ents");
	func_142(&iVar29, *uParam0, "pd");
	func_142(&iVar30, iVar29, "pds");
	func_142(&iVar69, iVar29, "grp");
	func_142(&uVar70, iVar69, "rel");
	func_142(&iVar71, iVar69, "trg");
	func_142(&iVar80, *uParam0, "vh");
	func_142(&iVar81, iVar80, "veh");
	func_142(&iVar98, iVar81, "blp");
	func_142(&iVar107, *uParam0, "pp");
	func_142(&iVar108, iVar107, "prps");
	func_142(&iVar125, *uParam0, "want");
	func_142(&iVar126, *uParam0, "modt");
	func_142(&iVar127, *uParam0, "amb");
	func_142(&iVar128, iVar127, "veh");
	func_142(&iVar131, *uParam0, "gt");
	func_142(&iVar132, iVar131, "loc");
	func_142(&iVar143, iVar132, "blp");
	func_142(&iVar152, *uParam0, "ta");
	func_142(&iVar153, iVar152, "ars");
	func_142(&iVar164, *uParam0, "ptrl");
	func_142(&iVar165, iVar164, "pat");
	func_142(&iVar168, iVar165, "nd");
	func_142(&iVar185, *uParam0, "sro");
	func_142(&iVar188, *uParam0, "port");
	if (func_141(*uParam0, "fmbs") == 7)
	{
		bVar7 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar10, &Var0) == 7)
		{
			iVar13[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar10, "mn") == 7)
	{
		bVar16 = true;
	}
	if (func_141(iVar10, "pos") == 7)
	{
		bVar18 = true;
	}
	if (func_141(iVar10, "head") == 7)
	{
		bVar20 = true;
	}
	if (func_141(iVar10, "rot") == 7)
	{
		bVar22 = true;
	}
	if (func_141(iVar10, "cv") == 7)
	{
		bVar24 = true;
	}
	if (func_141(iVar10, "crt") == 7)
	{
		bVar26 = true;
	}
	if (func_141(iVar10, "int") == 7)
	{
		bVar28 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar30, &Var0) == 7)
		{
			iVar33[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar30, "mn") == 7)
	{
		bVar36 = true;
	}
	if (func_141(iVar30, "pos") == 7)
	{
		bVar38 = true;
	}
	if (func_141(iVar30, "head") == 7)
	{
		bVar40 = true;
	}
	if (func_141(iVar30, "wpn") == 7)
	{
		bVar42 = true;
	}
	if (func_141(iVar30, "veh") == 7)
	{
		bVar44 = true;
	}
	if (func_141(iVar30, "st") == 7)
	{
		bVar46 = true;
	}
	if (func_141(iVar30, "scen") == 7)
	{
		bVar48 = true;
	}
	if (func_141(iVar30, "anim") == 7)
	{
		bVar50 = true;
	}
	if (func_141(iVar30, "int") == 7)
	{
		bVar52 = true;
	}
	if (func_141(iVar30, "asi") == 7)
	{
		bVar54 = true;
	}
	if (func_141(iVar30, "grp") == 7)
	{
		bVar56 = true;
	}
	if (func_141(iVar30, "mvmt") == 7)
	{
		bVar58 = true;
	}
	if (func_141(iVar30, "mrd") == 7)
	{
		bVar60 = true;
	}
	if (func_141(iVar30, "sr") == 7)
	{
		bVar62 = true;
	}
	if (func_141(iVar30, "sa") == 7)
	{
		bVar64 = true;
	}
	if (func_141(iVar30, "hr") == 7)
	{
		bVar66 = true;
	}
	if (func_141(iVar30, "dr") == 7)
	{
		bVar68 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar71, &Var0) == 7)
		{
			iVar74[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar69, "ed") == 7)
	{
		bVar77 = true;
	}
	if (func_141(iVar69, "gt") == 7)
	{
		bVar79 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar81, &Var0) == 7)
		{
			iVar85[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar81, "mn") == 7)
	{
		bVar89 = true;
	}
	if (func_141(iVar81, "pos") == 7)
	{
		bVar91 = true;
	}
	if (func_141(iVar81, "head") == 7)
	{
		bVar93 = true;
	}
	if (func_141(iVar81, "col") == 7)
	{
		bVar95 = true;
	}
	if (func_141(iVar81, "int") == 7)
	{
		bVar97 = true;
	}
	if (func_141(iVar98, "sprt") == 7)
	{
		bVar100 = true;
	}
	if (func_141(iVar98, "hclr") == 7)
	{
		bVar102 = true;
	}
	if (func_141(iVar98, "scl") == 7)
	{
		bVar104 = true;
	}
	if (func_141(iVar98, "sh") == 7)
	{
		bVar106 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar108, &Var0) == 7)
		{
			iVar112[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar108, "mn") == 7)
	{
		bVar116 = true;
	}
	if (func_141(iVar108, "pos") == 7)
	{
		bVar118 = true;
	}
	if (func_141(iVar108, "head") == 7)
	{
		bVar120 = true;
	}
	if (func_141(iVar108, "rot") == 7)
	{
		bVar122 = true;
	}
	if (func_141(iVar108, "int") == 7)
	{
		bVar124 = true;
	}
	if (func_141(iVar128, "idx") == 7)
	{
		bVar130 = true;
	}
	if (func_141(iVar132, "pos") == 7)
	{
		bVar134 = true;
	}
	if (func_141(iVar132, "rad") == 7)
	{
		bVar136 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar132, &Var0) == 7)
		{
			iVar139[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar132, "brd") == 7)
	{
		bVar142 = true;
	}
	if (func_141(iVar143, "sprt") == 7)
	{
		bVar145 = true;
	}
	if (func_141(iVar143, "hclr") == 7)
	{
		bVar147 = true;
	}
	if (func_141(iVar143, "scl") == 7)
	{
		bVar149 = true;
	}
	if (func_141(iVar143, "sh") == 7)
	{
		bVar151 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar153, &Var0) == 7)
		{
			iVar156[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar153, "vmn") == 7)
	{
		bVar159 = true;
	}
	if (func_141(iVar153, "vmx") == 7)
	{
		bVar161 = true;
	}
	if (func_141(iVar153, "fwd") == 7)
	{
		bVar163 = true;
	}
	if (func_141(iVar165, "pedi") == 7)
	{
		bVar167 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar168, &Var0) == 7)
		{
			iVar171[iVar5] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar168, &Var0) == 7)
		{
			iVar175[iVar5] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar168, &Var0) == 7)
		{
			iVar179[iVar5] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar168, &Var0) == 7)
		{
			iVar183[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_141(iVar185, "name") == 7)
	{
		bVar187 = true;
	}
	if (func_141(iVar188, "pos") == 7)
	{
		bVar190 = true;
	}
	if (func_141(iVar188, "head") == 7)
	{
		bVar192 = true;
	}
	if (func_141(iVar188, "plnkp") == 7)
	{
		bVar194 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_141(iVar188, &Var0) == 7)
		{
			iVar197[iVar5] = 1;
		}
		iVar5++;
	}
	if (bVar7)
	{
		uVar6 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fmbs");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar13[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar11[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar10, &Var0);
		}
		iVar5++;
	}
	if (bVar16)
	{
		uVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "mn");
	}
	if (bVar18)
	{
		uVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "pos");
	}
	if (bVar20)
	{
		uVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "head");
	}
	if (bVar22)
	{
		uVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "rot");
	}
	if (bVar24)
	{
		uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "cv");
	}
	if (bVar26)
	{
		uVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "crt");
	}
	if (bVar28)
	{
		uVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "int");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar33[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar31[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar30, &Var0);
		}
		iVar5++;
	}
	if (bVar36)
	{
		uVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mn");
	}
	if (bVar38)
	{
		uVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "pos");
	}
	if (bVar40)
	{
		uVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "head");
	}
	if (bVar42)
	{
		uVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "wpn");
	}
	if (bVar44)
	{
		uVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "veh");
	}
	if (bVar46)
	{
		uVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "st");
	}
	if (bVar48)
	{
		uVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "scen");
	}
	if (bVar50)
	{
		uVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "anim");
	}
	if (bVar52)
	{
		uVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "int");
	}
	if (bVar54)
	{
		uVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "asi");
	}
	if (bVar56)
	{
		uVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "grp");
	}
	if (bVar58)
	{
		uVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mvmt");
	}
	if (bVar60)
	{
		uVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mrd");
	}
	if (bVar62)
	{
		uVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "sr");
	}
	if (bVar64)
	{
		uVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "sa");
	}
	if (bVar66)
	{
		uVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "hr");
	}
	if (bVar68)
	{
		uVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "dr");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar74[iVar5])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar72[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar71, &Var0);
		}
		iVar5++;
	}
	if (bVar77)
	{
		uVar76 = DATAFILE::DATADICT_GET_ARRAY(iVar69, "ed");
	}
	if (bVar79)
	{
		uVar78 = DATAFILE::DATADICT_GET_ARRAY(iVar69, "gt");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar85[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar82[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar81, &Var0);
		}
		iVar5++;
	}
	if (bVar89)
	{
		uVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar81, "mn");
	}
	if (bVar91)
	{
		uVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar81, "pos");
	}
	if (bVar93)
	{
		uVar92 = DATAFILE::DATADICT_GET_ARRAY(iVar81, "head");
	}
	if (bVar95)
	{
		uVar94 = DATAFILE::DATADICT_GET_ARRAY(iVar81, "col");
	}
	if (bVar97)
	{
		uVar96 = DATAFILE::DATADICT_GET_ARRAY(iVar81, "int");
	}
	if (bVar100)
	{
		uVar99 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "sprt");
	}
	if (bVar102)
	{
		uVar101 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "hclr");
	}
	if (bVar104)
	{
		uVar103 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "scl");
	}
	if (bVar106)
	{
		uVar105 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "sh");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar112[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar109[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar108, &Var0);
		}
		iVar5++;
	}
	if (bVar116)
	{
		uVar115 = DATAFILE::DATADICT_GET_ARRAY(iVar108, "mn");
	}
	if (bVar118)
	{
		uVar117 = DATAFILE::DATADICT_GET_ARRAY(iVar108, "pos");
	}
	if (bVar120)
	{
		uVar119 = DATAFILE::DATADICT_GET_ARRAY(iVar108, "head");
	}
	if (bVar122)
	{
		uVar121 = DATAFILE::DATADICT_GET_ARRAY(iVar108, "rot");
	}
	if (bVar124)
	{
		uVar123 = DATAFILE::DATADICT_GET_ARRAY(iVar108, "int");
	}
	if (bVar130)
	{
		uVar129 = DATAFILE::DATADICT_GET_ARRAY(iVar128, "idx");
	}
	if (bVar134)
	{
		uVar133 = DATAFILE::DATADICT_GET_ARRAY(iVar132, "pos");
	}
	if (bVar136)
	{
		uVar135 = DATAFILE::DATADICT_GET_ARRAY(iVar132, "rad");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar139[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar137[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar132, &Var0);
		}
		iVar5++;
	}
	if (bVar142)
	{
		uVar141 = DATAFILE::DATADICT_GET_ARRAY(iVar132, "brd");
	}
	if (bVar145)
	{
		uVar144 = DATAFILE::DATADICT_GET_ARRAY(iVar143, "sprt");
	}
	if (bVar147)
	{
		uVar146 = DATAFILE::DATADICT_GET_ARRAY(iVar143, "hclr");
	}
	if (bVar149)
	{
		uVar148 = DATAFILE::DATADICT_GET_ARRAY(iVar143, "scl");
	}
	if (bVar151)
	{
		uVar150 = DATAFILE::DATADICT_GET_ARRAY(iVar143, "sh");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar156[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar154[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar153, &Var0);
		}
		iVar5++;
	}
	if (bVar159)
	{
		uVar158 = DATAFILE::DATADICT_GET_ARRAY(iVar153, "vmn");
	}
	if (bVar161)
	{
		uVar160 = DATAFILE::DATADICT_GET_ARRAY(iVar153, "vmx");
	}
	if (bVar163)
	{
		uVar162 = DATAFILE::DATADICT_GET_ARRAY(iVar153, "fwd");
	}
	if (bVar167)
	{
		uVar166 = DATAFILE::DATADICT_GET_ARRAY(iVar165, "pedi");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar171[iVar5])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar169[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar168, &Var0);
		}
		if (iVar175[iVar5])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar173[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar168, &Var0);
		}
		if (iVar179[iVar5])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar177[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar168, &Var0);
		}
		if (iVar183[iVar5])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar181[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar168, &Var0);
		}
		iVar5++;
	}
	if (bVar187)
	{
		uVar186 = DATAFILE::DATADICT_GET_ARRAY(iVar185, "name");
	}
	if (bVar190)
	{
		uVar189 = DATAFILE::DATADICT_GET_ARRAY(iVar188, "pos");
	}
	if (bVar192)
	{
		uVar191 = DATAFILE::DATADICT_GET_ARRAY(iVar188, "head");
	}
	if (bVar194)
	{
		uVar193 = DATAFILE::DATADICT_GET_ARRAY(iVar188, "plnkp");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar197[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar195[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar188, &Var0);
		}
		iVar5++;
	}
	*uParam1 = { func_140(*uParam0, "fmnm", "") };
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_16[iVar4] = func_139(uVar6, iVar4, 0, bVar7);
		iVar4++;
	}
	uParam1->f_19 = func_138(iVar8, "num", 0);
	uParam1->f_19.f_1 = func_137(iVar9, "sprt", -1);
	uParam1->f_19.f_1.f_1 = func_137(iVar9, "hclr", 12);
	uParam1->f_19.f_1.f_2 = func_136(iVar9, "scl", 1f);
	uParam1->f_19.f_1.f_3 = func_134(iVar9, "sh", 0);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_19.f_5[iVar4 /*13*/][iVar5] = func_139(uVar11[iVar5], iVar4, 0, iVar13[iVar5]);
			iVar5++;
		}
		uParam1->f_19.f_5[iVar4 /*13*/].f_2 = func_133(uVar15, iVar4, 0, bVar16);
		uParam1->f_19.f_5[iVar4 /*13*/].f_3 = { func_132(uVar17, iVar4, 0f, 0f, 0f, bVar18) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_6 = func_131(uVar19, iVar4, 0f, bVar20);
		uParam1->f_19.f_5[iVar4 /*13*/].f_7 = { func_132(uVar21, iVar4, 0f, 0f, 0f, bVar22) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_10 = func_139(uVar23, iVar4, -1, bVar24);
		uParam1->f_19.f_5[iVar4 /*13*/].f_11 = func_133(uVar25, iVar4, 2, bVar26);
		uParam1->f_19.f_5[iVar4 /*13*/].f_12 = func_139(uVar27, iVar4, -1, bVar28);
		iVar4++;
	}
	uParam1->f_129 = func_138(iVar29, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_129.f_1[iVar4 /*21*/][iVar5] = func_139(uVar31[iVar5], iVar4, 0, iVar33[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_1[iVar4 /*21*/].f_2 = func_133(uVar35, iVar4, 0, bVar36);
		uParam1->f_129.f_1[iVar4 /*21*/].f_3 = { func_132(uVar37, iVar4, 0f, 0f, 0f, bVar38) };
		uParam1->f_129.f_1[iVar4 /*21*/].f_6 = func_131(uVar39, iVar4, 0f, bVar40);
		uParam1->f_129.f_1[iVar4 /*21*/].f_7 = func_133(uVar41, iVar4, 0, bVar42);
		uParam1->f_129.f_1[iVar4 /*21*/].f_8 = func_139(uVar43, iVar4, -1, bVar44);
		uParam1->f_129.f_1[iVar4 /*21*/].f_9 = func_133(uVar45, iVar4, 0, bVar46);
		uParam1->f_129.f_1[iVar4 /*21*/].f_10 = func_139(uVar47, iVar4, -1, bVar48);
		uParam1->f_129.f_1[iVar4 /*21*/].f_11 = func_139(uVar49, iVar4, -1, bVar50);
		uParam1->f_129.f_1[iVar4 /*21*/].f_12 = func_139(uVar51, iVar4, -1, bVar52);
		uParam1->f_129.f_1[iVar4 /*21*/].f_13 = func_139(uVar53, iVar4, -1, bVar54);
		uParam1->f_129.f_1[iVar4 /*21*/].f_14 = func_139(uVar55, iVar4, 0, bVar56);
		uParam1->f_129.f_1[iVar4 /*21*/].f_15 = func_133(uVar57, iVar4, 2, bVar58);
		uParam1->f_129.f_1[iVar4 /*21*/].f_16 = func_139(uVar59, iVar4, -1, bVar60);
		uParam1->f_129.f_1[iVar4 /*21*/].f_17 = func_131(uVar61, iVar4, 60f, bVar62);
		uParam1->f_129.f_1[iVar4 /*21*/].f_18 = func_131(uVar63, iVar4, 60f, bVar64);
		uParam1->f_129.f_1[iVar4 /*21*/].f_19 = func_131(uVar65, iVar4, 60f, bVar66);
		uParam1->f_129.f_1[iVar4 /*21*/].f_20 = func_131(uVar67, iVar4, -1f, bVar68);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_129.f_632[iVar4 /*5*/].f_1[iVar5] = func_139(uVar72[iVar5], iVar4, -1, iVar74[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_632[iVar4 /*5*/].f_3 = func_139(uVar76, iVar4, 0, bVar77);
		uParam1->f_129.f_632[iVar4 /*5*/].f_4 = func_139(uVar78, iVar4, -1, bVar79);
		iVar4++;
	}
	uParam1->f_767 = func_138(iVar80, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_767.f_1[iVar4 /*14*/][iVar5] = func_139(uVar82[iVar5], iVar4, 0, iVar85[iVar5]);
			iVar5++;
		}
		uParam1->f_767.f_1[iVar4 /*14*/].f_3 = func_133(uVar88, iVar4, 0, bVar89);
		uParam1->f_767.f_1[iVar4 /*14*/].f_4 = { func_132(uVar90, iVar4, 0f, 0f, 0f, bVar91) };
		uParam1->f_767.f_1[iVar4 /*14*/].f_7 = func_131(uVar92, iVar4, 0f, bVar93);
		uParam1->f_767.f_1[iVar4 /*14*/].f_8 = func_139(uVar94, iVar4, -1, bVar95);
		uParam1->f_767.f_1[iVar4 /*14*/].f_9 = func_139(uVar96, iVar4, -1, bVar97);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10 = func_133(uVar99, iVar4, -1, bVar100);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_1 = func_133(uVar101, iVar4, 12, bVar102);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_2 = func_131(uVar103, iVar4, 1f, bVar104);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_3 = func_130(uVar105, iVar4, 0, bVar106);
		iVar4++;
	}
	uParam1->f_767.f_422 = func_138(iVar80, "trv", -1);
	uParam1->f_1190 = func_138(iVar107, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_1190.f_1[iVar4 /*12*/][iVar5] = func_139(uVar109[iVar5], iVar4, 0, iVar112[iVar5]);
			iVar5++;
		}
		uParam1->f_1190.f_1[iVar4 /*12*/].f_3 = func_133(uVar115, iVar4, 0, bVar116);
		uParam1->f_1190.f_1[iVar4 /*12*/].f_4 = { func_132(uVar117, iVar4, 0f, 0f, 0f, bVar118) };
		uParam1->f_1190.f_1[iVar4 /*12*/].f_7 = func_131(uVar119, iVar4, 0f, bVar120);
		uParam1->f_1190.f_1[iVar4 /*12*/].f_8 = { func_132(uVar121, iVar4, 0f, 0f, 0f, bVar122) };
		uParam1->f_1190.f_1[iVar4 /*12*/].f_11 = func_139(uVar123, iVar4, -1, bVar124);
		iVar4++;
	}
	uParam1->f_1552 = func_138(iVar125, "wnum", 0);
	uParam1->f_1552.f_1 = func_138(iVar125, "wfak", -1);
	uParam1->f_1552.f_2 = func_136(iVar125, "wblk", 250f);
	uParam1->f_1555 = func_138(iVar126, "time", -1);
	uParam1->f_1555.f_1 = func_137(iVar126, "disp", 0);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		uParam1->f_1563[iVar4] = func_139(uVar129, iVar4, -1, bVar130);
		iVar4++;
	}
	uParam1->f_1563.f_6 = func_138(iVar127, "wvs", 3);
	uParam1->f_1563.f_7 = func_138(iVar127, "spd", 15000);
	uParam1->f_1563.f_8 = func_138(iVar127, "rspd", 5000);
	uParam1->f_1563.f_9 = func_136(iVar127, "sdst", 200f);
	uParam1->f_1563.f_10 = func_138(iVar127, "num", 0);
	uParam1->f_1574 = func_138(iVar131, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1574.f_1[iVar4 /*11*/] = { func_132(uVar133, iVar4, 0f, 0f, 0f, bVar134) };
		uParam1->f_1574.f_1[iVar4 /*11*/].f_3 = func_131(uVar135, iVar4, -1f, bVar136);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1574.f_1[iVar4 /*11*/].f_4[iVar5] = func_139(uVar137[iVar5], iVar4, 0, iVar139[iVar5]);
			iVar5++;
		}
		uParam1->f_1574.f_1[iVar4 /*11*/].f_6 = func_131(uVar141, iVar4, 0f, bVar142);
		uParam1->f_1574.f_1[iVar4 /*11*/].f_7 = func_133(uVar144, iVar4, -1, bVar145);
		uParam1->f_1574.f_1[iVar4 /*11*/].f_7.f_1 = func_133(uVar146, iVar4, 12, bVar147);
		uParam1->f_1574.f_1[iVar4 /*11*/].f_7.f_2 = func_131(uVar148, iVar4, 1f, bVar149);
		uParam1->f_1574.f_1[iVar4 /*11*/].f_7.f_3 = func_130(uVar150, iVar4, 0, bVar151);
		iVar4++;
	}
	uParam1->f_1587 = func_138(iVar152, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1587.f_1[iVar4 /*9*/][iVar5] = func_139(uVar154[iVar5], iVar4, 0, iVar156[iVar5]);
			iVar5++;
		}
		uParam1->f_1587.f_1[iVar4 /*9*/].f_2 = { func_132(uVar158, iVar4, 0f, 0f, 0f, bVar159) };
		uParam1->f_1587.f_1[iVar4 /*9*/].f_5 = { func_132(uVar160, iVar4, 0f, 0f, 0f, bVar161) };
		uParam1->f_1587.f_1[iVar4 /*9*/].f_8 = func_131(uVar162, iVar4, 0f, bVar163);
		iVar4++;
	}
	uParam1->f_1598 = func_138(iVar164, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1598.f_1[iVar4 /*10*/] = func_139(uVar166, iVar4, -1, bVar167);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1598.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/] = func_139(uVar169[iVar5], iVar4, -1, iVar171[iVar5]);
			uParam1->f_1598.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_1 = { func_132(uVar173[iVar5], iVar4, 0f, 0f, 0f, iVar175[iVar5]) };
			uParam1->f_1598.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_4 = { func_132(uVar177[iVar5], iVar4, 0f, 0f, 0f, iVar179[iVar5]) };
			uParam1->f_1598.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_7 = func_139(uVar181[iVar5], iVar4, 2000, iVar183[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 12)
	{
		uParam1->f_1610[iVar4 /*16*/] = { func_129(uVar186, iVar4, "", bVar187) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_1803[iVar4 /*8*/] = { func_132(uVar189, iVar4, 0f, 0f, 0f, bVar190) };
		uParam1->f_1803[iVar4 /*8*/].f_3 = func_131(uVar191, iVar4, 0f, bVar192);
		uParam1->f_1803[iVar4 /*8*/].f_4 = func_139(uVar193, iVar4, -1, bVar194);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1803[iVar4 /*8*/].f_6[iVar5] = func_139(uVar195[iVar5], iVar4, 0, iVar197[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
}

struct<16> func_129(var* uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_130(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
	}
	return iParam2;
}

float func_131(var* uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_132(var* uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
	if (bParam5 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
	}
	return Param2;
}

int func_133(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

int func_134(int iParam0, char* sParam1, int iParam2)
{
	if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 1)
	{
		return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
	}
	return iParam2;
}

bool func_135(int iParam0)
{
	return iParam0 != 0;
}

float func_136(int iParam0, char* sParam1, float fParam2)
{
	if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
	{
		return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
	}
	return fParam2;
}

int func_137(int iParam0, char* sParam1, int iParam2)
{
	if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_138(int iParam0, char* sParam1, int iParam2)
{
	if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_139(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_140(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_141(int iParam0, char* sParam1)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}

void func_142(var uParam0, int iParam1, char* sParam2)
{
	if (!func_135(iParam1))
	{
		return;
	}
	if (!func_135(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2) == 6)
	{
		*uParam0 = DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
		if (!func_135(*uParam0))
		{
		}
	}
	if (!func_135(*uParam0))
	{
	}
}

void func_143()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

var func_144(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 150:
			uVar0 = func_153(uParam1, iParam2);
			break;
		
		case 26:
			uVar0 = func_152(uParam1, iParam2);
			break;
		
		case 24:
			uVar0 = func_151(uParam1, iParam2);
			break;
		
		case 256:
			uVar0 = func_150(uParam1, iParam2);
			break;
		
		case 258:
			uVar0 = func_149(uParam1, iParam2);
			break;
		
		case 259:
			uVar0 = func_148(uParam1, iParam2);
			break;
		
		case 271:
			uVar0 = func_147(uParam1, iParam2);
			break;
		
		case 269:
			uVar0 = func_146(uParam1, iParam2);
			break;
		
		case 270:
			uVar0 = func_145(uParam1, iParam2);
			break;
	}
	return uVar0;
}

char* func_145(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "";
		
		default:
	}
	return "";
}

char* func_146(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_Phantom_Car_1";
		
		default:
	}
	return "";
}

char* func_147(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "Tuner_Setup_1";
		
		case 1:
			return "Tuner_Setup_2";
		
		case 2:
			return "Tuner_Setup_3";
		
		case 3:
			return "Tuner_Setup_4";
		
		case 4:
			return "Tuner_Prep_Elevator_Pass_1";
		
		case 5:
			return "Tuner_Prep_Elevator_Pass_2";
		
		case 6:
			return "Tuner_Prep_Key_Codes_1";
		
		case 7:
			return "Tuner_Prep_Key_Codes_2";
		
		case 8:
			return "Tuner_Prep_Scope_Transporter_1";
		
		case 9:
			return "Tuner_Prep_Scope_Transporter_2";
		
		case 10:
			return "Tuner_Prep_Virus_1";
		
		case 11:
			return "Tuner_Prep_Virus_2";
		
		case 12:
			return "Tuner_Prep_Thermal_Charges_1";
		
		case 13:
			return "Tuner_Prep_Thermal_Charges_2";
		
		case 14:
			return "Tuner_Prep_Signal_Jammers_1";
		
		case 15:
			return "Tuner_Prep_Signal_Jammers_2";
		
		case 16:
			return "Tuner_Prep_Container_Manifest_1";
		
		case 17:
			return "Tuner_Prep_Container_Manifest_2";
		
		case 18:
			return "Tuner_Prep_Train_Schedule_1";
		
		case 19:
			return "Tuner_Prep_Train_Schedule_2";
		
		case 20:
			return "Tuner_Prep_Inside_Man_1";
		
		case 21:
			return "Tuner_Prep_Inside_Man_2";
		
		case 22:
			return "Tuner_Prep_Stunt_Ramp_1";
		
		case 23:
			return "Tuner_Prep_Stunt_Ramp_2";
		
		case 24:
			return "Tuner_Prep_IAA_Pass_1";
		
		case 25:
			return "Tuner_Prep_IAA_Pass_2";
		
		case 26:
			return "Tuner_Prep_Sewer_Schematics_1";
		
		case 27:
			return "Tuner_Prep_Sewer_Schematics_2";
		
		case 28:
			return "Tuner_Prep_Meth_Labs_1";
		
		case 29:
			return "Tuner_Prep_Meth_Labs_2";
		
		case 30:
			return "Tuner_Prep_Meth_Tanker_1";
		
		case 31:
			return "Tuner_Prep_Meth_Tanker_2";
		
		case 32:
			return "Tuner_Prep_Locate_Bunker_1";
		
		case 33:
			return "Tuner_Prep_Locate_Bunker_2";
		
		case 34:
			return "Tuner_Prep_Locate_Bunker_3";
		
		case 35:
			return "Tuner_Prep_Locate_Bunker_4";
		
		case 36:
			return "Tuner_Prep_Warehouse_Defences_1";
		
		case 37:
			return "Tuner_Prep_Warehouse_Defences_2";
		
		default:
	}
	return "";
}

char* func_148(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_Golden_Gun_1";
		
		case 1:
			return "RE_Golden_Gun_2";
		
		case 2:
			return "RE_Golden_Gun_3";
		
		case 3:
			return "RE_Golden_Gun_4";
		
		case 4:
			return "RE_Golden_Gun_5";
		
		case 5:
			return "RE_Golden_Gun_6";
		
		case 6:
			return "RE_Golden_Gun_7";
		
		case 7:
			return "RE_Golden_Gun_8";
		
		case 8:
			return "RE_Golden_Gun_9";
		
		case 9:
			return "RE_Golden_Gun_10";
		
		default:
	}
	return "";
}

char* func_149(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		
		case 1:
			return "DJ_KM_Pizza";
		
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		
		case 3:
			return "DJ_MM_Rental_Car_1";
		
		case 4:
			return "DJ_MM_Slippers_1";
		
		case 5:
			return "DJ_PT_Equipment_1";
		
		case 6:
			return "DJ_PT_Champagne_1";
		
		default:
	}
	return "LoadedDataTest3";
}

char* func_150(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 28:
			return "Prep_Pilot_1";
		
		case 29:
			return "Prep_Pilot_2";
		
		case 30:
			return "Prep_Pilot_3";
		
		case 31:
			return "Prep_Pilot2_1";
		
		case 32:
			return "Prep_Pilot2_2";
		
		case 33:
			return "Prep_Pilot2_3";
		
		case 0:
			return "Prep_Scoping_Intro_1";
		
		case 1:
			return "Prep_Scoping_Smuggler_1";
		
		case 2:
			return "Prep_Scoping_Smuggler_2";
		
		case 3:
			return "Prep_Scoping_Smuggler_3";
		
		case 4:
			return "Prep_Scoping_Smuggler_4";
		
		case 5:
			return "Prep_Scoping_Smuggler_5";
		
		case 6:
			return "Prep_Scoping_Party_1";
		
		case 7:
			return "Prep_Scoping_Return_1";
		
		case 8:
			return "Prep_Scoping_Island_1";
		
		case 9:
			return "Prep_Scoping_Island_2";
		
		case 10:
			return "Prep_Scoping_Island_3";
		
		case 11:
			return "Prep_Vehicles_Stealth_Heli_1";
		
		case 12:
			return "Prep_Vehicles_Stealth_Heli_2";
		
		case 13:
			return "Prep_Vehicles_Stealth_Heli_3";
		
		case 14:
			return "Prep_Vehicles_Stealth_Heli2_1";
		
		case 15:
			return "Prep_Vehicles_Gunboat_1";
		
		case 16:
			return "Prep_Vehicles_Gunboat2_1";
		
		case 17:
			return "Prep_Vehicles_Gunboat2_2";
		
		case 18:
			return "Prep_Vehicles_Gunboat2_3";
		
		case 19:
			return "Prep_Vehicles_Smuggler_Boat_1";
		
		case 20:
			return "Prep_Vehicles_Smuggler_Boat_2";
		
		case 21:
			return "Prep_Vehicles_Smuggler_Boat_3";
		
		case 22:
			return "Prep_Vehicles_Smuggler_Plane_1";
		
		case 23:
			return "Prep_Vehicles_Smuggler_Plane_2";
		
		case 24:
			return "Prep_Vehicles_Smuggler_Plane_3";
		
		case 25:
			return "Prep_Vehicles_Stealth_Plane_1";
		
		case 26:
			return "Prep_Vehicles_Stealth_Plane_2";
		
		case 27:
			return "Prep_Vehicles_Stealth_Plane_3";
		
		case 34:
			return "Prep_Equipment_Demolition_Charges_1";
		
		case 35:
			return "Prep_Equipment_Demolition_Charges_2";
		
		case 36:
			return "Prep_Equipment_Acetylene_Torch_1";
		
		case 37:
			return "Prep_Equipment_Acetylene_Torch_2";
		
		case 38:
			return "Prep_Equipment_Acetylene_Torch_3";
		
		case 39:
			return "Prep_Equipment_Plasma_Cutter_1";
		
		case 40:
			return "Prep_Equipment_Plasma_Cutter_2";
		
		case 41:
			return "Prep_Equipment_Plasma_Cutter_3";
		
		case 42:
			return "Prep_Equipment_Safe_Codes_1";
		
		case 43:
			return "Prep_Equipment_Safe_Codes_2";
		
		case 44:
			return "Prep_Equipment_Safe_Codes_3";
		
		case 45:
			return "Prep_Equipment_Fingerprint_Cracker_1";
		
		case 46:
			return "Prep_Equipment_Fingerprint_Cracker_2";
		
		case 47:
			return "Prep_Equipment_Fingerprint_Cracker_3";
		
		case 48:
			return "Prep_Equipment_Sonar_Jammer_1";
		
		case 49:
			return "Prep_Equipment_Sonar_Jammer_2";
		
		case 50:
			return "Prep_Equipment_Sonar_Jammer_3";
		
		case 51:
			return "Prep_Weapons_1";
		
		case 52:
			return "Prep_Weapons_2";
		
		case 53:
			return "Prep_Weapons_3";
		
		case 54:
			return "Prep_Weapons2_1";
		
		case 55:
			return "Prep_Weapons2_2";
		
		case 56:
			return "Prep_Weapons2_3";
		
		case 57:
			return "Prep_Disruption_Weapons_1";
		
		case 58:
			return "Prep_Disruption_Weapons_2";
		
		case 59:
			return "Prep_Disruption_Weapons_3";
		
		case 60:
			return "Prep_Disruption_Armor_1";
		
		case 61:
			return "Prep_Disruption_Armor_2";
		
		case 62:
			return "Prep_Disruption_Armor_3";
		
		case 63:
			return "Prep_Disruption_Backup_1";
		
		case 64:
			return "Prep_Disruption_Backup_2";
		
		case 65:
			return "Prep_Disruption_Backup_3";
		
		default:
	}
	return "";
}

char* func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_DrugVehicle_1";
		
		case 1:
			return "RE_DrugVehicle_2";
		
		case 2:
			return "RE_DrugVehicle_3";
		
		case 3:
			return "RE_DrugVehicle_4";
		
		case 4:
			return "RE_DrugVehicle_5";
		
		case 5:
			return "RE_DrugVehicle_6";
		
		case 6:
			return "RE_DrugVehicle_7";
		
		case 7:
			return "RE_DrugVehicle_8";
		
		case 8:
			return "RE_DrugVehicle_9";
		
		case 9:
			return "RE_DrugVehicle_10";
		
		case 10:
			return "RE_DrugVehicle_11";
		
		case 11:
			return "RE_DrugVehicle_12";
		
		case 12:
			return "RE_DrugVehicle_13";
		
		case 13:
			return "RE_DrugVehicle_14";
		
		case 14:
			return "RE_DrugVehicle_15";
		
		case 15:
			return "RE_DrugVehicle_16";
		
		case 16:
			return "RE_DrugVehicle_17";
		
		case 17:
			return "RE_DrugVehicle_18";
		
		case 18:
			return "RE_DrugVehicle_19";
		
		case 19:
			return "RE_DrugVehicle_20";
		
		case 20:
			return "RE_DrugVehicle_21";
		
		case 21:
			return "RE_DrugVehicle_22";
		
		case 22:
			return "RE_DrugVehicle_23";
		
		case 23:
			return "RE_DrugVehicle_24";
		
		case 24:
			return "RE_DrugVehicle_25";
		
		case 25:
			return "RE_DrugVehicle_26";
		
		case 26:
			return "RE_DrugVehicle_27";
		
		case 27:
			return "RE_DrugVehicle_28";
		
		case 28:
			return "RE_DrugVehicle_29";
		
		case 29:
			return "RE_DrugVehicle_30";
		
		default:
	}
	return "";
}

char* func_152(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_MovieProps_DrinksGlobe_1";
		
		case 1:
			return "RE_MovieProps_DrinksGlobe_2";
		
		case 2:
			return "RE_MovieProps_DrinksGlobe_3";
		
		case 3:
			return "RE_MovieProps_Sarcophagus_1";
		
		case 4:
			return "RE_MovieProps_Sarcophagus_2";
		
		case 5:
			return "RE_MovieProps_Sarcophagus_3";
		
		case 6:
			return "RE_MovieProps_TigerRug_1";
		
		case 7:
			return "RE_MovieProps_TigerRug_2";
		
		case 8:
			return "RE_MovieProps_TigerRug_3";
		
		default:
	}
	return "";
}

char* func_153(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "BB_FactoryRaid_1";
			break;
		
		case 2:
			return "BB_FactoryRaid_2";
			break;
		
		case 3:
			return "BB_FactoryRaid_3";
			break;
		
		case 0:
			return "BB_AircraftCarrier";
			break;
		
		case 4:
			return "BB_CapturedUFO";
			break;
	}
	return "";
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_156(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 != iParam2)
		{
			if (func_155(iParam0, iVar0) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	if (iParam0 == Global_1658176.f_11.f_233[iParam1 /*2*/])
	{
		return Global_1658176.f_11.f_233[iParam1 /*2*/].f_1;
	}
	return -1;
}

int func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 256:
			switch (iParam1)
			{
				case 0:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 0;
				
				default:
			}
			break;
		
		case 276:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 1;
				
				default:
			}
			return 0;
			break;
	}
	return 1;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 192:
		case 178:
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 250:
		case 243:
		case 158:
		case 256:
		case 258:
		case 271:
		case 277:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 276:
			switch (iParam1)
			{
				case 2:
				case 3:
					return MISC::GET_RANDOM_INT_IN_RANGE(iParam2, iParam3 + 1);
				
				default:
			}
			break;
	}
	return -1;
}

int func_160(int iParam0, int iParam1)
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
		
		case 256:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 5:
				case 8:
				case 9:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 11:
				case 4:
					return 3;
				
				case 10:
				case 14:
					return 2;
				
				case 1:
					return 5;
				
				default:
			}
			return 1;
			break;
		
		case 258:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				
				default:
			}
			break;
		
		case 259:
			return 10;
		
		case 271:
			switch (iParam1)
			{
				case 0:
					return 4;
				
				case 15:
					return 4;
				
				default:
			}
			return 2;
			break;
		
		case 277:
			switch (iParam1)
			{
				case 0:
					return 8;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 273:
			return 1;
		
		case 276:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				case 3:
					return 7;
				
				default:
			}
			return 1;
			break;
		
		case 269:
			return 1;
		
		case 270:
			return 8;
		
		case 275:
			return 1;
	}
	return -1;
}

int func_161(int iParam0, int iParam1)
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
		
		case 256:
			switch (iParam1)
			{
				case 12:
					return 28;
				
				case 13:
					return 31;
				
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 6;
				
				case 3:
					return 7;
				
				case 4:
					return 8;
				
				case 5:
					return 11;
				
				case 6:
					return 14;
				
				case 7:
					return 15;
				
				case 8:
					return 16;
				
				case 9:
					return 19;
				
				case 10:
					return 22;
				
				case 11:
					return 25;
				
				case 14:
					return 34;
				
				case 15:
					return 36;
				
				case 16:
					return 39;
				
				case 17:
					return 42;
				
				case 18:
					return 45;
				
				case 19:
					return 48;
				
				case 20:
					return 51;
				
				case 21:
					return 54;
				
				case 22:
					return 57;
				
				case 23:
					return 60;
				
				case 24:
					return 63;
				
				default:
			}
			break;
		
		case 258:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				default:
			}
			break;
		
		case 259:
			return 0;
		
		case 271:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 4;
				
				case 2:
					return 6;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 12;
				
				case 6:
					return 14;
				
				case 7:
					return 16;
				
				case 8:
					return 18;
				
				case 9:
					return 20;
				
				case 10:
					return 22;
				
				case 11:
					return 24;
				
				case 12:
					return 26;
				
				case 13:
					return 28;
				
				case 14:
					return 30;
				
				case 15:
					return 32;
				
				case 16:
					return 36;
				
				default:
			}
			break;
		
		case 277:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 273:
			return 0;
		
		case 276:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 4;
				
				default:
			}
			break;
		
		case 269:
			return 0;
		
		case 270:
			return 0;
		
		case 275:
			return 0;
	}
	return -1;
}

int func_162(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_45(iParam0))
	{
		if (func_178(iParam0, iVar0))
		{
		}
		else if (!func_164(iParam0, iVar0, iParam1))
		{
		}
		else
		{
			func_163(uParam2, iVar0);
		}
		iVar0++;
	}
	return func_42(iParam0, uParam2);
}

void func_163(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

int func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 2:
					iVar0 = func_51(func_52());
					return (iVar0 >= 19 || iVar0 <= 3);
					break;
			}
			break;
		
		case 256:
			return func_172(iParam1, iParam2);
		
		case 258:
			return func_165(iParam1, iParam2);
	}
	return 1;
}

int func_165(int iParam0, int iParam1)
{
	if (!func_168())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_24383)
			{
				return 0;
			}
			if (func_167(iParam1, 0))
			{
				return 0;
			}
			if (!func_64(iParam1))
			{
				return 0;
			}
			if (Global_1316851.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_24383)
			{
				return 0;
			}
			if (func_167(iParam1, 1))
			{
				return 0;
			}
			if (!func_64(iParam1))
			{
				return 0;
			}
			if (Global_1316851.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_24383)
			{
				return 0;
			}
			if (func_167(iParam1, 2))
			{
				return 0;
			}
			if (!func_64(iParam1))
			{
				return 0;
			}
			if (Global_1316851.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_24382)
			{
				return 0;
			}
			if (func_167(iParam1, 3))
			{
				return 0;
			}
			if (!func_166(iParam1))
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_24382)
			{
				return 0;
			}
			if (func_167(iParam1, 4))
			{
				return 0;
			}
			if (!func_166(iParam1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_24384)
			{
				return 0;
			}
			if (func_167(iParam1, 5))
			{
				return 0;
			}
			if (!func_166(iParam1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_24384)
			{
				return 0;
			}
			if (func_167(iParam1, 6))
			{
				return 0;
			}
			if (!func_166(iParam1))
			{
				return 0;
			}
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_166(int iParam0)
{
	if (iParam0 != func_179())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_371 != 0;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1712192[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

bool func_168()
{
	return func_169(30309, -1, -1);
}

bool func_169(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_171(iParam0, iParam1);
	iVar2 = func_170(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_170(int iParam0)
{
	int iVar0;
	
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
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_177(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_176(iParam0) != iVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
		case 4:
			return 0;
		
		case 0:
			if (func_64(iParam1))
			{
				return 0;
			}
			if (func_173(iParam1, 0))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (!func_64(iParam1))
			{
				return 0;
			}
			if (func_173(iParam1, 0))
			{
				return 0;
			}
			break;
		
		case 3:
			return func_173(iParam1, 0);
	}
	return 1;
}

int func_173(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_174(iParam0, func_175(iParam1));
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1712192[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 11:
			return 1;
		
		case 5:
		case 6:
			return 2;
		
		case 7:
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 12:
		case 13:
			return 6;
		
		case 19:
			return 7;
		
		case 14:
			return 8;
		
		case 15:
			return 9;
		
		case 16:
			return 10;
		
		case 17:
			return 11;
		
		case 18:
			return 12;
		
		case 20:
		case 21:
			return 13;
		
		case 22:
			return 14;
		
		case 23:
			return 15;
		
		case 24:
			return 16;
		
		default:
	}
	return -1;
}

var func_177(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_307;
}

int func_178(int iParam0, int iParam1)
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
					return !Global_262145.f_29156;
				
				case 2:
					return !Global_262145.f_29164;
				
				case 1:
					return !Global_262145.f_29160;
				
				default:
			}
			break;
	}
	return 0;
}

int func_179()
{
	return -1;
}

int func_180()
{
	return func_181(Global_2511173.f_3.f_1, 1);
}

int func_181(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 159:
			return 15;
		
		case 166:
			return 8;
		
		case 160:
			return 14;
		
		case 164:
			return 122;
		
		case 167:
			return 1;
		
		case 165:
			return 5;
		
		case 168:
			return 6;
		
		case 161:
			return 11;
		
		case 169:
			return 0;
		
		case 170:
			return 2;
		
		case 162:
			return 13;
		
		case 171:
			return 3;
		
		case 163:
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 269;
		
		case 139:
			return 270;
		
		case 140:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 281;
}

int func_182(int iParam0)
{
	if (func_41(func_183(iParam0)) == 1)
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
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

bool func_184(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2511173.f_1, iParam0);
}

void func_185()
{
	func_186(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0)), 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_127)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_128)
		{
			func_186(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0)), 1);
			func_17(4);
		}
	}
}

void func_186(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 1933105669;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_187(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_119 = 0;
	iVar0 = 0;
	while (iVar0 < func_189())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_78(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_128[iVar0 /*3*/].f_1, 0))
			{
				if (!MISC::IS_BIT_SET(Local_128[iVar0 /*3*/].f_1, 4))
				{
					iLocal_119++;
				}
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= func_188(Param0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_119 >= func_188(Param0))
				{
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(Local_128[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!MISC::IS_BIT_SET(Local_128[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4720;
		
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
			return Global_262145.f_11293;
		
		case 9:
			return Global_262145.f_11198;
		
		case 10:
			return Global_262145.f_11245;
		
		case 11:
			return Global_262145.f_11266;
		
		case 12:
			return Global_262145.f_11316;
		
		case 13:
			return Global_262145.f_11334;
		
		case 14:
			return Global_262145.f_11349;
		
		case 15:
			return Global_262145.f_11360;
		
		case 16:
			return Global_262145.f_11368;
		
		case 17:
			return Global_262145.f_11382;
		
		case 18:
			return Global_262145.f_11391;
		
		case 19:
			return Global_262145.f_24185;
		
		case 20:
			return Global_262145.f_24185;
		
		default:
	}
	return 0;
}

int func_189()
{
	if (Global_2460803)
	{
		return 32;
	}
	return (32 - Global_2460804);
}

int func_190()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar1 = (fVar1 + Global_2511173.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar2 = (fVar2 + Global_2511173.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_191(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2511173.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

float func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8324;
		
		case 1:
			return Global_262145.f_8321;
		
		case 2:
			return Global_262145.f_8322;
		
		case 3:
			return Global_262145.f_8323;
		
		case 4:
			return Global_262145.f_8325;
		
		case 5:
			return Global_262145.f_8326;
		
		case 6:
			return Global_262145.f_8327;
		
		case 7:
			return Global_262145.f_8744;
		
		case 8:
			return Global_262145.f_10354;
		
		case 9:
			return Global_262145.f_10356;
		
		case 10:
			return Global_262145.f_10352;
		
		case 11:
			return Global_262145.f_10359;
		
		case 12:
			return Global_262145.f_10801;
		
		case 13:
			return Global_262145.f_10803;
		
		case 14:
			return Global_262145.f_10804;
		
		case 15:
			return Global_262145.f_10805;
		
		case 16:
			return Global_262145.f_10806;
		
		case 17:
			return Global_262145.f_10810;
		
		case 18:
			return Global_262145.f_11392;
		
		case 19:
			return Global_262145.f_24184;
		
		case 20:
			return Global_262145.f_29155;
		
		default:
	}
	return 0f;
}

int func_193(int iParam0)
{
	if (func_201(iParam0))
	{
		return 0;
	}
	if (func_200(iParam0))
	{
		return 0;
	}
	if (func_199(iParam0))
	{
		return 0;
	}
	if (!func_95(func_198(iParam0), func_197(iParam0), func_196(iParam0), 1, 1))
	{
		return 0;
	}
	if (func_195(iParam0))
	{
		return 0;
	}
	if (!func_194(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	return 1;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6834;
		
		case 1:
			return Global_262145.f_6831;
		
		case 2:
			return Global_262145.f_6832;
		
		case 3:
			return Global_262145.f_6833;
		
		case 4:
			return Global_262145.f_8411;
		
		case 5:
			return Global_262145.f_8266;
		
		case 6:
			return Global_262145.f_8271;
		
		case 7:
			return Global_262145.f_8276;
		
		case 8:
			return Global_262145.f_10355;
		
		case 9:
			return Global_262145.f_10357;
		
		case 10:
			return Global_262145.f_10353;
		
		case 11:
			return (Global_262145.f_11539 && Global_262145.f_11538);
		
		case 12:
			return Global_262145.f_10795;
		
		case 13:
			return Global_262145.f_10797;
		
		case 14:
			return Global_262145.f_10798;
		
		case 15:
			return Global_262145.f_10799;
		
		case 16:
			return Global_262145.f_10800;
		
		case 17:
			return Global_262145.f_10809;
		
		case 18:
			return Global_262145.f_11393;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_196(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_197(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_198(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_199(int iParam0)
{
	if (Global_2511173.f_182 == -1)
	{
		return 0;
	}
	if (func_5(Global_2511173.f_182))
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

int func_200(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9 || func_5(iParam0))
	{
		return 0;
	}
	if (Global_262145.f_8282 > 0 && Global_262145.f_8282 <= 21)
	{
		if (!Global_2511173.f_114[(Global_262145.f_8282 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_8282)
			{
				if (Global_2511173.f_114[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
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

void func_202(int iParam0)
{
	Global_2511173.f_2 = iParam0;
}

void func_203(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_204()
{
	return func_15(&(Global_2511173.f_179), func_205(), 0);
}

int func_205()
{
	return Global_2511173.f_181;
}

int func_206()
{
	return 0;
}

int func_207()
{
	int iVar0;
	int iVar1;
	
	Global_2511173.f_181 = Global_262145.f_8284;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		Global_2511173.f_8[iVar0 /*5*/] = iVar0;
		Global_2511173.f_8[iVar0 /*5*/].f_1 = func_208(iVar0);
		Global_2511173.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_8282 > 0 && Global_262145.f_8282 <= 21)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_8282)
		{
			Global_2511173.f_114[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2511173.f_136[iVar1 /*2*/] = -1;
			Global_2511173.f_136[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_208(int iParam0)
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
			return 146;
		
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

void func_209()
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = 10000;
	switch (Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Global_2511173.f_2 >= 4 && Global_2511173.f_2 != 8)
			{
				if (func_184(1))
				{
					MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
				if (!func_281(PLAYER::PLAYER_ID(), 1))
				{
					func_280(4);
				}
				else if (!func_281(PLAYER::PLAYER_ID(), 3))
				{
					func_203(&uLocal_120);
					MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
				else
				{
					if (MISC::IS_BIT_SET(iLocal_97, 1))
					{
						iVar0 = 500;
					}
					if (func_15(&uLocal_120, iVar0, 0))
					{
						MISC::CLEAR_BIT(&iLocal_97, 1);
						func_280(4);
						MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
					}
				}
			}
			else if (func_281(PLAYER::PLAYER_ID(), 1))
			{
				MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (func_281(PLAYER::PLAYER_ID(), 0))
			{
				if (Global_2511173.f_2 == 8)
				{
					func_280(8);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2511173.f_2 == 5)
				{
					func_280(5);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2511173.f_2 >= 6)
				{
					func_280(6);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2511173.f_2 == 3)
				{
					func_280(0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			else
			{
				if (func_263())
				{
					if (!func_253())
					{
						MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
					}
					if (func_237(Global_2511173.f_3))
					{
						if (!func_281(PLAYER::PLAYER_ID(), 0))
						{
							MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
						}
					}
				}
				if (!func_281(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_235() && !MISC::IS_BIT_SET(iLocal_97, 0))
					{
						MISC::SET_BIT(&iLocal_97, 1);
					}
					func_280(0);
					MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
					MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2511173.f_2 == 6)
			{
				MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 1);
				MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 2);
				MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 3);
				func_280(6);
			}
			else if (func_184(3) && func_234(&(Global_2511173.f_177)))
			{
				func_216();
			}
			break;
		
		case 6:
			StringCopy(&cVar1, func_6(Global_2511173.f_3.f_1), 64);
			if (!func_215())
			{
				if (!func_281(PLAYER::PLAYER_ID(), 2))
				{
					Local_98.f_16 = -1;
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) == 0)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, false, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(&cVar1, -1, 0) < 32)
						{
							if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, true, 0))
							{
								Local_98 = Global_2511173.f_3.f_1;
								if (func_210(Local_98, 0))
								{
									MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
								}
							}
						}
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) != 0)
				{
					if (Global_2511173.f_2 == 7)
					{
						func_280(7);
						MISC::SET_BIT(&iLocal_97, 0);
						MISC::CLEAR_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
					}
				}
			}
			break;
		
		case 7:
			if (Global_2511173.f_2 != 7)
			{
				func_280(8);
			}
			break;
		
		case 8:
			func_280(0);
			break;
	}
}

int func_210(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, bool bParam21)
{
	char cVar0[32];
	bool bVar8;
	int iVar9;
	int iVar10;
	
	if (func_214())
	{
		return 0;
	}
	bParam21 = bParam21;
	StringCopy(&cVar0, func_6(Param0), 32);
	if (SCRIPT::DOES_SCRIPT_EXIST(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		if (SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
		{
			bVar8 = true;
			if (bParam21)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar9, bVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, Param0.f_16, bVar8, 0))
			{
				return 0;
			}
			iVar10 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Param0, 21, func_211(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 159:
		case 166:
		case 160:
		case 164:
		case 167:
		case 168:
		case 161:
		case 169:
		case 170:
		case 162:
		case 171:
		case 163:
		case 187:
		case 165:
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
			return 66000;
		
		default:
	}
	if (func_213(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_213(iParam0) == 7)
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
				return 15900;
			
			default:
		}
		return 4500;
	}
	else if (func_213(iParam0) == 0)
	{
		return 4500;
	}
	else if (func_213(iParam0) == 2)
	{
		return 4500;
	}
	else if (func_213(iParam0) == 6)
	{
		switch (iParam0)
		{
			case 18:
			case 22:
			case 24:
			case 17:
			case 155:
			case 156:
			case 60:
			case 147:
			case 65:
			case 71:
			case 66:
			case 67:
			case 68:
			case 73:
			case 74:
			case 78:
			case 75:
			case joaat("mpsv_lp0_31"):
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
			case 157:
				return 4500;
			
			case 181:
				return 4500;
			
			case 182:
				return 1424;
			
			case 145:
				return 8344;
			
			case 87:
			case 77:
			case 76:
				return 8344;
			
			case 9:
			case 16:
			case 15:
			case 142:
			case 141:
			case 19:
			case 146:
			case 143:
			case 21:
			case 158:
				return 2050;
			
			case 151:
				return 3568;
			
			case 172:
			case 175:
				return 1828;
			
			case 176:
			case 177:
			case 178:
				return 4500;
			
			case 184:
			case 179:
			case 180:
			case 183:
			case 185:
				return 8344;
			
			case 186:
				return func_212();
				break;
			}
	}
	switch (func_41(func_181(iParam0, 0)))
	{
		case 0:
			return 66000;
		
		case 1:
			return 15900;
		
		case 2:
			return 4500;
		
		default:
	}
	return 1424;
}

int func_212()
{
	return 8344;
}

int func_213(int iParam0)
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
		
		case 172:
			return 6;
		
		case 175:
			return 6;
		
		case 176:
			return 6;
		
		case 177:
			return 6;
		
		case 183:
			return 6;
		
		case 179:
			return 6;
		
		case 184:
			return 6;
		
		case 180:
			return 6;
		
		case 178:
			return 6;
		
		case 181:
			return 6;
		
		case 182:
			return 6;
		
		case 185:
			return 6;
		
		case 186:
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 141:
			return 6;
		
		case 142:
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
		
		case 145:
			return 6;
		
		case 155:
			return 6;
		
		case 156:
			return 6;
		
		case 157:
			return 6;
		
		case 158:
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
		
		case 153:
			return 6;
		
		case 154:
			return 6;
		
		case 143:
			return 6;
		
		case 146:
			return 6;
		
		case 147:
			return 6;
		
		case 144:
			return 6;
		
		case 148:
			return 6;
		
		case 151:
			return 6;
		
		case 152:
			return 6;
		
		case 159:
			return 6;
		
		case 166:
			return 0;
		
		case 160:
			return 6;
		
		case 167:
			return 0;
		
		case 165:
			return 0;
		
		case 168:
			return 0;
		
		case 161:
			return 6;
		
		case 169:
			return 0;
		
		case 164:
			return 6;
		
		case 170:
			return 0;
		
		case 162:
			return 6;
		
		case 171:
			return 0;
		
		case 163:
			return 6;
		
		case 149:
			return 6;
		
		case 150:
			return 6;
		
		case 187:
			return 6;
		
		case 173:
			return 6;
		
		case 174:
			return 6;
		
		default:
	}
	switch (func_41(func_181(iParam0, 1)))
	{
		case 0:
			return 6;
		
		case 1:
			return 6;
		
		case 2:
			return 6;
		
		default:
	}
	return 11;
}

bool func_214()
{
	return Global_2453009.f_693;
}

int func_215()
{
	if (Global_2511173.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2544210.f_1721)
	{
		if (Global_2511173.f_2 == 7)
		{
			func_280(7);
		}
	}
	else if (Global_2544210.f_1722)
	{
		Global_2544210.f_1722 = 0;
		func_280(0);
		MISC::SET_BIT(&(Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
	}
	return 1;
}

void func_216()
{
	if (Global_2419497.f_84.f_2 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2544210.f_206.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_233(&(Global_2511173.f_177), 0, 0)) < 360000)
			{
				if (!MISC::IS_BIT_SET(Global_2544210.f_206.f_1, 1))
				{
					if (func_223(31, 0, 0) && !func_222())
					{
						if (Global_262145.f_45 < 3)
						{
							func_217("ACD_TSCH", Global_262145.f_45, 0);
						}
						else
						{
							func_217("ACD_TSCH", 3, 0);
						}
					}
					MISC::SET_BIT(&(Global_2544210.f_206.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_233(&(Global_2511173.f_177), 0, 0)) < 600000)
			{
				if (!MISC::IS_BIT_SET(Global_2544210.f_206.f_1, 2))
				{
					if (func_223(31, 0, 0) && !func_222())
					{
						func_217("ACD_TSCH", 5, 0);
					}
					MISC::SET_BIT(&(Global_2544210.f_206.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_233(&(Global_2511173.f_177), 0, 0)) < 1200000)
			{
				if (!MISC::IS_BIT_SET(Global_2544210.f_206.f_1, 3))
				{
					if (func_223(31, 0, 0) && !func_222())
					{
						func_217("ACD_TSCH", 10, 0);
					}
					MISC::SET_BIT(&(Global_2544210.f_206.f_1), 3);
				}
			}
		}
	}
}

int func_217(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_218(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_218(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_218(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_221() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_71(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_219(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_220(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_221()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_222()
{
	return Global_1312902;
}

bool func_223(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7857 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_228(PLAYER::PLAYER_ID(), 85))
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
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_227() || func_226())
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
			if (func_224())
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
	return MISC::IS_BIT_SET(Global_1574658[iVar1], iVar0);
}

int func_224()
{
	int iVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_1794, 23))
	{
		return 1;
	}
	if (func_227())
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	iVar0 = Global_1390515[func_225(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2544210.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

bool func_226()
{
	return Global_1312890;
}

bool func_227()
{
	return Global_1312892;
}

int func_228(int iParam0, int iParam1)
{
	if (!func_231())
	{
		return 0;
	}
	if (func_230())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_87(&(Global_1590908[iParam0 /*874*/].f_745), func_229(iParam1));
}

int func_229(int iParam0)
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
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		default:
	}
	return 1;
}

bool func_230()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_143, 3);
}

int func_231()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_227())
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	return func_232(120, -1);
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2592627[iParam0 /*3*/][func_225(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_233(var uParam0, bool bParam1, bool bParam2)
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

var func_234(var uParam0)
{
	return uParam0->f_1;
}

int func_235()
{
	if (func_236() == 0)
	{
		return 1;
	}
	return 0;
}

int func_236()
{
	return Global_1312485.f_18;
}

int func_237(int iParam0)
{
	if (!func_252(iParam0) && !func_251(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return (((func_243(0) && func_242(func_75(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f) && !func_241());
		
		case 4:
			return (((((func_223(20, 0, 0) && !func_240(PLAYER::PLAYER_ID(), 1)) && !func_240(PLAYER::PLAYER_ID(), 2)) && !func_240(PLAYER::PLAYER_ID(), 3)) && !Global_2441237.f_3865) && !func_238());
		
		default:
	}
	return 1;
}

int func_238()
{
	if (!func_239())
	{
		return 0;
	}
	if (Global_2404640.f_2 == Global_262145.f_8757 || Global_2404640.f_2 == Global_262145.f_8781)
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	switch (Global_2404640)
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

bool func_240(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_241()
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

int func_242(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Param3, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_243(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_248(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_247())
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
	if (!func_223(19, 0, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_244(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_244(int iParam0)
{
	return !func_245(iParam0);
}

int func_245(int iParam0)
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
			if (Global_262145.f_6831)
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6832)
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6833)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6834)
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_246(4))
			{
				return 0;
			}
			if (func_240(PLAYER::PLAYER_ID(), 7))
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

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_78(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2426865[iVar0 /*449*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_247()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 0);
}

int func_248(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_249(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_249(int iParam0)
{
	return func_250(iParam0);
}

bool func_250(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_251(int iParam0)
{
	return func_223(func_183(iParam0), 0, 0);
}

int func_252(int iParam0)
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
			return func_71(PLAYER::PLAYER_ID(), 0);
		
		default:
	}
	return 1;
}

int func_253()
{
	int iVar0;
	
	iVar0 = func_262(Global_2511173.f_3);
	if (((((iVar0 >= 0 && (func_260(iVar0) || func_260(0))) || func_258(PLAYER::PLAYER_ID())) || func_256(PLAYER::PLAYER_ID())) || !func_255(PLAYER::PLAYER_ID())) || !func_254())
	{
		return 0;
	}
	return 1;
}

int func_254()
{
	if (func_5(Global_2511173.f_3))
	{
		return !func_116(0);
	}
	return 1;
}

bool func_255(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_139, 22);
}

int func_256(int iParam0)
{
	if (func_71(iParam0, 0))
	{
		return 1;
	}
	if (func_257())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_257()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_258(int iParam0)
{
	if (func_259(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 8);
}

bool func_259(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 2);
}

bool func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = func_261(2482, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_225(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_262(int iParam0)
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

bool func_263()
{
	return ((((((((((((((((((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_279(PLAYER::PLAYER_ID())) && !func_247()) && !func_278()) && !func_222()) && !func_277()) && !func_275(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_249(PLAYER::PLAYER_ID())) && func_235()) && !func_240(PLAYER::PLAYER_ID(), 0)) && !func_240(PLAYER::PLAYER_ID(), 7)) && !func_240(PLAYER::PLAYER_ID(), 21)) && !func_240(PLAYER::PLAYER_ID(), 25)) && (!func_272(PLAYER::PLAYER_ID(), 0, -1) || Global_2511173.f_3 == 11)) && func_78(PLAYER::PLAYER_ID(), 1, 1)) && !func_271(PLAYER::PLAYER_ID())) && func_255(PLAYER::PLAYER_ID())) && !func_270(PLAYER::PLAYER_ID())) && !func_269(PLAYER::PLAYER_ID())) && !func_268(PLAYER::PLAYER_ID())) && !func_266(PLAYER::PLAYER_ID())) && !func_264());
}

bool func_264()
{
	return func_265() == 1;
}

int func_265()
{
	return Global_1710155;
}

bool func_266(int iParam0)
{
	return func_267(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_267(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_268(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_32(Global_2426865[iParam0 /*449*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_269(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_32(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_32(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_32(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_273(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_179())
	{
		return iParam0;
	}
	if (func_274(iParam0) != -1)
	{
		iVar0 = func_32(func_274(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_117(iParam0, 0))
			{
				return func_82(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_179();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_179();
}

int func_274(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (func_78(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_78(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

int func_275(int iParam0)
{
	switch (func_276(iParam0))
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
		case 35:
		case 25:
		case 33:
		case 34:
			return 1;
		
		default:
	}
	return 0;
}

int func_276(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192;
}

bool func_277()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192 != 0;
}

bool func_278()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 5;
}

int func_279(int iParam0)
{
	if (func_248(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_280(int iParam0)
{
	Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2 = iParam0;
}

bool func_281(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_128[iParam0 /*3*/].f_1, iParam1);
}

int func_282()
{
	return 1;
}

int func_283()
{
	return Global_2511173;
}

int func_284(int iParam0)
{
	return Local_128[iParam0 /*3*/];
}

int func_285()
{
	var uVar0;
	
	func_292(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_214())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_291())
	{
		return 1;
	}
	if (func_290(159))
	{
		if (!func_289())
		{
			return 1;
		}
	}
	if (func_290(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_286() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_286()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_286()
{
	switch (func_288())
	{
		case 0:
			return func_287();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_287()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_288()
{
	return Global_31345;
}

bool func_289()
{
	return Global_2453009.f_698;
}

int func_290(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_291()
{
	return Global_2463497;
}

void func_292(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_293(iVar0);
					break;
				
				case -1320260596:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_293(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_78(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_294(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_294(int iParam0, var uParam1)
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

void func_295()
{
	SYSTEM::WAIT(0);
}

void func_296()
{
	Global_2544210.f_1721 = 0;
	Global_2544210.f_1722 = 0;
	Global_2544210.f_1724 = 0;
	Global_2544210.f_1723 = 0;
	MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 1);
	MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 2);
	MISC::CLEAR_BIT(&(Global_2544210.f_206.f_1), 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_297(struct<21> Param0)
{
	func_303();
	func_301(func_302(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_298(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_2511173, 186);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_128, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_128[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 0;
	func_280(0);
	return 1;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_300();
			}
			else
			{
				return 0;
			}
		}
		if (!func_299())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_300();
					}
					else
					{
						return 0;
					}
				}
				if (func_214())
				{
					if (!bParam2)
					{
						func_300();
					}
					else
					{
						return 0;
					}
				}
				if (func_290(157))
				{
					if (!bParam2)
					{
						func_300();
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
					func_300();
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
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_300();
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
			func_300();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_299()
{
	return Global_1312878;
}

void func_300()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_301(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_300();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_302(int iParam0)
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 141:
			return 32;
		
		case 142:
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
		
		case 153:
			return 32;
		
		case 154:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 32;
		
		case 148:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 155:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 2;
		
		case 164:
			return 1;
		
		case 160:
			return 2;
		
		case 161:
			return 4;
		
		case 162:
			return 2;
		
		case 163:
			return 2;
		
		case 145:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 0;
		
		case 187:
			return 1;
		
		case 172:
			return 4;
		
		case 175:
			return 4;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 183:
			return 1;
		
		case 179:
			return 2;
		
		case 184:
			return 1;
		
		case 180:
			return 1;
		
		case 178:
			return 2;
		
		case 181:
			return 8;
		
		case 182:
			return 8;
		
		case 185:
			return 1;
		
		case 186:
			return 2;
		
		case 173:
			return 16;
		
		case 174:
			return 32;
		
		default:
	}
	switch (func_41(func_181(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

void func_303()
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
	Global_2511173 = { Var0 };
}

