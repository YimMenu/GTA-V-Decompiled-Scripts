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
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	struct<21> Local_102 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<3> Local_132[32];
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
	iLocal_126 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_312(ScriptParam_0))
		{
			func_311();
		}
	}
	while (true)
	{
		func_310();
		if (func_300())
		{
			func_311();
		}
		switch (func_299(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_298() == 1)
				{
					if (func_297())
					{
						Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_298() == 1)
				{
					func_222();
				}
				else if (func_298() == 3)
				{
					Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_311();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_298())
			{
				case 0:
					if (func_220())
					{
						Global_2775740 = 1;
					}
					break;
				
				case 1:
					if (func_219())
					{
						Global_2775740 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_311();
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
	
	switch (Global_2775740.f_2)
	{
		case 0:
			if (func_217())
			{
				func_216(&(Global_2775740.f_179));
				func_215(1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 21)
				{
					iVar1 = iVar0;
					if (func_206(iVar1))
					{
						func_204(iVar1, func_205(iVar1));
					}
					else
					{
						func_204(iVar1, 0f);
					}
					iVar0++;
				}
				func_215(3);
			}
			else
			{
				func_215(0);
			}
			break;
		
		case 3:
			iVar2 = func_203();
			if (iVar2 != -1)
			{
				Global_2775740.f_3 = { Global_2775740.f_8[iVar2 /*5*/] };
				func_215(4);
			}
			else
			{
				Global_2775740.f_181 = (Global_262145.f_8370 / 2);
				func_215(0);
			}
			break;
		
		case 4:
			switch (func_200(Global_2775740.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2775740.f_3)
					{
						case 1:
							func_198();
							if (func_197(4))
							{
								func_215(5);
							}
							else
							{
								func_215(6);
							}
							break;
						
						default:
							if (func_195(Global_2775740.f_3))
							{
								Global_2775740.f_183 = Global_2810287.f_6702;
								Global_2775740.f_184 = Global_2810287.f_6703;
								Global_2775740.f_185 = Global_2810287.f_6704;
								if (func_18(func_193(), &(Global_2775740.f_183), &(Global_2775740.f_184), func_192()))
								{
									func_215(6);
								}
								else
								{
									func_204(Global_2775740.f_3, 0f);
									func_215(3);
								}
							}
							else
							{
								func_215(6);
							}
							break;
					}
					break;
				
				case 2:
					func_204(Global_2775740.f_3, 0f);
					func_215(3);
					break;
			}
			break;
		
		case 5:
			if (!func_14())
			{
				func_215(6);
			}
			break;
		
		case 6:
			if (!func_11())
			{
				if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2775740.f_3.f_1), -1, false, 0))
				{
					func_215(7);
					func_4(Global_2775740.f_3);
				}
			}
			break;
		
		case 7:
			if (!func_3())
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2775740.f_3.f_1), -1, false, 0))
				{
					func_215(8);
				}
			}
			break;
		
		case 8:
			Global_2775740.f_181 = Global_262145.f_8370;
			Global_2775740.f_8[Global_2775740.f_3 /*5*/].f_4 = 1;
			if (func_197(1))
			{
				func_2(1);
			}
			if (func_197(4))
			{
				func_2(4);
			}
			Global_2775740.f_3 = -1;
			Global_2775740.f_3.f_1 = 0;
			Global_2775740.f_183 = -1;
			Global_2775740.f_184 = -1;
			Global_2775740.f_185 = -1;
			func_215(0);
			break;
	}
}

void func_2(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2775740.f_1, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2775740.f_1), iParam0);
	}
}

int func_3()
{
	if (Global_2775740.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2810287.f_1724)
	{
		func_215(8);
		Global_2810287.f_1724 = 0;
	}
	return 1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9 && !func_5(iParam0))
	{
		if (Global_262145.f_8368 > 0 && Global_262145.f_8368 <= 21)
		{
			if (!Global_2775740.f_114[(Global_262145.f_8368 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_8368 - 1))
				{
					Global_2775740.f_114[iVar0] = Global_2775740.f_114[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2775740.f_114[(Global_262145.f_8368 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2775740.f_136[iVar0 + 1 /*2*/] = { Global_2775740.f_136[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2775740.f_136[0 /*2*/] = iParam0;
	Global_2775740.f_136[0 /*2*/].f_1 = -1;
	Global_2775740.f_182 = iParam0;
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
		
		case 177:
			return "dont_cross_the_line";
		
		case 180:
			return "grid_arcade_cabinet";
		
		case 181:
			return "scroll_arcade_cabinet";
		
		case 182:
			return "example_arcade";
		
		case 183:
			return "road_arcade";
		
		case 188:
			return "Degenatron Games";
		
		case 184:
			return "gunslinger_arcade";
		
		case 189:
			return "ggsm_arcade";
		
		case 185:
			return "wizard_arcade";
		
		case 186:
			return "AM_CASINO_LIMO";
		
		case 187:
			return "AM_CASINO_LUXURY_CAR";
		
		case 190:
			return "AM_QUB3D_ARCADE_CABINET";
		
		case 191:
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
		
		case 146:
			return "AM_BOAT_TAXI";
		
		case 147:
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
		
		case 160:
			return "am_rollercoaster";
		
		case 161:
			return "am_ferriswheel";
		
		case 162:
			return "AM_LAUNCHER";
		
		case 163:
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
		
		case 148:
			return "fm_hold_up_tut";
		
		case 149:
			return "AM_CAR_MOD_TUT";
		
		case 150:
			return "AM_CONTACT_REQUESTS";
		
		case 151:
			return "am_mission_launch";
		
		case 152:
			return "am_npc_invites";
		
		case 153:
			return "am_lester_cut";
		
		case 156:
			return "AM_VEHICLE_SPAWN";
		
		case 157:
			return "am_ronTrevor_Cut";
		
		case 158:
			return "AM_ARMYBASE";
		
		case 159:
			return "AM_PRISON";
		
		case 164:
			return "AM_ArmWrestling";
		
		case 171:
			return "fm_Bj_race_controler";
		
		case 165:
			return "AM_Darts";
		
		case 172:
			return "fm_deathmatch_controler";
		
		case 170:
			return "FM_Impromptu_DM_Controler";
		
		case 173:
			return "fm_hideout_controler";
		
		case 166:
			return "golf_mp";
		
		case 169:
			return "Pilot_School_MP";
		
		case 174:
			return func_8();
		
		case 175:
			return "FM_Race_Controler";
		
		case 167:
			return "Range_Modern_MP";
		
		case 176:
			if (func_7(Global_4718592.f_138117))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 168:
			return "tennis_network_mp";
		
		case 154:
			return "am_heist_int";
		
		case 155:
			return "am_lowrider_int";
		
		case 178:
			return "am_darts_apartment";
		
		case 179:
			return "AM_Armwrestling_Apartment";
		
		case 192:
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
			return "fm_content_payphone_hit";
		
		case 139:
			return "fm_content_security_contract";
		
		case 140:
			return "fm_content_vip_contract_1";
		
		case 141:
			return "fm_content_metal_detector";
		
		case 142:
			return "am_agency_suv";
		
		case 143:
			return "fm_content_phantom_car";
		
		case 144:
			return "fm_content_slasher";
		
		case 145:
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
	return Global_4718592.f_138118 >= iParam0;
}

int func_11()
{
	if (Global_2775740.f_3.f_1 != 19)
	{
		return 0;
	}
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0) != func_192())
	{
		func_12(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0)), 1);
		Global_2810287.f_1724 = 0;
		func_215(7);
		func_4(Global_2775740.f_3);
	}
	return 1;
}

void func_12(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 252711156;
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
	if (Global_2775740.f_3.f_1 != 18)
	{
		return 0;
	}
	if (func_197(4))
	{
		if (!func_197(3))
		{
			func_216(&(Global_2775740.f_177));
			func_17(3);
		}
		else if (func_15(&(Global_2775740.f_177), (Global_262145.f_45 * 120000), 0))
		{
			func_2(3);
			func_215(6);
		}
	}
	else
	{
		func_215(6);
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
	if (!MISC::IS_BIT_SET(Global_2775740.f_1, iParam0))
	{
		MISC::SET_BIT(&(Global_2775740.f_1), iParam0);
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
		iVar0 = func_174(iParam0, iParam3, &uVar2);
	}
	if (iVar0 != -1)
	{
		if (iVar1 == -1)
		{
			iVar1 = func_52(iParam0, iVar0, iParam3);
		}
		while (iVar1 == -1)
		{
			func_51(&uVar2, iVar0);
			iVar0 = func_47(iParam0, &uVar2);
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar1 = func_52(iParam0, iVar0, iParam3);
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
	
	switch (func_46(iParam0))
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
	
	if (iParam20 == func_192())
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
		if (Global_2681692.f_199.f_962[iVar0 /*75*/] == func_192() || Global_2681692.f_199.f_962[iVar0 /*75*/] == iParam20)
		{
			if (Global_2681692.f_199.f_962[iVar0 /*75*/] == iParam20)
			{
			}
			else
			{
				Global_2681692.f_199.f_962[iVar0 /*75*/] = iParam20;
			}
			iVar1 = 0;
			while (iVar1 < 18)
			{
				if (uParam0[iVar1] != 0)
				{
					Global_2681692.f_199.f_962[iVar0 /*75*/].f_1[iVar1] = uParam0[iVar1];
				}
				else
				{
					Global_2681692.f_199.f_962[iVar0 /*75*/].f_1[iVar1] = 0;
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
			if (Global_2681692.f_199.f_962[iVar0 /*75*/] == func_192())
			{
				iVar1 = iVar0;
				while (iVar1 <= 9)
				{
					if (Global_2681692.f_199.f_962[iVar1 /*75*/] != func_192())
					{
						Var2 = { Global_2681692.f_199.f_962[iVar1 /*75*/] };
						Global_2681692.f_199.f_962[iVar1 /*75*/] = { Global_2681692.f_199.f_962[iVar0 /*75*/] };
						Global_2681692.f_199.f_962[iVar0 /*75*/] = { Var2 };
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
	switch (Global_2727578)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_23(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_192())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_40(iParam1, iParam2, iParam3);
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
			return 805;
		
		case 256:
			return func_38(iParam2, iParam3, iParam4, iParam0);
		
		case 258:
			return func_37(iParam2, iParam3, iParam4, iParam0);
		
		case 271:
			return func_33(iParam2, iParam3, iParam4, iParam0);
		
		case 264:
			return func_32(iParam2, iParam3, iParam4, iParam0);
		
		case 263:
			return func_27(iParam2, iParam3, iParam4, iParam0);
		
		default:
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	switch (iParam0)
	{
		case 3:
			return 803;
		
		default:
	}
	iVar0 = func_29(iParam3);
	bVar1 = iParam0 == true;
	if (iVar0 != -1)
	{
		return func_28(iVar0, bVar1);
	}
	return 0;
}

int func_28(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 145:
			return 805;
			break;
		
		case 147:
			return 757;
			break;
		
		case 149:
			return 765;
			break;
		
		case 150:
			return 766;
			break;
		
		case 151:
			return 767;
			break;
		
		case 152:
			return 768;
			break;
		
		case 153:
			return 769;
			break;
		
		case 155:
			if (bParam1)
			{
				return 796;
			}
			else
			{
				return 795;
			}
			break;
		
		case 156:
			if (bParam1)
			{
				return 798;
			}
			else
			{
				return 797;
			}
			break;
		
		case 157:
			if (bParam1)
			{
				return 800;
			}
			else
			{
				return 799;
			}
			break;
		
		case 158:
			if (bParam1)
			{
				return 802;
			}
			else
			{
				return 801;
			}
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_192())
	{
		iVar0 = func_31(iParam0);
		if (iVar0 != 0)
		{
			return func_30(iVar0);
		}
	}
	return -1;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 155;
		
		case 2:
			return 156;
		
		case 3:
			return 157;
		
		case 4:
			return 158;
		
		default:
	}
	return -1;
}

int func_31(int iParam0)
{
	if (iParam0 != func_192())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_475;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	switch (iParam0)
	{
		case 5:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				return 804;
			}
			else
			{
				return 803;
			}
			break;
	}
	iVar0 = func_29(iParam3);
	bVar1 = iParam0 == 4;
	if (iVar0 != -1)
	{
		return func_28(iVar0, bVar1);
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)
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
					iVar0 = func_34(iParam3);
					if (iVar0 != -1)
					{
						return func_28(iVar0, 0);
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
			iVar1 = func_34(iParam3);
			if (iVar1 != -1)
			{
				return func_28(iVar1, 0);
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_192())
	{
		iVar0 = func_36(iParam0);
		if (iVar0 != 0)
		{
			return func_35(iVar0);
		}
	}
	return -1;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 149;
		
		case 2:
			return 150;
		
		case 3:
			return 151;
		
		case 4:
			return 152;
		
		case 5:
			return 153;
		
		default:
	}
	return -1;
}

int func_36(int iParam0)
{
	if (iParam0 != func_192())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_460;
	}
	return 0;
}

int func_37(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_38(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
			if (func_39(iParam3) == 1)
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

int func_39(int iParam0)
{
	if (iParam0 == func_192())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_274;
}

int func_40(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 181:
			return 0;
		
		case 256:
			return func_45(iParam1, uParam2);
		
		case 258:
			return func_44(iParam1, uParam2);
		
		case 271:
			return func_43(iParam1, uParam2);
		
		case 264:
			return func_42(iParam1, uParam2);
		
		case 263:
			return func_41(iParam1, uParam2);
		
		default:
	}
	return 0;
}

int func_41(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_42(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 1:
		case 4:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

int func_43(int iParam0, var uParam1)
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

int func_44(int iParam0, var uParam1)
{
	return 1;
}

int func_45(int iParam0, var uParam1)
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

int func_46(int iParam0)
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
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
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

int func_47(int iParam0, var uParam1)
{
	var uVar0[30];
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
	iVar33 = 0;
	while (iVar33 < func_50(iParam0))
	{
		if (func_49(uParam1, iVar33))
		{
			uVar0[iVar33] = func_48(iParam0, iVar33);
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
	while (iVar33 < func_50(iParam0))
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
		
		case 262:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_31374;
				
				case 1:
					return Global_262145.f_31375;
				
				case 2:
					return Global_262145.f_31376;
				
				case 3:
					return Global_262145.f_31377;
				
				case 4:
					return Global_262145.f_31378;
				
				case 5:
					return Global_262145.f_31379;
				
				case 6:
					return Global_262145.f_31380;
				
				case 7:
					return Global_262145.f_31381;
				
				default:
			}
			break;
	}
	return 1f;
}

bool func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_50(int iParam0)
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
		
		case 263:
			return 6;
		
		case 262:
			return 8;
		
		case 264:
			return 7;
		
		case 268:
			return 1;
		
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

int func_52(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = func_173(iParam0, iParam1);
	iVar1 = ((iVar0 + func_172(iParam0, iParam1)) - 1);
	if (iVar0 == iVar1)
	{
	}
	iVar75 = func_171(iParam0, iParam1, iVar0, iVar1);
	iVar76 = iVar0;
	while (iVar76 <= iVar1)
	{
		if (func_170(iParam0, iVar76))
		{
		}
		else if (func_166(iParam0, iVar76, iParam2))
		{
		}
		else if (!func_70(iParam0, iParam1, iVar76, iParam2))
		{
		}
		else if (!func_54(iParam0, iParam1, iVar76, iParam2))
		{
		}
		else
		{
			uVar2[iVar76] = func_53(iParam0, iVar76);
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

float func_53(int iParam0, int iParam1)
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 256:
			return func_68(iParam1, iParam2, iParam3);
		
		case 270:
			return func_55();
		
		default:
	}
	return 1;
}

bool func_55()
{
	int iVar0;
	
	iVar0 = func_56(func_57());
	return (iVar0 >= 21 || iVar0 < 5);
}

int func_56(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_57()
{
	var uVar0;
	
	func_67(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_66(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_65(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_60(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_59(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_58(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_58(var uParam0, int iParam1)
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

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_60(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_64(*uParam0);
	iVar1 = func_62(*uParam0);
	if (iParam1 < 1 || iParam1 > func_61(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_61(int iParam0, int iParam1)
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

var func_62(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_63(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_63(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_64(var uParam0)
{
	return uParam0 & 15;
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 8:
					return !func_69(iParam2);
				
				case 9:
				case 10:
					return func_69(iParam2);
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 34:
					return !func_166(256, 35, iParam2);
				
				case 35:
					return !func_166(256, 34, iParam2);
				
				default:
			}
			break;
	}
	return 1;
}

int func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1975399[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<1809> Var0;
	
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
	Var0.f_1564 = 9;
	Var0.f_1564.f_1 = -1;
	Var0.f_1564.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1564.f_10 = 3;
	Var0.f_1564.f_11 = 15000;
	Var0.f_1564.f_12 = 5000;
	Var0.f_1564.f_13 = 1128792064;
	Var0.f_1579.f_1 = 1;
	Var0.f_1579.f_1.f_1.f_3 = -1082130432;
	Var0.f_1579.f_1.f_1.f_4 = 1;
	Var0.f_1579.f_1.f_1.f_7 = -1;
	Var0.f_1579.f_1.f_1.f_7.f_1 = 12;
	Var0.f_1579.f_1.f_1.f_7.f_2 = 1065353216;
	Var0.f_1592.f_1 = 1;
	Var0.f_1592.f_1.f_1 = 1;
	Var0.f_1603.f_1 = 1;
	Var0.f_1603.f_1.f_1 = -1;
	Var0.f_1603.f_1.f_1.f_1 = 1;
	Var0.f_1603.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1603.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var0.f_1615 = 12;
	Var0.f_1808 = 2;
	Var0.f_1808.f_1.f_4 = -1;
	Var0.f_1808.f_1.f_5 = -1;
	Var0.f_1808.f_1.f_6 = 1;
	Var0.f_1808.f_1.f_8.f_4 = -1;
	Var0.f_1808.f_1.f_8.f_5 = -1;
	Var0.f_1808.f_1.f_8.f_6 = 1;
	if (!func_130(&Var0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (!func_127(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_110(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_99(&Var0, iParam0, iParam3))
	{
		return 0;
	}
	if (Var0.f_19 > 0)
	{
		if (!func_97(Var0.f_19))
		{
			return 0;
		}
	}
	if (func_96(iParam0, iParam1, iParam2))
	{
		if (!func_71(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_71(var uParam0)
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
		if (!func_95(&(uParam0->f_19.f_5[iVar0 /*13*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!func_94(&(uParam0->f_129.f_1[iVar0 /*21*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if (!func_93(uParam0, iVar0) && !func_72(&(uParam0->f_767.f_1[iVar0 /*14*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_72(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_92(uParam0, 26) || uParam0->f_9 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_3;
	fVar1 = func_90(iVar0);
	Var2 = { uParam0->f_4 };
	if (fVar1 == 0f)
	{
		fVar1 = 10f;
	}
	if (!func_73(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, fVar1, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_73(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2667222.f_2 = 0;
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
	Global_2667222.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam14 > 0f)
	{
		if (func_84(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_74(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_74(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_83(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_83(iVar1, 1, 1))
		{
			if (!func_76(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_75(iVar1) || !bParam10) && !Global_2689156[iVar1 /*453*/].f_268)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_79(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_79(iVar1), Param0, true) <= (fVar2 + fParam3))
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

int func_75(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
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

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_78()
{
	return Global_1574907;
}

Vector3 func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_82() && Global_1853128[iVar0 /*888*/].f_858) && !func_81(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_80(iParam0);
}

Vector3 func_80(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_81(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_82()
{
	return Global_2714627.f_19;
}

int func_83(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_84(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_83(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_80(iVar1), Param0, true) < fParam3)
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

int func_85(int iParam0)
{
	if (func_89(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_88(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2783300))
	{
		return 1;
	}
	if (func_86(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_87(iParam0);
	if (!iVar0 == func_192())
	{
		if (iVar0 == func_87(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_192())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_192();
}

struct<13> func_88(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_89(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783300 = { func_88(iParam0) };
		Global_2783313 = { func_88(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783300))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783313))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783230, 35, &Global_2783300);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_90(int iParam0)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	float fVar7;
	var uVar8;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	fVar6 = (Var3 - Var0);
	fVar7 = (Var3.f_1 - Var0.f_1);
	uVar8 = func_91(fVar6, fVar7);
	return uVar8;
}

float func_91(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_92(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1564.f_14)
	{
		if (uParam0->f_1564[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94(var uParam0, int iParam1)
{
	float fVar0;
	struct<3> Var1;
	
	if (func_92(uParam0, 16) || uParam0->f_12 != -1)
	{
		return 1;
	}
	fVar0 = 2f;
	Var1 = { uParam0->f_3 };
	if (!func_73(Var1, fVar0, fVar0, fVar0, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_95(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if ((func_92(uParam0, 11) || uParam0->f_12 != -1) || func_92(uParam0, 8))
	{
		return 1;
	}
	if (uParam0->f_10 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_2;
	fVar1 = func_90(iVar0);
	Var2 = { uParam0->f_3 };
	if (!func_73(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_96(int iParam0, int iParam1, int iParam2)
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

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (!func_98(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1))
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

bool func_98(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_192());
}

int func_99(var uParam0, int iParam1, int iParam2)
{
	switch (func_46(iParam1))
	{
		case 0:
		case 2:
			if (iParam2 != func_192())
			{
				if (!func_109(uParam0->f_129, uParam0->f_767, uParam0->f_1190, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam2), false)))
				{
					return 0;
				}
			}
			break;
		
		case 1:
			if (!func_100(uParam0->f_129, uParam0->f_767, uParam0->f_1190, 1, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_100(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_108(iParam0, bParam3, bParam4) || func_107(iParam1, bParam3, bParam4)) || func_101(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, bool bParam2)
{
	return func_102(2, iParam0, 0, bParam1, bParam2);
}

int func_102(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1656872, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_106(iParam0) - func_105(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_105(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_106(iParam0) - func_104(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_105(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_106(iParam0) - func_105(iParam0, 1));
		}
		if (!bParam4 && Global_1853128[PLAYER::PLAYER_ID() /*888*/] != 3)
		{
			iVar1 = (iVar1 - func_103(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)
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

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656872.f_1;
			break;
		
		case 1:
			return Global_1656872.f_2;
			break;
		
		case 2:
			return Global_1656872.f_3;
			break;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689156[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689156[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689156[iVar0 /*453*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656880;
			break;
		
		case 1:
			return Global_1656881;
			break;
		
		case 2:
			return Global_1656882;
			break;
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	return func_102(1, iParam0, 0, bParam1, bParam2);
}

int func_108(int iParam0, bool bParam1, bool bParam2)
{
	return func_102(0, iParam0, 0, bParam1, bParam2);
}

int func_109(int iParam0, int iParam1, int iParam2, struct<3> Param3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	NETWORK::_0xE42D626EEC94E5D9(Param3, 0, &iVar0, &iVar1, &iVar2);
	if ((iParam0 <= (func_106(0) - iVar0) && iParam1 <= (func_106(1) - iVar1)) && iParam2 <= (func_106(2) - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (func_83(iParam4, 0, 1))
	{
		Var0 = { func_125(iParam1, iParam2, iParam3, iParam4) };
		Var3 = { func_115(uParam0, iParam1, iParam2, iParam3) };
		fVar6 = func_112(iParam1, iParam2);
		fVar7 = func_111(iParam1, iParam2);
		if ((!func_81(Var0) && !func_81(Var3)) && (fVar6 != -1f || fVar7 != -1f))
		{
			fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true);
			if (fVar6 != -1f && fVar8 < fVar6)
			{
				return 0;
			}
			if (fVar7 != -1f && fVar8 > fVar7)
			{
				return 0;
			}
		}
	}
	return 1;
}

float func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 262:
			return Global_262145.f_32107;
		
		default:
	}
	return -1f;
}

float func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 277:
			return func_114();
		
		case 271:
			return func_113(iParam1);
		
		case 262:
			return Global_262145.f_32106;
		
		default:
	}
	return -1f;
}

float func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 500f;
		
		default:
	}
	return 500f;
}

float func_114()
{
	return 500f;
}

Vector3 func_115(var uParam0, int iParam1, int iParam2, int iParam3)
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
			return func_116(func_124(iParam2, iParam3));
		
		case 262:
			return uParam0->f_129.f_1[0 /*21*/].f_3;
	}
	return uParam0->f_1579.f_1[0 /*11*/];
}

Vector3 func_116(int iParam0)
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
		
		case 805:
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
			return func_117(0f, 30.6f, -1f);
		
		case 796:
			return 360.084f, -74.7928f, 66.1459f;
		
		case 798:
			return -1031.865f, -410.4693f, 32.2732f;
		
		case 800:
			return -616.354f, -738.2424f, 26.8466f;
		
		case 802:
			return -987.0505f, -765.7468f, 14.7657f;
		
		case 803:
			return 214.4743f, -1.2945f, 73.3064f;
		
		case 804:
			return -1421.36f, -240.4189f, 45.3791f;
		
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

Vector3 func_117(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_122(0))
	{
		iVar0 = func_120(func_121());
		if (func_119(iVar0))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Param0);
		}
		else
		{
			return func_118(757, func_121(), 0);
		}
	}
	else
	{
		iVar1 = func_120(PLAYER::PLAYER_ID());
		if (func_119(iVar1))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == func_192())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1952863.f_5041[iVar0 /*2*/] == iParam0)
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
		return Global_1893548[iParam1 /*600*/].f_557.f_16[iVar1 /*6*/];
	}
	return Global_1893548[iParam1 /*600*/].f_557.f_16[iVar1 /*6*/].f_3;
}

int func_119(int iParam0)
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

int func_120(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1964069[iParam0]))
		{
			return Global_1964069[iParam0];
		}
	}
	return -1;
}

int func_121()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
}

bool func_122(bool bParam0)
{
	return func_123(PLAYER::PLAYER_ID(), bParam0);
}

bool func_123(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_23(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_192();
}

int func_124(int iParam0, int iParam1)
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

Vector3 func_125(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 181:
			return 0f, 0f, 0f;
		
		default:
	}
	iVar0 = func_126(iParam0, uParam1, uParam2, iParam3);
	if (iVar0 != -1)
	{
		return Global_1946934.f_532[iVar0 /*3*/];
	}
	return func_80(iParam3);
}

int func_126(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 271:
		case 277:
			iVar0 = func_36(iParam3);
			if (iVar0 != 0)
			{
				return func_35(iVar0);
			}
			break;
	}
	return -1;
}

int func_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	struct<1809> Var11;
	int iVar1836;
	int iVar1837;
	struct<3> Var1838;
	float fVar1841;
	
	iVar0 = func_129(iParam1);
	if (iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_172(iParam1, iParam2);
	if (iVar1 <= iVar0)
	{
		return 1;
	}
	iVar2 = func_173(iParam1, iParam2);
	iVar3 = ((iVar2 + iVar1) - 1);
	Var4 = { func_80(iParam4) };
	Var7 = { func_128(uParam0, iParam1) };
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
	Var11.f_1564 = 9;
	Var11.f_1564.f_1 = -1;
	Var11.f_1564.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1564.f_10 = 3;
	Var11.f_1564.f_11 = 15000;
	Var11.f_1564.f_12 = 5000;
	Var11.f_1564.f_13 = 1128792064;
	Var11.f_1579.f_1 = 1;
	Var11.f_1579.f_1.f_1.f_3 = -1082130432;
	Var11.f_1579.f_1.f_1.f_4 = 1;
	Var11.f_1579.f_1.f_1.f_7 = -1;
	Var11.f_1579.f_1.f_1.f_7.f_1 = 12;
	Var11.f_1579.f_1.f_1.f_7.f_2 = 1065353216;
	Var11.f_1592.f_1 = 1;
	Var11.f_1592.f_1.f_1 = 1;
	Var11.f_1603.f_1 = 1;
	Var11.f_1603.f_1.f_1 = -1;
	Var11.f_1603.f_1.f_1.f_1 = 1;
	Var11.f_1603.f_1.f_1.f_1.f_1 = -1;
	Var11.f_1603.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var11.f_1615 = 12;
	Var11.f_1808 = 2;
	Var11.f_1808.f_1.f_4 = -1;
	Var11.f_1808.f_1.f_5 = -1;
	Var11.f_1808.f_1.f_6 = 1;
	Var11.f_1808.f_1.f_8.f_4 = -1;
	Var11.f_1808.f_1.f_8.f_5 = -1;
	Var11.f_1808.f_1.f_8.f_6 = 1;
	iVar1837 = iVar2;
	while (iVar1837 <= iVar3)
	{
		if (iVar1837 == iParam3)
		{
		}
		else if (!func_130(&Var11, iParam1, iParam2, iVar1837))
		{
		}
		else
		{
			Var1838 = { func_128(&Var11, iParam1) };
			if (func_81(Var1838))
			{
			}
			else
			{
				fVar1841 = SYSTEM::VDIST2(Var4, Var1838);
				if (fVar10 > fVar1841)
				{
					iVar1836++;
					if (iVar1836 == iVar0)
					{
						return 0;
					}
				}
			}
		}
		iVar1837++;
	}
	return 1;
}

Vector3 func_128(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 181:
			return uParam0->f_129.f_1[0 /*21*/].f_3;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 181:
			return -1;
		
		default:
	}
	return -1;
}

int func_130(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_165(iParam1))
	{
		return 1;
	}
	return func_131(func_151(iParam1, iParam2, iParam3), uParam0, &uLocal_81);
}

int func_131(char* sParam0, var uParam1, var uParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	func_150();
	if (!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0))
	{
		return 0;
	}
	func_133(uParam1);
	func_132(uParam2);
	return 1;
}

void func_132(var uParam0)
{
	DATAFILE::DATAFILE_DELETE(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_133(var uParam0)
{
	char* sVar0;
	var* uVar1;
	var uVar2;
	
	sVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(sVar0, "mission");
	Global_4718592.f_87180 = DATAFILE::DATADICT_GET_INT(sVar0, "debugOnlyVersion");
	func_134(&uVar1, uParam0, 0, &uVar2);
}

bool func_134(var* uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_135(uParam0, uParam1);
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

void func_135(var uParam0, var uParam1)
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
	
	func_149(&iVar8, *uParam0, "me");
	func_149(&iVar9, iVar8, "blp");
	func_149(&iVar10, iVar8, "ents");
	func_149(&iVar29, *uParam0, "pd");
	func_149(&iVar30, iVar29, "pds");
	func_149(&iVar69, iVar29, "grp");
	func_149(&uVar70, iVar69, "rel");
	func_149(&iVar71, iVar69, "trg");
	func_149(&iVar80, *uParam0, "vh");
	func_149(&iVar81, iVar80, "veh");
	func_149(&iVar98, iVar81, "blp");
	func_149(&iVar107, *uParam0, "pp");
	func_149(&iVar108, iVar107, "prps");
	func_149(&iVar125, *uParam0, "want");
	func_149(&iVar126, *uParam0, "modt");
	func_149(&iVar127, *uParam0, "amb");
	func_149(&iVar128, iVar127, "veh");
	func_149(&iVar131, *uParam0, "gt");
	func_149(&iVar132, iVar131, "loc");
	func_149(&iVar143, iVar132, "blp");
	func_149(&iVar152, *uParam0, "ta");
	func_149(&iVar153, iVar152, "ars");
	func_149(&iVar164, *uParam0, "ptrl");
	func_149(&iVar165, iVar164, "pat");
	func_149(&iVar168, iVar165, "nd");
	func_149(&iVar185, *uParam0, "sro");
	func_149(&iVar188, *uParam0, "port");
	if (func_148(*uParam0, "fmbs") == 7)
	{
		bVar7 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar10, &Var0) == 7)
		{
			iVar13[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar10, "mn") == 7)
	{
		bVar16 = true;
	}
	if (func_148(iVar10, "pos") == 7)
	{
		bVar18 = true;
	}
	if (func_148(iVar10, "head") == 7)
	{
		bVar20 = true;
	}
	if (func_148(iVar10, "rot") == 7)
	{
		bVar22 = true;
	}
	if (func_148(iVar10, "cv") == 7)
	{
		bVar24 = true;
	}
	if (func_148(iVar10, "crt") == 7)
	{
		bVar26 = true;
	}
	if (func_148(iVar10, "int") == 7)
	{
		bVar28 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar30, &Var0) == 7)
		{
			iVar33[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar30, "mn") == 7)
	{
		bVar36 = true;
	}
	if (func_148(iVar30, "pos") == 7)
	{
		bVar38 = true;
	}
	if (func_148(iVar30, "head") == 7)
	{
		bVar40 = true;
	}
	if (func_148(iVar30, "wpn") == 7)
	{
		bVar42 = true;
	}
	if (func_148(iVar30, "veh") == 7)
	{
		bVar44 = true;
	}
	if (func_148(iVar30, "st") == 7)
	{
		bVar46 = true;
	}
	if (func_148(iVar30, "scen") == 7)
	{
		bVar48 = true;
	}
	if (func_148(iVar30, "anim") == 7)
	{
		bVar50 = true;
	}
	if (func_148(iVar30, "int") == 7)
	{
		bVar52 = true;
	}
	if (func_148(iVar30, "asi") == 7)
	{
		bVar54 = true;
	}
	if (func_148(iVar30, "grp") == 7)
	{
		bVar56 = true;
	}
	if (func_148(iVar30, "mvmt") == 7)
	{
		bVar58 = true;
	}
	if (func_148(iVar30, "mrd") == 7)
	{
		bVar60 = true;
	}
	if (func_148(iVar30, "sr") == 7)
	{
		bVar62 = true;
	}
	if (func_148(iVar30, "sa") == 7)
	{
		bVar64 = true;
	}
	if (func_148(iVar30, "hr") == 7)
	{
		bVar66 = true;
	}
	if (func_148(iVar30, "dr") == 7)
	{
		bVar68 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar71, &Var0) == 7)
		{
			iVar74[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar69, "ed") == 7)
	{
		bVar77 = true;
	}
	if (func_148(iVar69, "gt") == 7)
	{
		bVar79 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar81, &Var0) == 7)
		{
			iVar85[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar81, "mn") == 7)
	{
		bVar89 = true;
	}
	if (func_148(iVar81, "pos") == 7)
	{
		bVar91 = true;
	}
	if (func_148(iVar81, "head") == 7)
	{
		bVar93 = true;
	}
	if (func_148(iVar81, "col") == 7)
	{
		bVar95 = true;
	}
	if (func_148(iVar81, "int") == 7)
	{
		bVar97 = true;
	}
	if (func_148(iVar98, "sprt") == 7)
	{
		bVar100 = true;
	}
	if (func_148(iVar98, "hclr") == 7)
	{
		bVar102 = true;
	}
	if (func_148(iVar98, "scl") == 7)
	{
		bVar104 = true;
	}
	if (func_148(iVar98, "sh") == 7)
	{
		bVar106 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar108, &Var0) == 7)
		{
			iVar112[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar108, "mn") == 7)
	{
		bVar116 = true;
	}
	if (func_148(iVar108, "pos") == 7)
	{
		bVar118 = true;
	}
	if (func_148(iVar108, "head") == 7)
	{
		bVar120 = true;
	}
	if (func_148(iVar108, "rot") == 7)
	{
		bVar122 = true;
	}
	if (func_148(iVar108, "int") == 7)
	{
		bVar124 = true;
	}
	if (func_148(iVar128, "idx") == 7)
	{
		bVar130 = true;
	}
	if (func_148(iVar132, "pos") == 7)
	{
		bVar134 = true;
	}
	if (func_148(iVar132, "rad") == 7)
	{
		bVar136 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar132, &Var0) == 7)
		{
			iVar139[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar132, "brd") == 7)
	{
		bVar142 = true;
	}
	if (func_148(iVar143, "sprt") == 7)
	{
		bVar145 = true;
	}
	if (func_148(iVar143, "hclr") == 7)
	{
		bVar147 = true;
	}
	if (func_148(iVar143, "scl") == 7)
	{
		bVar149 = true;
	}
	if (func_148(iVar143, "sh") == 7)
	{
		bVar151 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar153, &Var0) == 7)
		{
			iVar156[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar153, "vmn") == 7)
	{
		bVar159 = true;
	}
	if (func_148(iVar153, "vmx") == 7)
	{
		bVar161 = true;
	}
	if (func_148(iVar153, "fwd") == 7)
	{
		bVar163 = true;
	}
	if (func_148(iVar165, "pedi") == 7)
	{
		bVar167 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar168, &Var0) == 7)
		{
			iVar171[iVar5] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar168, &Var0) == 7)
		{
			iVar175[iVar5] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar168, &Var0) == 7)
		{
			iVar179[iVar5] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar168, &Var0) == 7)
		{
			iVar183[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_148(iVar185, "name") == 7)
	{
		bVar187 = true;
	}
	if (func_148(iVar188, "pos") == 7)
	{
		bVar190 = true;
	}
	if (func_148(iVar188, "head") == 7)
	{
		bVar192 = true;
	}
	if (func_148(iVar188, "plnkp") == 7)
	{
		bVar194 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_148(iVar188, &Var0) == 7)
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
	*uParam1 = { func_147(*uParam0, "fmnm", "") };
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_16[iVar4] = func_146(uVar6, iVar4, 0, bVar7);
		iVar4++;
	}
	uParam1->f_19 = func_145(iVar8, "num", 0);
	uParam1->f_19.f_1 = func_144(iVar9, "sprt", -1);
	uParam1->f_19.f_1.f_1 = func_144(iVar9, "hclr", 12);
	uParam1->f_19.f_1.f_2 = func_143(iVar9, "scl", 1f);
	uParam1->f_19.f_1.f_3 = func_141(iVar9, "sh", 0);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_19.f_5[iVar4 /*13*/][iVar5] = func_146(uVar11[iVar5], iVar4, 0, iVar13[iVar5]);
			iVar5++;
		}
		uParam1->f_19.f_5[iVar4 /*13*/].f_2 = func_140(uVar15, iVar4, 0, bVar16);
		uParam1->f_19.f_5[iVar4 /*13*/].f_3 = { func_139(uVar17, iVar4, 0f, 0f, 0f, bVar18) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_6 = func_138(uVar19, iVar4, 0f, bVar20);
		uParam1->f_19.f_5[iVar4 /*13*/].f_7 = { func_139(uVar21, iVar4, 0f, 0f, 0f, bVar22) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_10 = func_146(uVar23, iVar4, -1, bVar24);
		uParam1->f_19.f_5[iVar4 /*13*/].f_11 = func_140(uVar25, iVar4, 2, bVar26);
		uParam1->f_19.f_5[iVar4 /*13*/].f_12 = func_146(uVar27, iVar4, -1, bVar28);
		iVar4++;
	}
	uParam1->f_129 = func_145(iVar29, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_129.f_1[iVar4 /*21*/][iVar5] = func_146(uVar31[iVar5], iVar4, 0, iVar33[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_1[iVar4 /*21*/].f_2 = func_140(uVar35, iVar4, 0, bVar36);
		uParam1->f_129.f_1[iVar4 /*21*/].f_3 = { func_139(uVar37, iVar4, 0f, 0f, 0f, bVar38) };
		uParam1->f_129.f_1[iVar4 /*21*/].f_6 = func_138(uVar39, iVar4, 0f, bVar40);
		uParam1->f_129.f_1[iVar4 /*21*/].f_7 = func_140(uVar41, iVar4, 0, bVar42);
		uParam1->f_129.f_1[iVar4 /*21*/].f_8 = func_146(uVar43, iVar4, -1, bVar44);
		uParam1->f_129.f_1[iVar4 /*21*/].f_9 = func_140(uVar45, iVar4, 0, bVar46);
		uParam1->f_129.f_1[iVar4 /*21*/].f_10 = func_146(uVar47, iVar4, -1, bVar48);
		uParam1->f_129.f_1[iVar4 /*21*/].f_11 = func_146(uVar49, iVar4, -1, bVar50);
		uParam1->f_129.f_1[iVar4 /*21*/].f_12 = func_146(uVar51, iVar4, -1, bVar52);
		uParam1->f_129.f_1[iVar4 /*21*/].f_13 = func_146(uVar53, iVar4, -1, bVar54);
		uParam1->f_129.f_1[iVar4 /*21*/].f_14 = func_146(uVar55, iVar4, 0, bVar56);
		uParam1->f_129.f_1[iVar4 /*21*/].f_15 = func_140(uVar57, iVar4, 2, bVar58);
		uParam1->f_129.f_1[iVar4 /*21*/].f_16 = func_146(uVar59, iVar4, -1, bVar60);
		uParam1->f_129.f_1[iVar4 /*21*/].f_17 = func_138(uVar61, iVar4, 60f, bVar62);
		uParam1->f_129.f_1[iVar4 /*21*/].f_18 = func_138(uVar63, iVar4, 60f, bVar64);
		uParam1->f_129.f_1[iVar4 /*21*/].f_19 = func_138(uVar65, iVar4, 60f, bVar66);
		uParam1->f_129.f_1[iVar4 /*21*/].f_20 = func_138(uVar67, iVar4, -1f, bVar68);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_129.f_632[iVar4 /*5*/].f_1[iVar5] = func_146(uVar72[iVar5], iVar4, -1, iVar74[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_632[iVar4 /*5*/].f_3 = func_146(uVar76, iVar4, 0, bVar77);
		uParam1->f_129.f_632[iVar4 /*5*/].f_4 = func_146(uVar78, iVar4, -1, bVar79);
		iVar4++;
	}
	uParam1->f_767 = func_145(iVar80, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_767.f_1[iVar4 /*14*/][iVar5] = func_146(uVar82[iVar5], iVar4, 0, iVar85[iVar5]);
			iVar5++;
		}
		uParam1->f_767.f_1[iVar4 /*14*/].f_3 = func_140(uVar88, iVar4, 0, bVar89);
		uParam1->f_767.f_1[iVar4 /*14*/].f_4 = { func_139(uVar90, iVar4, 0f, 0f, 0f, bVar91) };
		uParam1->f_767.f_1[iVar4 /*14*/].f_7 = func_138(uVar92, iVar4, 0f, bVar93);
		uParam1->f_767.f_1[iVar4 /*14*/].f_8 = func_146(uVar94, iVar4, -1, bVar95);
		uParam1->f_767.f_1[iVar4 /*14*/].f_9 = func_146(uVar96, iVar4, -1, bVar97);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10 = func_140(uVar99, iVar4, -1, bVar100);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_1 = func_140(uVar101, iVar4, 12, bVar102);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_2 = func_138(uVar103, iVar4, 1f, bVar104);
		uParam1->f_767.f_1[iVar4 /*14*/].f_10.f_3 = func_137(uVar105, iVar4, 0, bVar106);
		iVar4++;
	}
	uParam1->f_767.f_422 = func_145(iVar80, "trv", -1);
	uParam1->f_1190 = func_145(iVar107, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_1190.f_1[iVar4 /*12*/][iVar5] = func_146(uVar109[iVar5], iVar4, 0, iVar112[iVar5]);
			iVar5++;
		}
		uParam1->f_1190.f_1[iVar4 /*12*/].f_3 = func_140(uVar115, iVar4, 0, bVar116);
		uParam1->f_1190.f_1[iVar4 /*12*/].f_4 = { func_139(uVar117, iVar4, 0f, 0f, 0f, bVar118) };
		uParam1->f_1190.f_1[iVar4 /*12*/].f_7 = func_138(uVar119, iVar4, 0f, bVar120);
		uParam1->f_1190.f_1[iVar4 /*12*/].f_8 = { func_139(uVar121, iVar4, 0f, 0f, 0f, bVar122) };
		uParam1->f_1190.f_1[iVar4 /*12*/].f_11 = func_146(uVar123, iVar4, -1, bVar124);
		iVar4++;
	}
	uParam1->f_1552 = func_145(iVar125, "wnum", 0);
	uParam1->f_1552.f_1 = func_145(iVar125, "wfak", -1);
	uParam1->f_1552.f_2 = func_143(iVar125, "wblk", 250f);
	uParam1->f_1555 = func_145(iVar126, "time", -1);
	uParam1->f_1555.f_1 = func_144(iVar126, "disp", 0);
	iVar4 = 0;
	while (iVar4 < 9)
	{
		uParam1->f_1564[iVar4] = func_146(uVar129, iVar4, -1, bVar130);
		iVar4++;
	}
	uParam1->f_1564.f_10 = func_145(iVar127, "wvs", 3);
	uParam1->f_1564.f_11 = func_145(iVar127, "spd", 15000);
	uParam1->f_1564.f_12 = func_145(iVar127, "rspd", 5000);
	uParam1->f_1564.f_13 = func_143(iVar127, "sdst", 200f);
	uParam1->f_1564.f_14 = func_145(iVar127, "num", 0);
	uParam1->f_1579 = func_145(iVar131, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1579.f_1[iVar4 /*11*/] = { func_139(uVar133, iVar4, 0f, 0f, 0f, bVar134) };
		uParam1->f_1579.f_1[iVar4 /*11*/].f_3 = func_138(uVar135, iVar4, -1f, bVar136);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1579.f_1[iVar4 /*11*/].f_4[iVar5] = func_146(uVar137[iVar5], iVar4, 0, iVar139[iVar5]);
			iVar5++;
		}
		uParam1->f_1579.f_1[iVar4 /*11*/].f_6 = func_138(uVar141, iVar4, 0f, bVar142);
		uParam1->f_1579.f_1[iVar4 /*11*/].f_7 = func_140(uVar144, iVar4, -1, bVar145);
		uParam1->f_1579.f_1[iVar4 /*11*/].f_7.f_1 = func_140(uVar146, iVar4, 12, bVar147);
		uParam1->f_1579.f_1[iVar4 /*11*/].f_7.f_2 = func_138(uVar148, iVar4, 1f, bVar149);
		uParam1->f_1579.f_1[iVar4 /*11*/].f_7.f_3 = func_137(uVar150, iVar4, 0, bVar151);
		iVar4++;
	}
	uParam1->f_1592 = func_145(iVar152, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1592.f_1[iVar4 /*9*/][iVar5] = func_146(uVar154[iVar5], iVar4, 0, iVar156[iVar5]);
			iVar5++;
		}
		uParam1->f_1592.f_1[iVar4 /*9*/].f_2 = { func_139(uVar158, iVar4, 0f, 0f, 0f, bVar159) };
		uParam1->f_1592.f_1[iVar4 /*9*/].f_5 = { func_139(uVar160, iVar4, 0f, 0f, 0f, bVar161) };
		uParam1->f_1592.f_1[iVar4 /*9*/].f_8 = func_138(uVar162, iVar4, 0f, bVar163);
		iVar4++;
	}
	uParam1->f_1603 = func_145(iVar164, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1603.f_1[iVar4 /*10*/] = func_146(uVar166, iVar4, -1, bVar167);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1603.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/] = func_146(uVar169[iVar5], iVar4, -1, iVar171[iVar5]);
			uParam1->f_1603.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_1 = { func_139(uVar173[iVar5], iVar4, 0f, 0f, 0f, iVar175[iVar5]) };
			uParam1->f_1603.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_4 = { func_139(uVar177[iVar5], iVar4, 0f, 0f, 0f, iVar179[iVar5]) };
			uParam1->f_1603.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_7 = func_146(uVar181[iVar5], iVar4, 2000, iVar183[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 12)
	{
		uParam1->f_1615[iVar4 /*16*/] = { func_136(uVar186, iVar4, "", bVar187) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_1808[iVar4 /*8*/] = { func_139(uVar189, iVar4, 0f, 0f, 0f, bVar190) };
		uParam1->f_1808[iVar4 /*8*/].f_3 = func_138(uVar191, iVar4, 0f, bVar192);
		uParam1->f_1808[iVar4 /*8*/].f_4 = func_146(uVar193, iVar4, -1, bVar194);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1808[iVar4 /*8*/].f_6[iVar5] = func_146(uVar195[iVar5], iVar4, 0, iVar197[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
}

struct<16> func_136(var* uParam0, int iParam1, char* sParam2, bool bParam3)
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

int func_137(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
	}
	return iParam2;
}

float func_138(var* uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_139(var* uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
	if (bParam5 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
	}
	return Param2;
}

int func_140(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

int func_141(int iParam0, char* sParam1, int iParam2)
{
	if (func_142(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 1)
	{
		return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
	}
	return iParam2;
}

bool func_142(int iParam0)
{
	return iParam0 != 0;
}

float func_143(int iParam0, char* sParam1, float fParam2)
{
	if (func_142(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
	{
		return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
	}
	return fParam2;
}

int func_144(int iParam0, char* sParam1, int iParam2)
{
	if (func_142(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_145(int iParam0, char* sParam1, int iParam2)
{
	if (func_142(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_146(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_147(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_142(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_148(int iParam0, char* sParam1)
{
	if (!func_142(iParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}

void func_149(var uParam0, int iParam1, char* sParam2)
{
	if (!func_142(iParam1))
	{
		return;
	}
	if (!func_142(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2) == 6)
	{
		*uParam0 = DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
		if (!func_142(*uParam0))
		{
		}
	}
	if (!func_142(*uParam0))
	{
	}
}

void func_150()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

var func_151(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 150:
			uVar0 = func_164(uParam1, iParam2);
			break;
		
		case 26:
			uVar0 = func_163(uParam1, iParam2);
			break;
		
		case 24:
			uVar0 = func_162(uParam1, iParam2);
			break;
		
		case 256:
			uVar0 = func_161(uParam1, iParam2);
			break;
		
		case 258:
			uVar0 = func_160(uParam1, iParam2);
			break;
		
		case 259:
			uVar0 = func_159(uParam1, iParam2);
			break;
		
		case 271:
			uVar0 = func_158(uParam1, iParam2);
			break;
		
		case 263:
			uVar0 = func_157(uParam1, iParam2);
			break;
		
		case 262:
			uVar0 = func_156(uParam1, iParam2);
			break;
		
		case 264:
			uVar0 = func_155(uParam1, iParam2);
			break;
		
		case 268:
			uVar0 = func_154(uParam1, iParam2);
			break;
		
		case 269:
			uVar0 = func_153(uParam1, iParam2);
			break;
		
		case 270:
			uVar0 = func_152(uParam1, iParam2);
			break;
	}
	return uVar0;
}

char* func_152(var uParam0, int iParam1)
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

char* func_153(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_Phantom_Car_1";
		
		default:
	}
	return "";
}

char* func_154(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_Metal_Detector_1";
		
		case 1:
			return "RE_Metal_Detector_2";
		
		case 2:
			return "RE_Metal_Detector_3";
		
		case 3:
			return "RE_Metal_Detector_4";
		
		case 4:
			return "RE_Metal_Detector_5";
		
		case 5:
			return "RE_Metal_Detector_6";
		
		case 6:
			return "RE_Metal_Detector_7";
		
		case 7:
			return "RE_Metal_Detector_8";
		
		case 8:
			return "RE_Metal_Detector_9";
		
		case 9:
			return "RE_Metal_Detector_10";
		
		default:
	}
	return "";
}

char* func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Setup_1";
		
		case 1:
			return "Fixer_Prep_Nightclub_1";
		
		case 2:
			return "Fixer_Prep_Nightclub_2";
		
		case 3:
			return "Fixer_Prep_Yacht_1";
		
		case 4:
			return "Fixer_Prep_Yacht_2";
		
		case 5:
			return "Fixer_Prep_Limo_1";
		
		case 6:
			return "Fixer_Prep_Limo_2";
		
		case 7:
			return "Fixer_Prep_Way_In_1";
		
		case 8:
			return "Fixer_Prep_Way_In_2";
		
		case 9:
			return "Fixer_Prep_Families_1";
		
		case 10:
			return "Fixer_Prep_Families_2";
		
		case 11:
			return "Fixer_Prep_Ballas_1";
		
		case 12:
			return "Fixer_Prep_Ballas_2";
		
		default:
	}
	return "";
}

char* func_156(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Hit_Taxi_1";
		
		case 1:
			return "Fixer_Hit_Taxi_2";
		
		case 2:
			return "Fixer_Hit_Taxi_3";
		
		case 3:
			return "Fixer_Hit_Golfing_1";
		
		case 4:
			return "Fixer_Hit_Golfing_2";
		
		case 5:
			return "Fixer_Hit_Golfing_3";
		
		case 6:
			return "Fixer_Hit_Motel_1";
		
		case 7:
			return "Fixer_Hit_Motel_2";
		
		case 8:
			return "Fixer_Hit_Motel_3";
		
		case 9:
			return "Fixer_Hit_List_1";
		
		case 10:
			return "Fixer_Hit_List_2";
		
		case 11:
			return "Fixer_Hit_List_3";
		
		case 12:
			return "Fixer_Hit_Attack_1";
		
		case 13:
			return "Fixer_Hit_Attack_2";
		
		case 14:
			return "Fixer_Hit_Attack_3";
		
		case 15:
			return "Fixer_Hit_Construction_1";
		
		case 16:
			return "Fixer_Hit_Construction_2";
		
		case 17:
			return "Fixer_Hit_Construction_3";
		
		case 18:
			return "Fixer_Hit_Joyrider_1";
		
		case 19:
			return "Fixer_Hit_Joyrider_2";
		
		case 20:
			return "Fixer_Hit_Joyrider_3";
		
		case 21:
			return "Fixer_Hit_Vehicles_1";
		
		case 22:
			return "Fixer_Hit_Vehicles_2";
		
		case 23:
			return "Fixer_Hit_Vehicles_3";
		
		default:
	}
	return "";
}

char* func_157(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Contract_Recovery_Package_1";
		
		case 1:
			return "Fixer_Contract_Recovery_Package_2";
		
		case 2:
			return "Fixer_Contract_Recovery_Vehicle_1";
		
		case 3:
			return "Fixer_Contract_Recovery_Vehicle_2";
		
		case 4:
			return "Fixer_Contract_Recovery_Vehicle_3";
		
		case 5:
			return "Fixer_Contract_Assault_1";
		
		case 6:
			return "Fixer_Contract_Assault_2";
		
		case 7:
			return "Fixer_Contract_Assault_3";
		
		case 8:
			return "Fixer_Contract_Assault_4";
		
		case 9:
			return "Fixer_Contract_Assault_5";
		
		case 10:
			return "Fixer_Contract_Rescue_1";
		
		case 11:
			return "Fixer_Contract_Rescue_2";
		
		case 12:
			return "Fixer_Contract_Rescue_3";
		
		case 13:
			return "Fixer_Contract_Rescue_4";
		
		case 14:
			return "Fixer_Contract_Rescue_5";
		
		case 15:
			return "Fixer_Contract_Protect_1";
		
		case 16:
			return "Fixer_Contract_Protect_2";
		
		case 17:
			return "Fixer_Contract_Protect_3";
		
		case 18:
			return "Fixer_Contract_Protect_4";
		
		case 19:
			return "Fixer_Contract_Protect_5";
		
		case 20:
			return "Fixer_Contract_Tail_1";
		
		case 21:
			return "Fixer_Contract_Tail_2";
		
		case 22:
			return "Fixer_Contract_Tail_3";
		
		case 23:
			return "Fixer_Contract_Tail_4";
		
		case 24:
			return "Fixer_Contract_Tail_5";
		
		default:
	}
	return "";
}

char* func_158(var uParam0, int iParam1)
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

char* func_159(var uParam0, int iParam1)
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

char* func_160(var uParam0, int iParam1)
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

char* func_161(var uParam0, int iParam1)
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

char* func_162(var uParam0, int iParam1)
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

char* func_163(var uParam0, int iParam1)
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

char* func_164(var uParam0, int iParam1)
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

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 275:
		case 270:
		case 276:
		case 277:
		case 273:
			return 0;
		
		default:
	}
	return 1;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!func_169(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 != iParam2)
		{
			if (func_167(iParam0, iVar0) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam0 == Global_1921036.f_11.f_228[iParam1 /*2*/])
	{
		return Global_1921036.f_11.f_228[iParam1 /*2*/].f_1;
	}
	return -1;
}

int func_168(int iParam0, int iParam1)
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
		
		case 264:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				default:
			}
			break;
	}
	return 1;
}

int func_169(int iParam0)
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
		case 262:
		case 263:
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_170(int iParam0, int iParam1)
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
		
		case 263:
			switch (iParam1)
			{
				case 15:
				case 16:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_172(int iParam0, int iParam1)
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
		
		case 262:
			return 3;
		
		case 263:
			switch (iParam1)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			return 5;
		
		case 264:
			switch (iParam1)
			{
				case 0:
					return 1;
				
				default:
			}
			return 2;
		
		case 268:
			return 10;
		
		case 269:
			return 1;
		
		case 270:
			return 8;
		
		case 275:
			return 1;
	}
	return -1;
}

int func_173(int iParam0, int iParam1)
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
		
		case 262:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 6;
				
				case 3:
					return 9;
				
				case 4:
					return 12;
				
				case 5:
					return 15;
				
				case 6:
					return 18;
				
				case 7:
					return 21;
				
				default:
			}
			break;
		
		case 263:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 264:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 9;
				
				case 6:
					return 11;
				
				default:
			}
			break;
		
		case 268:
			return 0;
		
		case 269:
			return 0;
		
		case 270:
			return 0;
		
		case 275:
			return 0;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_50(iParam0))
	{
		if (func_191(iParam0, iVar0))
		{
		}
		else if (!func_176(iParam0, iVar0, iParam1))
		{
		}
		else
		{
			func_175(uParam2, iVar0);
		}
		iVar0++;
	}
	return func_47(iParam0, uParam2);
}

void func_175(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 2:
					iVar0 = func_56(func_57());
					return (iVar0 >= 19 || iVar0 <= 3);
					break;
			}
			break;
		
		case 256:
			return func_185(iParam1, iParam2);
		
		case 258:
			return func_180(iParam1, iParam2);
		
		case 262:
			return func_177(iParam1, iParam2);
	}
	return 1;
}

int func_177(int iParam0, int iParam1)
{
	if (func_123(iParam1, 0))
	{
		return 0;
	}
	if (func_179(iParam0, iParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
			if (!func_23(iParam1))
			{
				return 1;
			}
			if (func_178(iParam1) <= 0)
			{
				return 1;
			}
			break;
		
		case 3:
		case 6:
			return 1;
		
		case 4:
		case 7:
			if (func_23(iParam1) && func_178(iParam1) > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (func_87(iParam0) == func_192())
	{
		return 0;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_19;
}

bool func_179(int iParam0, int iParam1)
{
	return Global_1912810[iParam1 /*257*/].f_256 == iParam0;
}

int func_180(int iParam0, int iParam1)
{
	if (!func_183())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_24471)
			{
				return 0;
			}
			if (func_182(iParam1, 0))
			{
				return 0;
			}
			if (!func_69(iParam1))
			{
				return 0;
			}
			if (Global_1578985.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_24471)
			{
				return 0;
			}
			if (func_182(iParam1, 1))
			{
				return 0;
			}
			if (!func_69(iParam1))
			{
				return 0;
			}
			if (Global_1578985.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_24471)
			{
				return 0;
			}
			if (func_182(iParam1, 2))
			{
				return 0;
			}
			if (!func_69(iParam1))
			{
				return 0;
			}
			if (Global_1578985.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_24470)
			{
				return 0;
			}
			if (func_182(iParam1, 3))
			{
				return 0;
			}
			if (!func_181(iParam1))
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_24470)
			{
				return 0;
			}
			if (func_182(iParam1, 4))
			{
				return 0;
			}
			if (!func_181(iParam1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_24472)
			{
				return 0;
			}
			if (func_182(iParam1, 5))
			{
				return 0;
			}
			if (!func_181(iParam1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_24472)
			{
				return 0;
			}
			if (func_182(iParam1, 6))
			{
				return 0;
			}
			if (!func_181(iParam1))
			{
				return 0;
			}
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_181(int iParam0)
{
	if (iParam0 != func_192())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_379 != 0;
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1975399[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

bool func_183()
{
	return func_184(30309, -1);
}

bool func_184(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_190(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_189(iParam0) != iVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
		case 4:
			return 0;
		
		case 0:
			if (func_69(iParam1))
			{
				return 0;
			}
			if (func_186(iParam1, 0))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (!func_69(iParam1))
			{
				return 0;
			}
			if (func_186(iParam1, 0))
			{
				return 0;
			}
			break;
		
		case 3:
			return func_186(iParam1, 0);
	}
	return 1;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_187(iParam0, func_188(iParam1));
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1975399[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_188(int iParam0)
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

int func_189(int iParam0)
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

var func_190(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_308;
}

int func_191(int iParam0, int iParam1)
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
					return !Global_262145.f_29308;
				
				case 2:
					return !Global_262145.f_29316;
				
				case 1:
					return !Global_262145.f_29312;
				
				default:
			}
			break;
	}
	return 0;
}

int func_192()
{
	return -1;
}

int func_193()
{
	return func_194(Global_2775740.f_3.f_1, 1);
}

int func_194(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
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
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

int func_195(int iParam0)
{
	if (func_46(func_196(iParam0)) == 1)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
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

bool func_197(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2775740.f_1, iParam0);
}

void func_198()
{
	func_199(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0)), 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_127)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_128)
		{
			func_199(func_13(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_22(), -1, 0)), 1);
			func_17(4);
		}
	}
}

void func_199(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 104546633;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_200(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_123 = 0;
	iVar0 = 0;
	while (iVar0 < func_202())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_83(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_132[iVar0 /*3*/].f_1, 0))
			{
				if (!MISC::IS_BIT_SET(Local_132[iVar0 /*3*/].f_1, 4))
				{
					iLocal_123++;
				}
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= func_201(Param0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_123 >= func_201(Param0))
				{
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(Local_132[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!MISC::IS_BIT_SET(Local_132[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_201(int iParam0)
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
			return Global_262145.f_11379;
		
		case 9:
			return Global_262145.f_11284;
		
		case 10:
			return Global_262145.f_11331;
		
		case 11:
			return Global_262145.f_11352;
		
		case 12:
			return Global_262145.f_11402;
		
		case 13:
			return Global_262145.f_11420;
		
		case 14:
			return Global_262145.f_11435;
		
		case 15:
			return Global_262145.f_11446;
		
		case 16:
			return Global_262145.f_11454;
		
		case 17:
			return Global_262145.f_11468;
		
		case 18:
			return Global_262145.f_11477;
		
		case 19:
			return Global_262145.f_24273;
		
		case 20:
			return Global_262145.f_24273;
		
		default:
	}
	return 0;
}

int func_202()
{
	if (Global_2722494)
	{
		return 32;
	}
	return (32 - Global_2722495);
}

int func_203()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar1 = (fVar1 + Global_2775740.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar2 = (fVar2 + Global_2775740.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_204(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2775740.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

float func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8410;
		
		case 1:
			return Global_262145.f_8407;
		
		case 2:
			return Global_262145.f_8408;
		
		case 3:
			return Global_262145.f_8409;
		
		case 4:
			return Global_262145.f_8411;
		
		case 5:
			return Global_262145.f_8412;
		
		case 6:
			return Global_262145.f_8413;
		
		case 7:
			return Global_262145.f_8830;
		
		case 8:
			return Global_262145.f_10440;
		
		case 9:
			return Global_262145.f_10442;
		
		case 10:
			return Global_262145.f_10438;
		
		case 11:
			return Global_262145.f_10445;
		
		case 12:
			return Global_262145.f_10887;
		
		case 13:
			return Global_262145.f_10889;
		
		case 14:
			return Global_262145.f_10890;
		
		case 15:
			return Global_262145.f_10891;
		
		case 16:
			return Global_262145.f_10892;
		
		case 17:
			return Global_262145.f_10896;
		
		case 18:
			return Global_262145.f_11478;
		
		case 19:
			return Global_262145.f_24272;
		
		case 20:
			return Global_262145.f_29307;
		
		default:
	}
	return 0f;
}

int func_206(int iParam0)
{
	if (func_214(iParam0))
	{
		return 0;
	}
	if (func_213(iParam0))
	{
		return 0;
	}
	if (func_212(iParam0))
	{
		return 0;
	}
	if (!func_100(func_211(iParam0), func_210(iParam0), func_209(iParam0), 1, 1))
	{
		return 0;
	}
	if (func_208(iParam0))
	{
		return 0;
	}
	if (!func_207(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_207(int iParam0)
{
	return 1;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6920;
		
		case 1:
			return Global_262145.f_6917;
		
		case 2:
			return Global_262145.f_6918;
		
		case 3:
			return Global_262145.f_6919;
		
		case 4:
			return Global_262145.f_8497;
		
		case 5:
			return Global_262145.f_8352;
		
		case 6:
			return Global_262145.f_8357;
		
		case 7:
			return Global_262145.f_8362;
		
		case 8:
			return Global_262145.f_10441;
		
		case 9:
			return Global_262145.f_10443;
		
		case 10:
			return Global_262145.f_10439;
		
		case 11:
			return (Global_262145.f_11625 && Global_262145.f_11624);
		
		case 12:
			return Global_262145.f_10881;
		
		case 13:
			return Global_262145.f_10883;
		
		case 14:
			return Global_262145.f_10884;
		
		case 15:
			return Global_262145.f_10885;
		
		case 16:
			return Global_262145.f_10886;
		
		case 17:
			return Global_262145.f_10895;
		
		case 18:
			return Global_262145.f_11479;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_209(int iParam0)
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

int func_210(int iParam0)
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

int func_211(int iParam0)
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

int func_212(int iParam0)
{
	if (Global_2775740.f_182 == -1)
	{
		return 0;
	}
	if (func_5(Global_2775740.f_182))
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

int func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9 || func_5(iParam0))
	{
		return 0;
	}
	if (Global_262145.f_8368 > 0 && Global_262145.f_8368 <= 21)
	{
		if (!Global_2775740.f_114[(Global_262145.f_8368 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_8368)
			{
				if (Global_2775740.f_114[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
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

void func_215(int iParam0)
{
	Global_2775740.f_2 = iParam0;
}

void func_216(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_217()
{
	return func_15(&(Global_2775740.f_179), func_218(), 0);
}

int func_218()
{
	return Global_2775740.f_181;
}

int func_219()
{
	return 0;
}

int func_220()
{
	int iVar0;
	int iVar1;
	
	Global_2775740.f_181 = Global_262145.f_8370;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		Global_2775740.f_8[iVar0 /*5*/] = iVar0;
		Global_2775740.f_8[iVar0 /*5*/].f_1 = func_221(iVar0);
		Global_2775740.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_8368 > 0 && Global_262145.f_8368 <= 21)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_8368)
		{
			Global_2775740.f_114[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2775740.f_136[iVar1 /*2*/] = -1;
			Global_2775740.f_136[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_221(int iParam0)
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
			return 151;
		
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

void func_222()
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = 10000;
	switch (Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Global_2775740.f_2 >= 4 && Global_2775740.f_2 != 8)
			{
				if (func_197(1))
				{
					MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
				if (!func_296(PLAYER::PLAYER_ID(), 1))
				{
					func_295(4);
				}
				else if (!func_296(PLAYER::PLAYER_ID(), 3))
				{
					func_216(&uLocal_124);
					MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
				else
				{
					if (MISC::IS_BIT_SET(iLocal_101, 1))
					{
						iVar0 = 500;
					}
					if (func_15(&uLocal_124, iVar0, 0))
					{
						MISC::CLEAR_BIT(&iLocal_101, 1);
						func_295(4);
						MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
					}
				}
			}
			else if (func_296(PLAYER::PLAYER_ID(), 1))
			{
				MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (func_296(PLAYER::PLAYER_ID(), 0))
			{
				if (Global_2775740.f_2 == 8)
				{
					func_295(8);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2775740.f_2 == 5)
				{
					func_295(5);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2775740.f_2 >= 6)
				{
					func_295(6);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
				else if (Global_2775740.f_2 == 3)
				{
					func_295(0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			else
			{
				if (func_277())
				{
					if (!func_267())
					{
						MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
					}
					if (func_251(Global_2775740.f_3))
					{
						if (!func_296(PLAYER::PLAYER_ID(), 0))
						{
							MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
						}
					}
				}
				if (!func_296(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_249() && !MISC::IS_BIT_SET(iLocal_101, 0))
					{
						MISC::SET_BIT(&iLocal_101, 1);
					}
					func_295(0);
					MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
					MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2775740.f_2 == 6)
			{
				MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 1);
				MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 2);
				MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 3);
				func_295(6);
			}
			else if (func_197(3) && func_248(&(Global_2775740.f_177)))
			{
				func_229();
			}
			break;
		
		case 6:
			StringCopy(&cVar1, func_6(Global_2775740.f_3.f_1), 64);
			if (!func_228())
			{
				if (!func_296(PLAYER::PLAYER_ID(), 2))
				{
					Local_102.f_16 = -1;
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) == 0)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, false, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(&cVar1, -1, 0) < 32)
						{
							if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, true, 0))
							{
								Local_102 = Global_2775740.f_3.f_1;
								if (func_223(Local_102, 0))
								{
									MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
								}
							}
						}
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) != 0)
				{
					if (Global_2775740.f_2 == 7)
					{
						func_295(7);
						MISC::SET_BIT(&iLocal_101, 0);
						MISC::CLEAR_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
					}
				}
			}
			break;
		
		case 7:
			if (Global_2775740.f_2 != 7)
			{
				func_295(8);
			}
			break;
		
		case 8:
			func_295(0);
			break;
	}
}

int func_223(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, bool bParam21)
{
	char cVar0[32];
	bool bVar8;
	int iVar9;
	int iVar10;
	
	if (func_227())
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
			iVar10 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Param0, 21, func_224(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 164:
		case 171:
		case 165:
		case 169:
		case 172:
		case 173:
		case 166:
		case 174:
		case 175:
		case 167:
		case 176:
		case 168:
		case 192:
		case 170:
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
	if (func_226(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_226(iParam0) == 7)
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
	else if (func_226(iParam0) == 0)
	{
		return 4500;
	}
	else if (func_226(iParam0) == 2)
	{
		return 4500;
	}
	else if (func_226(iParam0) == 6)
	{
		switch (iParam0)
		{
			case 18:
			case 22:
			case 24:
			case 17:
			case 160:
			case 161:
			case 60:
			case 152:
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
			case 162:
				return 4500;
			
			case 186:
				return 4500;
			
			case 187:
				return 1424;
			
			case 150:
				return 8344;
			
			case 87:
			case 77:
			case 76:
				return 8344;
			
			case 9:
			case 16:
			case 15:
			case 147:
			case 146:
			case 19:
			case 151:
			case 148:
			case 21:
			case 163:
				return 2050;
			
			case 156:
				return 3568;
			
			case 177:
			case 180:
				return 1828;
			
			case 181:
			case 182:
			case 183:
				return 4500;
			
			case 189:
			case 184:
			case 185:
			case 188:
			case 190:
				return 8344;
			
			case 191:
				return func_225();
				break;
			
			case 142:
				return 4500;
			}
	}
	switch (func_46(func_194(iParam0, 0)))
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

int func_225()
{
	return 8344;
}

int func_226(int iParam0)
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
		
		case 177:
			return 6;
		
		case 180:
			return 6;
		
		case 181:
			return 6;
		
		case 182:
			return 6;
		
		case 188:
			return 6;
		
		case 184:
			return 6;
		
		case 189:
			return 6;
		
		case 185:
			return 6;
		
		case 183:
			return 6;
		
		case 186:
			return 6;
		
		case 187:
			return 6;
		
		case 190:
			return 6;
		
		case 191:
			return 6;
		
		case 142:
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
		
		case 146:
			return 6;
		
		case 147:
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
		
		case 150:
			return 6;
		
		case 160:
			return 6;
		
		case 161:
			return 6;
		
		case 162:
			return 6;
		
		case 163:
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
		
		case 158:
			return 6;
		
		case 159:
			return 6;
		
		case 148:
			return 6;
		
		case 151:
			return 6;
		
		case 152:
			return 6;
		
		case 149:
			return 6;
		
		case 153:
			return 6;
		
		case 156:
			return 6;
		
		case 157:
			return 6;
		
		case 164:
			return 6;
		
		case 171:
			return 0;
		
		case 165:
			return 6;
		
		case 172:
			return 0;
		
		case 170:
			return 0;
		
		case 173:
			return 0;
		
		case 166:
			return 6;
		
		case 174:
			return 0;
		
		case 169:
			return 6;
		
		case 175:
			return 0;
		
		case 167:
			return 6;
		
		case 176:
			return 0;
		
		case 168:
			return 6;
		
		case 154:
			return 6;
		
		case 155:
			return 6;
		
		case 192:
			return 6;
		
		case 178:
			return 6;
		
		case 179:
			return 6;
		
		default:
	}
	switch (func_46(func_194(iParam0, 1)))
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

bool func_227()
{
	return Global_2714627.f_693;
}

int func_228()
{
	if (Global_2775740.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2810287.f_1721)
	{
		if (Global_2775740.f_2 == 7)
		{
			func_295(7);
		}
	}
	else if (Global_2810287.f_1722)
	{
		Global_2810287.f_1722 = 0;
		func_295(0);
		MISC::SET_BIT(&(Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
	}
	return 1;
}

void func_229()
{
	if (Global_2681692.f_84.f_2 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2810287.f_206.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_247(&(Global_2775740.f_177), 0, 0)) < 360000)
			{
				if (!MISC::IS_BIT_SET(Global_2810287.f_206.f_1, 1))
				{
					if (func_236(31, 0, 0) && !func_235())
					{
						if (Global_262145.f_45 < 3)
						{
							func_230("ACD_TSCH", Global_262145.f_45, 0);
						}
						else
						{
							func_230("ACD_TSCH", 3, 0);
						}
					}
					MISC::SET_BIT(&(Global_2810287.f_206.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_247(&(Global_2775740.f_177), 0, 0)) < 600000)
			{
				if (!MISC::IS_BIT_SET(Global_2810287.f_206.f_1, 2))
				{
					if (func_236(31, 0, 0) && !func_235())
					{
						func_230("ACD_TSCH", 5, 0);
					}
					MISC::SET_BIT(&(Global_2810287.f_206.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_247(&(Global_2775740.f_177), 0, 0)) < 1200000)
			{
				if (!MISC::IS_BIT_SET(Global_2810287.f_206.f_1, 3))
				{
					if (func_236(31, 0, 0) && !func_235())
					{
						func_230("ACD_TSCH", 10, 0);
					}
					MISC::SET_BIT(&(Global_2810287.f_206.f_1), 3);
				}
			}
		}
	}
}

int func_230(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_231(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_231(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_231(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_234() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_76(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_232(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_233(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_234()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_235()
{
	return Global_1575046;
}

bool func_236(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7943 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_241(PLAYER::PLAYER_ID(), 85))
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
	if (func_240() || func_239())
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
			if (func_237())
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
	return MISC::IS_BIT_SET(Global_1836817[iVar1], iVar0);
}

int func_237()
{
	int iVar0;
	
	if (Global_1574610)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2810287.f_1794, 23))
	{
		return 1;
	}
	if (func_240())
	{
		return 1;
	}
	if (func_239())
	{
		return 1;
	}
	iVar0 = Global_1655616[func_238(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2810287.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

bool func_239()
{
	return Global_1575034;
}

bool func_240()
{
	return Global_1575036;
}

int func_241(int iParam0, int iParam1)
{
	if (!func_244())
	{
		return 0;
	}
	if (func_243())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_92(&(Global_1853128[iParam0 /*888*/].f_759), func_242(iParam1));
}

int func_242(int iParam0)
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
		
		case 177:
			return 39;
		
		default:
	}
	return 1;
}

bool func_243()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_143, 3);
}

int func_244()
{
	if (!func_245())
	{
		return 0;
	}
	return 1;
}

int func_245()
{
	if (Global_1574610)
	{
		return 1;
	}
	if (func_240())
	{
		return 1;
	}
	if (func_239())
	{
		return 1;
	}
	return func_246(120, -1);
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860375[iParam0 /*3*/][func_238(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_247(var uParam0, bool bParam1, bool bParam2)
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

var func_248(var uParam0)
{
	return uParam0->f_1;
}

int func_249()
{
	if (func_250() == 0)
	{
		return 1;
	}
	return 0;
}

int func_250()
{
	return Global_1574629.f_18;
}

int func_251(int iParam0)
{
	if (!func_266(iParam0) && !func_265(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return (((func_257(0) && func_256(func_80(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f) && !func_255());
		
		case 4:
			return (((((func_236(20, 0, 0) && !func_254(PLAYER::PLAYER_ID(), 1)) && !func_254(PLAYER::PLAYER_ID(), 2)) && !func_254(PLAYER::PLAYER_ID(), 3)) && !Global_2703656.f_3442) && !func_252());
		
		default:
	}
	return 1;
}

int func_252()
{
	if (!func_253())
	{
		return 0;
	}
	if (Global_2666785.f_2 == Global_262145.f_8843 || Global_2666785.f_2 == Global_262145.f_8867)
	{
		return 1;
	}
	return 0;
}

int func_253()
{
	switch (Global_2666785)
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

bool func_254(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

int func_255()
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

int func_256(struct<3> Param0, struct<3> Param3)
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

int func_257(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_262(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_261())
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
	if (!func_236(19, 0, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_258(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_258(int iParam0)
{
	return !func_259(iParam0);
}

int func_259(int iParam0)
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
			if (Global_262145.f_6917)
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6918)
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6919)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6920)
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_260(4))
			{
				return 0;
			}
			if (func_254(PLAYER::PLAYER_ID(), 7))
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

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_83(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2689156[iVar0 /*453*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_261()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_263(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_263(int iParam0)
{
	return func_264(iParam0);
}

bool func_264(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_265(int iParam0)
{
	return func_236(func_196(iParam0), 0, 0);
}

int func_266(int iParam0)
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
			return func_76(PLAYER::PLAYER_ID(), 0);
		
		default:
	}
	return 1;
}

int func_267()
{
	int iVar0;
	
	iVar0 = func_276(Global_2775740.f_3);
	if (((((iVar0 >= 0 && (func_274(iVar0) || func_274(0))) || func_272(PLAYER::PLAYER_ID())) || func_270(PLAYER::PLAYER_ID())) || !func_269(PLAYER::PLAYER_ID())) || !func_268())
	{
		return 0;
	}
	return 1;
}

int func_268()
{
	if (func_5(Global_2775740.f_3))
	{
		return !func_122(0);
	}
	return 1;
}

bool func_269(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_139, 22);
}

int func_270(int iParam0)
{
	if (func_76(iParam0, 0))
	{
		return 1;
	}
	if (func_271())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_271()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

bool func_272(int iParam0)
{
	if (func_273(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_1, 8);
}

bool func_273(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_1, 2);
}

bool func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = func_275(2482, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_238(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_276(int iParam0)
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

bool func_277()
{
	return ((((((((((((((((((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_294(PLAYER::PLAYER_ID())) && !func_261()) && !func_293()) && !func_235()) && !func_292()) && !func_290(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_263(PLAYER::PLAYER_ID())) && func_249()) && !func_254(PLAYER::PLAYER_ID(), 0)) && !func_254(PLAYER::PLAYER_ID(), 7)) && !func_254(PLAYER::PLAYER_ID(), 21)) && !func_254(PLAYER::PLAYER_ID(), 25)) && (!func_287(PLAYER::PLAYER_ID(), 0, -1) || Global_2775740.f_3 == 11)) && func_83(PLAYER::PLAYER_ID(), 1, 1)) && !func_286(PLAYER::PLAYER_ID())) && func_269(PLAYER::PLAYER_ID())) && !func_285(PLAYER::PLAYER_ID())) && !func_284(PLAYER::PLAYER_ID())) && !func_282(PLAYER::PLAYER_ID())) && !func_280(PLAYER::PLAYER_ID())) && !func_278());
}

bool func_278()
{
	return func_279() == 1;
}

int func_279()
{
	return Global_1973362;
}

bool func_280(int iParam0)
{
	return func_281(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_281(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_282(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_283(Global_2689156[iParam0 /*453*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_283(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_284(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_283(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_283(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_286(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_283(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_288(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_192())
	{
		return iParam0;
	}
	if (func_289(iParam0) != -1)
	{
		iVar0 = func_283(func_289(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_123(iParam0, 0))
			{
				return func_87(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_192();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_192();
}

int func_289(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (func_83(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_83(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_290(int iParam0)
{
	switch (func_291(iParam0))
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

int func_291(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192;
}

bool func_292()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_293()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/] == 5;
}

int func_294(int iParam0)
{
	if (func_262(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_295(int iParam0)
{
	Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2 = iParam0;
}

bool func_296(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_132[iParam0 /*3*/].f_1, iParam1);
}

int func_297()
{
	return 1;
}

int func_298()
{
	return Global_2775740;
}

int func_299(int iParam0)
{
	return Local_132[iParam0 /*3*/];
}

int func_300()
{
	var uVar0;
	
	func_307(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_227())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_306())
	{
		return 1;
	}
	if (func_305(159))
	{
		if (!func_304())
		{
			return 1;
		}
	}
	if (func_305(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_301() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_301()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_301()
{
	switch (func_303())
	{
		case 0:
			return func_302();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_302()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_303()
{
	return Global_31505;
}

bool func_304()
{
	return Global_2714627.f_698;
}

int func_305(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_306()
{
	return Global_2725224;
}

void func_307(var uParam0)
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
				case -1537646326:
					func_308(iVar0);
					break;
				
				case 801199324:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_308(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_83(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_309(iVar4, &bVar5))
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

int func_309(int iParam0, var uParam1)
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

void func_310()
{
	SYSTEM::WAIT(0);
}

void func_311()
{
	Global_2810287.f_1721 = 0;
	Global_2810287.f_1722 = 0;
	Global_2810287.f_1724 = 0;
	Global_2810287.f_1723 = 0;
	MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 1);
	MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 2);
	MISC::CLEAR_BIT(&(Global_2810287.f_206.f_1), 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_312(struct<21> Param0)
{
	func_318();
	func_316(func_317(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_313(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_2775740, 186, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_132, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_132[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 0;
	func_295(0);
	return 1;
}

int func_313(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_315();
			}
			else
			{
				return 0;
			}
		}
		if (!func_314())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_315();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_315();
					}
					else
					{
						return 0;
					}
				}
				if (func_305(157))
				{
					if (!bParam2)
					{
						func_315();
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
					func_315();
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
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_315();
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
			func_315();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_314()
{
	return Global_1575022;
}

void func_315()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_316(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_315();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_317(int iParam0)
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
		
		case 146:
			return 32;
		
		case 147:
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
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_46(func_194(iParam0, 1)))
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

void func_318()
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
	Global_2775740 = { Var0 };
}

