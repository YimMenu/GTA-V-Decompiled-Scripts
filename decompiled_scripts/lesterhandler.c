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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_30();
	}
	if (func_29(0))
	{
		func_30();
	}
	uLocal_46 = uScriptParam_0;
	STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL@HACKING");
	STREAMING::REQUEST_MODEL(1152510020);
	STREAMING::REQUEST_MODEL(-1769322543);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWEL@HACKING") || !STREAMING::HAS_MODEL_LOADED(1152510020)) || !STREAMING::HAS_MODEL_LOADED(-1769322543))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_LINKED(-1769322543))
	{
		HUD::LINK_NAMED_RENDERTARGET(-1769322543);
	}
	uLocal_218 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	while (!MISC::IS_BIT_SET(uLocal_216, 1))
	{
		if (!MISC::IS_BIT_SET(uLocal_216, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_46))
			{
				if (!PED::IS_PED_INJURED(uLocal_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_46, 0, 1);
					PED::ADD_RELATIONSHIP_GROUP("Lester Group", &iLocal_50);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_50, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_50);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_46, iLocal_50);
					PED::SET_PED_DIES_WHEN_INJURED(uLocal_46, 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_46, 0);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_46, 0);
					PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_46, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_46, 0, 0);
					PED::SET_PED_CAN_RAGDOLL(uLocal_46, 0);
					PED::SET_PED_ID_RANGE(uLocal_46, 250f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_46, 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_46, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 132, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 32, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 208, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 118, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 174, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_46, 169, 1);
					ENTITY::SET_ENTITY_PROOFS(uLocal_46, 1, 1, 1, 1, 1, 0, 0, 0);
					Var0 = { 707.32f, -966.83f, 30.413f };
					Var3 = { 0f, 0f, -171.5f };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_49);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHEIST_JEWEL@HACKING", "HACK_INTRO", Var0, Var3, 8f, -8f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHEIST_JEWEL@HACKING", "HACK_LOOP", Var0, Var3, 8f, -8f, -1, 262153, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_49);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_46, uLocal_49);
					PED::_0x2208438012482A1A(uLocal_46, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_46, 1);
					func_28(&uLocal_51, 3, uLocal_46, "LESTER", 0, 1);
					uLocal_47 = OBJECT::CREATE_OBJECT(1152510020, 706.9874f, -967.0945f, 30.4f, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(uLocal_47, 706.9874f, -967.0945f, 30.4f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(uLocal_47, 90f, 0f, 160f, 2, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uLocal_47, 1);
					ENTITY::SET_ENTITY_PROOFS(uLocal_47, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_47, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1152510020);
					ENTITY::CREATE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, 1385417869, 0);
					uLocal_48 = OBJECT::CREATE_OBJECT(-1769322543, 707.3041f, -967.6456f, 30.376f, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(uLocal_48, 183.14f);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_48, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uLocal_48, 1);
					ENTITY::SET_ENTITY_PROOFS(uLocal_48, 1, 1, 1, 1, 1, 0, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1769322543);
					MISC::SET_BIT(&uLocal_216, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46, 0))
			{
				fVar6 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_46, 1));
				if (func_22() == 0)
				{
					if (fVar6 < 4f)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_217)
						{
							if (!func_21())
							{
								if (func_4(&uLocal_51, "JHFAUD", "JHF_LEAVE", 3, 0, 0, 0))
								{
									iLocal_217 = MISC::GET_GAME_TIMER() + 25000;
								}
							}
						}
					}
				}
				if (Global_76886 == 86)
				{
					if (!Global_111633 == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 718.0749f, -976.0472f, 22.91482f, 718.0593f, -979.455f, 27.1191f, 5.75f, 0, 1, 0))
					{
						func_3(7, 1);
						Global_111629 = 0;
						Global_111633 = 1;
						BRAIN::_0x0B40ED49D7D6FF84();
					}
				}
				func_1();
				if (fVar6 > 2500f)
				{
					MISC::SET_BIT(&uLocal_216, 1);
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_30();
}

void func_1()
{
	if (func_2())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_48))
		{
			HUD::SET_TEXT_RENDER_ID(uLocal_218);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_219, 0.08f, 0.17f, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
		}
	}
}

int func_2()
{
	uLocal_219 = unk_0x67D02A194A2FC2BD("JHPB_02_Laptop");
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_219))
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_111638.f_24990), iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_111638.f_24990), iVar0);
		}
	}
	else
	{
		iVar0 = (iVar0 - 31);
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_111638.f_24990.f_1), iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_111638.f_24990.f_1), iVar0);
		}
	}
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_17();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_11();
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_10())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_16(14))
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
		Global_19486 = func_22();
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

bool func_16(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

int func_21()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_16(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0];
}

void func_28(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

bool func_29(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_30()
{
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_46);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1152510020);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_47);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1152510020);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_48);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1769322543);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("re_lured");
	STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWEL@HACKING");
	ENTITY::REMOVE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, -1769322543, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_50);
	func_31();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_31()
{
	func_32();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_219);
}

void func_32()
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
}

