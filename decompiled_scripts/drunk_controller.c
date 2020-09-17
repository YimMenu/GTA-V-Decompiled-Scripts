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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_31();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()
{
	if (Global_42562)
	{
		return 1;
	}
	if (CAM::DOES_CAM_EXIST(Global_42563))
	{
		return 1;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1071358210) > 0)
	{
		return 1;
	}
	if (Global_42355 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_42562)
	{
		return;
	}
	iVar1 = GAMEPLAY::GET_GAME_TIMER();
	if (Global_42564 > iVar1 || Global_42564 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_42567 != Global_42568)
		{
			fVar6 = (Global_42568 - Global_42567);
			Global_42567 = (Global_42567 + (fVar6 * 0.1f));
			if (GAMEPLAY::ABSF((Global_42567 - Global_42568)) < 0.01f)
			{
				Global_42567 = Global_42568;
			}
		}
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", ((Global_42567 * fVar3) * fVar5));
		}
		if ((GAMEPLAY::GET_GAME_TIMER() % 100) == 0)
		{
			if (Global_42564 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(((Global_42567 * fVar3) * fVar5));
				CAM::_0x487A82C650EB7799(((Global_42566 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_42566 * fVar3) * fVar5) < 1f)
		{
			CAM::_0x0225778816FDC28C(((Global_42566 * fVar3) * fVar5));
		}
		else
		{
			CAM::_0x0225778816FDC28C(1f);
		}
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		{
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (((Global_42567 * Global_42561) * fVar3) * fVar5));
		}
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE((((Global_42567 * Global_42561) * fVar3) * fVar5));
		if (CAM::DOES_CAM_EXIST(Global_42563))
		{
			if (CAM::IS_CAM_SHAKING(Global_42563))
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_42563, ((Global_42567 * fVar3) * fVar5));
			}
		}
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_42590) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_42574))
		{
			AUDIO::START_AUDIO_SCENE(&Global_42574);
			StringCopy(&Global_42590, "", 16);
		}
		CAM::_0xF4F2C0D4EE209E20();
		if (Global_42569 > 0f)
		{
			if (fLocal_16 != Global_42569)
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
				{
				}
				else if (!unk_0x98D18905BF723B99())
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_42570, 15f);
					fLocal_16 = Global_42569;
				}
			}
			else
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					fLocal_16 = -99f;
				}
				AUDIO::_0x12561FCBB62D5B9C(2);
				iVar7 = (Global_42564 - iVar1);
				if (iVar7 <= (Global_42565 / 2) && Global_42564 != -1)
				{
					bVar8 = false;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							bVar8 = true;
						}
					}
					if (func_6(PLAYER::PLAYER_PED_ID()))
					{
						Global_42564 += 1000;
					}
					else if (bVar8)
					{
						Global_42564 += 1000;
					}
					else if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
					{
						Global_42564 += 1000;
					}
					else if (func_5())
					{
						Global_42564 += 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05((SYSTEM::TO_FLOAT((Global_42565 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_42569 = 0f;
						StringCopy(&Global_42570, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	CAM::_0x487A82C650EB7799(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_42574))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_42574))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_42574);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_42563))
	{
		if (CAM::IS_CAM_SHAKING(Global_42563))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_42563, 0f);
			CAM::STOP_CAM_SHAKING(Global_42563, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
	StringCopy(&Global_42574, "", 64);
	StringCopy(&Global_42590, "", 16);
	func_4();
}

void func_4()
{
	Global_42562 = 0;
	Global_42563 = 0;
	Global_42564 = 0;
	Global_42565 = 30000;
	Global_42566 = 0f;
	Global_42568 = 0f;
	Global_42567 = 0f;
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
}

bool func_5()
{
	return Global_2514785;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_8()
{
	fVar0 = 0.1f;
	iVar1 = func_12(PLAYER::PLAYER_PED_ID());
	iVar2 = func_9(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_4;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
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

int func_12(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

float func_13()
{
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = (Global_42564 - iVar0);
	if (iVar2 <= Global_42565)
	{
		if (Global_42564 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_42565));
		}
	}
	return fVar1;
}

void func_14()
{
	if (Global_42357[iLocal_15] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_42357[iParam0].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_42357[iParam0].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_42383[iVar0] = func_16();
	Global_42383[iVar0].f_1 = Global_42357[iParam0].f_1;
	Global_42383[iVar0].f_2 = 0;
	Var1 = { Global_42357[iParam0] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_18(iParam0);
}

var func_16()
{
	uVar0 = Global_42354;
	Global_42354++;
	return uVar0;
}

int func_17()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0].f_1 == 0)
	{
		if (Global_42357[iParam0].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0] = 13;
	Global_42357[iParam0].f_1 = 0;
	Global_42357[iParam0].f_2 = 0;
	Global_42357[iParam0].f_3 = 0;
	Global_42357[iParam0].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

void func_19()
{
	if (!Global_42464[iLocal_13].f_2 == 6)
	{
		if (Global_42464[iLocal_13].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42464[iParam0] = -1;
	Global_42464[iParam0].f_1 = -1;
	Global_42464[iParam0].f_2 = 6;
	Global_42464[iParam0].f_3 = 0;
	Global_42464[iParam0].f_4 = 0;
}

void func_21(int iParam0)
{
	iVar0 = Global_42464[iParam0].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_22()
{
	iVar0 = -1;
	if (!Global_42383[iLocal_14] == -1)
	{
		iVar0 = func_28(Global_42383[iLocal_14], 0);
		if (iVar0 == -1)
		{
			func_23(Global_42383[iLocal_14]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)
{
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42383[iParam0] = -1;
	Global_42383[iParam0].f_1 = 0;
	Global_42383[iParam0].f_2 = -1;
	Global_42383[iParam0].f_3 = 0;
	Global_42383[iParam0].f_4 = 0;
}

int func_25(int iParam0)
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

void func_26(int iParam0)
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_42464[iVar0].f_2)
		{
			if (iParam0 == Global_42464[iVar0])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()
{
	if (Global_42464[iLocal_13] == 1)
	{
		Global_42464[iLocal_13] = 0;
	}
}

void func_30(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_32()
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_42595 = 0;
	Global_42594 = 0;
	Global_42355 = 0;
	GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
}

void func_33()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

