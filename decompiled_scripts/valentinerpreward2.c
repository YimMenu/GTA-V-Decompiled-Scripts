#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	struct<3> Local_17 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int* iLocal_31 = NULL;
	int* iLocal_32 = NULL;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 2;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_104[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_165[60];
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 10;
	var uLocal_355 = -1;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = -1;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = -1;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = -1;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = -1;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = -1;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = -1;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.55.05";
	iLocal_21 = -1;
	iLocal_22 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315833 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_195())
		{
			func_193();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2461742.f_3)
		{
			func_192();
			func_191();
			func_188();
			func_186();
			func_185();
			func_184();
			func_180();
			func_176();
			func_173();
			func_172();
			func_166();
			func_164();
			func_163();
			func_162();
			func_150();
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_149();
				func_148();
			}
			func_147();
			func_141();
			func_140();
			func_135();
			func_123();
			func_118();
			func_107();
			func_85();
			func_77();
			func_72();
			func_70();
			func_65();
			func_60();
			func_56();
			func_48();
			func_45();
			func_26();
		}
		func_18();
		func_2();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (!Global_151131.f_3)
	{
		Global_151131.f_3 = 1;
	}
	if (!Global_151136.f_3)
	{
		Global_151136.f_3 = 1;
	}
	Global_151130 = 2;
}

void func_2()
{
	int iVar0;
	
	if (func_13())
	{
		if (!func_12(&uLocal_546))
		{
			func_11(&uLocal_546, 1, 0);
		}
		else
		{
			iVar0 = func_10();
			if (func_9(&uLocal_546, iVar0, 1))
			{
				func_4(0, 1);
				func_3(&uLocal_546);
			}
		}
	}
	else
	{
		func_3(&uLocal_546);
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 = func_8();
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_8 = 0;
		Global_1683970.f_489 = 0;
		MISC::SET_BIT(&(Global_1683970.f_489), 0);
		func_6();
	}
	func_5(iParam0);
	Global_1683970.f_487 = -1;
	Global_1683970.f_3497 = 1;
	Global_1683970.f_3498 = 153;
	Global_1683970.f_3499 = 0;
	Global_1683970.f_3504 = 1;
}

void func_5(int iParam0)
{
	MISC::SET_BITS_IN_RANGE(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_3), 28, 31, iParam0);
}

void func_6()
{
	func_7(-1);
}

void func_7(int iParam0)
{
	Global_1683970.f_3178 = iParam0;
}

int func_8()
{
	return -1;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

int func_10()
{
	int iVar0;
	
	iVar0 = 30000;
	if (Global_1683970.f_487 == -1)
	{
		iVar0 = 15000;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 153, false, 0))
	{
		iVar0 = 10000;
	}
	return iVar0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

bool func_13()
{
	struct<4> Var0;
	
	if (((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !Global_2461742.f_3) || func_17()) || !func_15()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_PED_ID())) || Global_1683970.f_3497) || MISC::IS_BIT_SET(Global_1683970, 6))
	{
		return 0;
	}
	if (((MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 7) || MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 6)) || MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 11)) || MISC::IS_BIT_SET(Global_1683970.f_8, 12))
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) >= 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) >= 1)
	{
		return 0;
	}
	Var0 = { -1831.333f, 980.1857f, -29.846f };
	Var0.f_3 = { -2225.468f, 1241.217f, -9.4235f };
	return ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, false, true, 0);
}

int func_14(int iParam0)
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

int func_15()
{
	if (func_16() == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	return Global_1312485.f_18;
}

bool func_17()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192 != 0;
}

void func_18()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2461742.f_3)
	{
		switch (iLocal_28)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1683970.f_480 && func_25(Global_1683970.f_3268))
				{
					func_23(1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				func_23(1);
				if ((!func_17() && func_15()) && Global_1683964 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_15() && !func_22(PLAYER::PLAYER_ID())) && !func_20(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_19() == 37 && Global_262145.f_10427)
				{
					func_11(&uLocal_29, 1, 0);
				}
				if (bVar0)
				{
					iLocal_28 = 2;
				}
				break;
			
			case 2:
				func_23(0);
				iLocal_28 = 0;
				break;
		}
	}
	else if (iLocal_28 != 0)
	{
		func_23(0);
		iLocal_28 = 0;
	}
	if (func_12(&uLocal_29))
	{
		if (func_9(&uLocal_29, 20000, 1))
		{
			func_3(&uLocal_29);
			Global_262145.f_10427 = 1;
		}
		else
		{
			Global_262145.f_10427 = 0;
		}
	}
}

int func_19()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192;
}

int func_20(int iParam0)
{
	if (iParam0 != func_8() && func_21(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
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

int func_22(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == PLAYER::PLAYER_ID()) && func_21(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

void func_23(bool bParam0)
{
	func_24(bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1683970.f_9), 21);
		MISC::SET_BIT(&(Global_1683970.f_9), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_9), 21);
		MISC::CLEAR_BIT(&(Global_1683970.f_9), 20);
	}
}

void func_24(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1683970.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_4), 7);
	}
}

int func_25(int iParam0)
{
	if ((((iParam0 == 150 || iParam0 == 148) || iParam0 == 152) || iParam0 == 151) || iParam0 == 149)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_12(&uLocal_15))
	{
		MISC::SET_BIT(&Global_7669, 2);
		if (func_9(&uLocal_15, 60000, 0))
		{
			func_44(&uLocal_15, 0, 0);
			func_3(&uLocal_15);
		}
	}
	if (func_12(&uLocal_13) && func_9(&uLocal_13, 1000, 0))
	{
		if (iLocal_22 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_22 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_22, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_9(&uLocal_13, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_22))
			{
				AUDIO::STOP_SOUND(iLocal_22);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_22);
			iLocal_22 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_44(&uLocal_13, 0, 0);
			func_3(&uLocal_13);
		}
	}
	if (!iLocal_7 && !func_37())
	{
		return;
	}
	iLocal_7 = 1;
	MISC::SET_BIT(&Global_7669, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_6, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_6, 8000);
			iVar1 = func_36(7868, -1, 0);
			func_33(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_17 = { ENTITY::GET_ENTITY_COORDS(iLocal_6, false) };
			iLocal_20 = 0;
		}
	}
	else
	{
		func_32();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_21 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "07", iLocal_6, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_8)
			{
				if (func_9(&uLocal_9, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6, false);
					func_44(&uLocal_9, 0, 0);
					func_3(&uLocal_9);
					func_11(&uLocal_11, 0, 0);
					iLocal_8 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_31(&uLocal_11, 0, 0)) / SYSTEM::TO_FLOAT(func_30()));
				fVar47 = (SYSTEM::TO_FLOAT(func_31(&uLocal_9, 0, 0)) / SYSTEM::TO_FLOAT(func_29()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_27(Local_17, func_28(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_6, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_20++;
					Local_17 = { ENTITY::GET_ENTITY_COORDS(iLocal_6, false) };
					func_44(&uLocal_9, 0, 0);
					func_3(&uLocal_9);
					if (func_29() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_6);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
						{
							AUDIO::STOP_SOUND(iLocal_21);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_21);
						iLocal_21 = -1;
						func_11(&uLocal_13, 0, 0);
						func_11(&uLocal_15, 0, 0);
						func_44(&uLocal_11, 0, 0);
						func_3(&uLocal_11);
						Local_17 = { 0f, 0f, 0f };
						iLocal_20 = 0;
						iLocal_7 = 0;
						iLocal_8 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_27(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_28()
{
	switch (iLocal_20)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_29()
{
	switch (iLocal_20)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_30()
{
	return 3150;
}

int func_31(var uParam0, bool bParam1, bool bParam2)
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

void func_32()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_6, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_6, Var0, 2, true);
}

void func_33(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312763;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_34(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_37()
{
	if (((((((func_41(22107, -1, -1) && Global_2409299 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_40(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2453903.f_3075.f_178 >= 1) && Global_2453903.f_3075.f_178 < 4) && func_39()) && func_38())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (func_41(15476, -1, -1) && func_36(5452, func_35(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_41(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_43(iParam0, iParam1);
	iVar2 = func_42(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_42(int iParam0)
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

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
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

void func_44(var uParam0, bool bParam1, bool bParam2)
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

void func_45()
{
	int iVar0;
	
	if (func_47())
	{
		if (!iLocal_550)
		{
			iVar0 = 0;
			while (iVar0 < 1200)
			{
				if (func_46(Global_794709.f_107189[iVar0 /*13*/].f_1))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 13);
				}
				iVar0++;
			}
			iLocal_550 = 1;
		}
	}
	else if (iLocal_550)
	{
		iVar0 = 0;
		while (iVar0 < 1200)
		{
			if (func_46(Global_794709.f_107189[iVar0 /*13*/].f_1))
			{
				MISC::SET_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 13);
			}
			iVar0++;
		}
		iLocal_550 = 0;
	}
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (Global_262145.f_6611[iVar1] == 278)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6027[iVar1])
				{
					if (iParam0 == Global_262145.f_5035[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_47()
{
	return Global_1312861 == 10;
}

void func_48()
{
	if (!func_52())
	{
		func_51();
		return;
	}
	if (!func_49())
	{
		func_51();
		return;
	}
	if (iLocal_549)
	{
		return;
	}
	Global_262145.f_30563 = 1;
	iLocal_549 = 1;
}

int func_49()
{
	if (!func_21(func_50(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_50()))
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35;
}

void func_51()
{
	if (iLocal_549)
	{
		Global_262145.f_30563 = 0;
		iLocal_549 = 0;
	}
}

int func_52()
{
	if (func_55(PLAYER::PLAYER_ID()) == 276)
	{
		if (func_53(PLAYER::PLAYER_ID()) == 1 || func_53(PLAYER::PLAYER_ID()) == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (func_54(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_54(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (func_54(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

void func_56()
{
	var uVar0;
	var uVar3;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return;
	}
	if (func_59(PLAYER::PLAYER_ID()) == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_58(&uVar0, &uVar3);
	if ((func_57(PLAYER::PLAYER_ID()) || Global_1683964 != 7) || !ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, false, true, 0))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 58, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

int func_57(int iParam0)
{
	if (iParam0 != func_8() && func_21(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

void func_58(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

int func_59(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

void func_60()
{
	if (!func_63(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_57(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (Global_1683970.f_3262)
	{
		return;
	}
	if (func_62() && func_61())
	{
		if (Global_1683634)
		{
			Global_1683634 = 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("tuner_property_carmod")) < 1)
		{
			Global_1683970.f_3262 = 1;
		}
	}
}

int func_61()
{
	if (Global_101476 == 19)
	{
		if (PLAYER::PLAYER_ID() != func_8())
		{
			if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != PLAYER::PLAYER_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_62()
{
	return MISC::IS_BIT_SET(Global_1683970.f_2, 16);
}

int func_63(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_64(int iParam0)
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

void func_65()
{
	if (func_63(PLAYER::PLAYER_ID()) && ((MISC::IS_BIT_SET(Global_2441237.f_502.f_1, 1) || MISC::IS_BIT_SET(Global_2441237.f_502.f_1, 2)) || MISC::IS_BIT_SET(Global_2441237.f_502.f_1, 32)))
	{
		if (!iLocal_548)
		{
			func_69(45, 1, 1);
			iLocal_548 = 1;
		}
	}
	else if (iLocal_548)
	{
		func_66(45, 1, 1);
		iLocal_548 = 0;
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_68() == 0)
		{
			iVar0 = func_36(func_67(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_33(func_67(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

int func_68()
{
	return Global_31345;
}

void func_69(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_68() == 0)
		{
			iVar0 = func_36(func_67(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_33(func_67(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_70()
{
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return;
	}
	if (!func_63(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9)
	{
		return;
	}
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("tuner_property_carmod", Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_7, 0) != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_71())
	{
		Global_1683970.f_489 = 0;
	}
	else
	{
		Global_1683634 = 1;
		Global_99422.f_18[45] = 0;
	}
}

bool func_71()
{
	return MISC::IS_BIT_SET(Global_77496, 8);
}

void func_72()
{
	if (func_63(PLAYER::PLAYER_ID()) && !func_57(PLAYER::PLAYER_ID()))
	{
		if (Global_1316863 && !iLocal_545)
		{
			if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != func_8())
			{
				if (func_76(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9) && !func_75(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9))
				{
					func_73(1);
					iLocal_545 = 1;
				}
				else
				{
					iLocal_545 = 1;
				}
			}
		}
	}
	else if (iLocal_545)
	{
		iLocal_545 = 0;
	}
}

void func_73(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_74(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return;
	}
	Var1.x = 1123327551;
	Var1.f_1 = PLAYER::PLAYER_ID();
	Var1.f_2 = iParam0;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var1, 3, iVar0);
}

var func_74(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_75(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_452.f_2, 27);
	}
	return 0;
}

int func_76(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_452.f_2, 28);
	}
	return 0;
}

void func_77()
{
	if (!func_82(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_79())
	{
		return;
	}
	func_78();
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
}

void func_78()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

bool func_79()
{
	return func_80(PLAYER::PLAYER_ID());
}

bool func_80(int iParam0)
{
	return func_81(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_81(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

bool func_82(int iParam0)
{
	return func_83(func_84(iParam0));
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_84(int iParam0)
{
	if (func_55(iParam0) == 256)
	{
		return func_53(iParam0);
	}
	return -1;
}

void func_85()
{
	if (((Global_2544210.f_911 && Global_2544210.f_924) && !Global_2544210.f_5971) && !Global_2544210.f_913)
	{
		if (!iLocal_352)
		{
			func_86(Global_1323703[Global_2544210.f_958 /*142*/].f_66);
			iLocal_352 = 1;
		}
	}
	else if (iLocal_352)
	{
		iLocal_352 = 0;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	func_106();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar6 = func_105(iVar0);
		if (func_96(iVar6) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_1683970.f_516[iVar6 /*3*/], Global_1683970.f_516[iVar6 /*3*/].f_1, 0f) < 300f)
		{
			iVar1 = 0;
			if (func_95(iParam0))
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (func_94(iVar6, iVar1, &Var2, &uVar5))
					{
						func_93(Var2, uVar5);
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 30)
				{
					if (func_92(iVar6, iVar1, &Var2, &uVar5))
					{
						func_93(Var2, uVar5);
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_95(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			if (func_91(iVar1, &Var2, &uVar5))
			{
				func_93(Var2, uVar5);
			}
			iVar1++;
		}
	}
	else if (func_90(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 33)
		{
			if (func_89(iVar1, &Var2, &uVar5))
			{
				func_93(Var2, uVar5);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 33)
	{
		if (func_87(iVar1, &Var2, &uVar5))
		{
			func_93(Var2, uVar5);
		}
		iVar1++;
	}
}

bool func_87(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1063.016f, 3074.674f, 40.2213f };
			*uParam2 = 284.799f;
			break;
		
		case 1:
			*uParam1 = { 1078.602f, 3017.778f, 40.2675f };
			*uParam2 = 285.599f;
			break;
		
		case 2:
			*uParam1 = { 1402.65f, 3001.224f, 39.55f };
			*uParam2 = 313.9985f;
			break;
		
		case 3:
			*uParam1 = { 1794.369f, 3271.561f, 41.3554f };
			*uParam2 = 99.3988f;
			break;
		
		case 4:
			*uParam1 = { 1927.482f, 4710.684f, 40.1854f };
			*uParam2 = 295.5985f;
			break;
		
		case 5:
			*uParam1 = { -2732.534f, 2929.513f, 1.2234f };
			*uParam2 = 175.598f;
			break;
		
		case 6:
			*uParam1 = { 1542.301f, 3176.774f, 40.006f };
			*uParam2 = 300.7964f;
			break;
		
		case 7:
			*uParam1 = { 824.6652f, 6624.667f, 1.0573f };
			*uParam2 = 89.9993f;
			break;
		
		case 8:
			*uParam1 = { 316.3836f, 6907.324f, 2.6752f };
			*uParam2 = 223.3988f;
			break;
		
		case 9:
			*uParam1 = { -617.3377f, 6321.425f, 2.3934f };
			*uParam2 = 308.1984f;
			break;
		
		case 10:
			*uParam1 = { -261.3058f, 6575.12f, 1.5169f };
			*uParam2 = 135.5977f;
			break;
		
		case 11:
			*uParam1 = { -2256.299f, 4491.543f, 1.7095f };
			*uParam2 = 137.7965f;
			break;
		
		case 12:
			*uParam1 = { -2597.515f, 3515.234f, 10.5145f };
			*uParam2 = 339.5955f;
			break;
		
		case 13:
			*uParam1 = { -2270.362f, 4475.952f, 1.6268f };
			*uParam2 = 136.5958f;
			break;
		
		case 14:
			*uParam1 = { -2470.566f, 4193.154f, 3.644f };
			*uParam2 = 172.5953f;
			break;
		
		case 15:
			*uParam1 = { 2821.831f, 4703.819f, 45.3946f };
			*uParam2 = 19.7947f;
			break;
		
		case 16:
			*uParam1 = { 3248.613f, 5062.466f, 20.2962f };
			*uParam2 = 264.1931f;
			break;
		
		case 17:
			*uParam1 = { 2124.826f, 2797.184f, 49.2823f };
			*uParam2 = 70.1927f;
			break;
		
		case 18:
			*uParam1 = { 1623.715f, 2064.16f, 85.9994f };
			*uParam2 = 333.1922f;
			break;
		
		case 19:
			*uParam1 = { 1791.202f, 1744.112f, 71.7541f };
			*uParam2 = 336.5922f;
			break;
		
		case 20:
			*uParam1 = { 2499.54f, 1071.903f, 75.0344f };
			*uParam2 = 302.7912f;
			break;
		
		case 21:
			*uParam1 = { 2904.806f, 403.011f, 1.4181f };
			*uParam2 = 175.7903f;
			break;
		
		case 22:
			*uParam1 = { 1477.984f, 1558.72f, 109.1304f };
			*uParam2 = 209.7909f;
			break;
		
		case 23:
			*uParam1 = { 342.9406f, 2711.473f, 54.9858f };
			*uParam2 = 302.9901f;
			break;
		
		case 24:
			*uParam1 = { -5.9789f, 2601.978f, 83.8922f };
			*uParam2 = 2.3895f;
			break;
		
		case 25:
			*uParam1 = { -2776.488f, 2338.916f, 1.3561f };
			*uParam2 = 355.5891f;
			break;
		
		case 26:
			*uParam1 = { -3283.192f, 1082.128f, 1.1924f };
			*uParam2 = 349.189f;
			break;
		
		case 27:
			*uParam1 = { 946.7811f, -2623.24f, 3.8948f };
			*uParam2 = 253.5885f;
			break;
		
		case 28:
			*uParam1 = { -2085.2f, -548.4119f, 2.8008f };
			*uParam2 = 222.5882f;
			break;
		
		case 29:
			*uParam1 = { -1707.786f, -826.0955f, 8.2391f };
			*uParam2 = 69.3881f;
			break;
		
		case 30:
			*uParam1 = { -1744.396f, -852.9501f, 7.341f };
			*uParam2 = 54.988f;
			break;
		
		case 31:
			*uParam1 = { -2079.058f, -494.0884f, 6.4533f };
			*uParam2 = 210.988f;
			break;
		
		case 32:
			*uParam1 = { -1451.189f, -1121.35f, 2.1671f };
			*uParam2 = 170.7995f;
			break;
		
		case 33:
			return 0;
	}
	return !func_88(*uParam1);
}

int func_88(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1063.016f, 3074.674f, 40.2213f };
			*uParam2 = 284.799f;
			break;
		
		case 1:
			*uParam1 = { 1078.602f, 3017.778f, 40.2675f };
			*uParam2 = 285.599f;
			break;
		
		case 2:
			*uParam1 = { 1402.65f, 3001.224f, 39.55f };
			*uParam2 = 313.9985f;
			break;
		
		case 3:
			*uParam1 = { 1794.369f, 3271.561f, 41.3554f };
			*uParam2 = 99.3988f;
			break;
		
		case 4:
			*uParam1 = { 1927.482f, 4710.684f, 40.1854f };
			*uParam2 = 295.5985f;
			break;
		
		case 5:
			*uParam1 = { -2732.534f, 2929.513f, 1.2234f };
			*uParam2 = 175.598f;
			break;
		
		case 6:
			*uParam1 = { 1542.301f, 3176.774f, 40.006f };
			*uParam2 = 300.7964f;
			break;
		
		case 7:
			*uParam1 = { 824.6652f, 6624.667f, 1.0573f };
			*uParam2 = 89.9993f;
			break;
		
		case 8:
			*uParam1 = { 316.3836f, 6907.324f, 2.6752f };
			*uParam2 = 223.3988f;
			break;
		
		case 9:
			*uParam1 = { -617.3377f, 6321.425f, 2.3934f };
			*uParam2 = 308.1984f;
			break;
		
		case 10:
			*uParam1 = { -261.3058f, 6575.12f, 1.5169f };
			*uParam2 = 135.5977f;
			break;
		
		case 11:
			*uParam1 = { -2256.299f, 4491.543f, 1.7095f };
			*uParam2 = 137.7965f;
			break;
		
		case 12:
			*uParam1 = { -2597.515f, 3515.234f, 10.5145f };
			*uParam2 = 339.5955f;
			break;
		
		case 13:
			*uParam1 = { -2270.362f, 4475.952f, 1.6268f };
			*uParam2 = 136.5958f;
			break;
		
		case 14:
			*uParam1 = { -2470.566f, 4193.154f, 3.644f };
			*uParam2 = 172.5953f;
			break;
		
		case 15:
			*uParam1 = { 2821.831f, 4703.819f, 45.3946f };
			*uParam2 = 19.7947f;
			break;
		
		case 16:
			*uParam1 = { 3248.613f, 5062.466f, 20.2962f };
			*uParam2 = 264.1931f;
			break;
		
		case 17:
			*uParam1 = { 2124.826f, 2797.184f, 49.2823f };
			*uParam2 = 70.1927f;
			break;
		
		case 18:
			*uParam1 = { 1623.715f, 2064.16f, 85.9994f };
			*uParam2 = 333.1922f;
			break;
		
		case 19:
			*uParam1 = { 1791.202f, 1744.112f, 71.7541f };
			*uParam2 = 336.5922f;
			break;
		
		case 20:
			*uParam1 = { 2499.54f, 1071.903f, 75.0344f };
			*uParam2 = 302.7912f;
			break;
		
		case 21:
			*uParam1 = { 2904.806f, 403.011f, 1.4181f };
			*uParam2 = 175.7903f;
			break;
		
		case 22:
			*uParam1 = { 1477.984f, 1558.72f, 109.1304f };
			*uParam2 = 209.7909f;
			break;
		
		case 23:
			*uParam1 = { 342.9406f, 2711.473f, 54.9858f };
			*uParam2 = 302.9901f;
			break;
		
		case 24:
			*uParam1 = { -5.9789f, 2601.978f, 83.8922f };
			*uParam2 = 2.3895f;
			break;
		
		case 25:
			*uParam1 = { -2776.488f, 2338.916f, 1.3561f };
			*uParam2 = 355.5891f;
			break;
		
		case 26:
			*uParam1 = { -3283.192f, 1082.128f, 1.1924f };
			*uParam2 = 349.189f;
			break;
		
		case 27:
			*uParam1 = { 946.7811f, -2623.24f, 3.8948f };
			*uParam2 = 253.5885f;
			break;
		
		case 28:
			*uParam1 = { -2085.2f, -548.4119f, 2.8008f };
			*uParam2 = 222.5882f;
			break;
		
		case 29:
			*uParam1 = { -1707.786f, -826.0955f, 8.2391f };
			*uParam2 = 69.3881f;
			break;
		
		case 30:
			*uParam1 = { -1744.396f, -852.9501f, 7.341f };
			*uParam2 = 54.988f;
			break;
		
		case 31:
			*uParam1 = { -2079.058f, -494.0884f, 6.4533f };
			*uParam2 = 210.988f;
			break;
		
		case 32:
			*uParam1 = { -1451.189f, -1121.35f, 2.1671f };
			*uParam2 = 170.7995f;
			break;
		
		case 33:
			return 0;
	}
	return !func_88(*uParam1);
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_91(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1180.916f, 302.2191f, 80.9909f };
			*uParam2 = 148.3989f;
			break;
		
		case 1:
			*uParam1 = { 1275.993f, 209.0666f, 80.8549f };
			*uParam2 = 148.3989f;
			break;
		
		case 2:
			*uParam1 = { 616.9166f, -712.7324f, 11.5367f };
			*uParam2 = 178.1982f;
			break;
		
		case 3:
			*uParam1 = { 570.2534f, -712.5157f, 11.5039f };
			*uParam2 = 179.9983f;
			break;
		
		case 4:
			*uParam1 = { 614.4362f, -1273.878f, 8.7479f };
			*uParam2 = 196.3985f;
			break;
		
		case 5:
			*uParam1 = { 570.6973f, -1285.617f, 8.7397f };
			*uParam2 = 134.4157f;
			break;
		
		case 6:
			*uParam1 = { -318.9105f, -2553.186f, 5.0007f };
			*uParam2 = 48.9986f;
			break;
		
		case 7:
			*uParam1 = { -373.5407f, -2630.205f, 5.0003f };
			*uParam2 = 135.7982f;
			break;
		
		case 8:
			*uParam1 = { 297.4395f, -3108.808f, 4.8849f };
			*uParam2 = 358.7974f;
			break;
		
		case 9:
			*uParam1 = { 181.5659f, -3282.004f, 4.6287f };
			*uParam2 = 359.9974f;
			break;
		
		case 10:
			*uParam1 = { 1008.2f, -2918.945f, 4.9006f };
			*uParam2 = 89.9964f;
			break;
		
		case 11:
			*uParam1 = { 1030.625f, -2918.86f, 4.9006f };
			*uParam2 = 269.196f;
			break;
		
		case 12:
			*uParam1 = { 1496.308f, -2297.16f, 73.5446f };
			*uParam2 = 151.3958f;
			break;
		
		case 13:
			*uParam1 = { 1808.452f, -1288.094f, 95.031f };
			*uParam2 = 113.1954f;
			break;
		
		case 14:
			*uParam1 = { -1130.403f, -1694.833f, 3.3732f };
			*uParam2 = 118.9948f;
			break;
		
		case 15:
			return 0;
	}
	return !func_88(*uParam1);
}

int func_92(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -947.712f, -3367.704f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -904.692f, -3293.072f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -863.71f, -3221.978f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -966.418f, -3162.773f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1007.435f, -3233.93f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1050.455f, -3308.559f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1145.673f, -3253.456f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1098.386f, -3181.428f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1060.474f, -3108.903f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1155.391f, -3053.632f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1196.114f, -3125.146f, 12.948f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1235.552f, -3201.86f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1344.446f, -3139.177f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1301.308f, -3064.341f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1260.135f, -2992.912f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1364.244f, -2932.9f, 12.98f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1405.284f, -3004.108f, 12.96f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1448.29f, -3078.72f, 12.95f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1535.732f, -3028.318f, 12.945f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1492.639f, -2953.558f, 12.945f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1451.506f, -2882.2f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1553.927f, -2823.12f, 13.002f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1595.097f, -2894.571f, 12.944f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1637.836f, -2968.714f, 12.945f };
					*uParam3 = 60f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1740.971f, -2911.484f, 12.944f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1696.293f, -2833.978f, 12.944f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1651.502f, -2756.273f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1588.258f, -2647.575f, 12.944f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1536.862f, -2681.378f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1529.025f, -2544.485f, 12.944f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 85:
		case 86:
		case 87:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1987.731f, 2847.398f, 31.8104f };
					*uParam3 = 59.8902f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2033.307f, 2855.526f, 31.83f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2091.018f, 2888.691f, 31.81f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2206.717f, 2955.363f, 31.81f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -2268.817f, 2990.846f, 31.81f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -2324.039f, 3023.154f, 31.811f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -2435.806f, 3087.705f, 31.824f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -2543.753f, 3149.909f, 31.821f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1944.848f, 2898.798f, 31.81f };
					*uParam3 = 125.398f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1978.972f, 2920.605f, 31.8784f };
					*uParam3 = 151.999f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -2064.849f, 2955.153f, 31.867f };
					*uParam3 = 151.999f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -2106.165f, 2980.687f, 31.81f };
					*uParam3 = 104.599f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -2302.367f, 3088.676f, 31.814f };
					*uParam3 = 150.598f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -2152.113f, 2924.162f, 31.81f };
					*uParam3 = 60.198f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -2488.232f, 3118.146f, 31.822f };
					*uParam3 = 59.798f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -2277.922f, 3133.756f, 31.811f };
					*uParam3 = 120.598f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -2604.776f, 3185.186f, 31.812f };
					*uParam3 = 59.998f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -2612.048f, 3301.519f, 31.8118f };
					*uParam3 = 60.198f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -2719.406f, 3316.943f, 31.8098f };
					*uParam3 = 201.198f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -2658.718f, 3216.499f, 31.812f };
					*uParam3 = 59.998f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -2380.372f, 3055.341f, 31.826f };
					*uParam3 = 60.4f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -2772.857f, 3276.168f, 31.8118f };
					*uParam3 = 240.397f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -2770.946f, 3322.605f, 31.812f };
					*uParam3 = 240.397f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -2676.54f, 3332.786f, 31.8118f };
					*uParam3 = 199.597f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -2740.317f, 3228.299f, 31.8099f };
					*uParam3 = 303.397f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -2701.354f, 3203.092f, 31.994f };
					*uParam3 = 328.397f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -2249.965f, 2946.165f, 31.9399f };
					*uParam3 = 330.196f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -2586.579f, 3137.286f, 31.935f };
					*uParam3 = 330.196f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -2134.76f, 2878.728f, 31.81f };
					*uParam3 = 330.196f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1953.875f, 2864.276f, 31.8104f };
					*uParam3 = 58.798f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_93(struct<3> Param0, var uParam3)
{
	if (Global_2405077.f_1753 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/] = { Param0 };
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/].f_3 = uParam3;
		Global_2405077.f_1753++;
	}
}

int func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 83:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1133.454f, -3371.672f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1119.748f, -3379.991f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1147.602f, -3363.505f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1161.988f, -3354.852f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1116.563f, -3358.99f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1131.23f, -3350.104f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1145.252f, -3341.608f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1115.202f, -3339.265f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1129.559f, -3330.697f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1114.664f, -3320.954f, 12.945f };
					*uParam3 = 329.799f;
					return 1;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1356.991f, -3242.228f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1369.313f, -3234.758f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1381.751f, -3227.408f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1394.302f, -3220.021f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1354.339f, -3223.129f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1366.302f, -3215.809f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1378.492f, -3208.645f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1350.322f, -3203.405f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1362.684f, -3196.451f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1347.089f, -3182.69f, 12.945f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2039.992f, 3132.191f, 31.81f };
					*uParam3 = 149.399f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2025.075f, 3128.63f, 31.81f };
					*uParam3 = 197.599f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2049.589f, 3142.464f, 31.81f };
					*uParam3 = 109.199f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2088.648f, 3081.327f, 31.81f };
					*uParam3 = 150.599f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -2070.669f, 3111.575f, 31.81f };
					*uParam3 = 123.399f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -2053.385f, 3109.703f, 31.81f };
					*uParam3 = 150.599f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -2044.448f, 3094.012f, 31.81f };
					*uParam3 = 181.799f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -2071.825f, 3093.477f, 31.81f };
					*uParam3 = 150.599f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2060.579f, 3085.924f, 31.81f };
					*uParam3 = 150.599f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2062.712f, 3066.073f, 31.81f };
					*uParam3 = 150.599f;
					return 1;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1885.187f, 3095.344f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1898.637f, 3072.816f, 31.811f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1886.469f, 3065.78f, 31.811f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1874.621f, 3058.437f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1862.818f, 3051.244f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1915.317f, 3041.652f, 31.811f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1896.724f, 2997.848f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1932.975f, 3011.781f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1875.668f, 3034.438f, 31.811f };
					*uParam3 = 150.2f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1886.144f, 3016.285f, 31.81f };
					*uParam3 = 150.2f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2484.323f, 3249.294f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2495.313f, 3255.746f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2472.644f, 3242.684f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2506.313f, 3262.27f, 31.823f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -2461.494f, 3235.93f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -2505.602f, 3238.049f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -2481.937f, 3224.8f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -2516.813f, 3244.266f, 31.823f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2470.03f, 3217.899f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2493.933f, 3231.308f, 31.828f };
					*uParam3 = 151f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("shamal"):
		case joaat("miljet"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("bombushka"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 0;
			break;
	}
	return 1;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(iParam0);
	if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
	if (iVar1 != func_8())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_266 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_103(PLAYER::PLAYER_ID(), 0) || (func_102(PLAYER::PLAYER_ID()) && func_64(func_101(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_100(PLAYER::PLAYER_ID()) || (func_102(PLAYER::PLAYER_ID()) && func_64(func_101(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_99(PLAYER::PLAYER_ID()) || (func_102(PLAYER::PLAYER_ID()) && func_64(func_101(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_98(PLAYER::PLAYER_ID()) || (func_102(PLAYER::PLAYER_ID()) && func_64(func_101(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_97(PLAYER::PLAYER_ID()) || (func_102(PLAYER::PLAYER_ID()) && func_64(func_101(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_8())
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_8())
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 != func_8() && func_21(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_102(int iParam0)
{
	if (iParam0 != func_8() && func_21(iParam0, 1, 1))
	{
		if (func_57(iParam0) && !func_20(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0, bool bParam1)
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
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_8())
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_105(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 83;
			break;
		
		case 1:
			iVar0 = 84;
			break;
		
		case 2:
			iVar0 = 85;
			break;
		
		case 3:
			iVar0 = 86;
			break;
		
		case 4:
			iVar0 = 87;
			break;
	}
	return iVar0;
}

void func_106()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405077.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_1753 = 0;
}

void func_107()
{
	var uVar0;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	switch (iLocal_350)
	{
		case 0:
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 444479190)
			{
				iLocal_350 = 1;
			}
			break;
		
		case 1:
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()) || !func_15()) || func_17()) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				iLocal_350 = 0;
				return;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_10 = func_8();
				MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_1), 31);
				MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_3), 2);
				MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_3), 3);
				MISC::SET_BIT(&(Global_1683970.f_4415.f_1), 9);
				Global_1683970.f_4415.f_6 = func_117();
				iLocal_351 = Global_1683970.f_4415.f_6;
				iLocal_350 = 2;
				return;
			}
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE() || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 444479190)
			{
				iLocal_350 = 0;
			}
			break;
		
		case 2:
			if (Global_1683970.f_4415.f_6 == -1)
			{
				if (((func_14(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_15()) && !func_17())
				{
					iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_14(iVar19))
					{
						iVar21 = ENTITY::GET_ENTITY_MODEL(iVar19);
						func_114(iLocal_351, &uVar0);
						if (!func_108(&uVar0, iVar19, iVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					MISC::CLEAR_BIT(&(Global_1683970.f_4415.f_1), 9);
					iLocal_350 = 0;
				}
			}
			break;
	}
}

int func_108(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_113(iParam1, iParam2, &Var0, &Var3, &Var6, &Var9);
	func_112(iParam1, iParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_110(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_110(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_110(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_110(Var21, Var9, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_109(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_110(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_110(Var0, Var3, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_109(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_109(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if ((func_109(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || func_109(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(float fParam0, float fParam1, float fParam2)
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

Vector3 func_110(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_111(Param0.x, Param3.x, fParam6, fParam7, fParam8), func_111(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_111(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_111(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_112(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.x = Var0.x;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.x = Var3;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.x = Var0.x;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.x = Var3;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_113(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.x = Var0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.x = Var0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.x = Var3.x;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_114(int iParam0, var uParam1)
{
	func_115(iParam0, &(uParam1->f_4), &(uParam1->f_7), &(uParam1->f_10), &(uParam1->f_13), &(uParam1->f_14));
	uParam1->f_2 = 1;
	MISC::SET_BIT(&(uParam1->f_3), 6);
	MISC::SET_BIT(&(uParam1->f_3), 0);
	MISC::SET_BIT(&(uParam1->f_3), 2);
	MISC::SET_BIT(&(uParam1->f_3), 4);
}

void func_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { func_116(iParam0) };
	switch (iParam0)
	{
		case 148:
			*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
			*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
			*uParam4 = 3.25f;
			*uParam5 = 90f;
			break;
		
		case 149:
			*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
			*uParam3 = { -148.563f, -1341.091f, 32.5145f };
			*uParam4 = 2.75f;
			*uParam5 = 0f;
			break;
		
		case 150:
			*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
			*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
			*uParam4 = 2.5f;
			*uParam5 = 70f;
			break;
		
		case 151:
			*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
			*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
			*uParam4 = 2.25f;
			*uParam5 = 50f;
			break;
		
		case 152:
			*uParam2 = { 488.2599f, -896.563f, 24.7408f };
			*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
			*uParam4 = 2.25f;
			*uParam5 = 85f;
			break;
	}
}

Vector3 func_116(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 759.36f, -675.13f, 27.86f;
			break;
		
		case 149:
			return -144.58f, -1341.37f, 28.87f;
			break;
		
		case 150:
			return -171f, -31.4f, 51.27f;
			break;
		
		case 151:
			return 231.54f, -1875.7f, 25.41f;
			break;
		
		case 152:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 148;
	while (iVar0 <= 152)
	{
		iVar1 = iVar0;
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", iVar1, false, 0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

void func_118()
{
	if (!func_119())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 51, true);
}

int func_119()
{
	if (MISC::IS_BIT_SET(Global_1683970.f_3, 5))
	{
		return 1;
	}
	if ((func_122(PLAYER::PLAYER_ID()) && func_121()) && func_120(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_120(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_121()
{
	return MISC::GET_GAME_TIMER() <= Global_22670.f_6135 + 100;
}

int func_122(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_123()
{
	if (func_134(PLAYER::PLAYER_ID()))
	{
		switch (Global_2526974[84 /*66*/][Global_2520218.f_6754])
		{
			case 4:
				if ((((!func_133(PLAYER::PLAYER_ID()) || func_132(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID())) || func_130(PLAYER::PLAYER_ID())) || func_129(PLAYER::PLAYER_ID()))
				{
					func_128(0);
					func_127(1);
					func_126(0);
					func_125(0);
					func_124(0);
				}
				break;
			
			case 5:
				if ((((!func_130(PLAYER::PLAYER_ID()) || func_132(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID())) || func_133(PLAYER::PLAYER_ID())) || func_129(PLAYER::PLAYER_ID()))
				{
					func_128(0);
					func_127(0);
					func_126(0);
					func_125(1);
					func_124(0);
				}
				break;
			
			case 6:
				if (((!func_131(PLAYER::PLAYER_ID()) || func_132(PLAYER::PLAYER_ID())) || func_133(PLAYER::PLAYER_ID())) || func_130(PLAYER::PLAYER_ID()))
				{
					func_128(0);
					func_127(0);
					func_126(0);
					func_125(0);
					func_124(1);
				}
				break;
			}
	}
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 4))
		{
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 4))
	{
		MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 4);
	}
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 3))
		{
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 3))
	{
		MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 3);
	}
}

void func_126(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 2))
		{
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 2);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 2))
	{
		MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 2);
	}
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 1))
		{
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 1))
	{
		MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 1);
	}
}

void func_128(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 0))
		{
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461, 0))
	{
		MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_461), 0);
	}
}

int func_129(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 2);
	}
	return 0;
}

int func_130(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 3);
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 4);
	}
	return 0;
}

int func_132(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 0);
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 1);
	}
	return 0;
}

int func_134(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_64(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

void func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_139(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_138(PLAYER::PLAYER_ID()) == 16)
	{
		if (iLocal_349 == 0)
		{
			iLocal_349 = 1;
		}
		return;
	}
	else if (iLocal_349)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (iVar2 != PLAYER::PLAYER_ID())
				{
					if (func_21(iVar2, 0, 1))
					{
						iVar1 = iVar2;
						if (func_137(iVar2, 0))
						{
							if (func_136(iVar2) == PLAYER::PLAYER_ID())
							{
								if (Global_1713915[iVar1 /*27*/].f_15 != 0)
								{
									if (Global_1713915[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_15 != Global_1713915[iVar1 /*27*/].f_15)
									{
										Global_1713915[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_15 = Global_1713915[iVar1 /*27*/].f_15;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		iLocal_349 = 0;
	}
}

int func_136(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_8();
}

bool func_137(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_139(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_8();
}

int func_138(int iParam0)
{
	if (func_55(iParam0) == 271)
	{
		return func_53(iParam0);
	}
	return -1;
}

int func_139(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_8())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_140()
{
	if (func_134(PLAYER::PLAYER_ID()) && !func_57(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_348)
		{
			STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_side_panel02"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_side_panel02")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_347))
				{
					iLocal_347 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ch_prop_ch_side_panel02"), -2216.521f, 1133.307f, -22.93f, false, false, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_347, -2216.521f, 1133.307f, -22.93f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_347, 0f, 0f, 166f, 2, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_347, true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_347, false);
					ENTITY::SET_ENTITY_ALPHA(iLocal_347, 0, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_347, true);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_side_panel02"));
				iLocal_348 = 1;
			}
		}
	}
	else if (iLocal_348)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_347))
		{
			OBJECT::DELETE_OBJECT(&iLocal_347);
		}
		iLocal_348 = 0;
	}
}

void func_141()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0 || !Global_2453009.f_24)
	{
		if (iLocal_37 || iLocal_38)
		{
			iLocal_37 = 0;
			iLocal_38 = 0;
			func_146(&uLocal_39);
		}
		return;
	}
	if (!iLocal_37)
	{
		bVar0 = Global_4718592.f_17161 > 0;
		if (bVar0)
		{
			iLocal_42 = 0;
			while (iLocal_42 <= (Global_4718592.f_17161 - 1))
			{
				if (Global_4718592.f_17162[iLocal_42 /*221*/].f_1 != 4)
				{
				}
				else
				{
					Local_165[iLocal_42 /*3*/][0] = Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_5[0];
					Local_165[iLocal_42 /*3*/][1] = Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_5[1];
					Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_5[0] = 0;
					Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_5[1] = 0;
					uLocal_104[iLocal_42] = Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_10;
					Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_10 = 0;
				}
				iLocal_42++;
			}
			iLocal_37 = 1;
		}
	}
	else if (!iLocal_38)
	{
		bVar1 = MISC::IS_BIT_SET(Global_969056.f_1, 14);
		if (bVar1)
		{
			iLocal_42 = 0;
			while (iLocal_42 <= (Global_4718592.f_17161 - 1))
			{
				if (Global_4718592.f_17162[iLocal_42 /*221*/].f_1 != 4)
				{
				}
				else
				{
					if (Global_969056.f_94[0] > 1)
					{
						Global_4718592.f_17162[iLocal_42 /*221*/].f_1 = 1;
						Global_4718592.f_17162[iLocal_42 /*221*/].f_99 = 13;
						Global_4718592.f_17162[iLocal_42 /*221*/].f_100 = 2;
						Global_4718592.f_17162[iLocal_42 /*221*/].f_55 = -1;
						MISC::SET_BIT(&(Global_4718592.f_17162[iLocal_42 /*221*/].f_58.f_2), 5);
					}
					else
					{
						Global_4718592.f_17162[iLocal_42 /*221*/].f_1 = 0;
					}
					iLocal_38 = 1;
				}
				iLocal_42++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= 8)
		{
			if (uLocal_104[iLocal_42] != 0)
			{
				iVar3 = 0;
				bVar4 = true;
				if (func_145(&uLocal_39, iLocal_42))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					iVar3 = func_144(iLocal_42);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::GET_ENTITY_HEALTH(iVar3) <= 0)
					{
						iVar5 = func_143(iLocal_42);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							bVar4 = false;
						}
						if (ENTITY::GET_ENTITY_HEALTH(iVar5) <= 0)
						{
							iVar6 = 0;
							while (iVar6 <= (Global_4718592.f_30649 - 1))
							{
								if (!MISC::IS_BIT_SET(uLocal_104[iLocal_42], iVar6))
								{
								}
								else
								{
									Global_4718592.f_30650[iVar6 /*47*/].f_6[0 /*10*/].f_1 = 4;
									Global_4718592.f_30650[iVar6 /*47*/].f_6[1 /*10*/].f_1 = 4;
								}
								iVar6++;
							}
							func_142(&uLocal_39, iLocal_42);
						}
					}
				}
			}
			iLocal_42++;
			if (iLocal_42 >= 60)
			{
				iLocal_42 = 0;
			}
			iVar2++;
		}
	}
}

void func_142(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
}

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_17161 - 1))
	{
		if (func_145(&(Local_165[iParam0 /*3*/]), iVar0))
		{
			return func_144(iVar0);
		}
		iVar0++;
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[iParam0]))
	{
		return iLocal_43[iParam0];
	}
	iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4718592.f_17162[iParam0 /*221*/].f_39, 0.15f, Global_4718592.f_17162[iParam0 /*221*/], false, false, false);
	iLocal_43[iParam0] = iVar0;
	return iVar0;
}

bool func_145(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 32)], (iParam1 % 32));
}

void func_146(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_147()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		if (!iLocal_346)
		{
		}
		iLocal_346 = 1;
		return;
	}
	if (iLocal_346 == 1)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
		iLocal_346 = 0;
	}
}

void func_148()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	if (Global_4456448.f_133963 == 87 && MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 7))
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_31, 6))
		{
			MISC::CLEAR_BIT(&(Global_4456448.f_31), 6);
		}
	}
}

void func_149()
{
	int iVar0;
	
	if (!Global_1695762)
	{
		return;
	}
	if (Global_968971 != 6)
	{
		return;
	}
	if (Global_1695570 == -1)
	{
		return;
	}
	iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	else
	{
		return;
	}
	switch (Global_4456448.f_109021[Global_1695570 /*1591*/].f_1538)
	{
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
			NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(iVar0);
			break;
	}
}

void func_150()
{
	switch (iLocal_27)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1683970, 6))
			{
				if (MISC::IS_BIT_SET(Global_2441237.f_502.f_60, 0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_27 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1312436.f_1)
			{
				iLocal_27 = 2;
			}
			else if (func_160())
			{
				iLocal_27 = 0;
			}
			break;
		
		case 2:
			if (!Global_1312436.f_1)
			{
				iLocal_27 = 0;
			}
			else if (func_160())
			{
				iLocal_27 = 3;
			}
			break;
		
		case 3:
			iLocal_27 = 0;
			if (Global_1312436.f_1)
			{
				func_151();
			}
			break;
	}
}

void func_151()
{
	if (Global_1312436.f_1 == 1)
	{
		func_152(7, 0, 1);
		Global_1312436.f_1 = 0;
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_9 = 0;
	}
}

void func_152(int iParam0, int iParam1, bool bParam2)
{
	if (func_159())
	{
		if (iParam1 == 1)
		{
			if (Global_2544210.f_4461 == -1)
			{
				Global_2544210.f_4461 = Global_262145.f_26682;
			}
			func_44(&(Global_2544210.f_4459), 0, 0);
			if (bParam2)
			{
				if (Global_2544210.f_4464 == -1)
				{
					Global_2544210.f_4464 = Global_262145.f_26683;
				}
				func_44(&(Global_2544210.f_4462), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_8 = 0;
				func_158(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_8 = 0;
			func_158(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_157()) && !func_153(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_153(int iParam0)
{
	if (func_154(iParam0, 1))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_154(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_155(iParam0))
		{
			return 1;
		}
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_155(int iParam0)
{
	return func_156(iParam0);
}

bool func_156(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_157()
{
	return Global_2453009.f_840;
}

void func_158(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_159())
		{
			if (func_21(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_21(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_159()
{
	return Global_1312436;
}

bool func_160()
{
	return (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_161(PLAYER::PLAYER_ID()));
}

int func_161(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319.f_5, 6);
	}
	return 0;
}

void func_162()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_36 = 0;
		func_3(&uLocal_34);
		return;
	}
	if (iLocal_36)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_969018.f_15, 11))
	{
		return;
	}
	if (Global_2553793)
	{
		return;
	}
	if (func_12(&uLocal_34))
	{
		if (func_9(&uLocal_34, 30000, 0))
		{
			iLocal_36 = 1;
			Global_1590760 = -1;
		}
	}
	else
	{
		func_44(&uLocal_34, 0, 0);
	}
}

void func_163()
{
	if (MISC::IS_BIT_SET(Global_2518927.f_214, 11) || MISC::IS_BIT_SET(Global_2518927.f_214, 17))
	{
		if (Global_2518927.f_497 < MISC::GET_GAME_TIMER() + 200)
		{
			if (iLocal_33 == 0)
			{
				iLocal_33 = 1;
				if (func_21(PLAYER::PLAYER_ID(), 1, 1))
				{
					PED::SET_PED_KEEP_TASK(PLAYER::PLAYER_PED_ID(), false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
			}
		}
	}
	else if (iLocal_33 == 1)
	{
		iLocal_33 = 0;
	}
}

void func_164()
{
	switch (func_165())
	{
		case joaat("lynx"):
			Global_1703116 = 0.85f;
			break;
		
		case joaat("ztype"):
			Global_1703116 = 0.69f;
			break;
		
		case joaat("seminole2"):
			Global_1703116 = 0.64f;
			break;
		
		case joaat("michelli"):
			Global_1703116 = 0.72f;
			break;
	}
}

int func_165()
{
	return Global_262145.f_26274;
}

void func_166()
{
	func_167(&iLocal_32, -2163.247f, 1073.873f, -24.3537f, 0);
}

void func_167(int* iParam0, struct<3> Param1, bool bParam4)
{
	if (func_134(PLAYER::PLAYER_ID()) && !func_169())
	{
		if (*iParam0 == 0)
		{
			PED::GET_CLOSEST_PED(Param1, 0.1f, false, true, iParam0, false, true, -1);
		}
		else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
		{
			if (func_14(*iParam0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
				{
					if (!func_168(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Param1, 0))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, Param1, true, false, true);
						if (bParam4)
						{
						}
					}
				}
			}
		}
	}
	else if (*iParam0 != 0)
	{
		*iParam0 = 0;
	}
}

bool func_168(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_169()
{
	return func_170(PLAYER::PLAYER_ID());
}

int func_170(int iParam0)
{
	if (func_134(iParam0) || func_101(PLAYER::PLAYER_ID()) == 153)
	{
		return !func_171(iParam0);
	}
	return 0;
}

int func_171(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_2418033.f_903.f_135[iParam0];
}

void func_172()
{
	func_167(&iLocal_31, -2193.595f, 1104.256f, -23.2574f, 1);
}

void func_173()
{
	if (func_174())
	{
		if (!Global_1714802)
		{
			Global_1714800 = 1;
			Global_1714801 = 0;
		}
	}
	else if (Global_1714802)
	{
		Global_1714801 = 1;
		Global_1714800 = 0;
	}
}

int func_174()
{
	if (!MISC::IS_BIT_SET(Global_2441237.f_502.f_56, 3))
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1683970, 6) && Global_1683970.f_3498 == 153)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 6))
	{
		return 1;
	}
	if (Global_2405077.f_2678 || MISC::IS_BIT_SET(Global_1683970, 27))
	{
		return 1;
	}
	if (!func_15())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	if (func_20(PLAYER::PLAYER_ID()))
	{
		return Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16 == 153;
	}
	return 0;
}

void func_176()
{
	int iVar0;
	
	if (func_134(PLAYER::PLAYER_ID()))
	{
		if (Global_2544210.f_5191.f_763)
		{
			iVar0 = func_178();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_12(&uLocal_25))
			{
				func_44(&uLocal_25, 1, 0);
				func_177(1, 1);
			}
		}
	}
	if (func_12(&uLocal_25))
	{
		if (func_9(&uLocal_25, 10000, 1))
		{
			func_3(&uLocal_25);
			func_177(0, 0);
		}
	}
}

void func_177(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1701707 && bParam0)
		{
			Global_1701707 = 1;
			iLocal_23 = 1;
		}
	}
	else
	{
		if (Global_1701707 && iLocal_23)
		{
			Global_1701707 = 0;
		}
		iLocal_23 = 0;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1683970.f_3, 5))
		{
			MISC::SET_BIT(&(Global_1683970.f_3), 5);
			iLocal_24 = 1;
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Global_1683970.f_3, 5) && iLocal_24)
		{
			MISC::CLEAR_BIT(&(Global_1683970.f_3), 5);
		}
		iLocal_24 = 0;
	}
}

int func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_179(7, iVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1380638.f_4617.f_11[iVar0 /*16*/])) && MISC::GET_HASH_KEY(&(Global_1380638.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1380638.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_179(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1380638.f_6736[iParam0], iParam1);
}

void func_180()
{
	if (Global_1683964 == 1)
	{
		if (func_57(PLAYER::PLAYER_ID()))
		{
			if (func_182(PLAYER::PLAYER_ID()) == func_8() && Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != func_8())
			{
				if (func_25(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16) && MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 4))
				{
					func_181(1, Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16);
				}
			}
		}
	}
}

void func_181(bool bParam0, var uParam1)
{
	if (bParam0)
	{
		Global_1683970.f_487 = uParam1;
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_6 = uParam1;
	}
}

int func_182(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return iParam0;
	}
	if (func_183(iParam0) != -1)
	{
		iVar0 = func_64(func_183(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_137(iParam0, 0))
			{
				return func_136(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_8();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_8();
}

int func_183(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_21(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

void func_184()
{
	if (!iLocal_3)
	{
		if (!func_134(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_36(9831, -1, 0) == 0)
				{
					if ((((((!func_41(31708, -1, -1) && !func_41(31709, -1, -1)) && !func_41(31710, -1, -1)) && !func_41(31711, -1, -1)) && !func_41(31712, -1, -1)) && !func_41(31713, -1, -1)) && !func_41(31757, -1, -1))
					{
						func_33(9831, 6, -1, 1, 0);
						AUDIO::_0x4E0AF9114608257C("RADIO_36_AUDIOPLAYER", "TUNER_AP_SILENCE_MUSIC", 0);
						iLocal_3 = 1;
					}
				}
			}
		}
	}
}

void func_185()
{
	if ((Global_111239 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_15())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_186()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574226)
		{
			iVar0 = func_187(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10298 = 1;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1574226)
	{
		iLocal_5 = 0;
	}
}

int func_187(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_188()
{
	if (!iLocal_4)
	{
		if (Global_1574226)
		{
			if (func_190() || func_189())
			{
				Global_262145.f_19876 = 1;
			}
			else
			{
				Global_262145.f_19876 = 0;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574226)
	{
		iLocal_4 = 0;
	}
}

int func_189()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_187(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10407)
	{
		return 0;
	}
	uVar1[0] = func_187(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_187(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_187(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_187(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10403 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10407)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_190()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_187(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10406)
	{
		return 0;
	}
	uVar1[0] = func_187(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_187(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_187(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_187(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10402 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10406)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_191()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590908)
		{
			MISC::SET_BIT(&(Global_1590908[iVar0 /*874*/].f_752), 1);
			iVar0++;
		}
	}
}

void func_192()
{
	if (Global_262145.f_10382 != 120)
	{
		Global_262145.f_10382 = 120;
	}
}

void func_193()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_194(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_194(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_195()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

