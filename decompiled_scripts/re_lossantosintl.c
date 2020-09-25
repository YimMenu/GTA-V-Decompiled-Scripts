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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	var uLocal_51[4] = { 0, 0, 0, 0 };
	var uLocal_52 = 0;
	struct<3> Local_53[4];
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_56 = true;
	iLocal_62 = joaat("s_m_m_pilot_01");
	iLocal_77 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	uLocal_75 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_75, 0))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_95672)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_77);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(uLocal_49[iVar0], 0) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_49[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_49[iVar0]));
				PED::DELETE_PED(&(uLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_49[iVar0]), &(uLocal_51[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_49[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_50))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_50))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_50);
			PED::DELETE_PED(&uLocal_52);
		}
		else
		{
			func_2(&uLocal_50, &uLocal_52);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_50);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_52);
		}
	}
	if (bLocal_60)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_56)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_49[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_51[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
					{
						TASK::TASK_PLANE_MISSION(uLocal_51[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_51[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
					{
						TASK::TASK_PLANE_MISSION(uLocal_51[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_49[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_51[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						TASK::TASK_PLANE_MISSION(uLocal_51[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_51[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						TASK::TASK_PLANE_MISSION(uLocal_51[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			Local_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_62);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_62)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_62);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Local_53[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_53[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(Local_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_53[0 /*3*/], 0, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(uLocal_49[0], 240.3179f);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[0], 0);
			uLocal_49[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_53[1 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[1], 0);
			uLocal_49[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_53[2 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[2], 0);
			uLocal_49[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_53[3 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[iVar0]))
				{
					uLocal_51[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_49[iVar0], 4, iLocal_62, -1, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_49[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_49[iVar0], 1, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_49[1]), &(uLocal_51[1]));
			func_8(&(uLocal_49[2]), &(uLocal_51[2]));
			func_8(&(uLocal_49[3]), &(uLocal_51[3]));
			if (bLocal_56)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(uLocal_49[3]), &(uLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[0]) && !CAM::IS_SPHERE_VISIBLE(Local_53[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0]))
							{
								fLocal_63 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (bLocal_56)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(uLocal_49[1]), &(uLocal_51[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_49[1]), &(uLocal_51[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_53[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
								{
									func_6(&(uLocal_49[2]), &(uLocal_51[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
						{
							fLocal_64 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1]))
							{
								func_8(&(uLocal_49[1]), &(uLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_53[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3]) && iLocal_58)
									{
										func_6(&(uLocal_49[3]), &(uLocal_51[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_50))
			{
				uLocal_50 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_50, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_50, 1, 1, 0);
				VEHICLE::_0x279D50DE5652D935(uLocal_50, 0);
				uLocal_52 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_50, 4, iLocal_62, -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_52, 1);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_50) && !ENTITY::IS_ENTITY_DEAD(uLocal_50, 0))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_50))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_50) && !ENTITY::IS_ENTITY_DEAD(uLocal_50, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_50))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(uLocal_50) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_50, 1)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_67))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_67))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_67);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_67, 0) && !PED::IS_PED_INJURED(uLocal_68))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_67);
			PED::SET_PED_KEEP_TASK(uLocal_68, 1);
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_67, 1) };
			uVar3 = ENTITY::GET_ENTITY_HEADING(uLocal_67);
			Var1 = { 0f, 500f, 50f };
			Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, uVar3, Var1) };
			TASK::TASK_HELI_MISSION(uLocal_68, uLocal_67, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_73)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

