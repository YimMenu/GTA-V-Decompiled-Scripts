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
	func_234();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_51(&Local_116);
		if (((func_50() || func_49()) || func_48()) || func_47())
		{
			if (Local_116.f_19 == 3)
			{
				func_5(&Local_116, 0);
			}
		}
		else
		{
			func_51(&Local_116);
		}
		if (func_3())
		{
			func_5(&Local_116, 1);
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if ((!Global_2513560 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_4())) || (!NETWORK::NETWORK_IS_SESSION_ACTIVE() && !func_4()))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return Global_1312854;
}

void func_5(var uParam0, bool bParam1)
{
	func_12(uParam0, bParam1);
	if (MISC::IS_BIT_SET(uParam0->f_5, 0))
	{
		func_11();
		MISC::CLEAR_BIT(&(uParam0->f_5), 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_5, 1))
	{
		func_10();
		MISC::CLEAR_BIT(&(uParam0->f_5), 1);
	}
	if (uParam0->f_18 != -1)
	{
		func_8(&(uParam0->f_18));
	}
	func_7(uParam0, 10);
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_6(uParam0, 0);
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_8(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_10()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_11()
{
	Global_2439138.f_1156.f_9 = 0;
}

void func_12(var uParam0, bool bParam1)
{
	MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_404), 0);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
	func_46(uParam0);
	func_45(uParam0);
	func_44(uParam0);
	func_43(uParam0);
	func_42(uParam0);
	func_41(uParam0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_ION_CANNON");
	AUDIO::STOP_AUDIO_SCENE("dlc_xm_orbital_cannon_camera_active_scene");
	func_40(&(uParam0->f_731));
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_OrbitalCannon"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_OrbitalCannon");
	}
	uParam0->f_9 = 0;
	if (MISC::IS_BIT_SET(uParam0->f_5, 3))
	{
		STREAMING::CLEAR_FOCUS();
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
		MISC::CLEAR_BIT(&(uParam0->f_5), 3);
	}
	MISC::CLEAR_BIT(&(uParam0->f_5), 15);
	MISC::CLEAR_BIT(&(uParam0->f_5), 16);
	MISC::CLEAR_BIT(&(uParam0->f_5), 17);
	func_40(&(uParam0->f_725));
	func_38();
	func_29();
	if (MISC::IS_BIT_SET(uParam0->f_8, 1))
	{
		GRAPHICS::_0x6DDBF9DFFC4AC080(0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_8, 0))
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	HUD::DISPLAY_CASH(1);
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, 0);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_22));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	STREAMING::CLEAR_FOCUS();
	Global_2513561 = -1;
	if (bParam1)
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1) && MISC::IS_BIT_SET(uParam0->f_8, 3))
		{
			func_13(PLAYER::PLAYER_ID(), 1, 524288, 0);
		}
	}
	uParam0->f_8 = 0;
}

void func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_27())
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
		if (!func_25())
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
				else if (bVar14 || (!func_22(PLAYER::PLAYER_ID(), 0) && !func_21()))
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
					func_18(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_17(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					func_16();
					func_15();
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
				if (!func_17(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					if (func_14(Global_4456448.f_232883))
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

bool func_14(int iParam0)
{
	return iParam0 == 17;
}

void func_15()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_16()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_17(var uParam0)
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

void func_18(int iParam0, int iParam1, int iParam2)
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
				func_20();
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
		if (func_22(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_19(-2008016205, iParam0);
	}
}

void func_19(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_20()
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

bool func_21()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_22(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312745;
}

int func_25()
{
	if (func_26() == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	return Global_1312467.f_18;
}

int func_27()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
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

void func_29()
{
	func_30(0);
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_37();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_36(0))
		{
			func_31(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_34())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_32())
	{
		Global_19486.f_1 = 3;
	}
}

int func_32()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_36(0))
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

bool func_34()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_35()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

int func_36(int iParam0)
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

void func_37()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_38()
{
	func_39(PLAYER::PLAYER_ID(), 0);
}

void func_39(int iParam0, int iParam1)
{
	Global_2425662[iParam0].f_63.f_3 = iParam1;
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_41(var uParam0)
{
	if (uParam0->f_16 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_16);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_16);
		uParam0->f_16 = -1;
	}
}

void func_42(var uParam0)
{
	if (uParam0->f_15 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_15);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_15);
		uParam0->f_15 = -1;
	}
}

void func_43(var uParam0)
{
	if (uParam0->f_12 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_12);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
		uParam0->f_12 = -1;
	}
}

void func_44(var uParam0)
{
	if (uParam0->f_13 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_13);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_13);
		uParam0->f_13 = -1;
	}
}

void func_45(var uParam0)
{
	if (uParam0->f_14 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_14);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_14);
		uParam0->f_14 = -1;
	}
}

void func_46(var uParam0)
{
	if (uParam0->f_6 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_6);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_6);
		uParam0->f_6 = -1;
	}
}

int func_47()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1609729055) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_1312877;
}

int func_49()
{
	if (func_26() == 3 || func_26() == 2)
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (func_26() == 1 || func_26() == 4)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	switch (uParam0->f_19)
	{
		case 0:
			func_6(uParam0, 1);
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_5, 0))
			{
				func_11();
				MISC::CLEAR_BIT(&(uParam0->f_5), 0);
			}
			if (MISC::IS_BIT_SET(uParam0->f_5, 1))
			{
				func_10();
				MISC::CLEAR_BIT(&(uParam0->f_5), 1);
			}
			if (func_215(uParam0))
			{
				HUD::DISPLAY_CASH(0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				MISC::CLEAR_BIT(&(uParam0->f_10), 2);
				MISC::CLEAR_BIT(&(uParam0->f_10), 3);
				MISC::SET_BIT(&(uParam0->f_5), 13);
				MISC::SET_BIT(&(uParam0->f_10), 2);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_6(uParam0, 3);
				MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_404), 0);
			}
			break;
		
		case 3:
			func_214();
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_13(PLAYER::PLAYER_ID(), 0, 524288, 0);
				MISC::SET_BIT(&(uParam0->f_8), 3);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				}
			}
			if (!func_213())
			{
				func_212();
				MISC::SET_BIT(&(uParam0->f_5), 0);
			}
			if (!func_211())
			{
				func_210();
				MISC::SET_BIT(&(uParam0->f_5), 1);
			}
			STREAMING::_0x472397322E92A856();
			STREAMING::_0xA76359FC80B2438E(1f);
			CAM::_0x271401846BD26E92(1, 1);
			PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
			if (func_155(0, 1, 0))
			{
				if (func_58(uParam0))
				{
					func_12(uParam0, 1);
					func_6(uParam0, 1);
				}
			}
			func_56(1);
			break;
	}
	if (uParam0->f_19 == 3)
	{
		STREAMING::_0x472397322E92A856();
		STREAMING::_0xA76359FC80B2438E(1f);
		CAM::_0x271401846BD26E92(1, 1);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if (!uParam0->f_3)
		{
			if (!func_55(&(uParam0->f_731), 5000, 0))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_ION_CANNON", 0, -1))
				{
					uParam0->f_3 = 1;
				}
				else if (!func_54(&(uParam0->f_731)))
				{
					func_53(&(uParam0->f_731), 0, 0);
				}
			}
		}
		func_52();
		func_56(1);
	}
}

void func_52()
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_53(var uParam0, bool bParam1, bool bParam2)
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

bool func_54(var uParam0)
{
	return uParam0->f_1;
}

int func_55(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
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

void func_56(bool bParam0)
{
	if (bParam0)
	{
		if (func_57())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_57()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

int func_58(var uParam0)
{
	func_154();
	HUD::DISPLAY_AMMO_THIS_FRAME(0);
	HUD::HUD_FORCE_WEAPON_WHEEL(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	func_56(1);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_153();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	func_152(0);
	if (!MISC::IS_BIT_SET(uParam0->f_5, 2))
	{
		if (func_120(uParam0))
		{
			if (func_60(uParam0))
			{
				if (MISC::IS_BIT_SET(uParam0->f_8, 0))
				{
					MISC::CLEAR_OVERRIDE_WEATHER();
					MISC::CLEAR_BIT(&(uParam0->f_8), 0);
				}
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				MISC::CLEAR_BIT(&(uParam0->f_10), 2);
				MISC::CLEAR_BIT(&(uParam0->f_10), 3);
				MISC::SET_BIT(&(uParam0->f_5), 13);
				MISC::SET_BIT(&(uParam0->f_10), 3);
				MISC::SET_BIT(&(uParam0->f_5), 2);
			}
		}
	}
	else if (func_120(uParam0))
	{
		func_59(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_5), 2);
		return 1;
	}
	return 0;
}

int func_59(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_5, 3))
	{
		STREAMING::CLEAR_FOCUS();
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
		MISC::CLEAR_BIT(&(uParam0->f_5), 3);
	}
	MISC::SET_BIT(&(uParam0->f_5), 13);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	return 1;
}

int func_60(var uParam0)
{
	if (func_54(&(uParam0->f_729)) && func_55(&(uParam0->f_729), 5000, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_5), 8);
		MISC::CLEAR_BIT(&(uParam0->f_5), 10);
		MISC::CLEAR_BIT(&(uParam0->f_5), 9);
		func_40(&(uParam0->f_723));
		func_40(&(uParam0->f_729));
	}
	if (func_54(&(uParam0->f_727)))
	{
		if (func_55(&(uParam0->f_727), 3000, 0))
		{
			func_44(uParam0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "cannon_active", "dlc_xm_orbital_cannon_sounds", 1);
			func_40(&(uParam0->f_727));
			MISC::SET_BIT(&(uParam0->f_5), 13);
		}
	}
	if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_36(0)) && !func_119()) && !func_48()) && func_118(uParam0) == 10)
	{
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (((((PAD::IS_DISABLED_CONTROL_PRESSED(2, 24) && !MISC::IS_BIT_SET(uParam0->f_5, 8)) && !func_54(&(uParam0->f_727))) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			uParam0->f_1 = 1;
			if (!func_54(&(uParam0->f_723)))
			{
				func_53(&(uParam0->f_723), 0, 0);
				func_117(uParam0);
				PAD::SET_PAD_SHAKE(0, 1000, 50);
				if (!MISC::IS_BIT_SET(uParam0->f_5, 19))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_6, "Firing", 0f);
					MISC::SET_BIT(&(uParam0->f_5), 19);
				}
			}
			else if (func_55(&(uParam0->f_723), 3000, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_5, 8))
				{
					Var0 = { CAM::GET_CAM_COORD(uParam0->f_4) };
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_6, "Firing", 1f);
					func_70(Var0);
					PAD::SET_PAD_SHAKE(0, 500, 256);
					CAM::SHAKE_CAM(uParam0->f_4, "GAMEPLAY_EXPLOSION_SHAKE", 1.5f);
					func_53(&(uParam0->f_729), 0, 0);
					MISC::SET_BIT(&(uParam0->f_5), 8);
					MISC::SET_BIT(&(uParam0->f_5), 13);
					*uParam0 = 1;
				}
			}
			else if (func_55(&(uParam0->f_723), 2000, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_5, 10))
				{
					MISC::SET_BIT(&(uParam0->f_5), 10);
					PAD::SET_PAD_SHAKE(0, 1000, 50);
				}
			}
			else if (func_55(&(uParam0->f_723), 1000, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_5, 9))
				{
					MISC::SET_BIT(&(uParam0->f_5), 9);
					PAD::SET_PAD_SHAKE(0, 1000, 50);
				}
			}
		}
		else
		{
			bVar3 = false;
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 24) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "inactive_fire_fail", "dlc_xm_orbital_cannon_sounds", 1);
			}
			uParam0->f_1 = 0;
			func_46(uParam0);
			if (MISC::IS_BIT_SET(uParam0->f_5, 19))
			{
				MISC::CLEAR_BIT(&(uParam0->f_5), 19);
			}
			if (!MISC::IS_BIT_SET(uParam0->f_5, 8))
			{
				func_69(uParam0);
			}
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !bVar3)
			{
				func_43(uParam0);
				func_42(uParam0);
				func_41(uParam0);
				func_69(uParam0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				MISC::SET_BIT(&(uParam0->f_5), 13);
				MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_413), 1);
				return 1;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 203))
			{
				func_69(uParam0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				MISC::CLEAR_BIT(&(uParam0->f_10), 2);
				MISC::CLEAR_BIT(&(uParam0->f_10), 3);
				MISC::SET_BIT(&(uParam0->f_5), 13);
				MISC::SET_BIT(&(uParam0->f_10), 2);
				func_6(uParam0, 3);
			}
		}
		if (!CAM::IS_CAM_SHAKING(uParam0->f_4))
		{
			func_61(uParam0);
		}
	}
	return 0;
}

void func_61(var uParam0)
{
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 221);
	if (MISC::IS_BIT_SET(uParam0->f_5, 5))
	{
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			if (fVar0 == 0f)
			{
				MISC::CLEAR_BIT(&(uParam0->f_5), 5);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, 242) && !PAD::IS_CONTROL_PRESSED(2, 241))
		{
			MISC::CLEAR_BIT(&(uParam0->f_5), 5);
		}
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		bVar1 = false;
		bVar2 = false;
		uVar3 = CAM::GET_CAM_FOV(uParam0->f_4);
		fVar4 = (35f + func_68(uParam0->f_7));
		fVar5 = PAD::GET_CONTROL_NORMAL(2, 218);
		fVar6 = PAD::GET_CONTROL_NORMAL(2, 219);
		Var7 = { CAM::GET_CAM_COORD(uParam0->f_4) };
		if (uParam0->f_1)
		{
			fVar4 = 50f;
		}
		if (fVar5 > 0.1f)
		{
			if ((Var7.x + (MISC::ABSF((fVar4 * fVar5)) * SYSTEM::TIMESTEP())) <= 4000f)
			{
				bVar1 = true;
				Var7.x = (Var7.x + (MISC::ABSF((fVar4 * fVar5)) * SYSTEM::TIMESTEP()));
			}
		}
		else if (fVar5 < -0.1f)
		{
			if ((Var7.x - (MISC::ABSF((fVar4 * fVar5)) * SYSTEM::TIMESTEP())) >= -4000f)
			{
				bVar1 = true;
				Var7.x = (Var7.x - (MISC::ABSF((fVar4 * fVar5)) * SYSTEM::TIMESTEP()));
			}
		}
		if (fVar6 > 0.1f)
		{
			if ((Var7.y - (MISC::ABSF((fVar4 * fVar6)) * SYSTEM::TIMESTEP())) >= -4000f)
			{
				bVar1 = true;
				Var7.y = (Var7.y - (MISC::ABSF((fVar4 * fVar6)) * SYSTEM::TIMESTEP()));
			}
		}
		else if (fVar6 < -0.1f)
		{
			if ((Var7.y + (MISC::ABSF((fVar4 * fVar6)) * SYSTEM::TIMESTEP())) <= 8000f)
			{
				bVar1 = true;
				Var7.y = (Var7.y + (MISC::ABSF((fVar4 * fVar6)) * SYSTEM::TIMESTEP()));
			}
		}
		fVar10 = func_67(Var7);
		if (Var7.z != fVar10)
		{
			if (Var7.z < fVar10)
			{
				Var7.z = (Var7.z + (MISC::ABSF(fVar4) * SYSTEM::TIMESTEP()));
				if (Var7.z > fVar10)
				{
					Var7.z = fVar10;
				}
			}
			else if (Var7.z > fVar10)
			{
				Var7.z = (Var7.z - (MISC::ABSF(fVar4) * SYSTEM::TIMESTEP()));
				if (Var7.z < fVar10)
				{
					Var7.z = fVar10;
				}
			}
			bVar1 = true;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_5, 5))
		{
			if (!PAD::_IS_USING_KEYBOARD(2))
			{
				if (fVar0 > 0.3f)
				{
					if ((!MISC::IS_BIT_SET(uParam0->f_5, 7) && !MISC::IS_BIT_SET(uParam0->f_5, 6)) && uParam0->f_7 > 0)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 1));
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						MISC::SET_BIT(&(uParam0->f_5), 7);
						MISC::SET_BIT(&(uParam0->f_5), 5);
					}
				}
				else if (fVar0 < -0.3f)
				{
					if ((!MISC::IS_BIT_SET(uParam0->f_5, 6) && !MISC::IS_BIT_SET(uParam0->f_5, 7)) && uParam0->f_7 < 4)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 0));
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						MISC::SET_BIT(&(uParam0->f_5), 6);
						MISC::SET_BIT(&(uParam0->f_5), 5);
					}
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 242))
			{
				if ((!MISC::IS_BIT_SET(uParam0->f_5, 7) && !MISC::IS_BIT_SET(uParam0->f_5, 6)) && uParam0->f_7 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 1));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(&(uParam0->f_5), 7);
					MISC::SET_BIT(&(uParam0->f_5), 5);
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 241))
			{
				if ((!MISC::IS_BIT_SET(uParam0->f_5, 6) && !MISC::IS_BIT_SET(uParam0->f_5, 7)) && uParam0->f_7 < 4)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 0));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(&(uParam0->f_5), 6);
					MISC::SET_BIT(&(uParam0->f_5), 5);
				}
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_5, 6) || MISC::IS_BIT_SET(uParam0->f_5, 7))
		{
			bVar2 = true;
		}
		fVar11 = 0f;
		fVar12 = 0f;
		Var13 = { CAM::GET_CAM_COORD(uParam0->f_4) };
		if (Var13.x < Var7.x)
		{
			fVar11 = 50f;
		}
		else if (Var13.x > Var7.x)
		{
			fVar11 = -50f;
		}
		if (Var13.y < Var7.y)
		{
			fVar12 = 50f;
		}
		else if (Var13.y > Var7.y)
		{
			fVar12 = -50f;
		}
		if (bVar1 || bVar2)
		{
			if (func_118(uParam0) == 10)
			{
				if (bVar1)
				{
					func_65(uParam0);
				}
				else
				{
					func_43(uParam0);
					func_42(uParam0);
					func_41(uParam0);
				}
				if (bVar2)
				{
					if (MISC::IS_BIT_SET(uParam0->f_5, 6))
					{
						func_64(uParam0);
					}
					else if (MISC::IS_BIT_SET(uParam0->f_5, 7))
					{
						func_63(uParam0);
					}
				}
				else
				{
					func_42(uParam0);
					func_41(uParam0);
				}
			}
			func_62(uParam0, &uVar3);
			CAM::SET_CAM_FOV(uParam0->f_4, uVar3);
			CAM::SET_CAM_COORD(uParam0->f_4, Var7);
		}
		else
		{
			func_43(uParam0);
			func_42(uParam0);
			func_41(uParam0);
		}
		MISC::_GET_GROUND_Z_FOR_3D_COORD_2(Var7, &fVar16, 1, 0);
		STREAMING::SET_FOCUS_POS_AND_VEL((Var7.x + fVar11), (Var7.y + fVar12), (fVar16 + 50f), -90f, 0f, 0f);
	}
}

void func_62(var uParam0, var uParam1)
{
	fVar0 = 125f;
	if (MISC::IS_BIT_SET(uParam0->f_5, 7))
	{
		*uParam1 = (*uParam1 + (fVar0 * SYSTEM::TIMESTEP()));
		switch (uParam0->f_7)
		{
			case 1:
				if (*uParam1 > 100f)
				{
					*uParam1 = 100f;
					uParam0->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam0->f_5), 7);
				}
				break;
			
			case 2:
				if (*uParam1 > 80f)
				{
					*uParam1 = 80f;
					uParam0->f_7 = 1;
					MISC::CLEAR_BIT(&(uParam0->f_5), 7);
				}
				break;
			
			case 3:
				if (*uParam1 > 60f)
				{
					*uParam1 = 60f;
					uParam0->f_7 = 2;
					MISC::CLEAR_BIT(&(uParam0->f_5), 7);
				}
				break;
			
			case 4:
				if (*uParam1 > 40f)
				{
					*uParam1 = 40f;
					uParam0->f_7 = 3;
					MISC::CLEAR_BIT(&(uParam0->f_5), 7);
				}
				break;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_5, 6))
	{
		*uParam1 = (*uParam1 - (fVar0 * SYSTEM::TIMESTEP()));
		switch (uParam0->f_7)
		{
			case 0:
				if (*uParam1 < 80f)
				{
					*uParam1 = 80f;
					uParam0->f_7 = 1;
					MISC::CLEAR_BIT(&(uParam0->f_5), 6);
				}
				break;
			
			case 1:
				if (*uParam1 < 60f)
				{
					*uParam1 = 60f;
					uParam0->f_7 = 2;
					MISC::CLEAR_BIT(&(uParam0->f_5), 6);
				}
				break;
			
			case 2:
				if (*uParam1 < 40f)
				{
					*uParam1 = 40f;
					uParam0->f_7 = 3;
					MISC::CLEAR_BIT(&(uParam0->f_5), 6);
				}
				break;
			
			case 3:
				if (*uParam1 < 20f)
				{
					*uParam1 = 20f;
					uParam0->f_7 = 4;
					MISC::CLEAR_BIT(&(uParam0->f_5), 6);
				}
				break;
			}
	}
}

void func_63(var uParam0)
{
	if (uParam0->f_16 == -1)
	{
		uParam0->f_16 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_16, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_64(var uParam0)
{
	if (uParam0->f_15 == -1)
	{
		uParam0->f_15 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_15, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_65(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_12, "pan_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

float func_66(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (uParam0->f_7)
		{
			case 0:
				return 0.25f;
				break;
			
			case 1:
				return 0.5f;
				break;
			
			case 2:
				return 0.75f;
				break;
			
			case 3:
				return 1f;
				break;
		}
	}
	else
	{
		switch (uParam0->f_7)
		{
			case 1:
				return 0f;
				break;
			
			case 2:
				return 0.25f;
				break;
			
			case 3:
				return 0.5f;
				break;
			
			case 4:
				return 0.75f;
				break;
			}
	}
	return 0f;
}

float func_67(struct<2> Param0, var uParam2)
{
	if (((Param0.f_1 >= 1000f && Param0.f_1 <= 1700f) && Param0 >= -700f) && Param0 <= 1100f)
	{
		return 500f;
	}
	if (((Param0.f_1 >= 3600f && Param0.f_1 <= 4100f) && Param0 >= -1700f) && Param0 <= -700f)
	{
		return 550f;
	}
	if (((Param0.f_1 >= 4880f && Param0.f_1 <= 6150f) && Param0 >= -500f) && Param0 <= 1900f)
	{
		return 850f;
	}
	return 400f;
}

float func_68(int iParam0)
{
	fVar0 = 100f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 90f;
			break;
		
		case 1:
			fVar0 = 60f;
			break;
		
		case 2:
			fVar0 = 50f;
			break;
		
		case 3:
			fVar0 = 25f;
			break;
		
		case 4:
			fVar0 = 10f;
			break;
	}
	return fVar0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
	if (CAM::IS_CAM_SHAKING(uParam0->f_4))
	{
		CAM::STOP_CAM_SHAKING(uParam0->f_4, 0);
	}
	PAD::STOP_PAD_SHAKE(0);
	MISC::CLEAR_BIT(&(uParam0->f_5), 8);
	MISC::CLEAR_BIT(&(uParam0->f_5), 10);
	MISC::CLEAR_BIT(&(uParam0->f_5), 9);
	func_40(&(uParam0->f_723));
}

void func_70(struct<3> Param0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), 0, 0);
		MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Param0, &uVar0, &Var1);
		iVar12 = 0;
		while (iVar12 < 32)
		{
			iVar11 = PLAYER::INT_TO_PLAYERINDEX(iVar12);
			if (func_75(iVar11, 0, 0))
			{
				uVar10 = PLAYER::GET_PLAYER_PED(iVar11);
				if (ENTITY::DOES_ENTITY_EXIST(uVar10))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(iVar10, 0) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4, 0) < 15f && Var4.z >= (Param0.z - 15f))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Var4, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar12++;
		}
		iVar13 = VEHICLE::_GET_ALL_VEHICLES(&Global_1315847);
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1315847[iVar14]))
			{
				if (((func_74(Global_1315847[iVar14], 0) || func_73(Global_1315847[iVar14], 0)) || func_72(Global_1315847[iVar14], 0)) || func_71(Global_1315847[iVar14], 0))
				{
					Var7 = { ENTITY::GET_ENTITY_COORDS(Global_1315847[iVar14], 0) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var7, 0) < 15f && Var7.z >= (Param0.z - 15f))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Var7, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar14++;
		}
		FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Param0, 59, 1f, 1, 0, 1065353216);
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xm_orbital");
		GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_xm_orbital_blast", Param0, Var1, 1065353216, 0, 0, 0, 1);
		if (!Global_1694119)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DLC_XM_Explosions_Orbital_Cannon", Param0, 0, 1, 0, 0);
		}
	}
}

int func_71(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		if ((func_115(iParam0) && ((func_114(iParam0) == 88 || func_114(iParam0) == 81) || func_114(iParam0) == 117)) || (((((func_110(iParam0) || func_107(iParam0)) || func_103(iParam0)) && !func_102(iParam0)) && !func_101(iParam0)) && !func_99(iParam0)))
		{
			if (((!func_98(iParam0) && !func_97(iParam0)) && !func_94(iParam0, func_96(), 1)) && !func_93(iParam0))
			{
				if (iParam1 && func_92(iParam0))
				{
					return 0;
				}
				if (iParam2 && (((Global_2425662[iVar0].f_200 || Global_2425662[iVar0].f_201) || Global_2425662[iVar0].f_202) || NETWORK::_0x21D04D7BC538C146(PLAYER::GET_PLAYER_PED(iParam0))))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	if (((((((((((((((((((((((((iParam0 != func_116() && func_28(iParam0, 1, 1)) && !func_91(iParam0, 1, 1)) && !func_115(iParam0)) && !func_90(iParam0)) && !func_98(iParam0)) && !func_97(iParam0)) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iParam0)) && !NETWORK::IS_PLAYER_IN_CUTSCENE(iParam0)) && !func_89(iParam0)) && !MISC::IS_BIT_SET(Global_2425662[iVar0].f_404, 2)) && !MISC::IS_BIT_SET(Global_2425662[iVar0].f_404, 3)) && !func_94(iParam0, func_96(), 1)) && !func_93(iParam0)) && !func_22(iParam0, 0)) && !MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 14)) && !func_88(iParam0)) && !func_87(iParam0)) && !func_83(iParam0)) && MISC::IS_BIT_SET(Global_1590535[iVar0].f_142, 22)) && !MISC::IS_BIT_SET(Global_2425662[iVar0].f_404, 1)) && !MISC::IS_BIT_SET(Global_2425662[iVar0].f_310.f_1, 31)) && func_82(iParam0) != 136) && !(func_78(iParam0) && func_76(iParam0) == 164)) && !Global_1590535[iVar0].f_749) && !Global_1590535[iVar0].f_748)
	{
		if (iParam1 && func_92(iParam0))
		{
			return 0;
		}
		if (iParam2 && (((Global_2425662[iVar0].f_200 || Global_2425662[iVar0].f_201) || Global_2425662[iVar0].f_202) || NETWORK::_0x21D04D7BC538C146(PLAYER::GET_PLAYER_PED(iParam0))))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (func_77(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_77(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_81(iParam0))
	{
		if (func_79(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_80(iParam0, 9);
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_81(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (Global_1628237[iParam0].f_11 != func_116())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_83(int iParam0)
{
	return func_84(func_86(iParam0), 10);
}

bool func_84(int iParam0, int iParam1)
{
	return func_85(iParam0) == iParam1;
}

int func_85(int iParam0)
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
		
		case 79:
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

int func_86(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

bool func_87(int iParam0)
{
	return func_80(iParam0, 24);
}

bool func_88(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_39.f_18, 6);
}

bool func_89(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1627020[iParam0].f_29, 0);
}

int func_90(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (func_82(iParam0) == 146)
	{
		if (iParam0 == Global_2537071.f_5049)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_116())
	{
		if (!bParam2)
		{
			if (func_95(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_116())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_95(int iParam0, int iParam1)
{
	if (iParam1 != func_116())
	{
		if (iParam0 != func_116())
		{
			if (Global_1628237[iParam0].f_11 != func_116())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_96()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_97(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_98(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_100(int iParam0)
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

int func_101(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_105(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_104(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 != func_116())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_106(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_109(iParam0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_108(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_104(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_116())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_109(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if (func_113(iParam0))
	{
		iVar0 = Global_2425662[iParam0].f_310.f_8;
		if (iVar0 != func_116())
		{
			if (!func_112(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (iParam0 != func_116())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_116())
			{
				return func_100(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_116() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_116()
{
	return -1;
}

void func_117(var uParam0)
{
	if (uParam0->f_6 == -1)
	{
		uParam0->f_6 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "cannon_charge_fire_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

int func_118(var uParam0)
{
	return uParam0->f_20;
}

bool func_119()
{
	return Global_73825;
}

int func_120(var uParam0)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 221;
	iVar3 = 221;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar2 = 241;
		iVar3 = 242;
	}
	switch (func_118(uParam0))
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					if (MISC::IS_BIT_SET(uParam0->f_10, 2))
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			else
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
				CAM::DO_SCREEN_FADE_OUT(250);
				func_7(uParam0, 1);
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (MISC::IS_BIT_SET(uParam0->f_10, 3))
				{
					MISC::CLEAR_BIT(&(uParam0->f_5), 4);
				}
				func_45(uParam0);
				MISC::SET_BIT(&(uParam0->f_5), 14);
				func_147(1, 2);
				func_7(uParam0, 2);
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(uParam0->f_10, 3))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MP_OrbitalCannon", 0, 1);
				uParam0->f_7 = 0;
				MISC::CLEAR_BIT(&(uParam0->f_5), 6);
				MISC::CLEAR_BIT(&(uParam0->f_5), 7);
				MISC::CLEAR_BIT(&(uParam0->f_5), 5);
				HUD::CLEAR_HELP(1);
				MISC::SET_OVERRIDE_WEATHER("Clear");
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::_0x6DDBF9DFFC4AC080(1);
				MISC::SET_BIT(&(uParam0->f_8), 0);
				MISC::SET_BIT(&(uParam0->f_8), 1);
				func_146(uParam0);
				func_53(&(uParam0->f_727), 0, 0);
			}
			else
			{
				GRAPHICS::ANIMPOSTFX_STOP("MP_OrbitalCannon");
				if (MISC::IS_BIT_SET(uParam0->f_8, 1))
				{
					GRAPHICS::_0x6DDBF9DFFC4AC080(0);
					MISC::CLEAR_BIT(&(uParam0->f_8), 1);
				}
				HUD::CLEAR_HELP(1);
				if (MISC::IS_BIT_SET(uParam0->f_8, 0))
				{
					MISC::CLEAR_OVERRIDE_WEATHER();
					MISC::CLEAR_BIT(&(uParam0->f_8), 0);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_4))
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
			}
			if (MISC::IS_BIT_SET(uParam0->f_5, 3))
			{
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
				MISC::CLEAR_BIT(&(uParam0->f_5), 3);
			}
			func_7(uParam0, 3);
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(uParam0->f_10, 3))
			{
				MISC::SET_BIT(&(uParam0->f_10), 0);
				MISC::CLEAR_BIT(&(uParam0->f_5), 4);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_22));
				uParam0->f_736 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
				uParam0->f_733 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
				bVar0 = true;
			}
			else
			{
				if (!uParam0->f_2)
				{
					AUDIO::START_AUDIO_SCENE("dlc_xm_orbital_cannon_camera_active_scene");
				}
				uParam0->f_2 = 1;
				uParam0->f_22 = unk_0x67D02A194A2FC2BD("ORBITAL_CANNON_CAM");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_22))
				{
					Var4 = { func_145() };
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					if (((Var4.f_1 != 0f && Var4.f_1.f_1 != 0f) && Var4.f_1.f_2 != 0f) && Var4 != 0f)
					{
						if (CAM::DOES_CAM_EXIST(uParam0->f_4))
						{
							CAM::DESTROY_CAM(uParam0->f_4, 0);
						}
						MISC::SET_BIT(&(uParam0->f_10), 0);
						MISC::SET_BIT(&(uParam0->f_5), 4);
						uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
						uParam0->f_736 = { Var4.f_1 };
						CAM::SET_CAM_COORD(uParam0->f_4, Var4.f_1);
						CAM::SET_CAM_ROT(uParam0->f_4, Var4.f_4, 2);
						CAM::SET_CAM_FOV(uParam0->f_4, Var4);
						CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						bVar0 = true;
					}
				}
			}
			if (bVar0)
			{
				func_7(uParam0, 7);
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_11) > 200)
			{
				func_7(uParam0, 4);
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_10, 1))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if ((uParam0->f_733 == 0f && uParam0->f_733.f_1 == 0f) && uParam0->f_733.f_2 == 0f)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_736, 300f, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START(uParam0->f_736, uParam0->f_733, 300f, 0);
			}
			MISC::SET_BIT(&(uParam0->f_10), 1);
			STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_736, -90f, 0f, 0f);
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
			MISC::SET_BIT(&(uParam0->f_5), 3);
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			func_7(uParam0, 5);
			break;
		
		case 5:
			if (!func_54(&(uParam0->f_725)))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - uParam0->f_11) > 10000)
				{
					if (MISC::IS_BIT_SET(uParam0->f_10, 1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						MISC::CLEAR_BIT(&(uParam0->f_10), 1);
					}
					func_53(&(uParam0->f_725), 0, 0);
				}
			}
			else if (func_55(&(uParam0->f_725), 2000, 0))
			{
				func_40(&(uParam0->f_725));
				func_7(uParam0, 6);
			}
			break;
		
		case 6:
			MISC::CLEAR_BIT(&(uParam0->f_10), 0);
			MISC::CLEAR_BIT(&(uParam0->f_5), 14);
			uParam0->f_736 = { 0f, 0f, 0f };
			uParam0->f_733 = { 0f, 0f, 0f };
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			if (!MISC::IS_BIT_SET(uParam0->f_10, 3))
			{
				func_144(uParam0);
			}
			func_7(uParam0, 8);
			break;
		
		case 8:
			if (Global_1676371 == 7 || Global_2513560)
			{
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						func_136(1, 0);
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
				else
				{
					func_7(uParam0, 9);
				}
			}
			break;
		
		case 9:
			MISC::CLEAR_BIT(&(uParam0->f_10), 0);
			uParam0->f_736 = { 0f, 0f, 0f };
			uParam0->f_733 = { 0f, 0f, 0f };
			MISC::SET_BIT(&(uParam0->f_5), 13);
			func_7(uParam0, 10);
			break;
		
		case 10:
			if (!MISC::IS_BIT_SET(uParam0->f_10, 3))
			{
				STREAMING::_0x03F1A106BDA7DD3E();
			}
			iVar1 = 1;
			break;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (MISC::IS_BIT_SET(uParam0->f_5, 4) && !MISC::IS_BIT_SET(uParam0->f_5, 15))
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_22))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_9, 6))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_STATE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
				if (func_54(&(uParam0->f_723)))
				{
					if (!func_55(&(uParam0->f_723), 1000, 0))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_9, 5))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							MISC::CLEAR_BIT(&(uParam0->f_9), 2);
							MISC::CLEAR_BIT(&(uParam0->f_9), 3);
							MISC::CLEAR_BIT(&(uParam0->f_9), 4);
							MISC::SET_BIT(&(uParam0->f_9), 5);
						}
					}
					else if (!func_55(&(uParam0->f_723), 2000, 0))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_9, 4))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							MISC::CLEAR_BIT(&(uParam0->f_9), 2);
							MISC::CLEAR_BIT(&(uParam0->f_9), 3);
							MISC::SET_BIT(&(uParam0->f_9), 4);
							MISC::CLEAR_BIT(&(uParam0->f_9), 5);
						}
					}
					else if (!func_55(&(uParam0->f_723), 3000, 0))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_9, 3))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							MISC::CLEAR_BIT(&(uParam0->f_9), 2);
							MISC::SET_BIT(&(uParam0->f_9), 3);
							MISC::CLEAR_BIT(&(uParam0->f_9), 4);
							MISC::CLEAR_BIT(&(uParam0->f_9), 5);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam0->f_9, 2))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						MISC::SET_BIT(&(uParam0->f_9), 2);
						MISC::CLEAR_BIT(&(uParam0->f_9), 3);
						MISC::CLEAR_BIT(&(uParam0->f_9), 4);
						MISC::CLEAR_BIT(&(uParam0->f_9), 5);
					}
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_9, 2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(&(uParam0->f_9), 2);
					MISC::CLEAR_BIT(&(uParam0->f_9), 3);
					MISC::CLEAR_BIT(&(uParam0->f_9), 4);
					MISC::CLEAR_BIT(&(uParam0->f_9), 5);
				}
				if (func_54(&(uParam0->f_727)))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_CHARGING_LEVEL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((IntToFloat(func_135(&(uParam0->f_727), 0, 0)) / 3000f));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					if (MISC::IS_BIT_SET(uParam0->f_9, 0))
					{
						MISC::CLEAR_BIT(&(uParam0->f_9), 0);
					}
					if (MISC::IS_BIT_SET(uParam0->f_9, 1))
					{
						MISC::CLEAR_BIT(&(uParam0->f_9), 1);
					}
				}
				else if (func_118(uParam0) == 10)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_9, 0))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_CHARGING_LEVEL");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						MISC::SET_BIT(&(uParam0->f_9), 0);
						if (MISC::IS_BIT_SET(uParam0->f_9, 1))
						{
							MISC::CLEAR_BIT(&(uParam0->f_9), 1);
						}
					}
				}
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_22, 255, 255, 255, 0, 1);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (MISC::IS_BIT_SET(uParam0->f_5, 13) || PAD::_0x6CD79468A1E595C6(0))
				{
					func_133(&(uParam0->f_23));
					func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, 1), "HUD_INPUT3", &(uParam0->f_23), 0);
					func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, 1), "ORB_CAN_RE", &(uParam0->f_23), 0);
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iVar3, 1), "ORB_CAN_ZOOMO", &(uParam0->f_23), 0);
						func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iVar2, 1), "ORB_CAN_ZOOMI", &(uParam0->f_23), 0);
					}
					else
					{
						func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iVar2, 1), "ORB_CAN_ZOOM", &(uParam0->f_23), 0);
					}
					func_132(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 24, 1), "ORB_CAN_FIRE", &(uParam0->f_23), 0);
					MISC::CLEAR_BIT(&(uParam0->f_5), 13);
				}
				Var11 = { func_131() };
				func_130(&(uParam0->f_23), 1f);
				func_122(&(uParam0->f_21), &Var11, &(uParam0->f_23), func_129(&(uParam0->f_23)));
				func_121(1);
			}
		}
	}
	return iVar1;
}

void func_121(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_122(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_128(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_127(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (MISC::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0].f_54;
						iVar2 = uParam2->f_1[iVar0].f_55;
						iVar3 = uParam2->f_1[iVar0].f_56;
						func_126(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, 1));
						if (iVar3 < 361)
						{
							func_126(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0].f_54;
						uVar5 = uParam2->f_1[iVar0].f_55;
						func_126(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar4, uVar5, 1));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_125(&(uParam2->f_1[iVar0].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_126(&(uParam2->f_1[iVar0]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0].f_16)))
					{
						func_126(&(uParam2->f_1[iVar0].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_125(&(uParam2->f_1[iVar0].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_124(*uParam0, uParam1);
	}
	func_123();
}

void func_123()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_124(var uParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_125(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_126(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_127(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_128(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_129(var uParam0)
{
	return uParam0->f_692;
}

void func_130(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_131()
{
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_132(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_133(var uParam0)
{
	func_134(uParam0);
	uParam0->f_692 = 1;
}

void func_134(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_32), "", 16);
		uParam0->f_1[iVar0].f_36 = 0;
		uParam0->f_1[iVar0].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0].f_38), "", 64);
		uParam0->f_1[iVar0].f_54 = 2;
		uParam0->f_1[iVar0].f_55 = 361;
		uParam0->f_1[iVar0].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

int func_135(var uParam0, bool bParam1, bool bParam2)
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

void func_136(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_141(1, 0, 1);
	}
	else
	{
		func_137(iParam1);
	}
}

void func_137(int iParam0)
{
	func_140();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_139() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_138(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
	}
}

void func_138(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_139()
{
	return Global_1312467.f_20;
}

void func_140()
{
	Global_2462226 = 1;
}

void func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (func_142())
	{
		return;
	}
	if ((func_139() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_138(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_142()
{
	if (func_143())
	{
		return Global_2460590;
	}
	return 0;
}

int func_143()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

void func_144(var uParam0)
{
	if (uParam0->f_14 == -1)
	{
		uParam0->f_14 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_14, "background_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

struct<7> func_145()
{
	Var0.f_1 = { -8.8511f, 6835.003f, 400f };
	Var0.f_4 = { -90f, 0f, 0f };
	Var0 = 100f;
	if (Global_2513561 > -1)
	{
		Var0.f_1 = Global_4456448.f_78242[Global_2513561];
		Var0.f_1.f_1 = Global_4456448.f_78242[Global_2513561].f_1;
	}
	return Var0;
}

void func_146(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		uParam0->f_13 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_13, "cannon_activating_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_147(int iParam0, int iParam1)
{
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
				Global_1661288 = -1f;
				GRAPHICS::SET_SEETHROUGH(false);
				bVar2 = true;
			}
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::SET_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 0);
		}
		else
		{
			if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
			{
				GRAPHICS::SET_NIGHTVISION(false);
				bVar2 = true;
			}
			GRAPHICS::SET_SEETHROUGH(bVar0);
			Global_1661288 = GRAPHICS::_SEETHROUGH_GET_MAX_THICKNESS();
			GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(0.5f);
			MISC::SET_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1661289 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1661289))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
		{
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::CLEAR_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 0);
		}
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661288);
			Global_1661288 = -1f;
			GRAPHICS::SET_SEETHROUGH(bVar0);
			MISC::CLEAR_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1661289 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1661289))
			{
				if (iParam1 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_148(!bVar0);
}

void func_148(bool bParam0)
{
	func_149(304, bParam0, -1, 1);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_151())
	{
		iVar0 = Global_2583656[iParam0][func_150(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, uParam1, iParam3);
		}
	}
}

int func_150(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_151()
{
	return 1;
	return 0;
}

void func_152(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_36(0))
		{
			func_31(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_153()
{
	Global_22211.f_6 = 1;
}

void func_154()
{
	Global_2537071.f_4532 = 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (func_57() || (func_209() && iParam0))
	{
		if (func_207(PLAYER::PLAYER_ID()))
		{
			func_206(0);
		}
		if (((!func_205() && !func_204()) && !func_203()) || func_202())
		{
			if (!func_201(bParam2))
			{
				return 0;
			}
		}
		if (!func_200())
		{
			func_199(0);
		}
		bVar0 = func_198();
		bVar1 = func_197();
		bVar2 = func_196();
		bVar3 = func_195();
		bVar4 = func_194();
		bVar5 = func_193();
		bVar6 = func_192();
		bVar7 = func_191();
		bVar8 = func_190();
		iVar9 = func_188();
		func_169(0);
		func_168();
		if (!bParam1)
		{
			if (bVar0)
			{
				func_167();
			}
			if (bVar1)
			{
				func_166();
			}
			if (bVar2)
			{
				func_165();
			}
			if (bVar3)
			{
				func_164();
			}
			if (bVar4)
			{
				func_163();
			}
			if (bVar5)
			{
				func_162();
			}
			if (bVar6)
			{
				func_161();
			}
			if (bVar7)
			{
				func_160();
			}
			if (bVar8)
			{
				func_159();
			}
			if (iVar9 != func_158())
			{
				func_157(iVar9);
			}
		}
		func_156(0);
		Global_2451426.f_1.f_2802 = 0;
	}
	return 1;
}

void func_156(int iParam0)
{
	Global_2450632.f_788 = iParam0;
}

void func_157(int iParam0)
{
	Global_2450632.f_38 = iParam0;
}

int func_158()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

void func_159()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 6);
}

void func_160()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 3);
}

void func_161()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 1);
}

void func_162()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 30);
}

void func_163()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 29);
}

void func_164()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 9);
}

void func_165()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 5);
}

void func_166()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 26);
}

void func_167()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 21);
}

void func_168()
{
	MISC::SET_BIT(&(Global_2450632.f_2), 12);
}

void func_169(bool bParam0)
{
	if (func_186() && !func_202())
	{
		func_185();
		func_184();
	}
	else
	{
		uVar0 = func_183();
		func_182();
		func_180(1);
		func_179();
		func_178();
		func_177();
		if (uVar0 && !bParam0)
		{
			func_176();
		}
	}
	if (Global_2458936.f_8)
	{
		func_175();
	}
	func_174();
	func_173();
	func_172();
	func_171();
	if (!func_200())
	{
		func_170();
		func_199(0);
	}
	func_184();
	func_156(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::_0xCFEB46DCD7D8D5EB(0);
	}
}

void func_170()
{
	Global_2450632.f_7 = -1;
}

void func_171()
{
	Global_2450632.f_38 = func_158();
}

void func_172()
{
	Global_2450632.f_635 = 0;
}

void func_173()
{
	Global_2450632.f_617 = 0;
}

void func_174()
{
	MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18), 15);
}

void func_175()
{
	Global_2458936.f_8 = 0;
	Global_2458936.f_7 = 0;
}

void func_176()
{
	MISC::SET_BIT(&(Global_2450632.f_3), 2);
}

void func_177()
{
	MISC::CLEAR_BIT(&Global_2450632, 7);
}

void func_178()
{
	MISC::CLEAR_BIT(&Global_2450632, 6);
}

void func_179()
{
	Global_2450632 = 0;
	Global_2450632.f_2 = 0;
	Global_2450632.f_3 = 0;
}

void func_180(bool bParam0)
{
	Global_2451426.f_1.f_2798 = 0;
	Global_2451426.f_1.f_2799 = 0;
	Global_2451426.f_1.f_2824 = 0;
	Global_2451426.f_1.f_2805 = 0;
	Global_2451426.f_1.f_2806 = 0;
	Global_2451426.f_1.f_2809 = 0;
	Global_2451426.f_1.f_2810 = 0;
	Global_2451426.f_1.f_2808 = -1;
	Global_2451426.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2451426.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2451426.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2451426.f_1.f_2822 = -1;
		Global_2451426.f_1.f_2823 = -1;
	}
	Global_2451426.f_1.f_2844 = 0;
	func_181();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2451426.f_1.f_845[iVar58] = { Var1 };
		iVar58++;
	}
	Global_2447238.f_33 = -1;
	Global_2447238.f_34 = -1;
}

void func_181()
{
	Global_2447238.f_32 = 0;
}

void func_182()
{
	iVar13 = 0;
	while (iVar13 < 32)
	{
		Global_2448385[iVar13] = { Var0 };
		StringCopy(&(Global_2448385[iVar13].f_13), "", 64);
		StringCopy(&(Global_2448385[iVar13].f_29), "", 16);
		Global_2448385[iVar13].f_33 = 0;
		Global_2448385[iVar13].f_34 = 0;
		Global_2448385[iVar13].f_35 = 0;
		iVar13++;
	}
	Global_2448385.f_1185 = 0;
	Global_2448385.f_1186 = 0;
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 2);
}

void func_184()
{
	MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18), 5);
}

void func_185()
{
	MISC::CLEAR_BIT(&(Global_2450632.f_2), 11);
}

int func_186()
{
	if (((func_205() || func_204()) || func_203()) || func_187())
	{
		return 1;
	}
	return 0;
}

bool func_187()
{
	return MISC::IS_BIT_SET(Global_2450632, 1);
}

int func_188()
{
	if (func_189())
	{
		return 1;
	}
	return Global_2450632.f_38;
}

bool func_189()
{
	return Global_1312837 == 10;
}

bool func_190()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 6);
}

bool func_191()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 3);
}

bool func_192()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 1);
}

bool func_193()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 30);
}

bool func_194()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 29);
}

bool func_195()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 9);
}

bool func_196()
{
	return MISC::IS_BIT_SET(Global_2450632.f_3, 5);
}

bool func_197()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 26);
}

bool func_198()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 21);
}

void func_199(int iParam0)
{
	if (iParam0 == -1)
	{
		Global_2450632.f_789++;
	}
	else
	{
		Global_2450632.f_789 = iParam0;
	}
}

bool func_200()
{
	return Global_2450632.f_637;
}

int func_201(bool bParam0)
{
	if ((((NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_TRANSITION_STARTED()) || NETWORK::NETWORK_IS_TRANSITION_BUSY()) || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()) || NETWORK::_0xC571D0E77D8BBC29())
	{
		if (bParam0)
		{
			NETWORK::NETWORK_BAIL_TRANSITION(43, 0, 0);
			return 1;
		}
		if (NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING())
		{
			return 0;
		}
		else if (NETWORK::NETWORK_IS_TRANSITION_STARTED())
		{
			if (Global_2451426.f_1.f_2802 == 0)
			{
				NETWORK::NETWORK_LEAVE_TRANSITION();
				Global_2451426.f_1.f_2802 = 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return 1;
}

bool func_202()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 27);
}

bool func_203()
{
	return MISC::IS_BIT_SET(Global_2450632, 2);
}

bool func_204()
{
	return MISC::IS_BIT_SET(Global_2450632, 20);
}

bool func_205()
{
	return Global_2450632.f_598;
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_13.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_13.f_1), 0);
	}
}

bool func_207(int iParam0)
{
	return func_208(iParam0);
}

bool func_208(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

var func_209()
{
	return Global_2450632.f_656;
}

void func_210()
{
	Global_2439138.f_1156.f_10 = 1;
}

bool func_211()
{
	return Global_2439138.f_1156.f_10;
}

void func_212()
{
	Global_2439138.f_1156.f_9 = 1;
}

bool func_213()
{
	return Global_2439138.f_1156.f_9;
}

void func_214()
{
	Global_2548146.f_258 = 1;
}

int func_215(var uParam0)
{
	iVar0 = 0;
	if (((((func_28(PLAYER::PLAYER_ID(), 1, 1) && !MISC::IS_BIT_SET(Global_2439138.f_1199.f_4, 0)) && !MISC::IS_BIT_SET(Global_2359302, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_233()) && !func_232())
	{
		if ((func_231(uParam0) && func_225(uParam0)) && func_222(uParam0))
		{
			iVar0 = 1;
		}
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_8(&(uParam0->f_18));
		uParam0->f_18 = -1;
	}
	if (iVar0 && !PAD::IS_CONTROL_PRESSED(0, 19))
	{
		if (uParam0->f_18 == -1)
		{
			func_221(&(uParam0->f_18), 4, "ORB_CAN_START", 0, 0, 0, 0);
		}
		else if (func_220(uParam0->f_18, 1))
		{
			func_217();
			func_216();
			func_8(&(uParam0->f_18));
			if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_413, 1))
			{
				MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_413), 1);
			}
			return 1;
		}
	}
	else
	{
		func_8(&(uParam0->f_18));
	}
	return 0;
}

void func_216()
{
	if (Global_2439138.f_2723[0].f_2 != 0)
	{
		Global_2439138.f_2723[0].f_2 = 5;
	}
}

void func_217()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_218(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

void func_218(var uParam0, int iParam1)
{
	func_219(uParam0, iParam1);
}

void func_219(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_220(int iParam0, bool bParam1)
{
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_36(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

void func_221(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_8(uParam0);
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
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

int func_222(var uParam0)
{
	fVar0 = 0f;
	Var1 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, 0f };
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 1.5f;
			Var1 = { 252.0321f, 6126.419f, -160.3706f };
			Var4 = { 253.1175f, 6126.419f, -158.369f };
			break;
		
		case 1:
			fVar0 = 1.5f;
			Var1 = { 254.3575f, 6126.419f, -160.3894f };
			Var4 = { 255.5235f, 6126.419f, -158.3873f };
			break;
		
		case 2:
			fVar0 = 1.5f;
			Var1 = { 260.6575f, 6126.419f, -160.3736f };
			Var4 = { 262.075f, 6126.419f, -158.3827f };
			break;
		
		case 3:
			fVar0 = 1.5f;
			Var1 = { 263.2076f, 6126.419f, -160.3984f };
			Var4 = { 264.5398f, 6126.419f, -158.3723f };
			break;
	}
	Var8 = { func_224(&uVar7) };
	iVar11 = 0;
	while (iVar11 < 32)
	{
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar11);
		if ((iVar12 != func_116() && iVar12 != PLAYER::PLAYER_ID()) && func_28(iVar12, 1, 1))
		{
			if (func_223(Var8))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar12), Var1, Var4, fVar0, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar12), Var8, 1f, 1f, 1f, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar11++;
	}
	return 1;
}

int func_223(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_224(var uParam0)
{
	if (Global_2513561 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (MISC::IS_BIT_SET(Global_2513559, iVar0))
			{
				if (Global_4456448.f_78242[iVar0].f_177 > -1 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_4456448.f_78242[iVar0], 1.5f, 1.5f, 1.5f, 0, 1, 0))
				{
					*uParam0 = Global_4456448.f_78242[iVar0].f_177;
					Global_2513561 = iVar0;
					return Global_4456448.f_78242[iVar0];
				}
			}
			iVar0++;
		}
	}
	else if (MISC::IS_BIT_SET(Global_2513559, Global_2513561))
	{
		if (Global_4456448.f_78242[Global_2513561].f_177 > -1 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_4456448.f_78242[Global_2513561], 1.5f, 1.5f, 1.5f, 0, 1, 0))
		{
			*uParam0 = Global_4456448.f_78242[Global_2513561].f_177;
			return Global_4456448.f_78242[Global_2513561];
		}
	}
	Global_2513561 = -1;
	*uParam0 = -1;
	return 0f, 0f, 0f;
}

int func_225(var uParam0)
{
	fVar0 = 0f;
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 0f;
			break;
		
		case 1:
			fVar0 = 0f;
			break;
		
		case 2:
			fVar0 = 0f;
			break;
		
		case 3:
			fVar0 = 0f;
			break;
	}
	if (!func_223(func_224(&iVar1)))
	{
		if (func_227(PLAYER::PLAYER_PED_ID(), func_224(&iVar1), 45f))
		{
			if (iVar1 > -1)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_226(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar0, 45f))
	{
		return 1;
	}
	return 0;
}

int func_226(float fParam0, float fParam1, float fParam2)
{
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

bool func_227(int iParam0, struct<3> Param1, float fParam4)
{
	return func_228(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_228(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_229(func_230(Var0), func_230(Param4 - Param0));
	return MISC::ACOS(uVar3) <= fParam7;
}

float func_229(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_230(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

int func_231(var uParam0)
{
	if (!func_223(func_224(&iVar0)))
	{
		if (iVar0 > -1)
		{
			uParam0->f_17 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_232()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_233()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_235(0, -1, 0);
}

int func_235(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_4())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_237())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_236(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_237()
{
	return Global_2450632.f_593;
}

