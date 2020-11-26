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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_75 = -1;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118[32] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	struct<7> Local_119 = { 0, 0, 0, 0, -1, 0, -1 } ;
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
	sLocal_18 = "NULL";
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
	iLocal_116 = 7;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_69();
	}
	else
	{
		func_67();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_25();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19();
		}
		if (func_8() || CAM::IS_SCREEN_FADED_OUT())
		{
			func_67();
		}
		if ((!func_7(PLAYER::PLAYER_ID()) || func_5() != 0) && !func_1(PLAYER::PLAYER_ID()))
		{
			func_67();
		}
	}
}

int func_1(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_2(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
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

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4()
{
	return -1;
}

int func_5()
{
	return func_6(PLAYER::PLAYER_ID());
}

int func_6(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

int func_7(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_2(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_8()
{
	var uVar0;
	
	func_16(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_15())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_14())
	{
		return 1;
	}
	if (func_13(159))
	{
		if (!func_12())
		{
			return 1;
		}
	}
	if (func_13(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_9() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_9()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	switch (func_11())
	{
		case 0:
			return func_10();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_10()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_11()
{
	return Global_30768;
}

bool func_12()
{
	return Global_2450632.f_598;
}

int func_13(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return Global_2460680;
}

bool func_15()
{
	return Global_2450632.f_593;
}

void func_16(var uParam0)
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
					func_17(iVar0);
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

void func_17(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_3(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_18(iVar2, &bVar3))
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

int func_18(int iParam0, var uParam1)
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

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	iVar0 = MISC::GET_HASH_KEY("vw_prop_vw_offchair_01");
	if (func_1(PLAYER::PLAYER_ID()))
	{
		iVar0 = MISC::GET_HASH_KEY("bkr_prop_clubhouse_chair_01");
	}
	iVar1 = 0;
	while (iVar1 < iLocal_116)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iLocal_117[iVar1]))
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(func_22(iVar1, 0, 0));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_22(iVar1, 0, 0)))
			{
				return;
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_22(iVar1, 0, 0), "enter_chair", func_21(iVar1, 1), func_20(iVar1), 0f, 2) };
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_22(iVar1, 0, 0), "enter_chair", func_21(iVar1, 1), func_20(iVar1), 0f, 2) };
				iVar2 = OBJECT::CREATE_OBJECT(iVar0, Var3, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar2, true);
				ENTITY::_0x352E2B5CF420BF3B(iVar2, 1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var3, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar2, Var4, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
				iLocal_117[iVar1] = NETWORK::OBJ_TO_NET(iVar2);
				STREAMING::REMOVE_ANIM_DICT(func_22(iVar1, 0, 0));
			}
		}
		iVar1++;
	}
}

Vector3 func_20(int iParam0)
{
	if (func_1(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 180f;
			
			case 1:
				return 0f, 0f, 180f;
			
			case 2:
				return 0f, 0f, -90f;
			
			case 3:
				return 0f, 0f, 0f;
			
			case 4:
				return 0f, 0f, 0f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 148f;
			
			case 1:
				return 0f, 0f, 148f;
			
			case 2:
				return 0f, 0f, 148f;
			
			case 3:
				return 0f, 0f, 58f;
			
			case 4:
				return 0f, 0f, -32f;
			
			case 5:
				return 0f, 0f, -32f;
			
			case 6:
				return 0f, 0f, -32f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_21(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_1(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 2703.905f, -370.476f, -55.1649f };
				break;
			
			case 1:
				Var0 = { 2705.002f, -370.476f, -55.1649f };
				break;
			
			case 2:
				Var0 = { 2706.05f, -369.538f, -55.1649f };
				break;
			
			case 3:
				Var0 = { 2705.002f, -368.526f, -55.1649f };
				break;
			
			case 4:
				Var0 = { 2703.905f, -368.526f, -55.1649f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 970.3333f, 55.555f, 115.7754f };
				break;
			
			case 1:
				Var0 = { 969.3386f, 56.1765f, 115.7754f };
				break;
			
			case 2:
				Var0 = { 968.3069f, 56.8211f, 115.7754f };
				break;
			
			case 3:
				Var0 = { 967.8962f, 58.3022f, 115.7754f };
				break;
			
			case 4:
				Var0 = { 969.4728f, 58.6255f, 115.7754f };
				break;
			
			case 5:
				Var0 = { 970.4819f, 57.995f, 115.7754f };
				break;
			
			case 6:
				Var0 = { 971.4991f, 57.3593f, 115.7754f };
				break;
		}
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					Var0.x = (Var0.x - 0.0837f);
					Var0.f_1 = (Var0.f_1 - 0.1338f);
					break;
				
				case 3:
					Var0.x = (Var0.x - 0.063f);
					Var0.f_1 = (Var0.f_1 + 0.0407f);
					break;
				
				case 4:
				case 5:
				case 6:
					Var0.x = (Var0.x + 0.0837f);
					Var0.f_1 = (Var0.f_1 + 0.1338f);
					break;
				}
			}
	}
	return Var0;
}

char* func_22(int iParam0, int iParam1, int iParam2)
{
	if (func_1(PLAYER::PLAYER_ID()))
	{
		if (func_23())
		{
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@";
						
						default:
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base@";
						
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@";
						
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@";
						
						default:
					}
					break;
				}
		}
	}
	else if (func_23())
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 4:
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_a@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_a@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_a@base_r@";
							
							default:
						}
						break;
					
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_b@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_b@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_b@base_r@";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_c@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_c@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_c@base_r@";
							
							default:
						}
						break;
				}
				break;
			
			case 3:
				return "anim@amb@office@boardroom@boss@female@";
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 4:
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_a@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_a@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_a@base_r@";
							
							default:
						}
						break;
					
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_b@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_b@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_b@base_r@";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_c@base@";
							
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_c@base_l@";
							
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_c@base_r@";
							
							default:
						}
						break;
				}
				break;
			
			case 3:
				return "anim@amb@office@boardroom@boss@male@";
			}
	}
	return "";
}

bool func_23()
{
	return func_24(PLAYER::PLAYER_ID());
}

int func_24(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_25()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_57();
	iVar0 = 0;
	if (func_56() || (!func_54() && Local_119 > 2))
	{
		func_52(1);
	}
	switch (Local_119)
	{
		case 0:
			func_51(1);
			break;
		
		case 1:
			if (((((((((((((func_3(PLAYER::PLAYER_ID(), 1, 1) && !Global_262145.f_26139) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_50()) && !func_49()) && !MISC::IS_BIT_SET(Global_1676377.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && func_46(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405072.f_2672) && !func_45(PLAYER::PLAYER_ID())) && func_42(PLAYER::PLAYER_ID(), -1, 1)) && func_41()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_40(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_119.f_2, 45f))
			{
				if (Local_119.f_6 == -1)
				{
					if ((Local_119.f_4 == 3 && func_34() != PLAYER::PLAYER_ID()) && !func_1(PLAYER::PLAYER_ID()))
					{
						func_33("MPJAC_NO_SIT");
					}
					else
					{
						func_32(&(Local_119.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (func_30(Local_119.f_6, 1))
				{
					if (func_29("MPJAC_NO_SIT"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_27(&(Local_119.f_6));
					Local_119.f_6 = -1;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					MISC::SET_BIT(&(Global_1676377.f_6), 11);
					if (func_1(PLAYER::PLAYER_ID()))
					{
						switch (Local_119.f_4)
						{
							case 0:
								Local_119.f_1 = 0;
								break;
							
							case 1:
								Local_119.f_1 = 1;
								break;
							
							case 2:
								Local_119.f_1 = 2;
								break;
							
							case 3:
								Local_119.f_1 = 0;
								break;
							
							case 4:
								Local_119.f_1 = 1;
								break;
						}
					}
					else
					{
						switch (Local_119.f_4)
						{
							case 0:
								Local_119.f_1 = 0;
								break;
							
							case 1:
								Local_119.f_1 = 1;
								break;
							
							case 2:
								Local_119.f_1 = 2;
								break;
							
							case 3:
								Local_119.f_1 = 0;
								break;
							
							case 4:
								Local_119.f_1 = 0;
								break;
							
							case 5:
								Local_119.f_1 = 2;
								break;
							
							case 6:
								Local_119.f_1 = 1;
								break;
							}
					}
					func_51(2);
				}
			}
			else
			{
				if (Local_119.f_6 != -1)
				{
					func_27(&(Local_119.f_6));
					Local_119.f_6 = -1;
				}
				if (func_29("MPJAC_NO_SIT"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		
		case 2:
			if (Local_119.f_4 != 3 || func_1(PLAYER::PLAYER_ID()))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(Local_119.f_4, Local_119.f_1, 0));
				STREAMING::REQUEST_ANIM_DICT(func_22(Local_119.f_4, Local_119.f_1, 1));
				STREAMING::REQUEST_ANIM_DICT(func_22(Local_119.f_4, Local_119.f_1, 2));
				if ((STREAMING::HAS_ANIM_DICT_LOADED(func_22(Local_119.f_4, Local_119.f_1, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(func_22(Local_119.f_4, Local_119.f_1, 1))) && STREAMING::HAS_ANIM_DICT_LOADED(func_22(Local_119.f_4, Local_119.f_1, 2)))
				{
					iVar4 = 1;
				}
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(Local_119.f_4, 0, 0));
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(Local_119.f_4, 0, 0)))
				{
					iVar4 = 1;
				}
			}
			if (iVar4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_22(Local_119.f_4, Local_119.f_1, 0), "enter", func_21(Local_119.f_4, 1), func_20(Local_119.f_4), 0f, 2) };
				Var6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_22(Local_119.f_4, Local_119.f_1, 0), "enter", func_21(Local_119.f_4, 1), func_20(Local_119.f_4), 0f, 2) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var5, 1f, 20000, Var6.f_2, 0.05f);
				func_51(3);
			}
			break;
		
		case 3:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
				{
					if (Local_119.f_4 == 3 && !func_1(PLAYER::PLAYER_ID()))
					{
						sVar2 = "enter_b";
						sVar3 = "enter_b_chair";
					}
					else
					{
						sVar2 = "enter";
						sVar3 = "enter_chair";
					}
					Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), sVar3, 2f, -2f, 13);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
					func_51(4);
				}
			}
			break;
		
		case 4:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_119.f_5);
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base_chair", 2f, -2f, 13);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
					func_51(5);
				}
			}
			break;
		
		case 5:
			if (((!MISC::IS_BIT_SET(Local_119.f_3, 2) && !MISC::IS_BIT_SET(Local_119.f_3, 0)) && !MISC::IS_BIT_SET(Local_119.f_3, 1)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iLocal_117[3]))
			{
				iVar7 = func_34();
				if (iVar7 != func_4() && func_3(iVar7, 1, 1))
				{
					if (iLocal_118[iVar7] == 3 && !func_1(PLAYER::PLAYER_ID()))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(iLocal_117[3])))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(iLocal_117[3]), -1, 2048, 3);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(iLocal_117[3])))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(iLocal_117[3])))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_119.f_5);
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					if (!MISC::IS_BIT_SET(Local_119.f_3, 2))
					{
						iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if ((!MISC::IS_BIT_SET(Local_119.f_3, 0) && !MISC::IS_BIT_SET(Local_119.f_3, 1)) && !func_1(PLAYER::PLAYER_ID()))
						{
							switch (iVar8)
							{
								case 0:
									sVar2 = "idle_a";
									sVar3 = "idle_a_chair";
									break;
								
								case 1:
									sVar2 = "idle_d";
									sVar3 = "idle_d_chair";
									break;
								
								case 2:
									sVar2 = "idle_e";
									sVar3 = "idle_e_chair";
									break;
							}
						}
						else
						{
							switch (iVar8)
							{
								case 0:
									sVar2 = "idle_a";
									sVar3 = "idle_a_chair";
									break;
								
								case 1:
									sVar2 = "idle_b";
									sVar3 = "idle_b_chair";
									break;
								
								case 2:
									sVar2 = "idle_c";
									sVar3 = "idle_c_chair";
									break;
								}
						}
						Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
						if (MISC::IS_BIT_SET(Local_119.f_3, 0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), sVar3, 2f, -2f, 13);
						}
						else if (MISC::IS_BIT_SET(Local_119.f_3, 1))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), sVar3, 2f, -2f, 13);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), sVar3, 2f, -2f, 13);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
						MISC::SET_BIT(&(Local_119.f_3), 2);
					}
					else
					{
						Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
						if (MISC::IS_BIT_SET(Local_119.f_3, 0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "base_chair", 2f, -2f, 13);
						}
						else if (MISC::IS_BIT_SET(Local_119.f_3, 1))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "base_chair", 2f, -2f, 13);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base_chair", 2f, -2f, 13);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
						MISC::CLEAR_BIT(&(Local_119.f_3), 2);
					}
				}
				if ((((func_3(PLAYER::PLAYER_ID(), 1, 1) && !func_50()) && !func_49()) && !func_45(PLAYER::PLAYER_ID())) && !func_26())
				{
					if (PAD::_0x6CD79468A1E595C6(2) || MISC::IS_BIT_SET(Local_119.f_3, 2))
					{
						if (Local_119.f_6 != -1)
						{
							func_27(&(Local_119.f_6));
							Local_119.f_6 = -1;
						}
					}
					if (Local_119.f_6 == -1)
					{
						if (!MISC::IS_BIT_SET(Local_119.f_3, 2))
						{
							if (PAD::_IS_USING_KEYBOARD(2))
							{
								if (Local_119.f_4 == 3 && !func_1(PLAYER::PLAYER_ID()))
								{
									func_32(&(Local_119.f_6), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
								}
								else
								{
									func_32(&(Local_119.f_6), 4, "MPOFSEAT_EX_PCC", 0, 0, 0, 0);
								}
							}
							else if (Local_119.f_4 == 3 && !func_1(PLAYER::PLAYER_ID()))
							{
								func_32(&(Local_119.f_6), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
							}
							else
							{
								func_32(&(Local_119.f_6), 4, "MPOFSEAT_EXIT_C", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						iVar10 = PAD::GET_CONTROL_VALUE(2, 30);
						if (PAD::_IS_USING_KEYBOARD(2))
						{
							iVar9 = 225;
						}
						else
						{
							iVar9 = 190;
						}
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar9))
						{
							if (Local_119.f_4 == 3 && !func_1(PLAYER::PLAYER_ID()))
							{
								sVar2 = "exit_b";
								sVar3 = "exit_b_chair";
							}
							else if (MISC::IS_BIT_SET(Local_119.f_3, 0))
							{
								sVar2 = "exit_seat";
								sVar3 = "exit_seat_chair";
								iVar0 = 1;
							}
							else if (MISC::IS_BIT_SET(Local_119.f_3, 1))
							{
								sVar2 = "exit_seat";
								sVar3 = "exit_seat_chair";
								iVar0 = 2;
							}
							else
							{
								sVar2 = "exit";
								sVar3 = "exit_chair";
								iVar0 = 0;
							}
							Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, false, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, iVar0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, iVar0), sVar3, 2f, -2f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
							func_27(&(Local_119.f_6));
							Local_119.f_6 = -1;
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							}
							func_51(7);
						}
						else if (Local_119.f_4 != 3 || func_1(PLAYER::PLAYER_ID()))
						{
							if (iVar10 < 100 && !MISC::IS_BIT_SET(Local_119.f_3, 0))
							{
								if (MISC::IS_BIT_SET(Local_119.f_3, 1))
								{
									Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "exit", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "exit_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
									MISC::CLEAR_BIT(&(Local_119.f_3), 0);
									MISC::CLEAR_BIT(&(Local_119.f_3), 1);
								}
								else
								{
									Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "enter", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "enter_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
									MISC::SET_BIT(&(Local_119.f_3), 0);
									MISC::CLEAR_BIT(&(Local_119.f_3), 1);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								}
								func_27(&(Local_119.f_6));
								Local_119.f_6 = -1;
								func_51(6);
							}
							else if (iVar10 > 150 && !MISC::IS_BIT_SET(Local_119.f_3, 1))
							{
								if (MISC::IS_BIT_SET(Local_119.f_3, 0))
								{
									Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "exit", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "exit_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
									MISC::CLEAR_BIT(&(Local_119.f_3), 0);
									MISC::CLEAR_BIT(&(Local_119.f_3), 1);
								}
								else
								{
									Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "enter", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "enter_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
									MISC::CLEAR_BIT(&(Local_119.f_3), 0);
									MISC::SET_BIT(&(Local_119.f_3), 1);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								}
								func_27(&(Local_119.f_6));
								Local_119.f_6 = -1;
								func_51(6);
							}
						}
					}
				}
				else if (Local_119.f_6 != -1)
				{
					func_27(&(Local_119.f_6));
					Local_119.f_6 = -1;
				}
			}
			break;
		
		case 6:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
			{
				iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_119.f_5);
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					Local_119.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					if (MISC::IS_BIT_SET(Local_119.f_3, 0))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 1), "base_chair", 2f, -2f, 13);
					}
					else if (MISC::IS_BIT_SET(Local_119.f_3, 1))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 2), "base_chair", 2f, -2f, 13);
					}
					else
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Local_119.f_5, func_22(Local_119.f_4, Local_119.f_1, 0), "base_chair", 2f, -2f, 13);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_5);
					func_51(5);
				}
			}
			break;
		
		case 7:
			iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_119.f_5);
			if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
			{
				func_52(0);
			}
			break;
	}
}

int func_26()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_27(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_28(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_29(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_31(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_31(int iParam0)
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_27(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_33(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_34()
{
	return func_35(PLAYER::PLAYER_ID());
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_4())
	{
		return iParam0;
	}
	if (func_39(iParam0) != -1)
	{
		iVar0 = func_2(func_39(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_37(iParam0, 0))
			{
				return func_36(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_4();
		}
		return Global_2425662[iParam0 /*421*/].f_310.f_8;
	}
	return func_4();
}

int func_36(int iParam0)
{
	if (iParam0 != func_4())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_4();
}

bool func_37(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_38(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_4();
}

int func_38(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_4())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == PLAYER::PLAYER_ID()) && func_3(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

int func_40(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_3(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_42(iVar1, Local_119.f_4, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_3(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < iLocal_116)
			{
				if (iParam1 == -1 || iParam1 == iVar1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, func_44(iVar1, 0), func_44(iVar1, 1), 1.25f, false, true, 0))
					{
						if (bParam2)
						{
							Local_119.f_4 = iVar1;
							iLocal_118[PLAYER::PLAYER_ID()] = iVar1;
							Local_119.f_2 = func_43(iVar1);
						}
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

float func_43(int iParam0)
{
	if (func_1(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f;
			
			case 1:
				return 0f;
			
			case 2:
				return 90f;
			
			case 3:
				return 180f;
			
			case 4:
				return 180f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 330f;
			
			case 1:
				return 330f;
			
			case 2:
				return 330f;
			
			case 3:
				return 235f;
			
			case 4:
				return 145f;
			
			case 5:
				return 145f;
			
			case 6:
				return 145f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_44(int iParam0, bool bParam1)
{
	if (func_1(PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					return 2703.514f, -370.7754f, -55.7809f;
				
				case 1:
					return 2704.614f, -370.7866f, -55.7809f;
				
				case 2:
					return 2706.25f, -369.9455f, -55.7809f;
				
				case 3:
					return 2705.38f, -368.3092f, -55.7809f;
				
				case 4:
					return 2704.242f, -368.2946f, -55.7809f;
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 2704.322f, -370.7709f, -53.7809f;
				
				case 1:
					return 2705.475f, -370.7686f, -53.7809f;
				
				case 2:
					return 2706.241f, -369.1244f, -53.7809f;
				
				case 3:
					return 2704.588f, -368.3117f, -53.7809f;
				
				case 4:
					return 2703.461f, -368.3133f, -53.7809f;
				}
			
			default:
		}
	}
	else if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 969.8056f, 55.40404f, 115.1742f;
			
			case 1:
				return 968.8292f, 56.27096f, 115.1742f;
			
			case 2:
				return 967.8247f, 56.87987f, 115.1742f;
			
			case 3:
				return 967.9557f, 58.79199f, 115.1742f;
			
			case 4:
				return 969.9387f, 58.57924f, 115.1742f;
			
			case 5:
				return 970.9537f, 57.93294f, 115.1742f;
			
			case 6:
				return 971.9705f, 57.33719f, 115.1742f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 970.5887f, 54.95844f, 117.1742f;
			
			case 1:
				return 969.6066f, 55.76311f, 117.1742f;
			
			case 2:
				return 968.5153f, 56.42958f, 117.1742f;
			
			case 3:
				return 967.4798f, 58.03454f, 117.1742f;
			
			case 4:
				return 969.1876f, 59.0316f, 117.1742f;
			
			case 5:
				return 970.2271f, 58.39074f, 117.1742f;
			
			case 6:
				return 971.2681f, 57.7982f, 117.1742f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_45(int iParam0)
{
	if (iParam0 != func_4() && func_3(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_48(iParam0);
	iVar1 = func_47(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_49()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_50()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)
{
	Local_119 = iParam0;
}

void func_52(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Local_119 > 2)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_119.f_5);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_117[Local_119.f_4]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
		{
			Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_22(Local_119.f_4, Local_119.f_1, 0), "enter_chair", func_21(Local_119.f_4, 1), func_20(Local_119.f_4), 0f, 2) };
			Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_22(Local_119.f_4, Local_119.f_1, 0), "enter_chair", func_21(Local_119.f_4, 1), func_20(Local_119.f_4), 0f, 2) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Var0, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), Var1, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iLocal_117[Local_119.f_4]), true);
		}
	}
	if (Local_119.f_6 != -1)
	{
		func_27(&(Local_119.f_6));
		Local_119.f_6 = -1;
	}
	if (func_29("MPJAC_NO_SIT"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam0 && Local_119 > 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_117[Local_119.f_4]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_117[Local_119.f_4]))
		{
			func_53(&(iLocal_117[Local_119.f_4]));
		}
	}
	Local_119.f_3 = 0;
	if (func_1(PLAYER::PLAYER_ID()))
	{
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@");
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@boss@female@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@boss@male@");
	}
	if (Local_119 > 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		}
		MISC::CLEAR_BIT(&(Global_1676377.f_6), 11);
	}
	Local_119.f_4 = -1;
	iLocal_118[PLAYER::PLAYER_ID()] = -1;
	func_51(1);
}

void func_53(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_54()
{
	if (func_55() == 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	return Global_1312467.f_18;
}

var func_56()
{
	return Global_1312877;
}

void func_57()
{
	if (Local_119 > 3)
	{
		CAM::INVALIDATE_IDLE_CAM();
		HUD::HUD_FORCE_WEAPON_WHEEL(false);
		HUD::DISPLAY_AMMO_THIS_FRAME(false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
		func_65(1);
		func_59(0);
		func_58();
	}
}

void func_58()
{
	Global_22211.f_6 = 1;
}

void func_59(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_31(0))
		{
			func_60(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_60(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_63())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
	if (!func_61())
	{
		Global_19486.f_1 = 3;
	}
}

int func_61()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_31(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
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

bool func_63()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_64()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		if (func_66())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_66()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_67()
{
	func_52(0);
	func_68();
}

void func_68()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_69()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, func_73());
	func_71(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_117, 8);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_118, 33);
	if (func_1(PLAYER::PLAYER_ID()))
	{
		iLocal_116 = 5;
	}
	else
	{
		iLocal_116 = 7;
	}
	NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(iLocal_116);
	if (!func_70())
	{
		func_67();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_67();
	}
}

int func_70()
{
	int iVar0;
	
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
		if (func_15())
		{
			return 0;
		}
		if (func_13(157))
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

int func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_68();
			}
			else
			{
				return 0;
			}
		}
		if (!func_72())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_68();
					}
					else
					{
						return 0;
					}
				}
				if (func_15())
				{
					if (!bParam2)
					{
						func_68();
					}
					else
					{
						return 0;
					}
				}
				if (func_13(157))
				{
					if (!bParam2)
					{
						func_68();
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
					func_68();
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
				func_68();
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
			func_68();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_72()
{
	return Global_1312854;
}

var func_73()
{
	var uVar0;
	
	uVar0 = Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_6;
	return uVar0;
}

