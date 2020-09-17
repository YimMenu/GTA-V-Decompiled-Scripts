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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	Local_119 = { 1140.746f, 258.6841f, -52.4408f };
	iLocal_126 = -1;
	iLocal_212 = -1;
	iLocal_1649 = -1;
	iLocal_1650 = -1;
	iLocal_1696 = -1;
	iLocal_2124 = -1;
	iLocal_2125 = -1;
	iLocal_2126 = -1;
	iLocal_2127 = -1;
	iLocal_2128 = 1;
	iLocal_2130 = -1;
	func_366();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_362();
	}
	else
	{
		func_360();
	}
	func_359(&Local_1348, &Local_213);
	while (true)
	{
		func_358();
		func_343();
		func_15();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_2741.f_659, 0))
	{
		func_13();
		GAMEPLAY::SET_BIT(&(Local_2741.f_659), 0);
	}
	func_2();
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
			if (func_12(iVar4, 0, 1))
			{
				if (Local_3401[iVar0] >= 0)
				{
					GAMEPLAY::SET_BIT(&(uVar1[func_11(Local_3401[iVar0])]), func_10(Local_3401[iVar0]));
					func_4(iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		if (!GAMEPLAY::IS_BIT_SET(uVar1[func_11(iVar0)], func_10(iVar0)))
		{
			if (Local_2741.f_598[iVar0] >= 0)
			{
				Local_2741.f_598[iVar0] = -1;
			}
		}
		else if (Local_2741.f_598[iVar0] >= 0)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(Local_2741.f_598[iVar0]);
			if (!func_12(iVar4, 0, 1) && GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iVar0)], func_10(iVar0)))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				GAMEPLAY::CLEAR_BIT(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
				func_3(&(Local_2741.f_489[iVar0]));
				Local_2741.f_598[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0)
{
	iVar0 = Local_3401[iParam0];
	if (Local_2741.f_598[iVar0] == -1)
	{
		Local_2741.f_598[iVar0] = iParam0;
	}
	else if (Local_2741.f_598[iVar0] == iParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iVar0)], func_10(iVar0)))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 0) && !GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 2))
			{
				GAMEPLAY::SET_BIT(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				func_9(&(Local_2741.f_489[iVar0]), 0, 0);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 1) || !func_12(PLAYER::INT_TO_PLAYERINDEX(iParam0), 0, 1))
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					Local_2741.f_217[iVar0][iVar1] = Local_3401[iParam0].f_5[iVar1];
					Local_2741[iVar0][iVar1] = Local_3401[iParam0].f_1[iVar1];
					Local_2741.f_434[iVar0] = Local_3401[iParam0].f_9;
					GAMEPLAY::SET_BIT(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
					iVar1++;
				}
			}
			if (((GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 1) || !func_12(PLAYER::INT_TO_PLAYERINDEX(iParam0), 0, 1)) || GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 3)) && ((GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 2) || GAMEPLAY::IS_BIT_SET(Local_3401[iParam0].f_10, 3)) || func_5(&(Local_2741.f_489[iVar0]), func_7(iVar0) + 10000, 0)))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_2741.f_653[func_11(iVar0)]), func_10(iVar0));
				GAMEPLAY::CLEAR_BIT(&(Local_2741.f_656[func_11(iVar0)]), func_10(iVar0));
				func_3(&(Local_2741.f_489[iVar0]));
			}
		}
	}
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, bool bParam1, bool bParam2)
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
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_7(int iParam0)
{
	if (func_8(iParam0, &Local_213))
	{
		if ((Local_1348.f_1[0][Local_2741[iParam0][0]] == 7 && Local_1348.f_1[1][Local_2741[iParam0][1]] == 7) && Local_1348.f_1[2][Local_2741[iParam0][2]] == 7)
		{
			return 11000;
		}
	}
	return 5500;
}

int func_8(int iParam0, var uParam1)
{
	switch (uParam1[iParam0]->f_17)
	{
		case 4:
			if (Global_262145.f_26246)
			{
				return 0;
			}
			return 1;
			break;
		
		case 8:
			if (Global_262145.f_26247)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_10(int iParam0)
{
	return (iParam0 - func_11(iParam0) * 32);
}

int func_11(int iParam0)
{
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	Var2 = 3;
	Var2.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_14(iVar0, &Var2, &Local_1348, &Local_213);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Local_2741.f_217[iVar0][iVar1] = Var2.f_4[iVar1];
			Local_2741[iVar0][iVar1] = Var2[iVar1];
			Local_2741.f_434[iVar0] = Var2.f_8;
			iVar1++;
		}
		iVar0++;
	}
}

void func_14(int iParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = unk_0xF2D49816A804D134(0, *uParam2);
		(*uParam1)[iVar0] = iVar2;
		if (uParam2->f_1[iVar0][iVar2] == 0)
		{
			iVar3 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, uParam2->f_225);
			uParam1->f_4[iVar0] = (IntToFloat(iVar3) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0][iVar1] == uParam2->f_1[iVar0][iVar2])
				{
					iVar4++;
				}
				iVar1++;
			}
			iVar3 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar4);
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0][iVar1] == uParam2->f_1[iVar0][iVar2])
				{
					if (iVar4 == iVar3)
					{
						uParam1->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = uParam2->f_225;
					}
					iVar4++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (func_8(iParam0, uParam3))
	{
		if ((uParam2->f_1[0][(*uParam1)[0]] == 7 && uParam2->f_1[1][(*uParam1)[1]] == 7) && uParam2->f_1[2][(*uParam1)[2]] == 7)
		{
			iVar2 = unk_0xF2D49816A804D134(0, 12);
			uParam1->f_8 = iVar2;
		}
	}
}

void func_15()
{
	func_330();
	if (iLocal_1637 > 0)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 199);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 199);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 210, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 210);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 210);
	}
	if (func_329(&uLocal_1700))
	{
		if (!func_5(&uLocal_1700, 5000, 1))
		{
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.2f);
		}
	}
	switch (iLocal_1637)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(uLocal_1638, 18))
			{
				STREAMING::REMOVE_ANIM_DICT(func_328());
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 18);
			}
			if (func_311())
			{
				iLocal_1640 = 0;
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 21);
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 22);
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 30);
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 31);
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 21);
				GAMEPLAY::CLEAR_BIT(&uLocal_1638, 22);
				func_310(1);
			}
			break;
		
		case 1:
			func_309(iLocal_2127);
			Local_2104 = unk_0x67D02A194A2FC2BD("SLOT_MACHINE");
			break;
		
		case 3:
			func_307();
			break;
		
		case 2:
			if (!func_306())
			{
				func_310(0);
			}
			break;
		
		case 4:
			func_3(&Local_2085);
			iLocal_2100 = 0;
			iLocal_2101 = 0;
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_299(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 7);
			if (func_281())
			{
				func_274(0);
				func_310(5);
			}
			break;
		
		case 5:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::START_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			unk_0x79C0E43EB9B944E2(518572876);
			func_229();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_299(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			func_45();
			break;
		
		case 6:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_299(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 7);
				func_34();
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				if (func_33() < 0.6f)
				{
					unk_0x79C0E43EB9B944E2(518572876);
				}
			}
			Var0 = { CONTROLS::GET_CONTROL_NORMAL(2, 218), CONTROLS::GET_CONTROL_NORMAL(2, 219), 0f };
			Var3 = { CONTROLS::GET_CONTROL_NORMAL(2, 220), CONTROLS::GET_CONTROL_NORMAL(2, 221), 0f };
			if ((func_33() > 0.99f || func_33() < 0f) || ((SYSTEM::VMAG(Var0) >= 0.24f || SYSTEM::VMAG(Var3) >= 0.24f) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2115798116)))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_32();
				func_310(0);
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_1638, 18))
				{
					STREAMING::REMOVE_ANIM_DICT(func_328());
					GAMEPLAY::CLEAR_BIT(&uLocal_1638, 18);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_9(&uLocal_1700, 1, 0);
				if (GAMEPLAY::IS_BIT_SET(uLocal_1638, 2))
				{
					func_16(0);
					GAMEPLAY::CLEAR_BIT(&uLocal_1638, 2);
				}
			}
			break;
	}
}

void func_16(int iParam0)
{
	Global_968398 = iParam0;
}

void func_17(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_31())
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
		if (!func_29())
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
				else if (bVar14 || (!func_26(PLAYER::PLAYER_ID(), 0) && !func_25()))
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
					func_22(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_21(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_20();
					func_19();
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
				if (!func_21(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_18(Global_4456448.f_232883))
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
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
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

bool func_18(int iParam0)
{
	return iParam0 == 17;
}

void func_19()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_20()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_21(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_22(int iParam0, int iParam1, int iParam2)
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
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
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
				func_24();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_26(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_23(-2008016205, iParam0);
	}
}

void func_23(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_24()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_25()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_26(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()
{
	return Global_1312745;
}

int func_29()
{
	if (func_30() == 0)
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	return Global_1312467.f_18;
}

int func_31()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_2104))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_2104);
	}
	Local_2104.f_1 = -1;
	if (iLocal_2126 >= 0)
	{
		StringCopy(&cVar0, "machine_0", 24);
		StringIntConCat(&cVar0, Local_213[iLocal_2126].f_17, 24);
		StringConCat(&cVar0, "a", 24);
		if (UI::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			UI::RELEASE_NAMED_RENDERTARGET(&cVar0);
		}
	}
	iLocal_2126 = -1;
}

float func_33()
{
	uVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1641);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0);
	}
	return -1f;
}

void func_34()
{
	if (Global_1696071 != -1)
	{
		iVar0 = (NETWORK::_GET_POSIX_TIME() - Global_1696054);
		iVar1 = (NETWORK::_GET_POSIX_TIME() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_38(iVar0);
		}
		else
		{
			func_38(iVar1);
		}
		func_37();
		func_35();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_35()
{
	func_36(1599929969, NETWORK::_GET_POSIX_TIME());
}

void func_36(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

void func_37()
{
	func_36(575353331, NETWORK::_GET_POSIX_TIME());
}

void func_38(int iParam0)
{
	iVar0 = func_44();
	Global_1696063 = (Global_1696063 + iParam0);
	func_39(iVar0, iParam0);
	func_35();
}

void func_39(int iParam0, int iParam1)
{
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_43((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_42(iVar14);
		iVar0++;
	}
	iVar15 = func_41(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_40(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_43((iVar13 + iVar0));
		func_36(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET(iParam3, iVar6))
			{
				GAMEPLAY::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_41(var uParam0, int iParam1, int iParam2)
{
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				GAMEPLAY::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_42(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_43(int iParam0)
{
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

int func_44()
{
	return func_42(92143537);
}

void func_45()
{
	bVar0 = true;
	func_228();
	func_227();
	if ((((((func_226() || func_225()) || NETWORK::_0x2EAC52B4019E2782()) || UI::_0x2F057596F2BD0061()) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_224(1)) || UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		bVar0 = false;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) && !GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2))
	{
		if (!func_223())
		{
			func_222(1);
			GAMEPLAY::SET_BIT(&uLocal_1638, 13);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_1638, 13))
	{
		if (func_223())
		{
			func_222(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 13);
	}
	if (bVar0)
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(0, 0) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 0))
		{
			iLocal_1696++;
			if (iLocal_1696 > 1)
			{
				iLocal_1696 = 0;
			}
			func_220(iLocal_1696);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21) || GAMEPLAY::IS_BIT_SET(iLocal_1638, 22))
		{
			if (((CONTROLS::IS_CONTROL_JUST_RELEASED(0, 189) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 189)) || CONTROLS::IS_CONTROL_JUST_RELEASED(0, 190)) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 190))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21))
				{
					GAMEPLAY::SET_BIT(&iLocal_1638, 22);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 21);
				}
				else if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 22))
				{
					GAMEPLAY::SET_BIT(&iLocal_1638, 21);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 22);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			}
			if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 21);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 22);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			}
		}
		else if (CONTROLS::IS_CONTROL_JUST_RELEASED(0, 210) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 210))
		{
			GAMEPLAY::SET_BIT(&iLocal_1638, 21);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			return;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1639, 2))
	{
		if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1639, 2);
		}
	}
	if (Global_262145.f_26043)
	{
		if (!func_329(&Local_2085))
		{
			func_6(&Local_2085, 1, 0);
		}
		else if (func_5(&Local_2085, 120000, 1))
		{
			func_219(1);
		}
	}
	if (!iLocal_2101)
	{
		uLocal_2103 = NETWORK::GET_NETWORK_TIME();
		iLocal_2101 = 1;
	}
	if (!iLocal_2100)
	{
		uLocal_2102 = NETWORK::GET_NETWORK_TIME();
		iLocal_2100 = 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 3))
	{
		if (iLocal_1642 == 4 || iLocal_1642 == 10)
		{
			if (!func_199(iLocal_2125))
			{
				func_196(27);
				return;
			}
		}
		if ((((bVar0 && (!GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) || GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2))) && !GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 0)) && GAMEPLAY::IS_BIT_SET(iLocal_1638, 0)) && !(GAMEPLAY::IS_BIT_SET(iLocal_1638, 21) || GAMEPLAY::IS_BIT_SET(iLocal_1638, 22)))
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 208))
			{
				if (func_195())
				{
					if (iLocal_1642 == 4 || iLocal_1642 == 10)
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (func_191() == 2)
							{
								func_190("CAS_MG_CTIME", -1);
							}
							else
							{
								func_190("CAS_MG_CBAN", -1);
							}
							GAMEPLAY::SET_BIT(&iLocal_1638, 6);
						}
						func_196(27);
					}
				}
				else if (func_189() >= (Local_213[iLocal_2125].f_16 * iLocal_2128))
				{
					if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
					{
						GAMEPLAY::SET_BIT(&iLocal_1638, 30);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 5);
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 208))
						{
							func_188();
						}
						else
						{
							func_187();
						}
						func_186();
						GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
						GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
						GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
						GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 3);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 24);
						GAMEPLAY::SET_BIT(&iLocal_1638, 3);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					}
				}
				else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_190("SLOTS_NOMON", -1);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 3))
			{
				if ((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 27))
					{
						GAMEPLAY::SET_BIT(&iLocal_1638, 30);
						func_178(1, -1, -1, -1);
						iLocal_2128++;
						if (iLocal_2128 > 5)
						{
							iLocal_2128 = 1;
						}
						func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
						if ((iLocal_1642 == 4 || iLocal_1642 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_176(0);
						}
						func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 5);
						func_178(1, -1, -1, -1);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					}
					else if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 27);
					}
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 204) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 28))
					{
						GAMEPLAY::SET_BIT(&iLocal_1638, 30);
						func_178(1, -1, -1, -1);
						iLocal_2128 = 5;
						iVar8 = func_189();
						if (iVar8 < (Local_213[iLocal_2125].f_16 * iLocal_2128))
						{
							iLocal_2128 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / Local_213[iLocal_2125].f_16)));
						}
						if ((iLocal_1642 == 4 || iLocal_1642 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_176(1);
						}
						func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 6);
						func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					}
					else if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 28);
					}
				}
				if (iLocal_1642 == 4 || iLocal_1642 == 10)
				{
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
					{
						func_196(27);
					}
				}
			}
		}
	}
	else
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 4))
		{
			if (func_171((Local_213[iLocal_2125].f_16 * iLocal_2128), &iLocal_2740, 0, 0))
			{
				if (iLocal_2740 == 2)
				{
					GAMEPLAY::SET_BIT(&iLocal_1638, 4);
					Local_2085.f_5 = (Local_2085.f_5 + (Local_213[iLocal_2125].f_16 * iLocal_2128));
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 3);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 24);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 4);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 5);
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
					GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 3);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					GAMEPLAY::SET_BIT(&iLocal_1639, 2);
					if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_190("SLOTS_FAILTR", -1);
					}
					func_168(10);
				}
				iLocal_2740 = 0;
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 5))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 3))
			{
				if (((iLocal_1642 == 8 || iLocal_1642 == 14) || iLocal_1642 == 9) || iLocal_1642 == 15)
				{
					if (func_33() > 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2044168827))
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 0))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
						}
						GAMEPLAY::SET_BIT(&iLocal_1638, 5);
						GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
					}
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 0))
					{
						func_167(0, 0);
						func_164(1, -1);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					}
					GAMEPLAY::SET_BIT(&iLocal_1638, 5);
					GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
				}
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 24))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)))
			{
				func_14(iLocal_2125, &uLocal_2091, &Local_1348, &Local_213);
				GAMEPLAY::SET_BIT(&iLocal_1638, 24);
			}
			else if (Local_2741.f_598[iLocal_2125] != PLAYER::PLAYER_ID())
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 3);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 24);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 4);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 5);
				GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
				GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
				GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
				GAMEPLAY::SET_BIT(&iLocal_1639, 2);
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_190("SLOTS_FAILTR", -1);
				}
				func_168(10);
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 1))
			{
				Local_213[iLocal_2125] = func_162(iLocal_2125, Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]], 0);
				Local_213[iLocal_2125].f_1 = func_160(iLocal_2125, Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]], uLocal_2091.f_8);
				if (Local_213[iLocal_2125] > 0)
				{
					if (func_122(Local_213[iLocal_2125], &iLocal_2740, 0))
					{
						if (Local_213[iLocal_2125].f_1 > 0)
						{
							func_68(Local_213[iLocal_2125].f_1);
						}
						iVar7 = 0;
						while (iVar7 < 3)
						{
							Local_3401[PLAYER::PLAYER_ID()].f_5[iVar7] = uLocal_2091.f_4[iVar7];
							Local_3401[PLAYER::PLAYER_ID()].f_1[iVar7] = uLocal_2091[iVar7];
							iVar7++;
						}
						Local_3401[PLAYER::PLAYER_ID()].f_9 = uLocal_2091.f_8;
						func_58();
						GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
						iLocal_2740 = 0;
					}
				}
				else
				{
					iVar7 = 0;
					while (iVar7 < 3)
					{
						Local_3401[PLAYER::PLAYER_ID()].f_5[iVar7] = uLocal_2091.f_4[iVar7];
						Local_3401[PLAYER::PLAYER_ID()].f_1[iVar7] = uLocal_2091[iVar7];
						iVar7++;
					}
					Local_3401[PLAYER::PLAYER_ID()].f_9 = uLocal_2091.f_8;
					GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
					func_58();
					func_53((Local_213[iLocal_2125].f_16 * iLocal_2128));
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iLocal_2125)], func_10(iLocal_2125)) || GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2))
			{
				if (Local_213[iLocal_2125] > 0)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 16))
					{
						func_168(22);
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 14))
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 29))
						{
							func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 4);
						}
						else
						{
							func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 3);
						}
						func_168(19);
					}
					else
					{
						func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 2);
						func_168(18);
					}
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 1) };
					func_50(&Var1);
					iVar9 = func_48(Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]]);
					if (iVar9 == 6)
					{
						func_47(Local_213[iLocal_2125].f_17, Local_213[iLocal_2125]);
					}
					func_178(2, iVar9, Local_213[iLocal_2125], Local_213[iLocal_2125].f_1);
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 15))
					{
						func_168(24);
					}
					else
					{
						func_168(23);
					}
					func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 1);
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 0) };
					func_50(&Var1);
				}
				func_46(Local_213[iLocal_2125]);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 3);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 4);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 5);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 24);
			}
		}
	}
}

void func_46(int iParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Local_2104, "SET_LAST_WIN");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 4);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 5);
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 6);
			break;
		
		case 4:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 7);
			break;
		
		case 5:
			if (iParam1 >= 1000000)
			{
				GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 3);
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 10);
			}
			break;
		
		case 6:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 8);
			break;
		
		case 7:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 2);
			break;
		
		case 8:
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 9);
			break;
	}
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == iParam1 && iParam1 == iParam2)
	{
		return func_49(iParam0, 3);
	}
	else
	{
		if (iParam0 == 7)
		{
			iVar0++;
		}
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			return func_49(7, iVar0);
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
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
		
		case 7:
			if (iParam1 == 3)
			{
				return 7;
			}
			else if (iParam1 == 2)
			{
				return 8;
			}
			else if (iParam1 == 1)
			{
				return 9;
			}
			break;
	}
	return 0;
}

void func_50(var uParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Local_2104, "SET_MESSAGE");
	func_51(uParam0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_51(var uParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

struct<6> func_52(int iParam0, bool bParam1)
{
	StringCopy(&Var0, "SLOTS_MES", 24);
	iVar6 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 17);
	if (bParam1)
	{
		StringConCat(&Var0, "P", 24);
	}
	else
	{
		StringConCat(&Var0, "N", 24);
	}
	StringIntConCat(&Var0, iParam0, 24);
	if (iVar6 < 10)
	{
		StringConCat(&Var0, "0", 24);
		StringIntConCat(&Var0, iVar6, 24);
	}
	else
	{
		StringIntConCat(&Var0, iVar6, 24);
	}
	return Var0;
}

void func_53(int iParam0)
{
	iVar0 = func_57();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_56();
	if (iVar0 == 0)
	{
		func_55();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_54();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_36(-1274895349, Global_262145.f_26398);
		func_54();
		Global_2460613 = 1;
	}
	else
	{
		func_36(-1274895349, (iVar2 - iParam0));
	}
}

void func_54()
{
	func_55();
}

void func_55()
{
	func_36(2026157635, NETWORK::_GET_POSIX_TIME());
}

int func_56()
{
	return func_42(-1274895349);
}

int func_57()
{
	return func_42(2026157635);
}

void func_58()
{
	if (Global_262145.f_26043)
	{
		if (Local_213[iLocal_2125] > 0)
		{
			Local_2085.f_3++;
		}
		else
		{
			Local_2085.f_4++;
		}
		Local_2085.f_2 = (Local_2085.f_2 + (Local_213[iLocal_2125] - (iLocal_2128 * Local_213[iLocal_2125].f_16)));
	}
	if (Global_262145.f_26037)
	{
		Var0 = -1867894674;
		Var0.f_1 = -1125105727;
		Var0.f_2 = iLocal_2125;
		if (func_195())
		{
			switch (func_191())
			{
				case 0:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (Local_213[iLocal_2125] > 0)
		{
			Var0.f_4 = -562306862;
		}
		else
		{
			Var0.f_4 = -1851302466;
		}
		Var0.f_6 = (Local_213[iLocal_2125] - (iLocal_2128 * Local_213[iLocal_2125].f_16));
		Var0.f_7 = func_189();
		Var0.f_10 = (GAMEPLAY::IS_BIT_SET(iLocal_1638, 20) || GAMEPLAY::IS_BIT_SET(iLocal_1639, 1));
		Var0.f_11 = func_67(PLAYER::PLAYER_ID());
		Var0.f_12 = (iLocal_2128 * Local_213[iLocal_2125].f_16);
		Var0.f_14 = Local_213[iLocal_2125];
		if (iLocal_2128 == 5)
		{
			Var0.f_5 = 1;
		}
		else
		{
			Var0.f_5 = 0;
		}
		Var0.f_15 = Local_213[iLocal_2125] > 0;
		Var0.f_17 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_2102, NETWORK::GET_NETWORK_TIME()));
		Var0.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_66())
		{
			Var0.f_19 = unk_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		}
		Var0.f_21 = Local_213[iLocal_2125].f_17;
		if (func_67(PLAYER::PLAYER_ID()))
		{
			Var0.f_20 = 1983458449;
		}
		else if (func_65())
		{
			Var0.f_20 = 1334658487;
		}
		else if (func_59())
		{
			Var0.f_20 = 980726932;
		}
		else
		{
			Var0.f_20 = 939907746;
		}
		iLocal_2100 = 0;
		unk_0xEF5EC67D392B830A(&Var0);
	}
}

int func_59()
{
	if (func_63(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_62();
		if (iVar0 == func_61())
		{
			return 0;
		}
		else
		{
			return func_60(iVar0);
		}
	}
	return 0;
}

bool func_60(int iParam0)
{
	if (iParam0 == func_61())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 18);
}

int func_61()
{
	return -1;
}

int func_62()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_63(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_64(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_61();
}

int func_64(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (Global_1628237[iParam0].f_11 != func_61())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_65()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_369.f_1, 18);
}

int func_66()
{
	return -1;
}

int func_67(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (Local_213[iLocal_2125].f_17 == 8)
	{
		if (iParam0 == 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -1813897027, 25, 0, 0);
		}
		else
		{
			func_121(iParam0, &uVar0, &uVar1);
			unk_0x2472622CE1F2D45F(PLAYER::PLAYER_PED_ID(), uVar0, uVar1);
		}
	}
	else if (Local_213[iLocal_2125].f_17 == 4)
	{
		iLocal_212 = -1;
		iVar184 = 0;
		while (iVar184 < 36)
		{
			func_118(iVar184, &(Var2[iVar183]));
			if (Var2[iVar183].f_7 == iParam0)
			{
				if (!func_115(Var2[iVar183], -1, -1))
				{
					iVar183++;
				}
			}
			iVar184++;
		}
		if (iVar183 > 0)
		{
			iVar185 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar183);
			func_114(Var2[iVar185], 1, -1, 1);
			iLocal_212 = Var2[iVar185].f_8;
		}
		else
		{
			func_69(0, "SLOT MACHINE RP", -1827353931, 1223799452, Global_262145.f_27109, 1, -1, 0);
		}
	}
	GAMEPLAY::SET_BIT(&iLocal_1638, 16);
	return 1;
}

var func_69(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_70(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_113(PLAYER::PLAYER_ID()) || func_112(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_109() || func_105(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_104(uParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_90(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_79((func_89(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_90(1165, iVar1, -1);
				}
				func_73(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_71((func_72(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_71((func_72(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_71(int iParam0)
{
	if (func_103())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_36(-1804740956, iParam0);
	}
}

int func_72(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_42(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_42(-1804740956);
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	Var0 = { func_78(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_76(func_77(&Var0));
			if (iVar13 == 0)
			{
				func_75(&Global_1387915, iParam0);
				func_74(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_75(&Global_1387916, iParam0);
				func_74(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_75(&Global_1387917, iParam0);
				func_74(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_75(&Global_1387918, iParam0);
				func_74(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_75(&Global_1387919, iParam0);
				func_74(1894078811, Global_1387919);
			}
		}
	}
}

void func_74(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_76(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_77(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_78(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_88(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_88(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_87(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_85(iParam0, 1);
		}
		func_84(639, iParam0, -1, 1);
		func_83(640, func_85(iParam0, 1), -1, 1, 0);
		Global_1388060[func_88(-1)] = iParam0;
		func_80(-1109644434, 7, 0);
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	if (func_82(iParam1, iParam2))
	{
		iVar0 = func_81();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_81()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_82(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_88(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_88(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_88(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_88(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_88(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_88(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_88(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_88(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_88(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_88(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_88(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_88(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_88(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_88(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_88(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_88(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_88(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_88(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_88(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_88(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_88(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_88(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_88(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_88(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_88(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_88(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_88(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_88(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_88(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_88(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_88(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_88(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_88(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_88(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_88(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_88(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_88(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_88(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_88(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_88(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_88(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_88(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_88(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_88(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_88(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_88(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_88(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_88(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_88(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_88(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_88(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_88(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_88(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_88(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_88(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_88(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_88(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_88(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_88(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_88(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_88(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_88(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_88(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_88(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_88(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_88(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_88(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_88(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_88(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_88(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_88(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_88(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_88(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_88(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_88(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_88(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_88(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_88(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_88(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_88(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_88(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_88(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_88(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_88(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_88(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_88(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_88(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_88(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_88(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_88(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_88(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_88(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_88(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_88(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_88(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_85(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_86(iParam0, 0);
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_87(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_88(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

int func_89(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_88(-1)];
			}
			else if (func_87(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_88(-1)];
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_92(iParam0, func_88(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_91(iParam0))
	{
		func_83(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_84(iParam0, iVar0, iParam2, 1);
	}
}

int func_91(int iParam0)
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

int func_92(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_88(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_93(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_96(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_95(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_94(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_78(iParam0) };
		Global_2513231 = { func_78(iParam1) };
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

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_98(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_94(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_100(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_89(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_89(PLAYER::PLAYER_ID());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_89(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_89(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	return func_106(func_107(iParam0));
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_108(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_108(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_111();
	}
	return func_110(Global_4456448.f_194990);
}

int func_110(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_111()
{
	return Global_2450632.f_17;
}

bool func_112(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_113(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_117(iParam0, iParam1);
	uVar2 = func_116(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_116(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_117(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
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

void func_118(int iParam0, var uParam1)
{
	uParam1->f_8 = iParam0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 27147;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_27", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_27", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 1:
			*uParam1 = 27148;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_28", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_28", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 2:
			*uParam1 = 27149;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_33", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_33", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 3:
			*uParam1 = 27150;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_34", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_34", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 4:
			*uParam1 = 27151;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_35", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_35", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 5:
			*uParam1 = 27152;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_36", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_36", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 6:
			*uParam1 = 27153;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_37", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_37", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 7:
			*uParam1 = 27154;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_38", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_38", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 8:
			*uParam1 = 27155;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_39", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_39", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 9:
			*uParam1 = 27156;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_40", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_40", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 10:
			*uParam1 = 27157;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_41", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_41", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 11:
			*uParam1 = 27158;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_42", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_42", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 12:
			*uParam1 = 27159;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_6", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 13:
			*uParam1 = 27160;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_7", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 14:
			*uParam1 = 27161;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_8", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 15:
			*uParam1 = 27162;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_9", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 16:
			*uParam1 = 27163;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_10", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_10", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 17:
			*uParam1 = 27164;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_116", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_116", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 18:
			*uParam1 = 27165;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_117", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_117", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 19:
			*uParam1 = 27166;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_118", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_118", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 20:
			*uParam1 = 27167;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_119", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_119", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 21:
			*uParam1 = 27168;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_0", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_0", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 22:
			*uParam1 = 27169;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_1", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_1", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 23:
			*uParam1 = 27170;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_6", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 24:
			*uParam1 = 27171;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_7", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 25:
			*uParam1 = 27172;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_8", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 26:
			*uParam1 = 27173;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_9", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 27:
			*uParam1 = 27174;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_24", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_24", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 28:
			*uParam1 = 27175;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_25", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_25", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 29:
			*uParam1 = 27176;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_26", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_26", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 30:
			*uParam1 = 27177;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_29", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_29", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 31:
			*uParam1 = 27178;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_30", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_30", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 32:
			*uParam1 = 27179;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_31", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_31", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 33:
			*uParam1 = 27180;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_32", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_32", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 34:
			*uParam1 = 27181;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_43", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_43", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 35:
			*uParam1 = 27182;
			if (func_119())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_44", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_44", 24);
			}
			uParam1->f_7 = 3;
			break;
	}
}

bool func_119()
{
	return func_120(PLAYER::PLAYER_ID());
}

int func_120(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1950175060;
			*uParam2 = 1500;
			break;
		
		case 2:
			*uParam1 = 1950175060;
			*uParam2 = 3000;
			break;
		
		case 3:
			*uParam1 = 1820140472;
			*uParam2 = 2000;
			break;
		
		case 4:
			*uParam1 = 1820140472;
			*uParam2 = 4000;
			break;
		
		case 5:
			*uParam1 = -1878508229;
			*uParam2 = 2000;
			break;
		
		case 6:
			*uParam1 = -1878508229;
			*uParam2 = 4000;
			break;
		
		case 7:
			*uParam1 = 218444191;
			*uParam2 = 2500;
			break;
		
		case 8:
			*uParam1 = 218444191;
			*uParam2 = 5000;
			break;
		
		case 9:
			*uParam1 = 1788949567;
			*uParam2 = 5500;
			break;
		
		case 10:
			*uParam1 = 1285032059;
			*uParam2 = 1000;
			break;
		
		case 11:
			*uParam1 = -1614428030;
			*uParam2 = 7000;
			break;
	}
}

bool func_122(int iParam0, int iParam1, int iParam2)
{
	return func_123(iParam0, 3, iParam1, iParam2, -1);
}

int func_123(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
	}
	else if (!func_159(iParam1))
	{
	}
	else
	{
		iVar0 = func_189();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_157();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_138(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_189() - Global_1696044);
			func_137(iVar4, 1);
			func_135();
			func_134();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_128(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_127(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_126(iParam1);
			Var5.f_1 = func_125(iParam1, iParam3, iParam4);
			if (func_124(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1696044;
			unk_0x0999F3F090EC5012(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_126(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_127(int iParam0)
{
	iVar0 = func_57();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_56();
	if (iVar0 == 0)
	{
		func_55();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_54();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_36(-1274895349, Global_262145.f_26399);
		func_54();
		Global_2460613 = 1;
	}
	else
	{
		func_36(-1274895349, (iVar2 + iParam0));
	}
}

void func_128(int iParam0)
{
	iVar0 = func_133();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_132();
	if (iVar0 == 0)
	{
		func_131();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_130();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_129()
	{
		func_36(-1127742296, func_129());
		func_130();
	}
	else
	{
		func_36(-1127742296, (iVar2 + iParam0));
	}
}

int func_129()
{
	if (func_67(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_130()
{
	func_131();
}

void func_131()
{
	func_36(67083818, NETWORK::_GET_POSIX_TIME());
}

int func_132()
{
	return func_42(-1127742296);
}

int func_133()
{
	return func_42(67083818);
}

void func_134()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1696079, 6))
	{
		GAMEPLAY::SET_BIT(&Global_1696079, 9);
		func_9(&Global_1696082, 0, 0);
	}
}

void func_135()
{
	if (func_136())
	{
		GAMEPLAY::SET_BIT(&Global_1696079, 1);
	}
}

bool func_136()
{
	return (GAMEPLAY::IS_BIT_SET(Global_1696079, 6) || GAMEPLAY::IS_BIT_SET(Global_1696079, 5));
}

void func_137(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	GAMEPLAY::SET_BIT(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_138(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_124(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_156())
	{
		if (*uParam0 == 0)
		{
			if (func_155() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_126(iParam1);
			iVar5 = -22148635;
			if (func_159(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_151(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_151(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_146())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_145(func_155()))
			{
				if (func_144(func_155()) == 2)
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_143(func_155()));
					if (func_159(iParam1))
					{
						unk_0x3BD101471C7F9EEC(iVar0, iParam2);
					}
					else
					{
						unk_0xED44897CB336F480(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_139(func_155());
			}
		}
	}
	else if (iVar0 > 0 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_159(iParam1))
		{
			unk_0x3BD101471C7F9EEC(iVar0, iParam2);
		}
		else
		{
			unk_0xED44897CB336F480(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_139(int iParam0)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_142(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_140(&(Global_4263954[iParam0]));
	}
}

void func_140(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_141(&(uParam0->f_14));
	func_141(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_141(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_144(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_146()
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_155();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_28()) || UNK3::_0x810E8431C0614BF9())
		{
			if (func_150(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_143(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_147(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_147(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_149(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_148();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_148()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_149(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_28()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_155();
	if (iVar1 == -1)
	{
		if (!func_153(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_152(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_28()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (UNK3::_NETWORK_SHOP_BASKET_END())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_START(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_154(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_154(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_156())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = uParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_147(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_155()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_143(iVar0) != 2147483647)
		{
			if (func_142(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_156()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_157()
{
	iVar0 = (func_129() - func_132());
	iVar1 = (Global_262145.f_26395 - func_189());
	iVar2 = func_158();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_158()
{
	iVar0 = func_129();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8968D4D8C6C40C11())
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5D1E75F91C07DEE5();
	}
	return iVar1;
}

int func_159(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 >= 0 && func_8(iParam0, &Local_213))
	{
		if ((iParam1 == 7 && iParam2 == 7) && iParam3 == 7)
		{
			return func_161(Local_213[iParam0].f_17, iParam4);
		}
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 11;
					break;
				
				case 5:
					return 1;
					break;
				
				case 6:
					return 4;
					break;
				
				case 7:
					return 6;
					break;
				
				case 8:
					return 9;
					break;
				
				case 9:
					return 7;
					break;
				
				case 10:
					return 10;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 9:
					return 1;
					break;
				
				case 1:
				case 4:
				case 7:
				case 10:
					return 2;
					break;
				
				case 2:
				case 5:
				case 8:
				case 11:
					return 3;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 14);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 15);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 16);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 29);
	GAMEPLAY::CLEAR_BIT(&iLocal_1639, 0);
	if (iParam1 == iParam2 && iParam2 == iParam3)
	{
		iVar1 = func_163(iParam1, 3);
		iVar1 = (iVar1 * (iLocal_2128 * Local_213[iParam0].f_16));
		if (iParam1 >= 5)
		{
			GAMEPLAY::SET_BIT(&iLocal_1638, 14);
			if (iParam1 == 6)
			{
				GAMEPLAY::SET_BIT(&iLocal_1638, 29);
			}
		}
		else if (iParam1 >= 2)
		{
			GAMEPLAY::SET_BIT(&iLocal_1639, 0);
		}
		return iVar1;
	}
	else
	{
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iParam3 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			if (bParam4)
			{
			}
			iVar1 = func_163(7, iVar0);
			iVar1 = (iVar1 * (iLocal_2128 * Local_213[iParam0].f_16));
			return iVar1;
		}
	}
	if (iParam1 == iParam2 && iParam1 >= 5)
	{
		GAMEPLAY::SET_BIT(&iLocal_1638, 15);
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return Local_1348.f_278[1];
		
		case 2:
			return Local_1348.f_278[2];
		
		case 3:
			return Local_1348.f_278[3];
		
		case 4:
			return Local_1348.f_278[4];
		
		case 5:
			return Local_1348.f_278[5];
		
		case 6:
			return Local_1348.f_278[6];
		
		case 7:
			if (iParam1 == 3)
			{
				return Local_1348.f_278[7];
			}
			else if (iParam1 == 2)
			{
				return Local_1348.f_278[8];
			}
			else if (iParam1 == 1)
			{
				return Local_1348.f_278[9];
			}
			break;
	}
	return 0;
}

void func_164(bool bParam0, int iParam1)
{
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	UI::_0x55598D21339CB998(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_165(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_165(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_166(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_167(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

void func_168(int iParam0)
{
	func_169(iParam0, &Local_2106);
	uLocal_1641 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_1643, Local_1646, 2, Local_2106.f_17, Local_2106.f_16, 1065353216, 0, 1065353216);
	if (iParam0 == 5 || iParam0 == 6)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1641, func_328(), &Local_2106, 4f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 11 || iParam0 == 12)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1641, func_328(), &Local_2106, 8f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 8 || iParam0 == 14)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1641, func_328(), &Local_2106, 8f, -4f, 13, 16, 1148846080, 0);
	}
	else if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1641, func_328(), &Local_2106, 2f, -1.5f, 13, 16, 2f, 0);
	}
	else
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1641, func_328(), &Local_2106, 2f, -1.5f, 13, 16, 1148846080, 0);
		if (iParam0 == 15 || iParam0 == 9)
		{
			StringCopy(&cVar0, "vw_prop_casino_slot_0", 24);
			StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
			StringConCat(&cVar0, "a", 24);
			iVar6 = GAMEPLAY::GET_HASH_KEY(&cVar0);
			StringConCat(&Local_2106, "_SLOTMACHINE", 64);
			unk_0x45F35C0EDC33B03B(uLocal_1641, iVar6, Local_1643, func_328(), &Local_2106, 2f, -1.5f, 13);
		}
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1641);
	iLocal_1642 = iParam0;
}

void func_169(int iParam0, char* sParam1)
{
	sParam1->f_17 = 1;
	sParam1->f_16 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "enter_left", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "enter_right", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "enter_left_short", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "enter_right_short", 64);
			break;
		
		case 4:
			StringCopy(sParam1, "base_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_170(4, &Var0, 1, 0);
			}
			else
			{
				func_170(4, &Var0, 5, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 5:
			StringCopy(sParam1, "press_betone_a", 64);
			break;
		
		case 6:
			StringCopy(sParam1, "press_betmax_a", 64);
			break;
		
		case 7:
			StringCopy(sParam1, "press_autospin", 64);
			break;
		
		case 8:
			StringCopy(sParam1, "press_spin", 64);
			func_170(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 9:
			StringCopy(sParam1, "pull_spin", 64);
			func_170(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 10:
			StringCopy(sParam1, "betidle_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_170(10, &Var0, 1, 0);
			}
			else
			{
				func_170(10, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 11:
			StringCopy(sParam1, "betidle_press_betone", 64);
			func_170(11, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 12:
			StringCopy(sParam1, "betidle_press_betmax", 64);
			func_170(12, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 13:
			StringCopy(sParam1, "betidle_press_autospin", 64);
			break;
		
		case 14:
			StringCopy(sParam1, "betidle_press_spin", 64);
			func_170(14, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 15:
			StringCopy(sParam1, "betidle_pull_spin", 64);
			func_170(15, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 16:
			StringCopy(sParam1, "betidle_to_base_transition", 64);
			break;
		
		case 17:
			StringCopy(sParam1, "spinning", 64);
			func_170(17, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 18:
			StringCopy(sParam1, "win", 64);
			if (GAMEPLAY::IS_BIT_SET(iLocal_1639, 0))
			{
				func_170(18, &Var0, 4, 0);
			}
			else
			{
				func_170(18, &Var0, 7, 4);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 19:
			StringCopy(sParam1, "win_big", 64);
			func_170(19, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 20:
			StringCopy(sParam1, "win_to_spinning_wheel", 64);
			break;
		
		case 21:
			StringCopy(sParam1, "spinning_wheel", 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 22:
			StringCopy(sParam1, "win_spinning_wheel", 64);
			break;
		
		case 23:
			StringCopy(sParam1, "lose", 64);
			iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (iVar1 >= 9)
			{
				func_170(23, &Var0, 6, 3);
			}
			else
			{
				func_170(23, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 24:
			StringCopy(sParam1, "lose_cruel", 64);
			func_170(24, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 25:
			StringCopy(sParam1, "exit_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 26:
			StringCopy(sParam1, "betidle_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 27:
			StringCopy(sParam1, "exit_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 28:
			StringCopy(sParam1, "betidle_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
	}
}

void func_170(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	iVar1 = -1;
	if (iParam2 > 1)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
		if (iParam0 == 4)
		{
			iVar1 = iLocal_1649;
		}
		else if (iParam0 == 10)
		{
			iVar1 = iLocal_1650;
		}
		if (iVar0 == iVar1)
		{
			iVar0++;
			if (iVar0 >= iParam2)
			{
				iVar0 = 0;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			StringCopy(sParam1, "_a", 4);
			break;
		
		case 1:
			StringCopy(sParam1, "_b", 4);
			break;
		
		case 2:
			StringCopy(sParam1, "_c", 4);
			break;
		
		case 3:
			StringCopy(sParam1, "_d", 4);
			break;
		
		case 4:
			StringCopy(sParam1, "_e", 4);
			break;
		
		case 5:
			StringCopy(sParam1, "_f", 4);
			break;
		
		case 6:
			StringCopy(sParam1, "_g", 4);
			break;
	}
	if (iParam0 == 4)
	{
		iLocal_1649 = iVar0;
	}
	else if (iParam0 == 10)
	{
		iLocal_1650 = iVar0;
	}
}

int func_171(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_156() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_173(iParam0))
	{
		return func_172(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_172(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 <= 0)
	{
	}
	else if (func_159(iParam1))
	{
	}
	else
	{
		iVar0 = func_189();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_156() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_138(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696044 - func_189());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_137(iVar2, 0);
			func_135();
			func_134();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_126(iParam1);
			Var3.f_1 = func_125(iParam1, iParam3, iParam4);
			if (func_124(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1696044;
			Var3.f_7 = iParam5;
			unk_0x0999F3F090EC5012(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_173(int iParam0)
{
	if (func_195())
	{
		return 0;
	}
	iVar0 = func_189();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_175(iParam1);
	switch (iParam2)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "no_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "small_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "big_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "jackpot", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_bet", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_max_bet", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spinning", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "start_spin", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_clunk", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_on_prize", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "welcome_stinger", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
			break;
	}
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_player_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_player_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_player_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_player_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_player_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_player_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_player_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_player_sounds";
		
		default:
	}
	return "";
}

void func_176(int iParam0)
{
	if (iParam0 == 0)
	{
		if (iLocal_1642 == 4 || (iLocal_1642 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_168(5);
		}
		else if (iLocal_1642 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_168(11);
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_1642 == 4 || (iLocal_1642 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_168(6);
		}
		else if (iLocal_1642 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_168(12);
		}
	}
}

void func_177(int iParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Local_2104, "SET_BET");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iLocal_2082 != iParam0)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::CLEAR_HELP(1);
		}
		switch (iParam0)
		{
			case 1:
				func_185("SLOTS_HELPB", Local_213[iLocal_2125].f_16, Local_213[iLocal_2125].f_16 * 5);
				break;
			
			case 2:
			case 3:
				if (iParam1 == 1 && Local_213[iLocal_2125].f_17 == 8)
				{
					StringCopy(&cVar10, "SLOTS_HELPW1b", 24);
				}
				else
				{
					StringCopy(&cVar10, "SLOTS_HELPW", 24);
					if (iParam1 >= 0)
					{
						StringIntConCat(&cVar10, iParam1, 24);
					}
					if ((iParam1 == 9 || iParam1 == 8) || iParam1 == 7)
					{
						StringIntConCat(&cVar10, Local_213[iLocal_2125].f_17, 24);
					}
				}
				if (func_8(iLocal_2125, &Local_213))
				{
					if (iParam1 == 7 && iParam3 > 0)
					{
						if (Local_213[iLocal_2125].f_17 == 8)
						{
							if (iParam3 != 12)
							{
								func_121(iParam3, &iVar16, &iVar17);
								unk_0x585847C5E4E11709(PLAYER::PLAYER_PED_ID(), iVar16, &iVar18);
								if (iVar18 < iVar17)
								{
									if (iVar16 == 1950175060)
									{
										StringIntConCat(&cVar10, 1, 24);
									}
									else if (iVar16 == 1820140472)
									{
										StringIntConCat(&cVar10, 3, 24);
									}
									else if (iVar16 == -1878508229)
									{
										StringIntConCat(&cVar10, 5, 24);
									}
									else if (iVar16 == 218444191)
									{
										StringIntConCat(&cVar10, 7, 24);
									}
									else
									{
										StringIntConCat(&cVar10, iParam3, 24);
									}
									StringConCat(&cVar10, "a", 24);
								}
								else
								{
									StringIntConCat(&cVar10, iParam3, 24);
									StringConCat(&cVar10, "b", 24);
								}
							}
							else
							{
								StringIntConCat(&cVar10, iParam3, 24);
							}
						}
						else if (Local_213[iLocal_2125].f_17 == 4)
						{
							bVar0 = true;
							if (iLocal_212 == -1)
							{
								StringCopy(&cVar10, "SLOTS_HELPW74b", 24);
								func_184(&cVar10, Global_262145.f_27109);
							}
							else
							{
								func_118(iLocal_212, &Var1);
								StringCopy(&cVar10, "SLOTS_HELPW74a", 24);
								func_179(&cVar10, &(Var1.f_1), iParam2);
							}
						}
					}
				}
				if (!bVar0)
				{
					func_184(&cVar10, iParam2);
				}
				func_9(&uLocal_2083, 1, 0);
				break;
		}
		iLocal_2082 = iParam0;
	}
}

int func_179(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_180(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_180(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_183() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_26(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_181(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = uParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_181(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_182(iVar0);
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

void func_182(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_183()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_184(char[4] cParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

void func_185(char* sParam0, int iParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

void func_186()
{
	if (iLocal_2082 != 0)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::CLEAR_HELP(1);
		}
		iLocal_2082 = 0;
	}
}

void func_187()
{
	if (iLocal_1642 == 4 || (iLocal_1642 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_168(8);
	}
	else if (((iLocal_1642 == 10 || iLocal_1642 == 11) || iLocal_1642 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_168(14);
	}
}

void func_188()
{
	if (iLocal_1642 == 4 || (iLocal_1642 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_168(9);
	}
	else if (((iLocal_1642 == 10 || iLocal_1642 == 11) || iLocal_1642 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_168(15);
	}
}

int func_189()
{
	return func_92(8248, -1, 0);
}

void func_190(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_191()
{
	if (func_194() <= 0)
	{
		return 0;
	}
	if (func_193() <= 0)
	{
		return 1;
	}
	if (func_192())
	{
		return 2;
	}
	return 3;
}

bool func_192()
{
	return Global_1696061 != 0;
}

int func_193()
{
	return (Global_262145.f_26398 + func_56());
}

int func_194()
{
	return (Global_262145.f_26399 - func_56());
}

bool func_195()
{
	return func_191() != 3;
}

void func_196(int iParam0)
{
	func_219(0);
	if (iLocal_2125 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 23))
		{
			Var0 = { func_198(Local_213[iLocal_2125].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 23);
		}
	}
	func_197(-1);
	GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
	GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
	GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
	GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 3);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 3);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 4);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 5);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 24);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 21);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 22);
	iLocal_2128 = 1;
	func_310(6);
	func_168(iParam0);
	func_186();
}

void func_197(int iParam0)
{
	if (iParam0 >= 0)
	{
		iLocal_2126 = iParam0;
	}
	iLocal_2125 = iParam0;
	Local_3401[PLAYER::PLAYER_ID()] = iParam0;
	iLocal_2127 = -1;
}

struct<8> func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "CasinoUI_Slots_Angel", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "CasinoUI_Slots_Impotent", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "CasinoUI_Slots_Ranger", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "CasinoUI_Slots_Fame", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "CasinoUI_Slots_Deity", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "CasinoUI_Slots_Knife", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "CasinoUI_Slots_Diamond", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "CasinoUI_Slots_Evacuator", 32);
			break;
	}
	return Var0;
}

int func_199(int iParam0)
{
	if (func_218())
	{
		return 0;
	}
	if (func_217(0, &uVar7))
	{
		StringCopy(&Var0, "SLOTS_REGBAN", 24);
		bVar6 = true;
	}
	else if (func_195())
	{
		if (func_191() == 2)
		{
			StringCopy(&Var0, "CAS_MG_CTIME", 24);
			bVar6 = true;
		}
		else
		{
			StringCopy(&Var0, "CAS_MG_CBAN", 24);
			bVar6 = true;
		}
	}
	else if (!func_65() && !func_59())
	{
		StringCopy(&Var0, "CAS_MG_MEMB2", 24);
		bVar6 = true;
	}
	else if (func_189() <= 0)
	{
		StringCopy(&Var0, "CAS_MG_NOCHIPS1", 24);
		bVar6 = true;
	}
	else if (func_189() < Local_213[iParam0].f_16)
	{
		StringCopy(&Var0, "CAS_MG_LOWCHIPS1", 24);
		bVar6 = true;
	}
	else if ((((((((Global_262145.f_26171 || (Global_262145.f_26178 && Local_213[iParam0].f_17 == 1)) || (Global_262145.f_26176 && Local_213[iParam0].f_17 == 2)) || (Global_262145.f_26173 && Local_213[iParam0].f_17 == 3)) || (Global_262145.f_26174 && Local_213[iParam0].f_17 == 4)) || (Global_262145.f_26177 && Local_213[iParam0].f_17 == 5)) || (Global_262145.f_26175 && Local_213[iParam0].f_17 == 6)) || (Global_262145.f_26172 && Local_213[iParam0].f_17 == 7)) || (Global_262145.f_26179 && Local_213[iParam0].f_17 == 8))
	{
		StringCopy(&Var0, "SLOTS_ENTERB", 24);
		bVar6 = true;
	}
	else if (func_215())
	{
		StringCopy(&Var0, "SLOTS_ENTERB", 24);
		bVar6 = true;
	}
	if ((((func_214() || func_213()) || func_212()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		bVar6 = true;
		GAMEPLAY::SET_BIT(&iLocal_1638, 6);
	}
	if (func_206())
	{
		bVar6 = true;
		GAMEPLAY::SET_BIT(&iLocal_1638, 6);
	}
	if (bVar6)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var0, "CAS_MG_MEMB2"))
		{
			if (!func_204("CAS_MG_MEMB2", func_205(1)))
			{
				func_203("CAS_MG_MEMB2", func_205(1));
			}
			GAMEPLAY::SET_BIT(&iLocal_1638, 6);
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 52))
			{
				UI::CLEAR_HELP(1);
				func_202();
				func_310(2);
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 6))
		{
			func_186();
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_190(&Var0, -1);
				GAMEPLAY::SET_BIT(&iLocal_1638, 6);
			}
		}
		if (iLocal_2124 != -1)
		{
			func_200(&iLocal_2124);
		}
		return 0;
	}
	return 1;
}

void func_200(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_201(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_201(int iParam0)
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

void func_202()
{
	if (!NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_205(0), 0, 1, 0, -1, 0))
	{
		func_190("MAITRD_M_D0E", -1);
	}
	else if (func_60(PLAYER::PLAYER_ID()))
	{
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1676377.f_5, 31))
	{
	}
	else if (Global_4264528 != 0)
	{
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1676377.f_5), 30);
	}
}

void func_203(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_204(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_205(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_206()
{
	if (func_63(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_62();
		if (func_12(iVar0, 1, 1) && GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_108(PLAYER::PLAYER_ID(), 0) && func_210(PLAYER::PLAYER_ID())) || func_207(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (func_209(iParam0) != func_61())
	{
		return func_209(iParam0) == func_208(iParam0);
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_61();
}

int func_209(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_210(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_211(iParam0, 9);
	}
	return 0;
}

bool func_211(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_212()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_213()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 20);
}

bool func_214()
{
	return Global_2450632.f_591;
}

int func_215()
{
	if ((func_216() != -1 && func_216() != 28) && func_216() != 17)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_968397;
}

int func_217(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x158C16F5E4CF41F8(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_2537071.f_6591;
}

void func_219(bool bParam0)
{
	if (Global_262145.f_26043)
	{
		Var0 = -1125105727;
		Var0.f_1 = iLocal_2125;
		if (func_195())
		{
			switch (func_191())
			{
				case 0:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (bParam0)
		{
			Var0.f_2 = 1330140418;
		}
		else
		{
			Var0.f_2 = 847129329;
		}
		Var0.f_3 = Local_2085.f_2;
		Var0.f_4 = func_189();
		if (bParam0)
		{
			Var0.f_5 = 120000;
		}
		else if (iLocal_2101)
		{
			Var0.f_5 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_2103, NETWORK::GET_NETWORK_TIME()));
		}
		Var0.f_6 = (GAMEPLAY::IS_BIT_SET(iLocal_1638, 20) || GAMEPLAY::IS_BIT_SET(iLocal_1639, 1));
		Var0.f_7 = Local_2085.f_5;
		Var0.f_10 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_66())
		{
			Var0.f_11 = unk_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		}
		Var0.f_12 = (Local_2085.f_3 + Local_2085.f_4);
		Var0.f_13 = Local_2085.f_3;
		Var0.f_14 = Local_2085.f_4;
		Var0.f_16 = Local_213[iLocal_2125].f_17;
		if (func_67(PLAYER::PLAYER_ID()))
		{
			Var0.f_15 = 1983458449;
		}
		else if (func_65())
		{
			Var0.f_15 = 1334658487;
		}
		else if (func_59())
		{
			Var0.f_15 = 980726932;
		}
		else
		{
			Var0.f_15 = 939907746;
		}
		unk_0xE60054A0FAE8227F(&Var0);
		func_3(&Local_2085);
		Local_2085.f_2 = 0;
		Local_2085.f_3 = 0;
		Local_2085.f_4 = 0;
		Local_2085.f_5 = 0;
		iLocal_2101 = 0;
	}
}

void func_220(int iParam0)
{
	func_221(iLocal_2125, &uVar0, &fVar3);
	switch (iParam0)
	{
		case 0:
			if (CAM::_0xEE778F8C7E1142E2(0) != 4)
			{
				CAM::_0x2A2173E46DAECD12(0, 4);
			}
			break;
		
		case 1:
			if (CAM::_0xEE778F8C7E1142E2(0) != 0)
			{
				CAM::_0x2A2173E46DAECD12(0, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			break;
	}
	iLocal_1696 = iParam0;
}

void func_221(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.483f, 230.4082f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 1:
			*uParam1 = { 1100.939f, 231.0017f, -50.8409f };
			*fParam2 = 60f;
			break;
		
		case 2:
			*uParam1 = { 1101.221f, 231.6943f, -50.8409f };
			*fParam2 = 75f;
			break;
		
		case 3:
			*uParam1 = { 1101.323f, 232.4321f, -50.8409f };
			*fParam2 = 90f;
			break;
		
		case 4:
			*uParam1 = { 1101.229f, 233.1719f, -50.8409f };
			*fParam2 = 105f;
			break;
		
		case 5:
			*uParam1 = { 1108.938f, 239.4797f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 6:
			*uParam1 = { 1109.536f, 239.0278f, -50.8409f };
			*fParam2 = -30f;
			break;
		
		case 7:
			*uParam1 = { 1110.229f, 238.7428f, -50.8409f };
			*fParam2 = -15f;
			break;
		
		case 8:
			*uParam1 = { 1110.974f, 238.642f, -50.8409f };
			*fParam2 = 0f;
			break;
		
		case 9:
			*uParam1 = { 1111.716f, 238.7384f, -50.8409f };
			*fParam2 = 15f;
			break;
		
		case 10:
			*uParam1 = { 1112.407f, 239.0216f, -50.8409f };
			*fParam2 = 30f;
			break;
		
		case 11:
			*uParam1 = { 1112.999f, 239.4742f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 12:
			*uParam1 = { 1120.853f, 233.1621f, -50.8409f };
			*fParam2 = -105f;
			break;
		
		case 13:
			*uParam1 = { 1120.753f, 232.4272f, -50.8409f };
			*fParam2 = -90f;
			break;
		
		case 14:
			*uParam1 = { 1120.853f, 231.6886f, -50.8409f };
			*fParam2 = -75f;
			break;
		
		case 15:
			*uParam1 = { 1121.135f, 230.9999f, -50.8409f };
			*fParam2 = -60f;
			break;
		
		case 16:
			*uParam1 = { 1121.592f, 230.4106f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 17:
			*uParam1 = { 1104.572f, 229.4451f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 18:
			*uParam1 = { 1104.302f, 230.3183f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 19:
			*uParam1 = { 1105.049f, 230.845f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 20:
			*uParam1 = { 1105.781f, 230.2973f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 21:
			*uParam1 = { 1105.486f, 229.4322f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 22:
			*uParam1 = { 1108.005f, 233.9177f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 23:
			*uParam1 = { 1107.735f, 234.7909f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 24:
			*uParam1 = { 1108.482f, 235.3176f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 25:
			*uParam1 = { 1109.214f, 234.7699f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 26:
			*uParam1 = { 1108.919f, 233.9048f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 27:
			*uParam1 = { 1113.64f, 233.6755f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 28:
			*uParam1 = { 1113.37f, 234.5486f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 29:
			*uParam1 = { 1114.117f, 235.0753f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 30:
			*uParam1 = { 1114.848f, 234.5277f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 31:
			*uParam1 = { 1114.554f, 233.6625f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 32:
			*uParam1 = { 1116.662f, 228.8896f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 33:
			*uParam1 = { 1116.392f, 229.7628f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 34:
			*uParam1 = { 1117.139f, 230.2895f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 35:
			*uParam1 = { 1117.871f, 229.7419f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 36:
			*uParam1 = { 1117.576f, 228.8767f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 37:
			*uParam1 = { 1129.64f, 250.451f, -52.0409f };
			*fParam2 = 180f;
			break;
		
		case 38:
			*uParam1 = { 1130.376f, 250.3577f, -52.0409f };
			*fParam2 = 165f;
			break;
		
		case 39:
			*uParam1 = { 1131.062f, 250.0776f, -52.0409f };
			*fParam2 = 150f;
			break;
		
		case 40:
			*uParam1 = { 1131.655f, 249.6264f, -52.0409f };
			*fParam2 = 135f;
			break;
		
		case 41:
			*uParam1 = { 1132.109f, 249.0355f, -52.0409f };
			*fParam2 = 120f;
			break;
		
		case 42:
			*uParam1 = { 1132.396f, 248.3382f, -52.0409f };
			*fParam2 = 105f;
			break;
		
		case 43:
			*uParam1 = { 1132.492f, 247.5984f, -52.0409f };
			*fParam2 = 90f;
			break;
		
		case 44:
			*uParam1 = { 1133.952f, 256.1037f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 45:
			*uParam1 = { 1133.827f, 256.9098f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 46:
			*uParam1 = { 1134.556f, 257.2778f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 47:
			*uParam1 = { 1135.132f, 256.699f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 48:
			*uParam1 = { 1134.759f, 255.9734f, -52.0409f };
			*fParam2 = 27f;
			break;
		
		case 49:
			*uParam1 = { 1138.195f, 251.8611f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 50:
			*uParam1 = { 1138.07f, 252.6677f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 51:
			*uParam1 = { 1138.799f, 253.0363f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 52:
			*uParam1 = { 1139.372f, 252.4563f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 53:
			*uParam1 = { 1139f, 251.7306f, -52.0409f };
			*fParam2 = 27f;
			break;
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&Global_1696079, 2);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_1696079, 2);
	}
}

bool func_223()
{
	return GAMEPLAY::IS_BIT_SET(Global_1696079, 2);
}

bool func_224(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_225()
{
	return Global_73825;
}

bool func_226()
{
	return UI::GET_PAUSE_MENU_STATE() != 0;
}

void func_227()
{
	if (iLocal_1696 == 0 && CAM::_0xEE778F8C7E1142E2(0) == 4)
	{
	}
}

void func_228()
{
	if (iLocal_1642 == 10)
	{
		if (!func_329(&uLocal_1698))
		{
			func_6(&uLocal_1698, 1, 0);
		}
		else if (func_5(&uLocal_1698, 10000, 1))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			func_168(16);
			return;
		}
	}
	else
	{
		func_3(&uLocal_1698);
	}
	uVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1641);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (iLocal_1642 == 4 || iLocal_1642 == 16)
		{
			func_168(4);
		}
		else if (iLocal_1642 == 10)
		{
			func_168(10);
		}
		else if (((((iLocal_1642 == 5 || iLocal_1642 == 6) || iLocal_1642 == 7) || iLocal_1642 == 11) || iLocal_1642 == 12) || iLocal_1642 == 13)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			func_168(10);
		}
		else if ((((iLocal_1642 == 18 || iLocal_1642 == 19) || iLocal_1642 == 23) || iLocal_1642 == 24) || iLocal_1642 == 22)
		{
			func_168(10);
		}
		else if (iLocal_1642 == 20)
		{
			func_168(21);
		}
		else if (((iLocal_1642 == 8 || iLocal_1642 == 9) || iLocal_1642 == 14) || iLocal_1642 == 15)
		{
			func_168(17);
		}
	}
}

void func_229()
{
	if (CONTROLS::_IS_INPUT_DISABLED(0))
	{
		if (!iLocal_1697)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
		}
		iLocal_1697 = 1;
	}
	else
	{
		if (iLocal_1697)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
		}
		iLocal_1697 = 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 0))
	{
		if (((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12)
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 25))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&iLocal_1638, 25);
	}
	if (iLocal_2125 >= 0 && (iLocal_1637 == 5 || GAMEPLAY::IS_BIT_SET(iLocal_1638, 31)))
	{
		func_273();
		if ((!GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 0) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 3)) && (((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12))
		{
			if (!func_329(&uLocal_2083) || func_5(&uLocal_2083, 5000, 1))
			{
				func_178(1, -1, -1, -1);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 0))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21) || GAMEPLAY::IS_BIT_SET(iLocal_1638, 22))
			{
				MemCopy(&Var0, {func_198(Local_213[iLocal_2125].f_17)}, 6);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var0, 0);
				GAMEPLAY::SET_BIT(&iLocal_1638, 23);
				if (func_271(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var0))
				{
					func_167(0, 0);
					func_269(1, &Var0, &Var0);
					func_268(-1, 1, 1);
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21))
					{
						func_267("SLOTS_RULEaT");
						StringCopy(&Var0, "SLOTS_RULEa", 24);
						StringIntConCat(&Var0, Local_213[iLocal_2125].f_17, 24);
						func_266(&Var0, 0, 0);
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 22))
					{
						func_267("SLOTS_RULEbT");
						func_266("SLOTS_RULEb", 0, 0);
						func_265(Local_213[iLocal_2125].f_16);
						func_265(Local_213[iLocal_2125].f_16 * 5);
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21))
					{
						func_264(1, 1, 2);
					}
					else
					{
						func_264(1, 2, 2);
					}
					func_263(202, "SLOTS_RULEBK", -1);
					func_262(8, "SLOTS_RULENEXT", -1);
					GAMEPLAY::SET_BIT(&iLocal_1638, 0);
					func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
					func_238(1);
				}
			}
			else if (func_271(0, -1, 0))
			{
				func_167(0, 0);
				if (!GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 0) && (((((iLocal_1642 == 4 || iLocal_1642 == 10) || iLocal_1642 == 11) || iLocal_1642 == 12) || GAMEPLAY::IS_BIT_SET(iLocal_1638, 31)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
				{
					func_263(202, "SLOTS_EXIT", -1);
					func_237("SLOTS_SPIN", CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 208, 1), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1), 0, 0);
					func_263(203, "SLOTS_BET", -1);
					if (iLocal_2128 < 5)
					{
						func_263(204, "SLOTS_BETM", -1);
					}
				}
				func_263(210, "SLOTS_RULEIN", -1);
				GAMEPLAY::SET_BIT(&iLocal_1638, 0);
				func_230(0, -1, -1, 1, 0, 0, 1, 1, 0);
				func_238(1);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 21) || GAMEPLAY::IS_BIT_SET(iLocal_1638, 22))
			{
				func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else
			{
				func_230(0, -1, -1, 1, 0, 0, 1, 1, 0);
			}
			func_238(1);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 0))
	{
		func_167(0, 0);
		func_164(1, -1);
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
	}
}

void func_230(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_234(bParam4, bParam8))
	{
		return;
	}
	if (func_232())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_26(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::_0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_231(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_231(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_51(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && GAMEPLAY::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_4769);
				func_231(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_51(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_22350.f_5055)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_231(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

int func_232()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_233())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
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

int func_233()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

int func_234(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_236(8, -1) && func_235() != 65)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_76882) || Global_22350.f_8416) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_235()
{
	return Global_1312812;
}

bool func_236(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_237(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (Global_22350.f_4769 >= 12)
	{
		return;
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam1, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam0, 16);
	Global_22350.f_4769++;
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam2, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
	Global_22350.f_4769++;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam3, 64);
		StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
		Global_22350.f_4769++;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sParam4, 64);
		StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), "PREV", 16);
		Global_22350.f_4769++;
	}
}

void func_238(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_239(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_234(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_260(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_259())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_259())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_255(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_254(29), 64);
					StringCopy(&cVar81, func_252(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_251(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_251(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_250();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_250();
					func_248((((Global_22347 + fParam5) - 0.00390625f) - func_249("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_250();
						func_248((((Global_22347 + fParam5) - 0.00390625f) - func_249("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_251(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_260(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_247(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_251(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_247(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_260(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_246(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4768), func_252(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_260(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_247(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_251(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_247(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_260(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_246(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_254(Global_4268421.f_67), func_252(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_230(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						UI::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_260(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_260(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_246(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[(iVar22 + iVar28)]), func_252(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[(iVar22 + iVar28)]), func_252(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_183() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_244(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_260(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_246(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[(iVar22 + iVar14)]), func_252(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_242((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_243(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_260(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_244(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_241((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_260(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_260(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_246(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_254(26), func_252(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_260(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_260(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_246(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_254(27), func_252(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_260(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_246(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_254(Global_22350.f_4433[iVar22]), func_252(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_240(Global_22350.f_4433[iVar22])), (fVar37 * func_240(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_260(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_0x55598D21339CB998(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_299(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_238(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

float func_240(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_241(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_242(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_245(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_245(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_246(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			UI::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_247(float fParam0)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_248(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_249(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_250();
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_250()
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_251(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_252(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_78(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_253(&uVar3);
			}
		}
		else
		{
			return func_253(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_253(var uParam0)
{
	return uParam0;
}

char* func_254(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_78(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_253(&uVar0);
		}
		else
		{
			return func_253(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_255(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_258(Global_22350.f_5218, 1);
	}
	else
	{
		func_258(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_257(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_260(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_256(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_256(char* sParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_257(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_244(0, 1, 0, 0, 0, 0, 0);
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_258(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_259()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_254(iParam0), 64);
	StringCopy(&cVar16, func_252(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_259())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_259())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_261(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_261(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_261(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_262(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_263(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_265(var uParam0)
{
	if (Global_22350.f_4763 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 2;
	Global_22350.f_4762++;
	Global_22350.f_4701[Global_22350.f_4763] = uParam0;
	Global_22350.f_4763++;
}

void func_266(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_267(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_268(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_269(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_270(29, sParam1, sParam2);
}

void func_270(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

bool func_271(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_166(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_272(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_272(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_273()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_2104))
	{
		unk_0x32F34FF7F617643B(Local_2104, 1);
		UI::SET_TEXT_RENDER_ID(Local_2104.f_1);
		GRAPHICS::_SET_2D_LAYER(4);
		GRAPHICS::_0xC6372ECD45D73BCD(1);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_2104, 0.401f, 0.09f, 0.805f, 0.195f, 255, 255, 255, 255, 0);
		UI::SET_TEXT_RENDER_ID(UI::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_274(int iParam0)
{
	Global_1696054 = NETWORK::_GET_POSIX_TIME();
	Global_1696071 = iParam0;
	if (!func_280())
	{
		func_278();
	}
	if (!func_277())
	{
		func_275();
	}
}

void func_275()
{
	func_36(-1040706016, NETWORK::_GET_POSIX_TIME());
	func_276();
	func_35();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_276()
{
	func_36(-1959489725, 0);
	func_36(-1767815638, 0);
	func_36(-1983697810, 0);
	func_36(2071236561, 0);
	func_36(-569486077, 0);
	func_36(-806012719, 0);
	func_36(-1030054372, 0);
	func_36(611934680, 0);
	func_36(387434261, 0);
	func_36(92143537, 0);
	func_36(1599929969, 0);
}

bool func_277()
{
	return Global_1696068;
}

void func_278()
{
	func_36(937560627, NETWORK::_GET_POSIX_TIME());
	func_37();
	func_279((NETWORK::_GET_POSIX_TIME() + 86400));
	Global_1696067 = 1;
}

void func_279(int iParam0)
{
	Global_1696062 = iParam0;
}

bool func_280()
{
	return func_42(937560627) != 0;
}

int func_281()
{
	switch (iLocal_1640)
	{
		case 0:
			if (func_298())
			{
				if (func_297())
				{
					func_177((Local_213[iLocal_2125].f_16 * iLocal_2128));
					func_46(0);
					Var1 = { func_52(Local_213[iLocal_2125].f_17, 1) };
					func_50(&Var1);
					func_296(Local_213[iLocal_2125].f_17);
					func_295(iLocal_2125, &Local_1643, &Local_1646);
					iLocal_1651 = func_284();
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 26);
					GAMEPLAY::SET_BIT(&iLocal_1638, 26);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_283(iLocal_1651), 1f, 7000, 0.05f, 0, func_282(iLocal_1651));
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 30);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 31);
					iLocal_1640++;
				}
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_99(PLAYER::PLAYER_ID()), func_283(iLocal_1651), 0) <= 0.25f)
			{
				GAMEPLAY::SET_BIT(&iLocal_1638, 26);
			}
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0) && !AI::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) || (GAMEPLAY::IS_BIT_SET(iLocal_1638, 26) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0))
			{
				if (CAM::_0xEE778F8C7E1142E2(0) == 1 || CAM::_0xEE778F8C7E1142E2(0) == 2)
				{
					CAM::_0x2A2173E46DAECD12(0, 0);
				}
				if (CAM::_0xEE778F8C7E1142E2(0) == 4)
				{
					unk_0x79C0E43EB9B944E2(518572876);
				}
				func_168(iLocal_1651);
				iLocal_1640++;
			}
			break;
		
		case 2:
			uVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1641);
			unk_0x79C0E43EB9B944E2(518572876);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					GAMEPLAY::SET_BIT(&iLocal_1638, 31);
					func_45();
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 30))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 30);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 31);
						return 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >= 0.99f)
				{
					iVar7 = 0;
					while (iVar7 < 4)
					{
						if (Local_1655[iVar7].f_1 != -1)
						{
							if (Local_2741.f_598[Local_1655[iVar7]] == PLAYER::PLAYER_ID())
							{
								AUDIO::STOP_SOUND(Local_1655[iVar7].f_1);
								AUDIO::RELEASE_SOUND_ID(Local_1655[iVar7].f_1);
								Local_1655[iVar7].f_1 = -1;
							}
						}
						iVar7++;
					}
					func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 11);
					func_168(4);
					iLocal_1640++;
				}
			}
			break;
		
		case 3:
			unk_0x79C0E43EB9B944E2(518572876);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 30);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 31);
			return 1;
			break;
	}
	return 0;
}

var func_282(int iParam0)
{
	func_169(iParam0, &Local_2106);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_328(), &Local_2106, Local_1643, Local_1646, 0.01f, 2) };
	return Var0.z;
}

Vector3 func_283(int iParam0)
{
	func_169(iParam0, &Local_2106);
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_328(), &Local_2106, Local_1643, Local_1646, 0.01f, 2);
}

int func_284()
{
	fVar0 = 100f;
	if (2f > 0f)
	{
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_99(PLAYER::PLAYER_ID()), func_283((0 + iVar2)), 1) < fVar0 && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_285(), func_283((0 + iVar2)), 1) > 0.2f)
		{
			fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_99(PLAYER::PLAYER_ID()), func_283((0 + iVar2)), 1);
			iVar1 = (0 + iVar2);
		}
		iVar2++;
	}
	return iVar1;
}

Vector3 func_285()
{
	Var0 = { 0f, 0f, 0f };
	iVar3 = Global_2514476;
	iVar4 = Global_2514400;
	bVar5 = func_294(iVar4);
	if (bVar5)
	{
		switch (iVar3)
		{
			case 83:
				Var0 = { 0.3f, -0.85f, 0f };
				break;
			
			case 84:
				Var0 = { 0.1f, -0.9f, 0f };
				break;
			
			case 85:
				Var0 = { 0.1f, -0.9f, 0f };
				break;
			
			case 86:
				Var0 = { 0.45f, -0.4f, 0f };
				break;
			
			case 88:
				Var0 = { -0.55f, -0.54f, 0f };
				break;
			
			case 87:
				Var0 = { -0.15f, -0.6f, 0f };
				break;
			
			case 181:
				Var0 = { -0.5f, -0.65f, 0f };
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 83:
				Var0 = { -0.3f, -0.65f, 0f };
				break;
			
			case 84:
				Var0 = { -0.3f, -0.65f, 0f };
				break;
			
			case 85:
				Var0 = { 0.6f, -0.6f, 0f };
				break;
			
			case 86:
				Var0 = { 0f, -0.8f, 0f };
				break;
			
			case 88:
				Var0 = { 0.5f, -0.45f, 0f };
				break;
			
			case 87:
				Var0 = { -0.65f, -0.45f, 0f };
				break;
			}
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_290(Global_2514398, 0), func_286(Global_2514398), Var0);
}

float func_286(int iParam0)
{
	iVar0 = func_288(iParam0);
	return func_287(iVar0);
}

float func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 45f;
		
		case 1:
			return 60f;
		
		case 2:
			return 75f;
		
		case 3:
			return 90f;
		
		case 4:
			return 105f;
		
		case 5:
			return -45f;
		
		case 6:
			return -30f;
		
		case 7:
			return -15f;
		
		case 8:
			return 0f;
		
		case 9:
			return 15f;
		
		case 10:
			return 30f;
		
		case 11:
			return 45f;
		
		case 12:
			return -105f;
		
		case 13:
			return -90f;
		
		case 14:
			return -75f;
		
		case 15:
			return -60f;
		
		case 16:
			return -45f;
		
		case 17:
			return -36f;
		
		case 18:
			return -108f;
		
		case 19:
			return 180f;
		
		case 20:
			return 108f;
		
		case 21:
			return 36f;
		
		case 22:
			return -36f;
		
		case 23:
			return -108f;
		
		case 24:
			return 180f;
		
		case 25:
			return 108f;
		
		case 26:
			return 36f;
		
		case 27:
			return -36f;
		
		case 28:
			return -108f;
		
		case 29:
			return 180f;
		
		case 30:
			return 108f;
		
		case 31:
			return 36f;
		
		case 32:
			return -36f;
		
		case 33:
			return -108f;
		
		case 34:
			return 180f;
		
		case 35:
			return 108f;
		
		case 36:
			return 36f;
		
		case 37:
			return 180f;
		
		case 38:
			return 165f;
		
		case 39:
			return 150f;
		
		case 40:
			return 135f;
		
		case 41:
			return 120f;
		
		case 42:
			return 105f;
		
		case 43:
			return 90f;
		
		case 44:
			return -45f;
		
		case 45:
			return -117f;
		
		case 46:
			return 171f;
		
		case 47:
			return 99f;
		
		case 48:
			return 27f;
		
		case 49:
			return -45f;
		
		case 50:
			return -117f;
		
		case 51:
			return 171f;
		
		case 52:
			return 99f;
		
		case 53:
			return 27f;
		
		default:
	}
	return 0f;
}

int func_288(int iParam0)
{
	iVar0 = func_289(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (iVar1 < 32)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2514392, iVar1))
			{
				if (iVar2 == iVar0)
				{
					return iVar1;
				}
				else
				{
					iVar2++;
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_2514393, (iVar1 - 32)))
		{
			if (iVar2 == iVar0)
			{
				return iVar1;
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_289(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 79:
			iVar0 = 1;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 6:
			iVar0 = 4;
			break;
		
		case 77:
			iVar0 = 5;
			break;
		
		case 78:
			iVar0 = 6;
			break;
		
		case 80:
			iVar0 = 7;
			break;
		
		case 7:
			iVar0 = 8;
			break;
		
		case 36:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
	}
	return iVar0;
}

Vector3 func_290(int iParam0, int iParam1)
{
	iVar0 = func_288(iParam0);
	return func_291(iVar0, iParam1);
}

Vector3 func_291(int iParam0, int iParam1)
{
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { 1101.01f, 229.876f, -50.8409f };
			break;
		
		case 1:
			Var0 = { 1101.59f, 230.626f, -50.8409f };
			break;
		
		case 2:
			Var0 = { 1101.95f, 231.501f, -50.8409f };
			break;
		
		case 3:
			Var0 = { 1102.08f, 232.433f, -50.8409f };
			break;
		
		case 4:
			Var0 = { 1101.96f, 233.367f, -50.8409f };
			break;
		
		case 5:
			Var0 = { 1108.41f, 238.946f, -50.8409f };
			break;
		
		case 6:
			Var0 = { 1109.16f, 238.376f, -50.8409f };
			break;
		
		case 7:
			Var0 = { 1110.03f, 238.016f, -50.8409f };
			break;
		
		case 8:
			Var0 = { 1110.97f, 237.89f, -50.8409f };
			break;
		
		case 9:
			Var0 = { 1111.91f, 238.012f, -50.8409f };
			break;
		
		case 10:
			Var0 = { 1112.78f, 238.371f, -50.8409f };
			break;
		
		case 11:
			Var0 = { 1113.53f, 238.943f, -50.8409f };
			break;
		
		case 12:
			Var0 = { 1120.13f, 233.355f, -50.8409f };
			break;
		
		case 13:
			Var0 = { 1120f, 232.427f, -50.8409f };
			break;
		
		case 14:
			Var0 = { 1120.13f, 231.494f, -50.8409f };
			break;
		
		case 15:
			Var0 = { 1120.48f, 230.624f, -50.8409f };
			break;
		
		case 16:
			Var0 = { 1121.06f, 229.878f, -50.8409f };
			break;
		
		case 17:
			Var0 = { 1104.13f, 228.836f, -50.8409f };
			break;
		
		case 18:
			Var0 = { 1103.59f, 230.55f, -50.8409f };
			break;
		
		case 19:
			Var0 = { 1105.05f, 231.597f, -50.8409f };
			break;
		
		case 20:
			Var0 = { 1106.5f, 230.53f, -50.8409f };
			break;
		
		case 21:
			Var0 = { 1105.93f, 228.823f, -50.8409f };
			break;
		
		case 22:
			Var0 = { 1107.56f, 233.308f, -50.8409f };
			break;
		
		case 23:
			Var0 = { 1107.02f, 235.023f, -50.8409f };
			break;
		
		case 24:
			Var0 = { 1108.48f, 236.07f, -50.8409f };
			break;
		
		case 25:
			Var0 = { 1109.93f, 235.003f, -50.8409f };
			break;
		
		case 26:
			Var0 = { 1109.36f, 233.297f, -50.8409f };
			break;
		
		case 27:
			Var0 = { 1113.2f, 233.067f, -50.8409f };
			break;
		
		case 28:
			Var0 = { 1112.65f, 234.78f, -50.8409f };
			break;
		
		case 29:
			Var0 = { 1114.11f, 235.828f, -50.8409f };
			break;
		
		case 30:
			Var0 = { 1115.56f, 234.76f, -50.8409f };
			break;
		
		case 31:
			Var0 = { 1115f, 233.054f, -50.8409f };
			break;
		
		case 32:
			Var0 = { 1116.22f, 228.28f, -50.8409f };
			break;
		
		case 33:
			Var0 = { 1115.68f, 229.995f, -50.8409f };
			break;
		
		case 34:
			Var0 = { 1117.14f, 231.042f, -50.8409f };
			break;
		
		case 35:
			Var0 = { 1118.59f, 229.975f, -50.8409f };
			break;
		
		case 36:
			Var0 = { 1118.02f, 228.269f, -50.8409f };
			break;
		
		case 37:
			Var0 = { 1129.64f, 251.203f, -52.0409f };
			break;
		
		case 38:
			Var0 = { 1130.57f, 251.085f, -52.0409f };
			break;
		
		case 39:
			Var0 = { 1131.44f, 250.73f, -52.0409f };
			break;
		
		case 40:
			Var0 = { 1132.19f, 250.159f, -52.0409f };
			break;
		
		case 41:
			Var0 = { 1132.76f, 249.412f, -52.0409f };
			break;
		
		case 42:
			Var0 = { 1133.12f, 248.533f, -52.0409f };
			break;
		
		case 43:
			Var0 = { 1133.24f, 247.598f, -52.0409f };
			break;
		
		case 44:
			Var0 = { 1133.42f, 255.572f, -52.0409f };
			break;
		
		case 45:
			Var0 = { 1133.16f, 257.251f, -52.0409f };
			break;
		
		case 46:
			Var0 = { 1134.67f, 258.021f, -52.0409f };
			break;
		
		case 47:
			Var0 = { 1135.87f, 256.819f, -52.0409f };
			break;
		
		case 48:
			Var0 = { 1135.1f, 255.303f, -52.0409f };
			break;
		
		case 49:
			Var0 = { 1137.66f, 251.328f, -52.0409f };
			break;
		
		case 50:
			Var0 = { 1137.4f, 253.008f, -52.0409f };
			break;
		
		case 51:
			Var0 = { 1138.92f, 253.779f, -52.0409f };
			break;
		
		case 52:
			Var0 = { 1140.12f, 252.574f, -52.0409f };
			break;
		
		case 53:
			Var0 = { 1139.34f, 251.061f, -52.0409f };
			break;
	}
	if (!func_293(Var0, 0f, 0f, 0f, 0))
	{
		Var0 = { Var0 + Vector(1f, 0f, 0f) };
		if (func_292(iParam1) && iParam1 != 38)
		{
			Var0 = { Var0 + Vector(0.0191f, 0f, 0f) };
		}
	}
	return Var0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		
		default:
	}
	return 0;
}

bool func_293(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		
		default:
	}
	return 0;
}

void func_295(int iParam0, var uParam1, var uParam2)
{
	func_221(iParam0, uParam1, &fVar0);
	*uParam2 = { 0f, 0f, fVar0 };
}

void func_296(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 3:
			iVar0 = 3;
			break;
		
		case 4:
			iVar0 = 7;
			break;
		
		case 5:
			iVar0 = 4;
			break;
		
		case 6:
			iVar0 = 5;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 8;
			break;
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Local_2104, "SET_THEME");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_297()
{
	StringCopy(&cVar0, "vw_Prop_Casino_Slot_0", 24);
	StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
	StringConCat(&cVar0, "A", 24);
	iVar6 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	StringCopy(&cVar0, "machine_0", 24);
	StringIntConCat(&cVar0, Local_213[iLocal_2125].f_17, 24);
	StringConCat(&cVar0, "a", 24);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_2104))
	{
		if (!UI::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			UI::REGISTER_NAMED_RENDERTARGET(&cVar0, 0);
			if (!UI::IS_NAMED_RENDERTARGET_LINKED(iVar6))
			{
				UI::LINK_NAMED_RENDERTARGET(iVar6);
				if (Local_2104.f_1 == -1)
				{
					Local_2104.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
			else
			{
				if (Local_2104.f_1 == -1)
				{
					Local_2104.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
		}
		else if (!UI::IS_NAMED_RENDERTARGET_LINKED(iVar6))
		{
			UI::LINK_NAMED_RENDERTARGET(iVar6);
			if (Local_2104.f_1 == -1)
			{
				Local_2104.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
		else
		{
			if (Local_2104.f_1 == -1)
			{
				Local_2104.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_298()
{
	GAMEPLAY::SET_BIT(&iLocal_1638, 18);
	STREAMING::REQUEST_ANIM_DICT(func_328());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_328()))
	{
		return 1;
	}
	return 0;
}

void func_299(int iParam0)
{
	if (func_305())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_304(0))
		{
			func_300(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_300(int iParam0)
{
	if (func_305())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_303())
		{
			func_302(1, 1);
		}
		else
		{
			func_302(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_301())
	{
		Global_19486.f_1 = 3;
	}
}

int func_301()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_302(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_304(0))
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

bool func_303()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_304(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_305()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

bool func_306()
{
	return Global_4264528 == 1;
}

void func_307()
{
	MemCopy(&cVar0, {func_198(Local_213[iLocal_2125].f_17)}, 6);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, 0);
	GAMEPLAY::SET_BIT(&iLocal_1638, 23);
	if (func_271(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 19))
		{
			func_167(0, 0);
			func_269(1, &cVar0, &cVar0);
			StringCopy(&Var6, "SLOTS_TITLE", 24);
			StringIntConCat(&Var6, Local_213[iLocal_2125].f_17, 24);
			func_267(&Var6);
			func_268(-1, 1, 1);
			func_266("SLOTS_DIS", 0, 0);
			StringCopy(&Var6, "SLOTS_DIS1", 24);
			StringIntConCat(&Var6, Local_213[iLocal_2125].f_17, 24);
			func_308(&Var6);
			func_308("SLOTS_DIS2");
			func_308("SLOTS_DIS3");
			func_263(202, "SLOTS_EXIT", -1);
			func_263(201, "SLOTS_ACC", -1);
			GAMEPLAY::SET_BIT(&iLocal_1638, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
		}
		func_238(1);
		func_239(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_2127 = -1;
			func_197(-1);
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 2))
			{
				if ((func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && func_29())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_16(0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 2);
			}
			func_167(0, 0);
			func_164(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 23);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_310(0);
		}
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			func_167(0, 0);
			func_164(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 19);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 23);
			if (func_8(iLocal_2125, &Local_213))
			{
				GAMEPLAY::SET_BIT(&iLocal_1639, 1);
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_1638, 20);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_310(4);
		}
	}
}

void func_308(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_309(int iParam0)
{
	Local_3401[PLAYER::PLAYER_ID()] = iParam0;
	if (Local_2741.f_598[iParam0] != -1)
	{
		if (Local_2741.f_598[iParam0] == PLAYER::PLAYER_ID())
		{
			func_197(iParam0);
			if (func_8(iParam0, &Local_213) && GAMEPLAY::IS_BIT_SET(iLocal_1639, 1))
			{
				func_310(4);
			}
			else if (!func_8(iParam0, &Local_213) && GAMEPLAY::IS_BIT_SET(iLocal_1638, 20))
			{
				func_310(4);
			}
			else
			{
				func_310(3);
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 1) && !func_218())
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_190("SLOTS_USED", -1);
					GAMEPLAY::SET_BIT(&iLocal_1638, 1);
				}
			}
			iLocal_2127 = -1;
			func_197(-1);
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 2))
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_16(0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 2);
			}
			func_310(0);
		}
	}
}

void func_310(int iParam0)
{
	iLocal_1637 = iParam0;
}

int func_311()
{
	if ((((((((((((((((func_12(PLAYER::PLAYER_ID(), 1, 1) && func_325(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405072.f_2672) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1676377.f_4, 2)) && !func_225()) && !NETWORK::_0x2EAC52B4019E2782()) && !UI::_0x2F057596F2BD0061()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_224(1)) && !func_226()) && !func_214()) && !func_212()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !Global_2460715.f_12) && Global_1676371 != 31)
	{
		if (iLocal_2130 < 0)
		{
			iVar13 = 0;
			while (iVar13 < 8)
			{
				func_221(iLocal_2129, &Var20, &fVar23);
				Var0[0] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0.0579063f, -0.256112f, -0.197113f) };
				Var0[1] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0.0289372f, -1.85613f, 2.75002f) };
				Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0f, -0.4f, 1f) };
				Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0f, -0.6f, 1f) };
				fVar23 = func_324(func_99(PLAYER::PLAYER_ID()), Var20, 1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0], Var0[1], 1.25f, 0, 1, 0))
				{
					if ((func_323(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar23, 45f) || func_319(PLAYER::PLAYER_PED_ID(), Var7, 45f)) || func_319(PLAYER::PLAYER_PED_ID(), Var10, 45f))
					{
						iLocal_2130 = iLocal_2129;
					}
				}
				iLocal_2129++;
				if (iLocal_2129 >= 54)
				{
					iLocal_2129 = 0;
				}
				iVar13++;
			}
		}
		else
		{
			func_221(iLocal_2130, &Var20, &fVar23);
			Var0[0] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0.0579063f, -0.256112f, -0.197113f) };
			Var0[1] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0.0289372f, -1.85613f, 2.75002f) };
			Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0f, -0.4f, 1f) };
			Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0f, -0.6f, 1f) };
			fVar23 = func_324(func_99(PLAYER::PLAYER_ID()), Var20, 1);
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0], Var0[1], 1.25f, 0, 1, 0) || ((!func_323(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar23, 45f) && !func_319(PLAYER::PLAYER_PED_ID(), Var7, 45f)) && !func_319(PLAYER::PLAYER_PED_ID(), Var10, 45f)))
			{
				iLocal_2130 = -1;
			}
		}
		if (iLocal_2130 >= 0)
		{
			func_221(iLocal_2130, &Var20, &fVar23);
			Var0[0] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var20, fVar23, 0f, -0.5f, 0.77f) };
			if (Local_2741.f_598[iLocal_2130] == -1 && !func_318(iLocal_2130))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 1))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 1);
				}
				if (func_199(iLocal_2130))
				{
					if (iLocal_2124 == -1)
					{
						StringCopy(&Var14, "SLOTS_ENTER", 24);
						StringIntConCat(&Var14, Local_213[iLocal_2130].f_17, 24);
						if (!func_65())
						{
							if (func_63(PLAYER::PLAYER_ID(), 0))
							{
								iVar24 = func_62();
								if (func_60(iVar24))
								{
									if (func_317(iVar24) == 1)
									{
										StringConCat(&Var14, "c", 24);
									}
									else if (func_316(iVar24))
									{
										StringConCat(&Var14, "a", 24);
									}
									else
									{
										StringConCat(&Var14, "b", 24);
									}
								}
							}
						}
						func_315(&iLocal_2124, 3, &Var14, 0, 0, 0, 0);
					}
					if (func_314(iLocal_2124, 1))
					{
						if (iLocal_2124 != -1)
						{
							func_200(&iLocal_2124);
						}
						iLocal_2127 = iLocal_2130;
						func_17(PLAYER::PLAYER_ID(), 0, 256, 0);
						UI::DISPLAY_RADAR(0);
						func_16(1);
						CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
						CONTROLS::SET_INPUT_EXCLUSIVE(0, 200);
						CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
						CONTROLS::SET_INPUT_EXCLUSIVE(0, 199);
						CONTROLS::SET_INPUT_EXCLUSIVE(2, 199);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 2))
						{
							GAMEPLAY::SET_BIT(&iLocal_1638, 2);
						}
						return 1;
					}
				}
			}
			else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (Local_2741.f_598[iLocal_2130] != PLAYER::PLAYER_ID())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 1) && !func_218())
					{
						func_190("SLOTS_USED", -1);
						GAMEPLAY::SET_BIT(&iLocal_1638, 1);
					}
				}
			}
		}
		else
		{
			if (func_312())
			{
				UI::CLEAR_HELP(1);
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 1))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 1);
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 6))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 6);
			}
			if (iLocal_2124 != -1)
			{
				func_200(&iLocal_2124);
			}
		}
	}
	else
	{
		if (func_312())
		{
			UI::CLEAR_HELP(1);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 1))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 6))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 6);
		}
		if (iLocal_2124 != -1)
		{
			func_200(&iLocal_2124);
		}
	}
	return 0;
}

int func_312()
{
	if ((func_313("SLOTS_NOMON") || func_313("SLOTS_FAILTR")) || func_313("SLOTS_USED"))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 6))
	{
		if (((((func_313("CAS_MG_CBAN") || func_313("CAS_MG_CTIME")) || func_313("CAS_MG_LOWCHIPS1")) || func_313("CAS_MG_NOCHIPS1")) || func_204("CAS_MG_MEMB2", func_205(1))) || func_313("SLOTS_REGBAN"))
		{
			return 1;
		}
	}
	return 0;
}

var func_313(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_314(int iParam0, bool bParam1)
{
	iVar0 = func_201(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_304(0))
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

void func_315(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_200(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
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
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_316(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_317(int iParam0)
{
	if (func_63(iParam0, 1))
	{
		return Global_1628237[func_62()].f_11.f_450;
	}
	return -1;
}

int func_318(int iParam0)
{
	if (iParam0 < 32)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2514392, iParam0);
	}
	else
	{
		iParam0 = (iParam0 - 32);
		return GAMEPLAY::IS_BIT_SET(Global_2514393, iParam0);
	}
	return 0;
}

bool func_319(int iParam0, struct<3> Param1, float fParam4)
{
	return func_320(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_320(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	uVar3 = func_321(func_322(Var0), func_322(Param4 - Param0));
	return GAMEPLAY::ACOS(uVar3) <= fParam7;
}

float func_321(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_322(struct<3> Param0)
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

int func_323(float fParam0, float fParam1, float fParam2)
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

float func_324(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = GAMEPLAY::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_325(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_327(iParam0);
	iVar1 = func_326(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_326(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

char* func_328()
{
	if (func_119())
	{
		return "anim_casino_a@amb@casino@games@slots@female";
	}
	return "anim_casino_a@amb@casino@games@slots@male";
}

bool func_329(var uParam0)
{
	return uParam0->f_1;
}

void func_330()
{
	func_341();
	func_229();
	func_339();
	func_337();
	func_332();
	func_331();
}

void func_331()
{
}

void func_332()
{
	Var15 = 3;
	Var15.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1696006[iVar0].f_1 >= 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_2408[func_11(Global_1696006[iVar0].f_1)], func_10(Global_1696006[iVar0].f_1)) && func_318(Global_1696006[iVar0].f_1))
			{
				GAMEPLAY::SET_BIT(&(Local_2408[func_11(Global_1696006[iVar0].f_1)]), func_10(Global_1696006[iVar0].f_1));
			}
			if (Global_1696006[iVar0])
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_2408.f_3[func_11(Global_1696006[iVar0].f_1)], func_10(Global_1696006[iVar0].f_1)))
				{
					func_336(&Var15, Global_1696006[iVar0].f_2);
					func_9(&(Local_2408.f_6[Global_1696006[iVar0].f_1]), 0, 0);
					iVar1 = 0;
					while (iVar1 < 3)
					{
						Local_2408.f_115[Global_1696006[iVar0].f_1][iVar1] = Var15.f_4[iVar1];
						iVar1++;
					}
					GAMEPLAY::SET_BIT(&(Local_2408.f_3[func_11(Global_1696006[iVar0].f_1)]), func_10(Global_1696006[iVar0].f_1));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2408.f_3[func_11(iVar1)], func_10(iVar1)))
		{
			func_221(iVar1, &uVar3, &uVar6);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar7[iVar0] = 0;
				iVar11[iVar0] = 0;
				if (func_329(&(Local_2408.f_6[iVar1])))
				{
					if (func_5(&(Local_2408.f_6[iVar1]), (2000 + (750 * iVar0)), 0))
					{
						if (iVar0 > 0)
						{
							if (iVar11[(iVar0 - 1)])
							{
								if (func_329(&(Local_1702[iVar1][(iVar0 - 1)])))
								{
									if (func_5(&(Local_1702[iVar1][(iVar0 - 1)]), 150, 0))
									{
										iVar7[iVar0] = 1;
										if (Local_213[iVar1].f_10[iVar0] == -1f)
										{
											Local_213[iVar1].f_10[iVar0] = ((Local_2408.f_115[iVar1][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
										}
									}
								}
								else
								{
									func_6(&(Local_1702[iVar1][(iVar0 - 1)]), 0, 0);
								}
							}
						}
						else
						{
							iVar7[iVar0] = 1;
							if (Local_213[iVar1].f_10[iVar0] == -1f)
							{
								Local_213[iVar1].f_10[iVar0] = ((Local_2408.f_115[iVar1][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
				{
					if (Local_213[iVar1].f_6[iVar0] != Local_213[iVar1].f_2[iVar0])
					{
						if (!iVar7[iVar0])
						{
							func_335(iVar1, iVar0);
						}
						ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
						Local_213[iVar1].f_6[iVar0] = Local_213[iVar1].f_2[iVar0];
					}
				}
				if (iVar7[iVar0])
				{
					fVar24 = ((Local_2408.f_115[iVar1][iVar0] * 22.5f) - (Local_213[iVar1].f_2[iVar0] % 360f));
					if (GAMEPLAY::ABSF(fVar24) <= 20f || (Local_213[iVar1].f_10[iVar0] != -1f && Local_213[iVar1].f_2[iVar0] >= Local_213[iVar1].f_10[iVar0]))
					{
						if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22.5f))
						{
							func_333(iVar1, 9);
							if (Local_2408.f_115[iVar1][iVar0] == 6f)
							{
								func_333(iVar1, 10);
							}
						}
						Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22.5f);
						iVar11[iVar0] = 1;
						if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
						}
					}
					else
					{
						Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
				}
				else
				{
					Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
				}
				iVar0++;
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1652[func_11(iVar1)], func_10(iVar1)))
			{
				func_333(iVar1, 7);
				func_333(iVar1, 8);
				GAMEPLAY::SET_BIT(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
			}
			if (iVar11[2])
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Global_1696006[iVar2].f_1 == iVar1)
					{
						GAMEPLAY::CLEAR_BIT(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
						Local_213[iVar1].f_15 = -1f;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							Local_213[iVar1].f_10[iVar0] = -1f;
							if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
							{
								if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22.5f))
								{
									func_221(iVar1, &uVar3, &uVar6);
									Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22.5f);
									ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
								}
							}
							else
							{
								Local_213[iVar1].f_2[iVar0] = 0f;
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
						{
							Local_213[iVar1].f_14 = 0f;
							ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar1], 0f, 0f, uVar6, 2, 1);
						}
						func_3(&(Local_1702[iVar1][0]));
						func_3(&(Local_1702[iVar1][1]));
						func_3(&(Local_1973[iVar1]));
						Global_1696006[iVar2] = 0;
						func_3(&(Local_2408.f_6[Global_1696006[iVar2].f_1]));
						GAMEPLAY::CLEAR_BIT(&(Local_2408.f_3[func_11(Global_1696006[iVar2].f_1)]), func_10(Global_1696006[iVar2].f_1));
					}
					iVar2++;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_1696006[iVar2].f_1 == iVar1)
				{
					GAMEPLAY::CLEAR_BIT(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
					Local_213[iVar1].f_15 = -1f;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						Local_213[iVar1].f_10[iVar0] = -1f;
						if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
						{
							if (Local_213[iVar1].f_2[iVar0] != (Local_2408.f_115[iVar1][iVar0] * 22.5f))
							{
								func_221(iVar1, &uVar3, &uVar6);
								Local_213[iVar1].f_2[iVar0] = (Local_2408.f_115[iVar1][iVar0] * 22.5f);
								ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
							}
						}
						else
						{
							Local_213[iVar1].f_2[iVar0] = 0f;
						}
						iVar0++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
					{
						Local_213[iVar1].f_14 = 0f;
						ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar1], 0f, 0f, uVar6, 2, 1);
					}
					func_3(&(Local_1702[iVar1][0]));
					func_3(&(Local_1702[iVar1][1]));
					func_3(&(Local_1973[iVar1]));
					func_3(&(Local_2408.f_6[Global_1696006[iVar2].f_1]));
					GAMEPLAY::CLEAR_BIT(&(Local_2408.f_3[func_11(Global_1696006[iVar2].f_1)]), func_10(Global_1696006[iVar2].f_1));
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_333(int iParam0, int iParam1)
{
	uVar0 = func_334(Local_213[iParam0].f_17);
	func_221(iParam0, &Var1, &uVar4);
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, uVar4, 0f, -0.4f, 1f) };
	switch (iParam1)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "no_win", Var1, uVar0, 0, 20, 0);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "small_win", Var1, uVar0, 0, 20, 0);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "big_win", Var1, uVar0, 0, 20, 0);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "jackpot", Var1, uVar0, 0, 20, 0);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_bet", Var1, uVar0, 0, 20, 0);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_max_bet", Var1, uVar0, 0, 20, 0);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spinning", Var1, uVar0, 0, 20, 0);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "start_spin", Var1, uVar0, 0, 20, 0);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_clunk", Var1, uVar0, 0, 20, 0);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_on_prize", Var1, uVar0, 0, 20, 0);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "welcome_stinger", Var1, uVar0, 0, 20, 0);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel", Var1, uVar0, 0, 20, 0);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel_win", Var1, uVar0, 0, 20, 0);
			break;
	}
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_npc_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_npc_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_npc_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_npc_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_npc_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_npc_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_npc_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_npc_sounds";
		
		default:
	}
	return "";
}

void func_335(int iParam0, int iParam1)
{
	if (Local_213[iParam0].f_6[iParam1] != 0f)
	{
		fVar0 = (Local_213[iParam0].f_2[iParam1] - Local_213[iParam0].f_6[iParam1]);
		fVar1 = (fVar0 % 22.5f);
		if (GAMEPLAY::ABSF(fVar1) <= 2.5f)
		{
			if (fVar1 < 0f)
			{
				Local_213[iParam0].f_2[iParam1] = (Local_213[iParam0].f_2[iParam1] - IntToFloat(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
			else
			{
				Local_213[iParam0].f_2[iParam1] = (Local_213[iParam0].f_2[iParam1] + IntToFloat(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
		}
	}
}

void func_336(var uParam0, int iParam1)
{
	uParam0->f_4[0] = 0f;
	uParam0->f_4[1] = 0f;
	uParam0->f_4[2] = 0f;
	switch (iParam1)
	{
		case 1:
		case 2:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (iVar0 != iVar14[0] && iVar0 != 7)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 3:
		case 4:
		case 5:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar14[0] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[0] || iVar14[0] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[1] = iVar4[iVar2];
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[1] || iVar14[1] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 6:
		case 7:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 3);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
		
		case 9:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 6);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = 0;
			break;
		
		case 8:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4, 5);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = 0;
		if (iVar14[iVar0] == 0)
		{
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_1348.f_225);
			uParam0->f_4[iVar0] = (IntToFloat(iVar2) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < Local_1348.f_225)
			{
				if (Local_1348.f_226[iVar0][iVar1] == iVar14[iVar0])
				{
					iVar3++;
				}
				iVar1++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar3);
			iVar3 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_1348.f_225)
			{
				if (Local_1348.f_226[iVar0][iVar1] == iVar14[iVar0])
				{
					if (iVar3 == iVar2)
					{
						uParam0->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = Local_1348.f_225;
					}
					iVar3++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_337()
{
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2408[func_11(iVar1)], func_10(iVar1)))
		{
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_2741.f_653[func_11(iVar1)], func_10(iVar1)) || ((iVar1 == iLocal_2125 && GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 0)) && !GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2)))
		{
			if (iVar1 == iLocal_2125 && GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar7[iVar0] = 0;
					iVar11[iVar0] = 0;
					if (func_329(&(Local_2741.f_489[iVar1])))
					{
						if (func_5(&(Local_2741.f_489[iVar1]), (2000 + (750 * iVar0)), 0))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_2741.f_656[func_11(iVar1)], func_10(iVar1)))
							{
								if (iVar0 > 0)
								{
									if (iVar11[(iVar0 - 1)])
									{
										if (func_329(&(Local_1702[iVar1][(iVar0 - 1)])))
										{
											if (func_5(&(Local_1702[iVar1][(iVar0 - 1)]), 150, 0))
											{
												iVar7[iVar0] = 1;
												if (Local_213[iVar1].f_10[iVar0] == -1f)
												{
													Local_213[iVar1].f_10[iVar0] = ((Local_2741.f_217[iVar1][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
												}
											}
										}
										else
										{
											func_6(&(Local_1702[iVar1][(iVar0 - 1)]), 0, 0);
										}
									}
								}
								else
								{
									iVar7[iVar0] = 1;
									if (Local_213[iVar1].f_10[iVar0] == -1f)
									{
										Local_213[iVar1].f_10[iVar0] = ((Local_2741.f_217[iVar1][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_213[iVar1].f_2[iVar0] / 360f)) * 360));
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
					{
						if (!iVar7[iVar0])
						{
							func_335(iVar1, iVar0);
						}
						if (iLocal_2125 == iVar1)
						{
							if (!iVar7[iVar0])
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, (8 + iVar0)))
								{
									Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2131[iVar1][iVar0], 1) };
									Var3.z = (Var3.z - 10f);
									ENTITY::SET_ENTITY_COORDS(Local_2131[iVar1][iVar0], Var3, 1, 0, 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar0]))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2403[iVar0], 1) };
										Var3.z = (Var3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(uLocal_2403[iVar0], Var3, 1, 0, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2403[iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										GAMEPLAY::SET_BIT(&iLocal_1638, (8 + iVar0));
									}
								}
							}
						}
						func_221(iVar1, &Var3, &uVar6);
						ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
						if (iLocal_2125 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(uLocal_2403[iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
						}
						Local_213[iVar1].f_6[iVar0] = Local_213[iVar1].f_2[iVar0];
					}
					if (iVar7[iVar0])
					{
						fVar16 = ((Local_2741.f_217[iVar1][iVar0] * 22.5f) - (Local_213[iVar1].f_2[iVar0] % 360f));
						if (GAMEPLAY::ABSF(fVar16) <= 20f || (Local_213[iVar1].f_10[iVar0] != -1f && Local_213[iVar1].f_2[iVar0] >= Local_213[iVar1].f_10[iVar0]))
						{
							Local_213[iVar1].f_2[iVar0] = (Local_2741.f_217[iVar1][iVar0] * 22.5f);
							if (iLocal_2125 == iVar1)
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_1638, (8 + iVar0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar0]))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2131[iVar1][iVar0], 1) };
										Var3.z = (Var3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(Local_2131[iVar1][iVar0], Var3, 1, 0, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_2131[iVar1][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2403[iVar0], 1) };
										Var3.z = (Var3.z - 10f);
										ENTITY::SET_ENTITY_COORDS(uLocal_2403[iVar0], Var3, 1, 0, 0, 1);
										GAMEPLAY::CLEAR_BIT(&iLocal_1638, (8 + iVar0));
									}
									func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 9);
									if (Local_1348.f_1[0][uLocal_2091[0]] == 6)
									{
										func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 10);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
							{
								iVar11[iVar0] = 1;
								ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
								if (iLocal_2125 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar0]))
								{
									ENTITY::SET_ENTITY_ROTATION(uLocal_2403[iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
								}
							}
						}
						else
						{
							Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
						}
					}
					else
					{
						Local_213[iVar1].f_2[iVar0] = (Local_213[iVar1].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
					iVar0++;
				}
				if (iVar1 == iLocal_2125)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1652[func_11(iVar1)], func_10(iVar1)))
					{
						func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 7);
						func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 8);
						GAMEPLAY::SET_BIT(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
					}
				}
				if (func_338(iVar1, iVar11[2]))
				{
					if (!func_329(&(Local_1973[iVar1])))
					{
						func_6(&(Local_1973[iVar1]), 1, 0);
					}
					else if (func_5(&(Local_1973[iVar1]), 1000, 1) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 12))
					{
						if (iLocal_2125 == iVar1)
						{
							if (iLocal_1642 == 17)
							{
								iVar2 = func_48(Local_1348.f_1[0][uLocal_2091[0]], Local_1348.f_1[1][uLocal_2091[1]], Local_1348.f_1[2][uLocal_2091[2]]);
								func_178(3, iVar2, Local_213[iLocal_2125], -1);
								func_168(20);
							}
							if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 12))
							{
								GAMEPLAY::SET_BIT(&iLocal_1638, 12);
							}
						}
					}
					else if (func_5(&(Local_1973[iVar1]), 1250, 1))
					{
						if (!func_5(&(Local_2741.f_489[iVar1]), func_7(iVar1), 0))
						{
							if (func_5(&(Local_2741.f_489[iVar1]), (func_7(iVar1) - 2000), 0))
							{
								bVar15 = true;
								if (Local_213[iVar1].f_15 == -1f)
								{
									Local_213[iVar1].f_15 = (SYSTEM::TO_FLOAT(Local_2741.f_434[iVar1] * 30) + IntToFloat(SYSTEM::FLOOR((Local_213[iVar1].f_14 / 360f)) * 360));
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
							{
								if (iLocal_2125 == iVar1)
								{
									if (!bVar15)
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 11))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2348[iVar1], 1) };
											Var3.z = (Var3.z - 10f);
											ENTITY::SET_ENTITY_COORDS(uLocal_2348[iVar1], Var3, 1, 0, 0, 1);
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_2407))
											{
												Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2407, 1) };
												Var3.z = (Var3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(iLocal_2407, Var3, 1, 0, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_2407, INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												GAMEPLAY::SET_BIT(&iLocal_1638, 11);
											}
											func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 12);
										}
									}
								}
								func_221(iVar1, &Var3, &uVar6);
								ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, uVar6, 2, 1);
								if (iLocal_2125 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
								{
									ENTITY::SET_ENTITY_ROTATION(iLocal_2407, 0f, Local_213[iVar1].f_14, uVar6, 2, 1);
								}
							}
							if (bVar15)
							{
								fVar17 = (SYSTEM::TO_FLOAT(Local_2741.f_434[iVar1] * 30) - (Local_213[iVar1].f_14 % 360f));
								if (GAMEPLAY::ABSF(fVar17) <= 20f || (Local_213[iVar1].f_15 != -1f && Local_213[iVar1].f_14 >= Local_213[iVar1].f_15))
								{
									Local_213[iVar1].f_14 = SYSTEM::TO_FLOAT(Local_2741.f_434[iVar1] * 30);
									if (iLocal_2125 == iVar1)
									{
										if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 11))
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
											{
												Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2348[iVar1], 1) };
												Var3.z = (Var3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(uLocal_2348[iVar1], Var3, 1, 0, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2348[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2407, 1) };
												Var3.z = (Var3.z - 10f);
												ENTITY::SET_ENTITY_COORDS(iLocal_2407, Var3, 1, 0, 0, 1);
												GAMEPLAY::CLEAR_BIT(&iLocal_1638, 11);
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
										{
											ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, uVar6, 2, 1);
										}
										if (iLocal_2125 == iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
										{
											ENTITY::SET_ENTITY_ROTATION(iLocal_2407, 0f, Local_213[iVar1].f_14, uVar6, 2, 1);
										}
										func_174(PLAYER::PLAYER_ID(), Local_213[iLocal_2125].f_17, 13);
										GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
									}
								}
								else
								{
									Local_213[iVar1].f_14 = (Local_213[iVar1].f_14 + (300f * SYSTEM::TIMESTEP()));
								}
							}
							else
							{
								Local_213[iVar1].f_14 = (Local_213[iVar1].f_14 + (300f * SYSTEM::TIMESTEP()));
							}
						}
					}
				}
				else if (iLocal_2125 == iVar1 && iVar11[2])
				{
					if (func_8(iVar1, &Local_213))
					{
						if ((Local_1348.f_1[0][Local_2741[iVar1][0]] == 7 && Local_1348.f_1[1][Local_2741[iVar1][1]] == 7) && Local_1348.f_1[2][Local_2741[iVar1][2]] == 7)
						{
						}
						else
						{
							GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uLocal_1652[func_11(iVar1)]), func_10(iVar1));
			Local_213[iVar1].f_15 = -1f;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_213[iVar1].f_10[iVar0] = -1f;
				if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
				{
					if (Local_213[iVar1].f_2[iVar0] != (Local_2741.f_217[iVar1][iVar0] * 22.5f))
					{
						func_221(iVar1, &Var3, &uVar6);
						Local_213[iVar1].f_2[iVar0] = (Local_2741.f_217[iVar1][iVar0] * 22.5f);
						ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar1][iVar0], Local_213[iVar1].f_2[iVar0], 0f, uVar6, 2, 1);
					}
				}
				else
				{
					Local_213[iVar1].f_2[iVar0] = 0f;
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
			{
				if (Local_213[iVar1].f_14 != SYSTEM::TO_FLOAT(Local_2741.f_434[iVar1] * 30))
				{
					func_221(iVar1, &Var3, &uVar6);
					Local_213[iVar1].f_14 = SYSTEM::TO_FLOAT(Local_2741.f_434[iVar1] * 30);
					ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar1], 0f, Local_213[iVar1].f_14, uVar6, 2, 1);
				}
			}
			else
			{
				Local_213[iVar1].f_14 = 0f;
			}
			if (iLocal_2125 == iVar1)
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 12))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 12);
				}
				if (GAMEPLAY::IS_BIT_SET(Local_3401[PLAYER::PLAYER_ID()].f_10, 2) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 3))
				{
					func_3(&(Local_1702[iVar1][0]));
					func_3(&(Local_1702[iVar1][1]));
					func_3(&(Local_1973[iVar1]));
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 2);
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 0);
					GAMEPLAY::CLEAR_BIT(&(Local_3401[PLAYER::PLAYER_ID()].f_10), 1);
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 0);
					GAMEPLAY::SET_BIT(&iLocal_1639, 2);
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 11))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar1]))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2348[iVar1], 1) };
						Var3.z = (Var3.z + 10f);
						ENTITY::SET_ENTITY_COORDS(uLocal_2348[iVar1], Var3, 1, 0, 0, 1);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2348[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
						Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2407, 1) };
						Var3.z = (Var3.z - 10f);
						ENTITY::SET_ENTITY_COORDS(iLocal_2407, Var3, 1, 0, 0, 1);
					}
					GAMEPLAY::CLEAR_BIT(&iLocal_1638, 11);
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, (8 + iVar0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar1][iVar0]))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2131[iVar1][iVar0], 1) };
							Var3.z = (Var3.z + 10f);
							ENTITY::SET_ENTITY_COORDS(Local_2131[iVar1][iVar0], Var3, 1, 0, 0, 1);
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_2131[iVar1][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
							Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2403[iVar0], 1) };
							Var3.z = (Var3.z - 10f);
							ENTITY::SET_ENTITY_COORDS(uLocal_2403[iVar0], Var3, 1, 0, 0, 1);
						}
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, (8 + iVar0));
					}
					iVar0++;
				}
			}
			else
			{
				func_3(&(Local_1702[iVar1][0]));
				func_3(&(Local_1702[iVar1][1]));
				func_3(&(Local_1973[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_338(int iParam0, var uParam1)
{
	if (((func_8(iParam0, &Local_213) && Local_1348.f_1[0][Local_2741[iParam0][0]] == 7) && Local_1348.f_1[1][Local_2741[iParam0][1]] == 7) && Local_1348.f_1[2][Local_2741[iParam0][2]] == 7)
	{
		if (func_329(&(Local_2741.f_489[iParam0])))
		{
			if (uParam1 || func_5(&(Local_2741.f_489[iParam0]), 6500, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339()
{
	iVar2 = 0;
	while (iVar2 < 54)
	{
		if (func_340(iVar2))
		{
			if (func_8(iVar2, &Local_213))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar2]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_vw_slot_wheel_0", 64);
						StringIntConCat(&cVar7, Local_213[iVar2].f_17, 64);
						StringConCat(&cVar7, "a", 64);
						iVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
						STREAMING::REQUEST_MODEL(iVar0);
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							func_221(iVar2, &Var3, &uVar6);
							Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, uVar6, 0f, -0.12f, 1.6f) };
							uLocal_2348[iVar2] = OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_2348[iVar2], true);
							ENTITY::SET_ENTITY_ROTATION(uLocal_2348[iVar2], 0f, 0f, fVar6, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar2][iVar1]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_Casino_Slot_0", 64);
						StringIntConCat(&cVar7, Local_213[iVar2].f_17, 64);
						StringConCat(&cVar7, "a_reels", 64);
						iVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
						STREAMING::REQUEST_MODEL(iVar0);
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							func_221(iVar2, &Var3, &fVar6);
							if (iVar1 == 0)
							{
								Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, -0.115f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 1)
							{
								Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, 0.005f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 2)
							{
								Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, 0.125f, 0.047f, 0.906f) };
							}
							Local_2131[iVar2][iVar1] = OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_2131[iVar2][iVar1], true);
							ENTITY::SET_ENTITY_COLLISION(Local_2131[iVar2][iVar1], false, 0);
							ENTITY::SET_ENTITY_ROTATION(Local_2131[iVar2][iVar1], 0f, 0f, fVar6, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar2][iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_2131[iVar2][iVar1]));
				}
				iVar1++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_2348[iVar2]));
			}
		}
		iVar2++;
	}
	if (iLocal_2125 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar1]))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "Vw_prop_casino_slot_0", 64);
					StringIntConCat(&cVar7, Local_213[iLocal_2125].f_17, 64);
					StringConCat(&cVar7, "b_reels", 64);
					iVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
					STREAMING::REQUEST_MODEL(iVar0);
					if (STREAMING::HAS_MODEL_LOADED(iVar0))
					{
						func_221(iLocal_2125, &Var3, &fVar6);
						if (iVar1 == 0)
						{
							Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, -0.115f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 1)
						{
							Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, 0.005f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 2)
						{
							Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, 0.125f, 0.047f, 0.906f) };
						}
						Var3.z = (Var3.z - 10f);
						uLocal_2403[iVar1] = OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_2403[iVar1], true);
						ENTITY::SET_ENTITY_ROTATION(uLocal_2403[iVar1], 0f, 0f, fVar6, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
			iVar1++;
		}
		if (func_8(iLocal_2125, &Local_213))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "vw_prop_vw_slot_wheel_0", 64);
					StringIntConCat(&cVar7, Local_213[iLocal_2125].f_17, 64);
					StringConCat(&cVar7, "b", 64);
					iVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
					STREAMING::REQUEST_MODEL(iVar0);
					if (STREAMING::HAS_MODEL_LOADED(iVar0))
					{
						func_221(iLocal_2125, &Var3, &fVar6);
						Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, 0f, -0.12f, 1.6f) };
						Var3.z = (Var3.z - 10f);
						iLocal_2407 = OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2407, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_2407, 0f, 0f, fVar6, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_2403[iVar1]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
		{
			OBJECT::DELETE_OBJECT(&iLocal_2407);
		}
	}
}

int func_340(int iParam0)
{
	func_221(iParam0, &Var0, &uVar3);
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_99(PLAYER::PLAYER_ID()), Var0, 1) <= 10f)
	{
		return 1;
	}
	return 0;
}

void func_341()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1655[iVar0].f_1 == -1)
		{
			iVar1 = func_342(Local_1655[iVar0], iVar0);
			if (iVar1 != -1)
			{
				Local_1655[iVar0] = iVar1;
				Local_1655[iVar0].f_1 = AUDIO::GET_SOUND_ID();
				func_221(iVar1, &Var2, &uVar5);
				Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, uVar5, 0f, -0.2f, 1f) };
				uVar6 = func_175(Local_213[iVar1].f_17);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_1655[iVar0].f_1, "attract_loop", Var2, uVar6, 0, 0, 0);
			}
		}
		else if (func_318(Local_1655[iVar0]) || Local_2741.f_598[Local_1655[iVar0]] != -1)
		{
			if (Local_2741.f_598[Local_1655[iVar0]] != PLAYER::PLAYER_ID())
			{
				AUDIO::STOP_SOUND(Local_1655[iVar0].f_1);
				AUDIO::RELEASE_SOUND_ID(Local_1655[iVar0].f_1);
				Local_1655[iVar0].f_1 = -1;
			}
		}
		else if (AUDIO::HAS_SOUND_FINISHED(Local_1655[iVar0].f_1))
		{
			AUDIO::RELEASE_SOUND_ID(Local_1655[iVar0].f_1);
			Local_1655[iVar0].f_1 = -1;
		}
		iVar0++;
	}
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 < 2)
	{
		iVar40 = 0;
		iVar41 = 35;
	}
	else
	{
		iVar40 = 36;
		iVar41 = 53;
	}
	iVar38 = iVar40;
	while (iVar38 <= iVar41)
	{
		if (Local_2741.f_598[iVar38] == -1 && !func_318(iVar38))
		{
			bVar42 = false;
			iVar39 = 0;
			while (iVar39 < 4)
			{
				if (Local_1655[iVar39] == iVar38)
				{
					bVar42 = true;
					iVar39 = 4;
				}
				iVar39++;
			}
			if (!bVar42)
			{
				iVar0[iVar37] = iVar38;
				iVar37++;
			}
		}
		iVar38++;
	}
	iVar43 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar37);
	iVar38 = 0;
	while (iVar38 < iVar37)
	{
		if (iParam0 != -1 && (iVar0[iVar43] == iParam0 || Local_213[iVar0[iVar43]].f_17 == Local_213[iParam0].f_17))
		{
			iVar43++;
			if (iVar43 >= iVar37)
			{
				iVar43 = 0;
			}
		}
		else
		{
			return iVar0[iVar43];
		}
		iVar38++;
	}
	return -1;
}

void func_343()
{
	if (func_347())
	{
		func_360();
	}
	if (Global_1696040)
	{
		Global_1696040 = 0;
		func_360();
	}
	if (Global_2405072.f_2672 && Global_2409287 != 0)
	{
		if (Global_2409287 != 6)
		{
			func_360();
		}
	}
	if (!func_345(PLAYER::PLAYER_ID()))
	{
		func_360();
	}
	if ((func_344() && Global_1676377.f_3326 != 123) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_360();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_34, 9))
	{
		func_360();
	}
}

bool func_344()
{
	return GAMEPLAY::IS_BIT_SET(Global_1676377.f_3, 2);
}

int func_345(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_346(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
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

int func_347()
{
	func_355(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_354())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_353())
	{
		return 1;
	}
	if (func_352(159))
	{
		if (!func_351())
		{
			return 1;
		}
	}
	if (func_352(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_348() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_348()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_348()
{
	switch (func_350())
	{
		case 0:
			return func_349();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_349()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_350()
{
	return Global_30768;
}

bool func_351()
{
	return Global_2450632.f_598;
}

int func_352(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_353()
{
	return Global_2460680;
}

bool func_354()
{
	return Global_2450632.f_593;
}

void func_355(var uParam0)
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
					func_356(iVar0);
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

void func_356(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_357(uVar4, &bVar5))
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

int func_357(int iParam0, var uParam1)
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

void func_358()
{
	SYSTEM::WAIT(0);
}

void func_359(var uParam0, var uParam1)
{
	uParam0->f_1[0][0] = 0;
	uParam0->f_1[0][1] = 6;
	uParam0->f_1[0][2] = 1;
	uParam0->f_1[0][3] = 2;
	uParam0->f_1[0][4] = 3;
	uParam0->f_1[0][5] = 4;
	uParam0->f_1[0][6] = 7;
	uParam0->f_1[0][7] = 2;
	uParam0->f_1[0][8] = 1;
	uParam0->f_1[0][9] = 3;
	uParam0->f_1[0][10] = 4;
	uParam0->f_1[0][11] = 1;
	uParam0->f_1[0][12] = 0;
	uParam0->f_1[0][13] = 5;
	uParam0->f_1[0][14] = 1;
	uParam0->f_1[0][15] = 0;
	uParam0->f_1[0][16] = 3;
	uParam0->f_1[0][17] = 0;
	uParam0->f_1[0][18] = 4;
	uParam0->f_1[0][19] = 2;
	uParam0->f_1[0][20] = 1;
	uParam0->f_1[0][21] = 2;
	uParam0->f_1[0][22] = 1;
	uParam0->f_1[0][23] = 1;
	uParam0->f_1[0][24] = 7;
	uParam0->f_1[0][25] = 3;
	uParam0->f_1[0][26] = 1;
	uParam0->f_1[0][27] = 2;
	uParam0->f_1[0][28] = 4;
	uParam0->f_1[0][29] = 5;
	uParam0->f_1[0][30] = 7;
	uParam0->f_1[0][31] = 3;
	uParam0->f_1[0][32] = 0;
	uParam0->f_1[0][33] = 4;
	uParam0->f_1[0][34] = 6;
	uParam0->f_1[0][35] = 1;
	uParam0->f_1[0][36] = 2;
	uParam0->f_1[0][37] = 0;
	uParam0->f_1[0][38] = 2;
	uParam0->f_1[0][39] = 0;
	uParam0->f_1[0][40] = 3;
	uParam0->f_1[0][41] = 5;
	uParam0->f_1[0][42] = 3;
	uParam0->f_1[0][43] = 4;
	uParam0->f_1[0][44] = 2;
	uParam0->f_1[0][45] = 1;
	uParam0->f_1[0][46] = 2;
	uParam0->f_1[0][47] = 1;
	uParam0->f_1[0][48] = 6;
	uParam0->f_1[0][49] = 1;
	uParam0->f_1[0][50] = 7;
	uParam0->f_1[0][51] = 5;
	uParam0->f_1[0][52] = 7;
	uParam0->f_1[0][53] = 1;
	uParam0->f_1[0][54] = 2;
	uParam0->f_1[0][55] = 4;
	uParam0->f_1[0][56] = 1;
	uParam0->f_1[0][57] = 2;
	uParam0->f_1[0][58] = 3;
	uParam0->f_1[0][59] = 5;
	uParam0->f_1[0][60] = 7;
	uParam0->f_1[0][61] = 4;
	uParam0->f_1[0][62] = 0;
	uParam0->f_1[0][63] = 6;
	uParam0->f_1[1][0] = 3;
	uParam0->f_1[1][1] = 0;
	uParam0->f_1[1][2] = 1;
	uParam0->f_1[1][3] = 6;
	uParam0->f_1[1][4] = 3;
	uParam0->f_1[1][5] = 1;
	uParam0->f_1[1][6] = 0;
	uParam0->f_1[1][7] = 3;
	uParam0->f_1[1][8] = 2;
	uParam0->f_1[1][9] = 7;
	uParam0->f_1[1][10] = 5;
	uParam0->f_1[1][11] = 0;
	uParam0->f_1[1][12] = 1;
	uParam0->f_1[1][13] = 7;
	uParam0->f_1[1][14] = 4;
	uParam0->f_1[1][15] = 0;
	uParam0->f_1[1][16] = 1;
	uParam0->f_1[1][17] = 1;
	uParam0->f_1[1][18] = 0;
	uParam0->f_1[1][19] = 2;
	uParam0->f_1[1][20] = 5;
	uParam0->f_1[1][21] = 1;
	uParam0->f_1[1][22] = 4;
	uParam0->f_1[1][23] = 0;
	uParam0->f_1[1][24] = 3;
	uParam0->f_1[1][25] = 0;
	uParam0->f_1[1][26] = 3;
	uParam0->f_1[1][27] = 0;
	uParam0->f_1[1][28] = 1;
	uParam0->f_1[1][29] = 0;
	uParam0->f_1[1][30] = 6;
	uParam0->f_1[1][31] = 0;
	uParam0->f_1[1][32] = 0;
	uParam0->f_1[1][33] = 1;
	uParam0->f_1[1][34] = 0;
	uParam0->f_1[1][35] = 3;
	uParam0->f_1[1][36] = 0;
	uParam0->f_1[1][37] = 1;
	uParam0->f_1[1][38] = 0;
	uParam0->f_1[1][39] = 2;
	uParam0->f_1[1][40] = 2;
	uParam0->f_1[1][41] = 4;
	uParam0->f_1[1][42] = 0;
	uParam0->f_1[1][43] = 0;
	uParam0->f_1[1][44] = 0;
	uParam0->f_1[1][45] = 7;
	uParam0->f_1[1][46] = 0;
	uParam0->f_1[1][47] = 2;
	uParam0->f_1[1][48] = 7;
	uParam0->f_1[1][49] = 5;
	uParam0->f_1[1][50] = 0;
	uParam0->f_1[1][51] = 1;
	uParam0->f_1[1][52] = 0;
	uParam0->f_1[1][53] = 0;
	uParam0->f_1[1][54] = 0;
	uParam0->f_1[1][55] = 1;
	uParam0->f_1[1][56] = 5;
	uParam0->f_1[1][57] = 5;
	uParam0->f_1[1][58] = 0;
	uParam0->f_1[1][59] = 7;
	uParam0->f_1[1][60] = 0;
	uParam0->f_1[1][61] = 0;
	uParam0->f_1[1][62] = 1;
	uParam0->f_1[1][63] = 6;
	uParam0->f_1[2][0] = 0;
	uParam0->f_1[2][1] = 1;
	uParam0->f_1[2][2] = 7;
	uParam0->f_1[2][3] = 6;
	uParam0->f_1[2][4] = 0;
	uParam0->f_1[2][5] = 2;
	uParam0->f_1[2][6] = 2;
	uParam0->f_1[2][7] = 4;
	uParam0->f_1[2][8] = 0;
	uParam0->f_1[2][9] = 1;
	uParam0->f_1[2][10] = 0;
	uParam0->f_1[2][11] = 5;
	uParam0->f_1[2][12] = 0;
	uParam0->f_1[2][13] = 2;
	uParam0->f_1[2][14] = 5;
	uParam0->f_1[2][15] = 0;
	uParam0->f_1[2][16] = 0;
	uParam0->f_1[2][17] = 3;
	uParam0->f_1[2][18] = 0;
	uParam0->f_1[2][19] = 1;
	uParam0->f_1[2][20] = 0;
	uParam0->f_1[2][21] = 0;
	uParam0->f_1[2][22] = 0;
	uParam0->f_1[2][23] = 2;
	uParam0->f_1[2][24] = 1;
	uParam0->f_1[2][25] = 0;
	uParam0->f_1[2][26] = 1;
	uParam0->f_1[2][27] = 0;
	uParam0->f_1[2][28] = 0;
	uParam0->f_1[2][29] = 2;
	uParam0->f_1[2][30] = 0;
	uParam0->f_1[2][31] = 1;
	uParam0->f_1[2][32] = 0;
	uParam0->f_1[2][33] = 4;
	uParam0->f_1[2][34] = 0;
	uParam0->f_1[2][35] = 4;
	uParam0->f_1[2][36] = 0;
	uParam0->f_1[2][37] = 0;
	uParam0->f_1[2][38] = 0;
	uParam0->f_1[2][39] = 3;
	uParam0->f_1[2][40] = 0;
	uParam0->f_1[2][41] = 4;
	uParam0->f_1[2][42] = 0;
	uParam0->f_1[2][43] = 0;
	uParam0->f_1[2][44] = 7;
	uParam0->f_1[2][45] = 0;
	uParam0->f_1[2][46] = 2;
	uParam0->f_1[2][47] = 0;
	uParam0->f_1[2][48] = 5;
	uParam0->f_1[2][49] = 4;
	uParam0->f_1[2][50] = 0;
	uParam0->f_1[2][51] = 3;
	uParam0->f_1[2][52] = 0;
	uParam0->f_1[2][53] = 0;
	uParam0->f_1[2][54] = 0;
	uParam0->f_1[2][55] = 3;
	uParam0->f_1[2][56] = 0;
	uParam0->f_1[2][57] = 3;
	uParam0->f_1[2][58] = 0;
	uParam0->f_1[2][59] = 2;
	uParam0->f_1[2][60] = 4;
	uParam0->f_1[2][61] = 0;
	uParam0->f_1[2][62] = 0;
	uParam0->f_1[2][63] = 6;
	uParam0->f_278[0] = 0;
	uParam0->f_278[1] = 25;
	uParam0->f_278[2] = 50;
	uParam0->f_278[3] = 75;
	uParam0->f_278[4] = 100;
	uParam0->f_278[5] = 250;
	uParam0->f_278[6] = 1000;
	uParam0->f_278[7] = 500;
	uParam0->f_278[8] = 5;
	uParam0->f_278[9] = 2;
	uParam0->f_226[0][0] = 5;
	uParam0->f_226[0][1] = 2;
	uParam0->f_226[0][2] = 1;
	uParam0->f_226[0][3] = 3;
	uParam0->f_226[0][4] = 7;
	uParam0->f_226[0][5] = 6;
	uParam0->f_226[0][6] = 1;
	uParam0->f_226[0][7] = 4;
	uParam0->f_226[0][8] = 5;
	uParam0->f_226[0][9] = 2;
	uParam0->f_226[0][10] = 3;
	uParam0->f_226[0][11] = 7;
	uParam0->f_226[0][12] = 2;
	uParam0->f_226[0][13] = 4;
	uParam0->f_226[0][14] = 1;
	uParam0->f_226[0][15] = 7;
	uParam0->f_226[1][0] = 5;
	uParam0->f_226[1][1] = 2;
	uParam0->f_226[1][2] = 1;
	uParam0->f_226[1][3] = 3;
	uParam0->f_226[1][4] = 7;
	uParam0->f_226[1][5] = 6;
	uParam0->f_226[1][6] = 1;
	uParam0->f_226[1][7] = 4;
	uParam0->f_226[1][8] = 5;
	uParam0->f_226[1][9] = 2;
	uParam0->f_226[1][10] = 3;
	uParam0->f_226[1][11] = 7;
	uParam0->f_226[1][12] = 2;
	uParam0->f_226[1][13] = 4;
	uParam0->f_226[1][14] = 1;
	uParam0->f_226[1][15] = 7;
	uParam0->f_226[2][0] = 5;
	uParam0->f_226[2][1] = 2;
	uParam0->f_226[2][2] = 1;
	uParam0->f_226[2][3] = 3;
	uParam0->f_226[2][4] = 7;
	uParam0->f_226[2][5] = 6;
	uParam0->f_226[2][6] = 1;
	uParam0->f_226[2][7] = 4;
	uParam0->f_226[2][8] = 5;
	uParam0->f_226[2][9] = 2;
	uParam0->f_226[2][10] = 3;
	uParam0->f_226[2][11] = 7;
	uParam0->f_226[2][12] = 2;
	uParam0->f_226[2][13] = 4;
	uParam0->f_226[2][14] = 1;
	uParam0->f_226[2][15] = 7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			uParam0->f_197[iVar0][uParam0->f_1[iVar0][iVar1]]++;
			iVar1++;
		}
		iVar0++;
	}
	uParam1[0]->f_17 = 4;
	uParam1[1]->f_17 = 5;
	uParam1[2]->f_17 = 6;
	uParam1[3]->f_17 = 7;
	uParam1[4]->f_17 = 8;
	uParam1[5]->f_17 = 1;
	uParam1[6]->f_17 = 2;
	uParam1[7]->f_17 = 3;
	uParam1[8]->f_17 = 4;
	uParam1[9]->f_17 = 5;
	uParam1[10]->f_17 = 6;
	uParam1[11]->f_17 = 7;
	uParam1[12]->f_17 = 1;
	uParam1[13]->f_17 = 2;
	uParam1[14]->f_17 = 3;
	uParam1[15]->f_17 = 4;
	uParam1[16]->f_17 = 5;
	uParam1[17]->f_17 = 4;
	uParam1[18]->f_17 = 5;
	uParam1[19]->f_17 = 1;
	uParam1[20]->f_17 = 2;
	uParam1[21]->f_17 = 3;
	uParam1[22]->f_17 = 7;
	uParam1[23]->f_17 = 8;
	uParam1[24]->f_17 = 4;
	uParam1[25]->f_17 = 5;
	uParam1[26]->f_17 = 6;
	uParam1[27]->f_17 = 4;
	uParam1[28]->f_17 = 5;
	uParam1[29]->f_17 = 1;
	uParam1[30]->f_17 = 2;
	uParam1[31]->f_17 = 3;
	uParam1[32]->f_17 = 7;
	uParam1[33]->f_17 = 8;
	uParam1[34]->f_17 = 4;
	uParam1[35]->f_17 = 5;
	uParam1[36]->f_17 = 6;
	uParam1[37]->f_17 = 8;
	uParam1[38]->f_17 = 7;
	uParam1[39]->f_17 = 6;
	uParam1[40]->f_17 = 5;
	uParam1[41]->f_17 = 4;
	uParam1[42]->f_17 = 3;
	uParam1[43]->f_17 = 2;
	uParam1[44]->f_17 = 3;
	uParam1[45]->f_17 = 4;
	uParam1[46]->f_17 = 5;
	uParam1[47]->f_17 = 1;
	uParam1[48]->f_17 = 2;
	uParam1[49]->f_17 = 6;
	uParam1[50]->f_17 = 7;
	uParam1[51]->f_17 = 8;
	uParam1[52]->f_17 = 4;
	uParam1[53]->f_17 = 5;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		switch (uParam1[iVar0]->f_17)
		{
			case 1:
			case 6:
				uParam1[iVar0]->f_16 = 100;
				break;
			
			case 2:
			case 3:
				uParam1[iVar0]->f_16 = 25;
				break;
			
			case 4:
			case 8:
				uParam1[iVar0]->f_16 = 5;
				break;
			
			case 5:
			case 7:
				uParam1[iVar0]->f_16 = 500;
				break;
		}
		iVar0++;
	}
}

void func_360()
{
	if (iLocal_2124 != -1)
	{
		func_200(&iLocal_2124);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
	}
	if (iLocal_2125 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 23))
		{
			Var0 = { func_198(Local_213[iLocal_2125].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 23);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 19))
		{
			func_167(0, 0);
			func_164(1, -1);
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 19);
		}
		func_219(0);
	}
	func_186();
	func_32();
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 7);
		func_34();
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 13))
	{
		if (func_223())
		{
			func_222(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 13);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 18))
	{
		STREAMING::REMOVE_ANIM_DICT(func_328());
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 18);
	}
	iVar9 = 0;
	while (iVar9 < 54)
	{
		iVar8 = 0;
		while (iVar8 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2131[iVar9][iVar8]))
			{
				OBJECT::DELETE_OBJECT(&(Local_2131[iVar9][iVar8]));
			}
			iVar8++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2348[iVar9]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_2348[iVar9]));
		}
		iVar9++;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2403[iVar8]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_2403[iVar8]));
		}
		iVar8++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2407))
	{
		OBJECT::DELETE_OBJECT(&iLocal_2407);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 2))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (UI::IS_RADAR_HIDDEN())
		{
			UI::DISPLAY_RADAR(1);
		}
		func_16(0);
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 2);
	}
	func_167(0, 0);
	func_164(1, -1);
	func_361();
}

void func_361()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_362()
{
	if (Global_1696040)
	{
		Global_1696040 = 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_364(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_2741, 660);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_3401, 353);
	if (!func_363())
	{
		func_360();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		func_360();
	}
}

int func_363()
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
		if (func_354())
		{
			return 0;
		}
		if (func_352(157))
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

int func_364(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_361();
			}
			else
			{
				return 0;
			}
		}
		if (!func_365())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_361();
					}
					else
					{
						return 0;
					}
				}
				if (func_354())
				{
					if (!bParam2)
					{
						func_361();
					}
					else
					{
						return 0;
					}
				}
				if (func_352(157))
				{
					if (!bParam2)
					{
						func_361();
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
					func_361();
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
				func_361();
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
			func_361();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_365()
{
	return Global_1312854;
}

void func_366()
{
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Local_2741.f_598[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1655[iVar0].f_1 = -1;
		Local_1655[iVar0] = -1;
		iVar0++;
	}
}

