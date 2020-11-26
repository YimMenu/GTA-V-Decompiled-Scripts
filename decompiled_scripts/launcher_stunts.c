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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 5 } ;
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
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	fLocal_79 = 0f;
	Local_56 = { ScriptParam_85.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_113(1);
	}
	iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_59 = 0;
	func_111(&Global_110289, 0);
	func_110();
	if (func_109(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_37199)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_109(uLocal_58, 8))
	{
		if (!func_107(iLocal_64))
		{
			if (func_106(0, iLocal_63))
			{
				func_113(0);
			}
			else
			{
				func_113(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_106(0, iLocal_63))
		{
			func_113(1);
		}
	}
	if (func_109(uLocal_58, 8388608))
	{
		func_113(1);
	}
	if (func_109(uLocal_58, 524288) && (func_105() && !func_104()))
	{
		func_113(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_109(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_103(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_102(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (func_101() && !Global_110685)
		{
			func_100(1);
		}
		else if (Global_110685)
		{
		}
	}
	while (true)
	{
		if ((!func_99() && !func_98()) && !func_97())
		{
			func_113(1);
		}
		iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_109(uLocal_58, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				func_113(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
		{
			Local_55 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(Local_55, ScriptParam_85.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_85.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = SYSTEM::VDIST2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_107(iLocal_64) || (func_109(uLocal_58, 16) && !func_109(uLocal_58, 524288)))
					{
						STREAMING::REQUEST_MODEL(iLocal_78);
						iLocal_62 = -1;
						func_96();
						func_102(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_103(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_102(10);
						}
						if ((Local_55.f_2 - ScriptParam_85.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_95() && STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						iLocal_67 = iLocal_67;
						func_102(3);
					}
					else
					{
						func_96();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_113(1);
						return;
					}
					if (!func_107(iLocal_64))
					{
						if (!func_109(uLocal_58, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_113(0);
								break;
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && (((fLocal_57 > (10f * 10f) && !CAM::IS_SPHERE_VISIBLE(ScriptParam_85.f_1[0 /*3*/], 5f)) || fLocal_57 > (80f * 80f)) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && CAM::IS_SCREEN_FADED_OUT())))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(ScriptParam_85.f_1[0 /*3*/], 8f, false, false, false, false, false, false);
						iLocal_54 = VEHICLE::CREATE_VEHICLE(iLocal_78, ScriptParam_85.f_1[0 /*3*/], fLocal_79, true, true, false);
						func_94();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_54, true);
						bVar2 = false;
						if (func_93() && !bVar2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
							func_91(&uLocal_58, 32);
						}
					}
					else if (func_109(uLocal_58, 32))
					{
						if (!func_93())
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
							}
							func_111(&uLocal_58, 32);
						}
					}
					if (!func_109(uLocal_58, 4))
					{
						func_90();
						func_89(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_98778)
					{
						if (iLocal_69 != 263)
						{
							if (func_88(6) && !func_87(iLocal_69))
							{
							}
							else
							{
								func_103(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_102(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_109(uLocal_58, 64);
						func_111(&uLocal_58, 128);
						if (!func_86(3) && !Global_98778)
						{
							if (func_109(uLocal_58, 2097152))
							{
								if ((!func_109(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(func_85())) && !Global_98778)
								{
									func_102(10);
									break;
								}
							}
						}
						if (func_109(uLocal_58, 524288) && (func_105() && !func_104()))
						{
							func_113(1);
						}
						if (func_84())
						{
							func_113(1);
						}
						if ((!func_76(6) || Global_110685) || func_75())
						{
							bVar3 = false;
						}
						if (func_109(uLocal_58, 1))
						{
							if (!func_74())
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_73(1))
						{
							bVar3 = false;
						}
						if (Global_76622)
						{
							bVar3 = false;
						}
						if (func_72())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_71() || func_70(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_69(0) || func_68())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_56, fLocal_77, fLocal_77, fLocal_77, false, true, 0))
								{
									func_102(7);
								}
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
								if (bVar3)
								{
									if (iLocal_54 == iVar4)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_85.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_91(&uLocal_58, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_91(&uLocal_58, 128);
										bVar3 = false;
									}
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_67(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_66(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_91(&uLocal_58, 2048);
									}
									else if (!func_109(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_65(&iLocal_60);
										func_111(&uLocal_58, 2048);
									}
									if (func_63(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_65(&iLocal_60);
										func_111(&uLocal_58, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_52);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_102(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_65(&iLocal_60);
									func_111(&uLocal_58, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_52);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_102(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_65(&iLocal_60);
								func_111(&uLocal_58, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_55();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_65(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_109(uLocal_58, 1))
						{
							if (func_88(6) || func_88(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_52(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_51();
							if (Global_42596)
							{
								func_42(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_25();
							func_91(&uLocal_58, 2);
							func_102(6);
							func_21(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_20(iLocal_63);
								func_17(func_19(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_102(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_109(uLocal_58, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_91(&uLocal_58, 256);
						}
					}
					if (func_109(Global_110289, 262144))
					{
						func_111(&Global_110289, 262144);
						func_15();
					}
					if (func_109(uLocal_58, 2097152))
					{
						if (!func_86(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_102(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_10(&iLocal_71);
						func_111(&uLocal_58, 256);
						func_9();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
								iLocal_54 = 0;
							}
						}
						if (bVar0)
						{
							func_111(&uLocal_58, 2);
						}
						else if (func_109(uLocal_58, 2))
						{
							if (func_109(Global_110289, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_111(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_111(&uLocal_58, 2);
							}
						}
						func_102(0);
						if (iLocal_63 != -1)
						{
							if (func_109(Global_110289, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_98781, 0);
								func_7(func_19(iLocal_63), 0, Global_98781, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_98781, 0);
								func_7(func_19(iLocal_63), 0, Global_98781, 0, 0);
							}
						}
						func_4();
						func_111(&Global_110289, 0);
						if (func_109(uLocal_58, 16777216))
						{
							func_113(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_106(0, iLocal_63))
								{
									func_113(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_102(0);
					break;
				
				case 10:
					func_113(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_103(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_102(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_103(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_65(&iLocal_60);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_102(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_107(iLocal_64) && func_106(0, iLocal_63))
									{
										func_110();
										if (iLocal_69 != 263)
										{
											func_103(iLocal_69, 1, 0);
										}
										func_102(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_103(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_102(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_110();
									if (iLocal_69 != 263)
									{
										func_103(iLocal_69, 1, 0);
									}
									func_102(0);
								}
							}
						}
						else
						{
							func_103(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, true, 2);
	iVar1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iVar1, iVar0, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_54 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_54, true);
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, true);
	func_5(&iLocal_80);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_80);
	}
	while (CAM::IS_CAM_INTERPOLATING(iVar0) || CAM::IS_CAM_INTERPOLATING(iVar1))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::DESTROY_CAM(iVar0, false);
	}
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::DESTROY_CAM(iVar1, false);
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_6(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_7(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_95814, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_8(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_9()
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_10(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int* iParam0)
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
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

bool func_13(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, false, true, false);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_21(int* iParam0)
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int* iParam0)
{
	func_23(iParam0, 0f);
}

void func_23(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int* iParam0)
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1(sLocal_65))
	{
		HUD::CLEAR_HELP(true);
	}
	if (STREAMING::IS_IPL_ACTIVE("airfield"))
	{
		STREAMING::REMOVE_IPL("airfield");
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("stunt")) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("cargobob"))
	{
		iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		if (func_26(&iLocal_80))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	iVar2 = SYSTEM::START_NEW_SCRIPT(&Local_51, iLocal_61);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar2;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_45, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_28(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_28(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam10)
			{
				func_41(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_38(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.x = (Param5.x + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.x - Var4.x) > Param5.x)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, false, false, false, false, false, false);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, false, false, false, false, false, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111638.f_7224[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_88(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_34(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_38(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_40(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.x = -Var1.f_1;
		Var0.f_1 = Var1.x;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_39(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_39(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_39(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_39(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_39(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_39(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_39(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_39(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_39(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_39(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_39(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_39(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_39(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_39(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_39(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_39(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_39(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_40(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_41(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_50(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_45(1, iVar1, 1);
		return;
	}
	iVar2 = func_44(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_43(iVar2);
}

void func_43(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	func_46(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_48(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_47();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_47()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (func_49(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_50(int iParam0)
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
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_51()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_54(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_107(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_53(iParam0, iParam4);
		}
	}
	return 2;
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_54(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_55()
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_54) || ENTITY::IS_ENTITY_DEAD(iLocal_54, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, true)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
		}
		func_100(0);
		if (func_1(sLocal_65))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (fLocal_57 < (fLocal_77 * fLocal_77))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
		func_62(sLocal_65);
		func_56(0);
	}
	else if (func_1(sLocal_65))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_56(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_57(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_60())
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
		if (func_69(0))
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

bool func_60()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_61()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_62(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_69(0))
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

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_64(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_66(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_65(iParam0);
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
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_67(int iParam0)
{
	return 0;
	return 1;
}

var func_68()
{
	return Global_73825;
}

int func_69(int iParam0)
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

bool func_70(int iParam0, int iParam1)
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

bool func_71()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_72()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_73(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_74()
{
	return 1;
}

bool func_75()
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_79()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_83()) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_83() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_70(8, -1)) || func_72()) || func_78()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_70(8, -1) || func_81()) || func_80()) || func_78()) || func_77())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_83()) || Global_30770) || func_82()) || func_70(8, -1)) || func_80()) || func_79()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_83()) || func_80()) || Global_110685) || Global_30770) || func_82()) || Global_42596) || func_70(8, -1)) || func_79()) || func_78()) || func_72()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_83()) || Global_110685) || Global_30770) || func_82()) || func_70(8, -1)) || func_79()) || func_78()) || func_81()) || func_80()) || func_72())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_77()
{
	return Global_98783.f_1;
}

int func_78()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_79()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return Global_98796.f_346 > 0;
}

bool func_81()
{
	return Global_98796.f_345 > 0;
}

var func_82()
{
	return Global_1312877;
}

int func_83()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_84()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_85()
{
	return Global_94576;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_88(6) || func_88(7))
			{
				return 1;
			}
			else
			{
				return func_86(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_107(5))
			{
				if (func_76(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19);
}

bool func_88(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90()
{
}

void func_91(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_93()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	iLocal_46++;
}

int func_95()
{
	return 1;
}

void func_96()
{
}

int func_97()
{
	return 0;
}

int func_98()
{
	return 1;
}

int func_99()
{
	return 1;
}

void func_100(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_101()
{
	struct<3> Var0;
	float fVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = SYSTEM::VDIST2(Var0, Local_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(Local_56, 5f))
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

void func_102(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_103(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_31146[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_104()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_105()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_41431);
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_110()
{
	StringCopy(&Local_51, "stunt_plane_races", 64);
	iLocal_78 = joaat("stunt");
	fLocal_79 = 154.8464f;
	fLocal_66 = 209f;
	iLocal_69 = 95;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_76, 10f, false, false, false, false, false, false);
	iLocal_63 = 10;
	sLocal_65 = "PLAY_STUNT";
	fLocal_77 = 6f;
	iLocal_61 = 35000;
}

void func_111(var uParam0, int iParam1)
{
	func_112(uParam0, iParam1);
}

void func_112(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_103(iLocal_69, 0, 0);
		}
	}
	func_65(&iLocal_60);
	if (func_109(uLocal_58, 2))
	{
		func_4();
		func_111(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = -1;
	func_114();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_114()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
			VEHICLE::DELETE_VEHICLE(&iLocal_54);
		}
	}
	func_111(&uLocal_58, 4);
	func_115();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
		}
	}
}

void func_115()
{
}

