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
	int iLocal_346[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_379 = 0;
	int iLocal_380[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 10;
	var uLocal_422 = -1;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = -1;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = -1;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = -1;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = -1;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = -1;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = -1;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = -1;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	bool bLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	struct<2> Local_644 = { 0, -1 } ;
	struct<3> Local_646 = { -1, -1, -1000 } ;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	int iLocal_660 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.55.19_STAGE1";
	iLocal_21 = -1;
	iLocal_22 = -1;
	iLocal_379 = 5;
	iLocal_616 = -1;
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
		if (func_434())
		{
			func_432();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2461742.f_3)
		{
			func_431();
			func_430();
			func_427();
			func_425();
			func_424();
			func_423();
			func_419();
			func_415();
			func_412();
			func_411();
			func_405();
			func_403();
			func_402();
			func_401();
			func_389();
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_388();
				func_387();
				func_383();
				func_382();
			}
			func_381();
			func_375();
			func_374();
			func_372();
			func_361();
			func_357();
			func_346();
			func_326();
			func_318();
			func_314();
			func_312();
			func_302();
			func_301();
			func_299();
			func_294();
			func_288();
			func_287();
			func_283();
			func_279();
			func_278();
			func_277();
			func_269();
			func_258();
			func_243();
			func_230();
			func_229();
			func_227();
			func_224();
			func_182();
			func_177();
			func_175();
			func_172();
			func_171();
			func_167();
			func_164();
			func_154();
			func_126();
			func_121();
			func_116();
			func_99();
			func_98();
			func_94();
			func_28();
		}
		else
		{
			func_27(1);
		}
		func_19();
		func_3();
		func_2();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1391764 = 1;
}

void func_2()
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

void func_3()
{
	int iVar0;
	
	if (func_14())
	{
		if (!func_13(&uLocal_613))
		{
			func_12(&uLocal_613, 1, 0);
		}
		else
		{
			iVar0 = func_11();
			if (func_10(&uLocal_613, iVar0, 1))
			{
				func_5(0, 1);
				func_4(&uLocal_613);
			}
		}
	}
	else
	{
		func_4(&uLocal_613);
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_5(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 = func_9();
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_8 = 0;
		Global_1683970.f_489 = 0;
		MISC::SET_BIT(&(Global_1683970.f_489), 0);
		func_7();
	}
	func_6(iParam0);
	Global_1683970.f_487 = -1;
	Global_1683970.f_3497 = 1;
	Global_1683970.f_3498 = 153;
	Global_1683970.f_3499 = 0;
	Global_1683970.f_3504 = 1;
}

void func_6(int iParam0)
{
	MISC::SET_BITS_IN_RANGE(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_3), 28, 31, iParam0);
}

void func_7()
{
	func_8(-1);
}

void func_8(int iParam0)
{
	Global_1683970.f_3178 = iParam0;
}

int func_9()
{
	return -1;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_12(uParam0, bParam2, 0);
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

int func_11()
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

void func_12(var uParam0, bool bParam1, bool bParam2)
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

bool func_13(var uParam0)
{
	return uParam0->f_1;
}

bool func_14()
{
	struct<4> Var0;
	
	if (((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !Global_2461742.f_3) || func_18()) || !func_16()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(PLAYER::PLAYER_PED_ID())) || Global_1683970.f_3497) || MISC::IS_BIT_SET(Global_1683970, 6))
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

int func_15(int iParam0)
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

int func_16()
{
	if (func_17() == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	return Global_1312485.f_18;
}

bool func_18()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192 != 0;
}

void func_19()
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
				if (Global_1683970.f_480 && func_26(Global_1683970.f_3268))
				{
					func_24(1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				func_24(1);
				if ((!func_18() && func_16()) && Global_1683964 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_16() && !func_23(PLAYER::PLAYER_ID())) && !func_21(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_20() == 37 && Global_262145.f_10427)
				{
					func_12(&uLocal_29, 1, 0);
				}
				if (bVar0)
				{
					iLocal_28 = 2;
				}
				break;
			
			case 2:
				func_24(0);
				iLocal_28 = 0;
				break;
		}
	}
	else if (iLocal_28 != 0)
	{
		func_24(0);
		iLocal_28 = 0;
	}
	if (func_13(&uLocal_29))
	{
		if (func_10(&uLocal_29, 20000, 1))
		{
			func_4(&uLocal_29);
			Global_262145.f_10427 = 1;
		}
		else
		{
			Global_262145.f_10427 = 0;
		}
	}
}

int func_20()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192;
}

int func_21(int iParam0)
{
	if (iParam0 != func_9() && func_22(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
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

int func_23(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == PLAYER::PLAYER_ID()) && func_22(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

void func_24(bool bParam0)
{
	func_25(bParam0);
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

void func_25(bool bParam0)
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

int func_26(int iParam0)
{
	if ((((iParam0 == 150 || iParam0 == 148) || iParam0 == 152) || iParam0 == 151) || iParam0 == 149)
	{
		return 1;
	}
	return 0;
}

void func_27(bool bParam0)
{
	if (iLocal_637 > 0)
	{
		iLocal_636 = 0;
		iLocal_637 = 0;
		if (bParam0)
		{
			iLocal_639 = 0;
		}
	}
}

void func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_1394274.f_550 = 1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 1249026189:
						func_29(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_29(int iParam0)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	Var0.f_3 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 11) && !(Var0.f_6 || Var0.f_7))
		{
			bVar9 = false;
		}
		else if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_29 == Var0.f_5 && Var0.f_2 == PLAYER::PLAYER_ID())
		{
			bVar9 = false;
		}
		else if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_29 > 0 && !(Var0.f_6 || Var0.f_7))
		{
			bVar9 = false;
		}
		else if (Global_1669309)
		{
			bVar9 = false;
		}
		else if (func_18())
		{
			bVar9 = false;
		}
		else if (func_93() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar9 = false;
		}
		else if (func_57(1, 0))
		{
			bVar9 = false;
		}
		else if (func_56() && !MISC::IS_BIT_SET(Var0.f_8, 0))
		{
			bVar9 = false;
		}
		else if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !(Var0.f_6 || Var0.f_7))
		{
			bVar9 = false;
		}
		else if (func_55(PLAYER::PLAYER_ID()))
		{
			bVar9 = false;
		}
		else if (func_54(PLAYER::PLAYER_ID()))
		{
			bVar9 = false;
		}
		else if (Var0.f_5 <= 0 || Var0.f_5 > 127)
		{
			bVar9 = false;
		}
		else if (!func_53())
		{
			bVar9 = true;
			if (((func_52(PLAYER::PLAYER_ID()) || func_51(PLAYER::PLAYER_ID())) && !Global_1669177) && (Var0.f_6 || Var0.f_7))
			{
				bVar9 = false;
			}
		}
		else if ((((Global_1573345 && func_53()) && Var0.f_5 == Global_1573328) && Global_1669177) && (Var0.f_6 || Var0.f_7))
		{
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 11))
			{
			}
			bVar9 = true;
		}
		else if (!Global_1573345)
		{
		}
		else if (Var0.f_5 != Global_1573328)
		{
		}
		else if (!Global_1669177)
		{
		}
		if (bVar9)
		{
			Global_2544210.f_428 = Var0.f_2;
			Global_2544210.f_428.f_4 = Var0.f_5;
			Global_2544210.f_428.f_6 = Var0.f_3;
			Global_1590554.f_184 = Global_2544210.f_428.f_6;
			Global_1590554.f_19 = Global_2544210.f_428.f_4;
			Global_1590554.f_3 = Global_2544210.f_428;
			Global_1590554.f_4 = { func_50(Global_2544210.f_428) };
			Global_1590554.f_20 = 0;
			Global_1590554 = -1;
			Global_1590554.f_2 = -1;
			Global_1590554.f_17 = 0;
			Global_1590554.f_18 = 0;
			Global_1590554.f_185 = Var0.f_4;
			if (func_49(Global_1590554.f_19))
			{
				Global_1590554.f_185 = Var0.f_3;
			}
			MISC::SET_BIT(&(Global_1590554.f_22), 9);
			iVar10 = 0;
			while (iVar10 < 26)
			{
				if (Global_1590908[Global_2544210.f_428 /*874*/].f_267[iVar10] > 0 && (Global_1590908[Global_2544210.f_428 /*874*/].f_267[iVar10] == Global_2544210.f_428.f_4 || Global_1590908[Global_2544210.f_428 /*874*/].f_267[iVar10] == func_48(Global_2544210.f_428.f_4)))
				{
					iVar11 = iVar10;
				}
				iVar10++;
			}
			func_46(Global_1590554.f_19, iVar11, Global_1590554.f_20, Global_1590554.f_4, Global_1590554.f_185);
			bVar12 = true;
			if (MISC::IS_BIT_SET(Var0.f_8, 0))
			{
				bVar12 = false;
				MISC::SET_BIT(&(Global_1590554.f_22), 20);
			}
			if (func_45(Global_1590554.f_19, -1))
			{
				bVar12 = false;
			}
			if (bVar12)
			{
				MISC::SET_BIT(&(Global_2544210.f_428.f_5), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2544210.f_428.f_5), 5);
			}
			if (Var0.f_6)
			{
				MISC::SET_BIT(&(Global_1590554.f_22), 16);
				Global_1669176 = 1;
				MISC::CLEAR_BIT(&(Global_2544210.f_428.f_5), 5);
				GRAPHICS::ANIMPOSTFX_PLAY("HeistLocate", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Mission_Pass_Notify", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
				if (func_44(Global_1590554.f_19) && (func_44(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_29) || (Global_1659956 && func_44(Global_2464923))))
				{
					func_31(PLAYER::PLAYER_ID(), 0, 32768, 0);
					CAM::DO_SCREEN_FADE_OUT(100);
				}
				else if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 11) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 15))
				{
					func_31(PLAYER::PLAYER_ID(), 0, 32768, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
				else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_31(PLAYER::PLAYER_ID(), 0, 32768, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
				else
				{
					func_31(PLAYER::PLAYER_ID(), 0, 0, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
			}
			else if (Var0.f_7)
			{
				MISC::SET_BIT(&(Global_1590554.f_22), 16);
				Global_1669173 = 1;
				MISC::CLEAR_BIT(&(Global_2544210.f_428.f_5), 5);
				CAM::DO_SCREEN_FADE_OUT(500);
				GRAPHICS::ANIMPOSTFX_PLAY("HeistLocate", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Mission_Pass_Notify", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
				if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 11) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 15))
				{
					func_31(PLAYER::PLAYER_ID(), 0, 32768, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
				else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_31(PLAYER::PLAYER_ID(), 0, 32768, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
				else
				{
					func_31(PLAYER::PLAYER_ID(), 0, 0, 0);
					func_30(&(Global_2544210.f_428.f_8), 1, 0);
				}
			}
			MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27), 4);
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_28 = 0;
			Global_1590554.f_25 = 0;
			MISC::SET_BIT(&(Global_2544210.f_428.f_5), 0);
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) > 0)
			{
				MISC::SET_BIT(&(Global_2544210.f_428.f_5), 2);
			}
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
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

void func_31(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_43())
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
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (!func_16())
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
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_40(PLAYER::PLAYER_ID(), 0) && !func_39()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_36(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_35(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_34();
					func_33();
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
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_35(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_32(Global_4456448.f_133963))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_32(int iParam0)
{
	return iParam0 == 17;
}

void func_33()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_34()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
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
			if (bParam0 == 1)
			{
				func_38();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_40(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_37(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_37(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_38()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_39()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_41(-1, 0) == 8;
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

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
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

int func_42()
{
	return Global_1312763;
}

int func_43()
{
	if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2, struct<13> Param3, int iParam16)
{
	Global_2453903.f_1.f_2828 = { Param3 };
	func_47(&(Global_2453903.f_1.f_2828.f_13), iParam0, iParam1, iParam2, iParam16);
}

void func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = 0;
	if (iParam4 > 0)
	{
		*uParam0 = (iParam4 * 1000000);
	}
	*uParam0 = (*uParam0 + (iParam3 * 100000));
	*uParam0 = (*uParam0 + iParam1 * 100);
	*uParam0 = (*uParam0 + iParam2);
}

int func_48(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_50(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_51(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_52(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_53()
{
	return Global_1573346;
}

int func_54(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_395.f_2, 17);
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_336, 31);
	}
	return 0;
}

var func_56()
{
	return Global_2463533;
}

int func_57(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1573348 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1573348;
			MISC::CLEAR_BIT(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1573348;
			MISC::CLEAR_BIT(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 6)
		{
			uVar4 = Global_1573348;
			MISC::CLEAR_BIT(&uVar4, 7);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 8)
		{
			uVar5 = Global_1573348;
			MISC::CLEAR_BIT(&uVar5, 8);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 9)
		{
			uVar6 = Global_1573348;
			MISC::CLEAR_BIT(&uVar6, 9);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 10)
		{
			uVar7 = Global_1573348;
			MISC::CLEAR_BIT(&uVar7, 10);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 11)
		{
			uVar8 = Global_1573348;
			MISC::CLEAR_BIT(&uVar8, 11);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 12)
		{
			uVar9 = Global_1573348;
			MISC::CLEAR_BIT(&uVar9, 12);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 13)
		{
			uVar10 = Global_1573348;
			MISC::CLEAR_BIT(&uVar10, 14);
			if (bParam0)
			{
			}
			return 1;
		}
	}
	if (((((((((((func_89(PLAYER::PLAYER_ID()) && !func_87()) && !(iParam1 == 4 && func_85(PLAYER::PLAYER_ID()))) && !(iParam1 == 3 && func_82())) && !(iParam1 == 6 && func_80())) && !(iParam1 == 7 && func_80())) && !(iParam1 == 8 && func_78())) && !(iParam1 == 9 && func_76())) && !(iParam1 == 10 && func_74())) && !(iParam1 == 11 && func_73())) && !(iParam1 == 12 && func_71())) && !(iParam1 == 13 && func_64()))
	{
		return 1;
	}
	if (func_63(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_62(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (func_62(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (func_59() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 1;
	}
	if (func_58(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bVar1)
	{
		if (Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 9 || Global_4456448.f_2 == 2)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_15532)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (func_51(PLAYER::PLAYER_ID()) || func_52(PLAYER::PLAYER_ID()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2518926;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_59()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_60(Global_4456448.f_85535);
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_61()
{
	return Global_2453009.f_17;
}

bool func_62(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_63(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11)), joaat("JUGG_SUIT"), 0))
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	return func_65(PLAYER::PLAYER_ID());
}

int func_65(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_70(iParam0, 0))
		{
			if ((func_69(iParam0) == 237 && !func_66(iParam0)) || func_69(iParam0) == 238)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_9())
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (((((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_69(iParam0) == 237 || func_69(iParam0) == 250)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	return func_72(PLAYER::PLAYER_ID());
}

int func_72(int iParam0)
{
	if (iParam0 != func_9())
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	return func_65(PLAYER::PLAYER_ID());
}

int func_74()
{
	return func_75(PLAYER::PLAYER_ID());
}

int func_75(int iParam0)
{
	if (iParam0 != func_9())
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	return func_77(PLAYER::PLAYER_ID());
}

int func_77(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		if (func_69(iParam0) == 233)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_78()
{
	return func_79(PLAYER::PLAYER_ID());
}

int func_79(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		if (func_69(iParam0) == 229)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_80()
{
	return func_81(PLAYER::PLAYER_ID());
}

int func_81(int iParam0)
{
	if (func_69(iParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	return func_83(PLAYER::PLAYER_ID());
}

int func_83(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		if (func_84(func_69(iParam0)))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_85(int iParam0)
{
	return func_86(func_69(iParam0));
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

bool func_87()
{
	return func_88(PLAYER::PLAYER_ID());
}

int func_88(int iParam0)
{
	if (((func_69(iParam0) == 167 || func_69(iParam0) == 168) || func_69(iParam0) == 190) || func_69(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	if (func_92(iParam0))
	{
		return 1;
	}
	if (func_90(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_91(iParam0, 9);
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_93()
{
	return Global_1311716[0 /*4*/] > 0;
}

void func_94()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_ARMORY_TRUCK")) < 1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, false, true, 0))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (func_95())
	{
		return;
	}
	if (((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		Global_1683970.f_507 = 1;
	}
}

bool func_95()
{
	return MISC::GET_GAME_TIMER() <= Global_22670.f_6135 + 100;
}

int func_96()
{
	if (func_97())
	{
		return Global_1683970.f_503 == 0;
	}
	return 0;
}

bool func_97()
{
	return Global_1683970.f_502;
}

void func_98()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("business_hub_carmod")) > 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_BUSINESS_HUB")) < 1)
	{
		if (!Global_1683634)
		{
			Global_1683634 = 1;
			Global_99422.f_18[45] = 0;
		}
	}
}

void func_99()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "AM_MP_SMPL_INTERIOR_EXT";
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, 81, true, 0))
		{
			iVar1 = func_109();
			if (func_105(81, iVar1))
			{
				if (!iLocal_660)
				{
					iVar2 = func_102(iVar1, 1, 0);
					MISC::SET_BIT(&(Global_1683970.f_4415), 3);
					if (!MISC::IS_BIT_SET(Global_1683970.f_1, 3) && func_100(iVar2))
					{
						MISC::SET_BIT(&(Global_1683970.f_1), 3);
					}
					iLocal_660 = 1;
				}
			}
			else if (iLocal_660)
			{
				MISC::CLEAR_BIT(&(Global_1683970.f_4415), 3);
				iLocal_660 = 0;
			}
		}
	}
	else if (iLocal_660)
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_4415), 3);
		iLocal_660 = 0;
	}
}

int func_100(int iParam0)
{
	if (func_22(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_101(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_22(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_104(iParam0, 1))
	{
		return func_9();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_103(iVar0, 0, bParam1, iParam2);
	}
	return func_9();
}

int func_103(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_22(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_22(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_9();
}

int func_104(int iParam0, bool bParam1)
{
	if (Global_77248)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_106(iParam0, &Var0);
		if ((((((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f) || SYSTEM::VDIST2(779.3155f, -1867.506f, 28.2965f, Var0) <= 900f) || SYSTEM::VDIST2(755.8645f, -1842.677f, 28.2916f, Var0) <= 900f) || SYSTEM::VDIST2(755.299f, -1850.067f, 28.2916f, Var0) <= 900f) || SYSTEM::VDIST2(754.568f, -1857.565f, 28.2916f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

void func_106(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_109();
	switch (iParam0)
	{
		case 81:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailerlarge"))
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8.9f, -2f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_108(PLAYER::PLAYER_ID()))
		{
			if (func_107(*uParam1))
			{
				if (Global_1683970.f_3522 != func_9())
				{
					if (!func_107(Global_2426865[Global_1683970.f_3522 /*449*/].f_319.f_11))
					{
						*uParam1 = { Global_2426865[Global_1683970.f_3522 /*449*/].f_319.f_11 };
					}
				}
			}
		}
	}
}

int func_107(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 8);
	}
	return 0;
}

int func_109()
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar28;
	int iVar29;
	int iVar30;
	var uVar31[25];
	int iVar57;
	int iVar58;
	var uVar59[25];
	int iVar85;
	
	if ((Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16 != -1 && func_21(PLAYER::PLAYER_ID())) && func_115(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16) == 4)
	{
		return -1;
	}
	if (func_114(PLAYER::PLAYER_ID()) && !func_108(PLAYER::PLAYER_ID()))
	{
		iVar29 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar29)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
					{
						if (func_104(uVar2[iVar0], 1))
						{
							sVar28 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar28))
							{
								if (MISC::ARE_STRINGS_EQUAL(sVar28, "am_mp_bunker"))
								{
									if (func_22(Global_1590746, 1, 1))
									{
										if (func_102(uVar2[iVar0], 1, 0) == Global_1590746)
										{
											return uVar2[iVar0];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (func_112(PLAYER::PLAYER_ID(), 0) && !func_114(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_111())
		{
			iVar57 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar31);
			iVar30 = 0;
			while (iVar30 < iVar57)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar31[iVar30]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar31[iVar30]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar31[iVar30], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
						{
							if (func_104(uVar31[iVar30], 1))
							{
								if (func_22(func_111(), 1, 1))
								{
									if (func_102(uVar31[iVar30], 1, 0) == func_111())
									{
										return uVar31[iVar30];
									}
								}
							}
						}
					}
				}
				iVar30++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_108(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2544210.f_290))
			{
				iVar85 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar59);
				iVar58 = 0;
				while (iVar58 < iVar85)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar59[iVar58]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar59[iVar58]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar59[iVar58], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Truck", 3))
							{
								if (func_104(uVar59[iVar58], 1))
								{
									if (func_22(Global_1683970.f_3522, 1, 1))
									{
										if (func_102(uVar59[iVar58], 1, 0) == Global_1683970.f_3522)
										{
											Global_2544210.f_290 = uVar59[iVar58];
											return uVar59[iVar58];
										}
									}
								}
							}
						}
					}
					iVar58++;
				}
			}
			else
			{
				return Global_2544210.f_290;
			}
		}
	}
	else if (func_108(PLAYER::PLAYER_ID()))
	{
		func_110(0);
	}
	return Global_2544210.f_304[1];
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 8))
		{
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319), 8);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 8))
	{
		MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319), 8);
	}
}

int func_111()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
}

bool func_112(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_113(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_9();
}

int func_113(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_9())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
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

void func_116()
{
	if (!func_118(31736, -1, -1))
	{
		if (Global_2518927.f_546 >= 7)
		{
			func_117(31736, 1, -1, 1);
		}
	}
}

bool func_117(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_42();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar26, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_118(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_42();
	}
	iVar1 = func_120(iParam0, iParam1);
	iVar2 = func_119(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_119(int iParam0)
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

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_42();
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

void func_121()
{
	if (((((((((func_125(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_IN()) && func_123() > 0) && Global_1683964 == 7) && func_16()) && func_122() == 0) && !Global_1312902) && !MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 28)) && !Global_2405077.f_2678) && !MISC::IS_BIT_SET(Global_1683970.f_3, 5))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_smpl_interior_int")) > 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_business_hub")) <= 0)
		{
			if (!func_13(&uLocal_658))
			{
				func_12(&uLocal_658, 0, 0);
			}
			else if (func_10(&uLocal_658, 5000, 0))
			{
				func_4(&uLocal_658);
				NETWORK::NETWORK_BAIL(0, 0, 0);
			}
		}
		else if (func_13(&uLocal_658))
		{
			func_4(&uLocal_658);
		}
	}
	else if (func_13(&uLocal_658))
	{
		func_4(&uLocal_658);
	}
}

int func_122()
{
	return Global_31345;
}

int func_123()
{
	return func_124(PLAYER::PLAYER_ID());
}

int func_124(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

int func_125(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

void func_126()
{
	int iVar0;
	int iVar1;
	
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_16()) || !MISC::IS_PC_VERSION())
	{
		iLocal_655 = 0;
		iLocal_656 = 0;
		iLocal_657 = 0;
		return;
	}
	if (iLocal_655 && iLocal_656)
	{
		return;
	}
	if (!iLocal_655)
	{
		if (((func_152(func_153(0), -1, 0) == 0 && func_152(func_151(0), -1, 0) != 0) && func_152(9849, func_42(), 0) != 0) || iLocal_657 == 1)
		{
			iVar0 = func_152(9849, func_42(), 0);
			if (!func_127(func_150(iVar0), 0, &iLocal_657))
			{
				return;
			}
			if (iLocal_657 == 2)
			{
			}
			iLocal_657 = 0;
			iLocal_655 = 1;
		}
		else
		{
			iLocal_655 = 1;
		}
	}
	if (!iLocal_656 && iLocal_655)
	{
		if (((func_152(func_153(1), -1, 0) == 0 && func_152(func_151(1), -1, 0) != 0) && func_152(9853, func_42(), 0) != 0) || iLocal_657 == 1)
		{
			iVar1 = func_152(9853, func_42(), 0);
			if (!func_127(func_150(iVar1), 1, &iLocal_657))
			{
				return;
			}
			if (iLocal_657 == 2)
			{
			}
			iLocal_657 = 0;
			iLocal_656 = 1;
		}
		else
		{
			iLocal_656 = 1;
		}
	}
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		*iParam2 = 3;
		return 1;
	}
	if (func_149())
	{
		if (func_130(iParam2, iParam0, iParam1))
		{
			if (*iParam2 == 2)
			{
				func_128(func_153(iParam1), iParam0, -1, 1, 0);
			}
		}
		return (*iParam2 != 1 && *iParam2 != 0);
	}
	else
	{
		if (iParam0 != -1)
		{
			func_128(func_153(iParam1), iParam0, -1, 1, 0);
		}
		*iParam2 = 2;
		return 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_129(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_42();
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

bool func_130(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_148() != -1)
			{
				return 0;
			}
			else
			{
				iVar0 = func_147(iParam2);
				if (func_143(78225582, 69656641, iVar0, -886368739, iParam1, 0, 1, 4, 0, 3))
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 3;
				}
				if (*uParam0 == 1 && func_137())
				{
				}
				else
				{
					*uParam0 = 3;
					func_133(func_148());
				}
			}
			break;
		
		case 1:
			if (func_148() == -1)
			{
				*uParam0 = 3;
			}
			else if (func_132(func_148()))
			{
				if (func_131(func_148()) == 2)
				{
					*uParam0 = 2;
					func_133(func_148());
				}
				else
				{
					*uParam0 = 3;
					func_133(func_148());
				}
			}
			break;
	}
	return (*uParam0 != 1 && *uParam0 != 0);
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_149())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_136(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_134(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_134(var uParam0)
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
	func_135(&(uParam0->f_14));
	func_135(&(uParam0->f_14.f_13));
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

void func_135(var uParam0)
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

int func_136(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_137()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_149())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_148();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_42()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_142(Global_4265506[iVar2 /*85*/].f_66.f_6, Global_4265506[iVar2 /*85*/].f_66.f_4, Global_4265506[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4267008 = 1;
			}
			return 0;
		}
		if (Global_2464661)
		{
			if (Global_4265506[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4265506[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_141(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4265506[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4265506[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4265506[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4265506[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4265506[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_138(Global_4265506[iVar2 /*85*/], iVar2);
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	return 0;
}

void func_138(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_140(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_139();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_139()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_140(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_142(int iParam0, int iParam1, int iParam2)
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
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
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

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_149())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_42()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_148();
	if (iVar1 == -1)
	{
		if (!func_145(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_144(iParam1))
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
		Global_4265506[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4265506[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4265506[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(int iParam0)
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_149())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_42()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4265506[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4265506[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_146(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_149())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = uParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_138(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_1_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_148()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_141(iVar0) != 2147483647)
		{
			if (func_136(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_149()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weevil"):
			return 1;
		
		case joaat("brioso2"):
			return 2;
		
		case joaat("rhapsody"):
			return 3;
		
		case joaat("club"):
			return 4;
		
		case joaat("issi3"):
			return 5;
		
		case joaat("nebula"):
			return 6;
		
		case joaat("dynasty"):
			return 7;
		
		case joaat("fagaloa"):
			return 8;
		
		case joaat("futo"):
			return 9;
		
		case joaat("asbo"):
			return 10;
		
		case joaat("sentinel"):
			return 11;
		
		case joaat("dominator3"):
			return 12;
		
		case joaat("vamos"):
			return 13;
		
		case joaat("hermes"):
			return 14;
		
		case joaat("coquette3"):
			return 15;
		
		case joaat("riata"):
			return 16;
		
		case joaat("everon"):
			return 17;
		
		case joaat("glendale2"):
			return 18;
		
		case joaat("schafter3"):
			return 19;
		
		case joaat("warrener"):
			return 20;
		
		case joaat("primo2"):
			return 21;
		
		case joaat("seminole2"):
			return 22;
		
		case joaat("rebla"):
			return 23;
		
		case joaat("swinger"):
			return 24;
		
		case joaat("flashgt"):
			return 25;
		
		case joaat("raiden"):
			return 26;
		
		case joaat("surano"):
			return 27;
		
		case joaat("penumbra2"):
			return 28;
		
		case joaat("vstr"):
			return 29;
		
		case joaat("jugular"):
			return 30;
		
		case joaat("toros"):
			return 31;
		
		case joaat("entity2"):
			return 32;
		
		case joaat("tempesta"):
			return 33;
		
		case joaat("thrax"):
			return 34;
		
		case joaat("sc1"):
			return 35;
		
		case joaat("gp1"):
			return 36;
		
		case joaat("cheetah2"):
			return 37;
		
		case joaat("neo"):
			return 38;
		
		case joaat("comet2"):
			return 39;
		
		case joaat("paragon"):
			return 40;
		
		default:
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9858;
		
		case 1:
			return 9859;
		
		default:
	}
	return 12074;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9860;
		
		case 1:
			return 9861;
		
		default:
	}
	return 12074;
}

void func_154()
{
	if ((func_163(PLAYER::PLAYER_ID()) && func_123() == 1) && Global_1683964 == 7)
	{
		if ((func_162() || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)) || PAD::IS_CONTROL_PRESSED(0, 75))
		{
			func_156(1);
			func_30(&uLocal_653, 1, 0);
		}
		if (func_18() || func_155(0))
		{
			Global_1701870.f_3 = 1;
			Global_1701870.f_4 = 1;
			func_30(&uLocal_651, 1, 0);
		}
	}
	if (func_13(&uLocal_651))
	{
		if (func_10(&uLocal_651, 5000, 1))
		{
			func_4(&uLocal_651);
			Global_1701870.f_3 = 0;
			Global_1701870.f_4 = 0;
		}
	}
	if (func_13(&uLocal_653))
	{
		func_156(1);
		if (func_10(&uLocal_653, 6000, 1))
		{
			func_4(&uLocal_653);
		}
	}
}

int func_155(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7668, 14))
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
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0)
{
	if (func_161())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_155(0))
		{
			func_157(iParam0);
		}
		MISC::SET_BIT(&Global_7669, 2);
	}
}

void func_157(int iParam0)
{
	if (func_161())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_160())
		{
			func_159(1, 1);
		}
		else
		{
			func_159(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7669, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7668, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7668, 30);
	}
	if (!func_158())
	{
		Global_19798.f_1 = 3;
	}
}

int func_158()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_159(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_155(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19735);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
		}
	}
}

bool func_160()
{
	return MISC::IS_BIT_SET(Global_1695733, 5);
}

bool func_161()
{
	return MISC::IS_BIT_SET(Global_1695733, 19);
}

int func_162()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (func_15(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { -2148.613f, 1106.074f, 31.21305f };
		Var3 = { -2132.121f, 1106.089f, 24.41229f };
		fVar6 = 10f;
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

void func_164()
{
	if (!func_16())
	{
		if (func_166())
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			func_165(0);
		}
	}
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1683970.f_7), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_7), 11);
	}
}

bool func_166()
{
	return MISC::IS_BIT_SET(Global_1683970.f_7, 11);
}

void func_167()
{
	if (((func_170(PLAYER::PLAYER_ID()) != 0 && Global_1683970.f_3268 == func_168(func_170(PLAYER::PLAYER_ID()))) && MISC::IS_BIT_SET(Global_1683970.f_2, 13)) && Global_1590751 == func_9())
	{
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 = PLAYER::PLAYER_ID();
		Global_1590751 = PLAYER::PLAYER_ID();
	}
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_115(iVar0) == 9)
		{
			if (func_169(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_170(int iParam0)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_273;
}

void func_171()
{
	if (!iLocal_650)
	{
		if (MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 4))
		{
			MISC::SET_BIT(&(Global_2544210.f_4658), 0);
			iLocal_650 = 1;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5, 4))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4658), 0);
		iLocal_650 = 0;
	}
}

void func_172()
{
	if (func_173())
	{
		if (!iLocal_649)
		{
			iLocal_649 = 1;
			MISC::SET_BIT(&(Global_1683970.f_4415), 4);
		}
	}
	else if (iLocal_649)
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_4415), 4);
		iLocal_649 = 0;
	}
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	if (!func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("oppressor2")))
	{
		return 0;
	}
	return 1;
}

int func_174(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

void func_175()
{
	int iVar0;
	int iVar1;
	
	if (!func_163(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (!func_176(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("cyclone")))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
}

int func_176(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

void func_177()
{
	if (!func_181())
	{
		return;
	}
	if (func_163(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_178(55) || func_178(54))
	{
		Global_4267021 = 1;
	}
}

bool func_178(int iParam0)
{
	return func_179(iParam0, 6, 1);
}

int func_179(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_122() == 0)
		{
			return MISC::IS_BIT_SET(func_152(func_180(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_180(int iParam0)
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

bool func_181()
{
	return Global_99422.f_364 > 0;
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_199();
	if (!func_198(Local_644))
	{
		func_196();
	}
	if (func_69(PLAYER::GET_PLAYER_INDEX()) != 277 && iLocal_640 == 0)
	{
		func_195();
		return;
	}
	if (iLocal_643 == 0)
	{
		if (func_194())
		{
			iLocal_643 = Global_1689734.f_4946.f_3;
		}
		else
		{
			iVar0 = Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_193;
			iLocal_643 = func_193(iVar0);
		}
	}
	if (iLocal_643 == 0)
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (func_192(1))
	{
		iVar1 = func_111();
	}
	if (Local_644.f_1 == -1 && !func_190(Local_644))
	{
		if (Local_644.f_1 == -1)
		{
			iVar2 = 0;
			while (iVar2 < 64)
			{
				if ((Global_2419497.f_199.f_1[iVar2 /*15*/].f_1 == iVar1 && Global_2419497.f_199.f_1[iVar2 /*15*/].f_3 == 23) && Global_2419497.f_199.f_1[iVar2 /*15*/].f_1.f_1 != -1)
				{
					Local_644 = { Global_2419497.f_199.f_1[iVar2 /*15*/].f_1 };
					Local_646 = { Global_2419497.f_199.f_1[iVar2 /*15*/].f_11 };
				}
				iVar2++;
			}
		}
		if ((Local_644.f_1 != -1 && Local_646.f_1 != -1) && iVar1 == PLAYER::PLAYER_ID())
		{
			if (func_186(Local_644, Local_646))
			{
			}
		}
	}
	else if ((func_184() && iLocal_640 == 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), func_183(iLocal_643)) < 100f)
	{
		iLocal_640 = 1;
	}
}

Vector3 func_183(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_15(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_15(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (func_185(iVar1))
			{
				return DECORATOR::DECOR_EXIST_ON(iVar0, "FMCVehicle");
			}
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1683645[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_186(struct<2> Param0, struct<3> Param2)
{
	bool bVar0;
	
	if (!func_13(&(Global_1689734.f_4780)) || func_10(&(Global_1689734.f_4780), 1500, 0))
	{
		bVar0 = true;
		func_30(&(Global_1689734.f_4780), 0, 0);
	}
	if (!bVar0)
	{
		if (MISC::GET_FRAME_COUNT() == Global_1689734.f_4782)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_187(Param0, 23, 1, Param2, 0);
		Global_1689734.f_4782 = MISC::GET_FRAME_COUNT();
	}
	return 0;
}

void func_187(struct<2> Param0, int iParam2, int iParam3, struct<3> Param4, int iParam7)
{
	struct<10> Var0;
	int iVar10;
	
	if (!func_189(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0 = 1490942189;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam2;
	Var0.f_9 = iParam3;
	Var0.f_5 = iParam7;
	Var0.f_6 = { Param4 };
	iVar10 = func_188(1, 1);
	if (!iVar10 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 10, iVar10);
	}
}

int func_188(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_22(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_189(struct<3> Param0)
{
	if (Param0.x == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

int func_190(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_191(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_191(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

bool func_192(bool bParam0)
{
	return func_112(PLAYER::PLAYER_ID(), bParam0);
}

int func_193(int iParam0)
{
	switch (iParam0)
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
	return 0;
}

int func_194()
{
	switch (Global_1689734.f_4946.f_3)
	{
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
			return 1;
		
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
			return 1;
		
		default:
	}
	return 0;
}

void func_195()
{
	iLocal_643 = 0;
	Local_644.f_1 = -1;
	Local_644 = func_9();
	Local_646.f_1 = -1;
	Local_646.x = -1;
	Local_646.f_2 = -1000;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_640 = 0;
}

void func_196()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 1490942189:
						func_197(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	struct<7> Var0;
	
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		if ((Var0.f_2 == PLAYER::PLAYER_ID() && Var0.f_4 == 23) && Var0.f_6 == joaat("fm_content_auto_shop_delivery"))
		{
			Local_644 = { Var0.f_2 };
			Local_646 = { Var0.f_6 };
		}
	}
}

bool func_198(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_9());
}

void func_199()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_640)
	{
		case 0:
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_640 = 2;
			}
			break;
		
		case 2:
			if (func_202(iLocal_643, Local_646, Local_644, 0, 0, 0))
			{
				iLocal_640 = 3;
			}
			break;
		
		case 3:
			if (func_15(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_15(iVar0))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
						Var1.f_2 = (Var1.f_2 - 10f);
						ENTITY::SET_ENTITY_COORDS(iVar0, Var1, false, false, false, false);
						iLocal_640 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (func_15(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
					return;
				}
			}
			iLocal_640 = 5;
			break;
		
		case 5:
			if (func_15(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
			iLocal_640 = 6;
			break;
		
		case 6:
			if (func_15(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					return;
				}
				else if (func_200())
				{
					func_195();
				}
			}
			break;
	}
}

int func_200()
{
	var uVar0;
	struct<3> Var1;
	
	if (!iLocal_641)
	{
		iLocal_641 = 1;
		if (func_15(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
	}
	else if (!iLocal_642)
	{
		if (func_15(PLAYER::PLAYER_PED_ID()))
		{
			func_201(iLocal_643, 0, &Var1, &uVar0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, false, false, false, false);
		}
		iLocal_642 = 1;
	}
	else if (CAM::IS_SCREEN_FADED_OUT() && func_15(PLAYER::PLAYER_PED_ID()))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

int func_201(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 773:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -546.2589f, 494.0297f, 103.0195f };
					*uParam3 = 77.76f;
					break;
				
				case 1:
					*uParam2 = { -545.9476f, 495.5926f, 103.0948f };
					*uParam3 = 77.76f;
					break;
				
				case 2:
					*uParam2 = { -546.7669f, 492.5821f, 102.9336f };
					*uParam3 = 77.76f;
					break;
				
				case 3:
					*uParam2 = { -546.4385f, 496.8913f, 103.1388f };
					*uParam3 = 77.76f;
					break;
				
				case 4:
					*uParam2 = { -547.0834f, 490.7594f, 102.8078f };
					*uParam3 = 77.76f;
					break;
				
				case 5:
					*uParam2 = { -548.131f, 494.4309f, 102.9336f };
					*uParam3 = 77.76f;
					break;
				
				case 6:
					*uParam2 = { -547.7528f, 497.069f, 103.1192f };
					*uParam3 = 77.76f;
					break;
				
				case 7:
					*uParam2 = { -548.281f, 493.1382f, 102.8551f };
					*uParam3 = 77.7693f;
					break;
				
				case 8:
					*uParam2 = { -547.483f, 495.2458f, 103.0487f };
					*uParam3 = 77.76f;
					break;
				
				case 9:
					*uParam2 = { -548.4042f, 491.4344f, 102.7764f };
					*uParam3 = 48.9005f;
					break;
				
				case 10:
					*uParam2 = { -549.21f, 494.8819f, 102.8701f };
					*uParam3 = 102.8456f;
					break;
				
				case 11:
					*uParam2 = { -548.4417f, 496.2144f, 103.033f };
					*uParam3 = 102.3215f;
					break;
				
				case 12:
					*uParam2 = { -549.4996f, 492.3578f, 102.6911f };
					*uParam3 = 64.2193f;
					break;
				
				case 13:
					*uParam2 = { -548.7397f, 497.9646f, 103.1311f };
					*uParam3 = 85.9124f;
					break;
				
				case 14:
					*uParam2 = { -549.938f, 493.9531f, 102.704f };
					*uParam3 = 106.1207f;
					break;
				
				case 15:
					*uParam2 = { -550.4314f, 497.5323f, 102.961f };
					*uParam3 = 97.9393f;
					break;
				
				case 16:
					*uParam2 = { -550.0804f, 495.7797f, 102.8365f };
					*uParam3 = 102.601f;
					break;
				
				case 17:
					*uParam2 = { -550.9204f, 494.7628f, 102.6284f };
					*uParam3 = 102.1379f;
					break;
				
				case 18:
					*uParam2 = { -549.6957f, 496.7508f, 102.966f };
					*uParam3 = 102.3298f;
					break;
				
				case 19:
					*uParam2 = { -550.7745f, 493.1568f, 102.5332f };
					*uParam3 = 107.1717f;
					break;
				
				case 20:
					*uParam2 = { -552.2946f, 495.6505f, 102.6702f };
					*uParam3 = 97.173f;
					break;
				
				case 21:
					*uParam2 = { -551.1799f, 496.5644f, 102.7781f };
					*uParam3 = 94.2641f;
					break;
				
				case 22:
					*uParam2 = { -552.0463f, 494.006f, 102.5441f };
					*uParam3 = 102.9851f;
					break;
				
				case 23:
					*uParam2 = { -551.3241f, 498.3574f, 102.9321f };
					*uParam3 = 99.0227f;
					break;
				
				case 24:
					*uParam2 = { -551.6782f, 492.2589f, 102.4477f };
					*uParam3 = 102.5654f;
					break;
				
				case 25:
					*uParam2 = { -564.1227f, 500.4875f, 103.1528f };
					*uParam3 = 294.1949f;
					break;
				
				case 26:
					*uParam2 = { -552.4658f, 497.4384f, 102.8227f };
					*uParam3 = 102.3968f;
					break;
				
				case 27:
					*uParam2 = { -561.2325f, 520.3223f, 105.1957f };
					*uParam3 = 212.8374f;
					break;
				
				case 28:
					*uParam2 = { -552.6113f, 499.5201f, 103.0065f };
					*uParam3 = 98.3544f;
					break;
				
				case 29:
					*uParam2 = { -552.7922f, 501.9469f, 103.2373f };
					*uParam3 = 94.0115f;
					break;
				
				case 30:
					*uParam2 = { -570.1929f, 518.1334f, 105.2342f };
					*uParam3 = 219.7544f;
					break;
				
				case 31:
					*uParam2 = { -567.407f, 518.9605f, 105.2446f };
					*uParam3 = 220.4688f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 774:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -991.0334f, 789.1226f, 171.6771f };
					*uParam3 = 25.2f;
					break;
				
				case 1:
					*uParam2 = { -989.5262f, 789.8405f, 171.8269f };
					*uParam3 = 37.4955f;
					break;
				
				case 2:
					*uParam2 = { -992.5261f, 788.8121f, 171.5047f };
					*uParam3 = 25.2f;
					break;
				
				case 3:
					*uParam2 = { -988.2609f, 790.5891f, 171.9529f };
					*uParam3 = 45.7236f;
					break;
				
				case 4:
					*uParam2 = { -995.0258f, 787.3626f, 171.2301f };
					*uParam3 = 25.2f;
					break;
				
				case 5:
					*uParam2 = { -991.7439f, 791.0509f, 171.5688f };
					*uParam3 = 25.2f;
					break;
				
				case 6:
					*uParam2 = { -990.3627f, 790.9854f, 171.7341f };
					*uParam3 = 25.2f;
					break;
				
				case 7:
					*uParam2 = { -993.4758f, 789.4677f, 171.3788f };
					*uParam3 = 25.2f;
					break;
				
				case 8:
					*uParam2 = { -988.8314f, 791.7583f, 171.9054f };
					*uParam3 = 45.6591f;
					break;
				
				case 9:
					*uParam2 = { -995.0121f, 788.9412f, 171.2029f };
					*uParam3 = 25.2f;
					break;
				
				case 10:
					*uParam2 = { -993.1004f, 790.8963f, 171.3992f };
					*uParam3 = 25.2f;
					break;
				
				case 11:
					*uParam2 = { -990.9588f, 792.2522f, 171.6625f };
					*uParam3 = 25.2f;
					break;
				
				case 12:
					*uParam2 = { -994.3532f, 790.4034f, 171.2563f };
					*uParam3 = 25.2f;
					break;
				
				case 13:
					*uParam2 = { -989.4777f, 793.1752f, 171.8442f };
					*uParam3 = 25.2f;
					break;
				
				case 14:
					*uParam2 = { -996.4968f, 790.0168f, 170.9994f };
					*uParam3 = 25.2f;
					break;
				
				case 15:
					*uParam2 = { -993.9147f, 792.3286f, 171.2731f };
					*uParam3 = 25.2f;
					break;
				
				case 16:
					*uParam2 = { -991.1392f, 793.6536f, 171.6034f };
					*uParam3 = 25.2f;
					break;
				
				case 17:
					*uParam2 = { -995.0162f, 791.4996f, 171.1638f };
					*uParam3 = 25.2f;
					break;
				
				case 18:
					*uParam2 = { -990.574f, 794.6957f, 171.6802f };
					*uParam3 = 25.2f;
					break;
				
				case 19:
					*uParam2 = { -996.861f, 791.3173f, 170.9655f };
					*uParam3 = 25.2f;
					break;
				
				case 20:
					*uParam2 = { -992.6888f, 792.5503f, 171.4226f };
					*uParam3 = 25.2f;
					break;
				
				case 21:
					*uParam2 = { -994.3065f, 793.6458f, 171.1261f };
					*uParam3 = 25.2f;
					break;
				
				case 22:
					*uParam2 = { -995.5972f, 792.7064f, 171.0487f };
					*uParam3 = 25.2f;
					break;
				
				case 23:
					*uParam2 = { -992.8757f, 794.1784f, 171.3129f };
					*uParam3 = 25.2f;
					break;
				
				case 24:
					*uParam2 = { -997.3876f, 792.4154f, 170.889f };
					*uParam3 = 25.2f;
					break;
				
				case 25:
					*uParam2 = { -994.0138f, 795.4565f, 171.1124f };
					*uParam3 = 25.2f;
					break;
				
				case 26:
					*uParam2 = { -992.5684f, 795.5598f, 171.3187f };
					*uParam3 = 25.2f;
					break;
				
				case 27:
					*uParam2 = { -995.2806f, 794.8604f, 171.0096f };
					*uParam3 = 25.2f;
					break;
				
				case 28:
					*uParam2 = { -991.3306f, 795.82f, 171.5231f };
					*uParam3 = 25.2f;
					break;
				
				case 29:
					*uParam2 = { -996.7284f, 793.9251f, 170.9163f };
					*uParam3 = 25.2f;
					break;
				
				case 30:
					*uParam2 = { -996.0389f, 805.9272f, 171.3559f };
					*uParam3 = 196.0887f;
					break;
				
				case 31:
					*uParam2 = { -992.73f, 806.4244f, 171.6365f };
					*uParam3 = 201.5534f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 775:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1941.467f, 203.8431f, 84.2692f };
					*uParam3 = 296.64f;
					break;
				
				case 1:
					*uParam2 = { -1940.141f, 203.1303f, 84.2182f };
					*uParam3 = 296.64f;
					break;
				
				case 2:
					*uParam2 = { -1941.123f, 205.4688f, 84.1875f };
					*uParam3 = 296.64f;
					break;
				
				case 3:
					*uParam2 = { -1939.465f, 201.9581f, 84.2244f };
					*uParam3 = 296.64f;
					break;
				
				case 4:
					*uParam2 = { -1941.877f, 207.1007f, 84.1889f };
					*uParam3 = 296.64f;
					break;
				
				case 5:
					*uParam2 = { -1938.833f, 204.8528f, 84.0546f };
					*uParam3 = 296.64f;
					break;
				
				case 6:
					*uParam2 = { -1938.317f, 203.5131f, 84.0785f };
					*uParam3 = 296.64f;
					break;
				
				case 7:
					*uParam2 = { -1939.295f, 205.8668f, 84.042f };
					*uParam3 = 296.64f;
					break;
				
				case 8:
					*uParam2 = { -1937.573f, 202.5955f, 84.0655f };
					*uParam3 = 296.64f;
					break;
				
				case 9:
					*uParam2 = { -1940.016f, 207.2788f, 84.0251f };
					*uParam3 = 296.64f;
					break;
				
				case 10:
					*uParam2 = { -1937.915f, 205.7189f, 83.9419f };
					*uParam3 = 296.64f;
					break;
				
				case 11:
					*uParam2 = { -1937.322f, 204.449f, 83.9565f };
					*uParam3 = 296.64f;
					break;
				
				case 12:
					*uParam2 = { -1938.546f, 206.9898f, 83.9282f };
					*uParam3 = 296.64f;
					break;
				
				case 13:
					*uParam2 = { -1936.502f, 203.1828f, 83.9613f };
					*uParam3 = 296.64f;
					break;
				
				case 14:
					*uParam2 = { -1939.082f, 208.4451f, 83.8908f };
					*uParam3 = 296.64f;
					break;
				
				case 15:
					*uParam2 = { -1936.576f, 206.1501f, 83.8173f };
					*uParam3 = 296.64f;
					break;
				
				case 16:
					*uParam2 = { -1936.129f, 204.9543f, 83.8454f };
					*uParam3 = 296.64f;
					break;
				
				case 17:
					*uParam2 = { -1937.207f, 207.3005f, 83.8113f };
					*uParam3 = 296.64f;
					break;
				
				case 18:
					*uParam2 = { -1935.077f, 204.0031f, 83.8206f };
					*uParam3 = 296.64f;
					break;
				
				case 19:
					*uParam2 = { -1937.739f, 208.7276f, 83.7721f };
					*uParam3 = 296.64f;
					break;
				
				case 20:
					*uParam2 = { -1935.155f, 207.2425f, 83.6627f };
					*uParam3 = 296.64f;
					break;
				
				case 21:
					*uParam2 = { -1934.758f, 205.9819f, 83.698f };
					*uParam3 = 296.64f;
					break;
				
				case 22:
					*uParam2 = { -1936.04f, 208.3412f, 83.6674f };
					*uParam3 = 296.64f;
					break;
				
				case 23:
					*uParam2 = { -1933.861f, 204.7598f, 83.6977f };
					*uParam3 = 296.64f;
					break;
				
				case 24:
					*uParam2 = { -1935.914f, 209.4861f, 83.6152f };
					*uParam3 = 296.64f;
					break;
				
				case 25:
					*uParam2 = { -1933.327f, 207.267f, 83.5602f };
					*uParam3 = 308.3019f;
					break;
				
				case 26:
					*uParam2 = { -1931.993f, 205.044f, 83.5662f };
					*uParam3 = 300.7469f;
					break;
				
				case 27:
					*uParam2 = { -1934.492f, 208.8109f, 83.563f };
					*uParam3 = 304.8318f;
					break;
				
				case 28:
					*uParam2 = { -1930.828f, 203.0186f, 83.6574f };
					*uParam3 = 304.8515f;
					break;
				
				case 29:
					*uParam2 = { -1935.156f, 210.6674f, 83.5348f };
					*uParam3 = 296.64f;
					break;
				
				case 30:
					*uParam2 = { -1937.321f, 213.4392f, 83.6272f };
					*uParam3 = 296.64f;
					break;
				
				case 31:
					*uParam2 = { -1929.533f, 201.3114f, 83.6241f };
					*uParam3 = 296.64f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 776:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 50.0805f, 564.3147f, 179.2538f };
					*uParam3 = 0.1815f;
					break;
				
				case 1:
					*uParam2 = { 53.5146f, 564.9898f, 179.4616f };
					*uParam3 = 16.3438f;
					break;
				
				case 2:
					*uParam2 = { 48.2267f, 564.1354f, 179.1367f };
					*uParam3 = 28.3793f;
					break;
				
				case 3:
					*uParam2 = { 46.5639f, 563.5975f, 179.0647f };
					*uParam3 = 19.4065f;
					break;
				
				case 4:
					*uParam2 = { 51.7924f, 564.6124f, 179.3518f };
					*uParam3 = 13.0292f;
					break;
				
				case 5:
					*uParam2 = { 48.038f, 574.3699f, 179.392f };
					*uParam3 = 189f;
					break;
				
				case 6:
					*uParam2 = { 44.7696f, 563.7823f, 178.9068f };
					*uParam3 = 12.7698f;
					break;
				
				case 7:
					*uParam2 = { 49.9318f, 574.554f, 179.5633f };
					*uParam3 = 189f;
					break;
				
				case 8:
					*uParam2 = { 45.8622f, 573.9634f, 179.2391f };
					*uParam3 = 189f;
					break;
				
				case 9:
					*uParam2 = { 52.2549f, 574.9553f, 179.8537f };
					*uParam3 = 189f;
					break;
				
				case 10:
					*uParam2 = { 48.9202f, 576.1768f, 179.8839f };
					*uParam3 = 189f;
					break;
				
				case 11:
					*uParam2 = { 47.2358f, 575.927f, 179.7228f };
					*uParam3 = 189f;
					break;
				
				case 12:
					*uParam2 = { 50.905f, 576.2969f, 180.2189f };
					*uParam3 = 189f;
					break;
				
				case 13:
					*uParam2 = { 44.0661f, 574.9827f, 179.4906f };
					*uParam3 = 189f;
					break;
				
				case 14:
					*uParam2 = { 52.8614f, 576.2047f, 180.415f };
					*uParam3 = 189f;
					break;
				
				case 15:
					*uParam2 = { 49.5679f, 577.7722f, 180.5606f };
					*uParam3 = 189f;
					break;
				
				case 16:
					*uParam2 = { 46.1428f, 577.1478f, 180.061f };
					*uParam3 = 189f;
					break;
				
				case 17:
					*uParam2 = { 43.7991f, 576.8724f, 180.0236f };
					*uParam3 = 189f;
					break;
				
				case 18:
					*uParam2 = { 45.7126f, 575.4717f, 179.5733f };
					*uParam3 = 189f;
					break;
				
				case 19:
					*uParam2 = { 51.6467f, 578.0911f, 181.0217f };
					*uParam3 = 189f;
					break;
				
				case 20:
					*uParam2 = { 47.3777f, 579.1622f, 180.7496f };
					*uParam3 = 189f;
					break;
				
				case 21:
					*uParam2 = { 45.26f, 578.5686f, 180.4545f };
					*uParam3 = 189f;
					break;
				
				case 22:
					*uParam2 = { 48.8184f, 579.1835f, 180.9303f };
					*uParam3 = 189f;
					break;
				
				case 23:
					*uParam2 = { 43.7762f, 578.4512f, 180.4685f };
					*uParam3 = 189f;
					break;
				
				case 24:
					*uParam2 = { 50.8106f, 579.6572f, 181.4429f };
					*uParam3 = 189f;
					break;
				
				case 25:
					*uParam2 = { 46.1346f, 579.6292f, 180.7722f };
					*uParam3 = 189f;
					break;
				
				case 26:
					*uParam2 = { 51.9335f, 580.4414f, 182.0276f };
					*uParam3 = 189f;
					break;
				
				case 27:
					*uParam2 = { 44.652f, 580.1509f, 180.8625f };
					*uParam3 = 189f;
					break;
				
				case 28:
					*uParam2 = { 43.4118f, 579.3017f, 180.7159f };
					*uParam3 = 189f;
					break;
				
				case 29:
					*uParam2 = { 46.6904f, 580.6099f, 181.1366f };
					*uParam3 = 189f;
					break;
				
				case 30:
					*uParam2 = { 50.2763f, 580.73f, 181.7714f };
					*uParam3 = 189f;
					break;
				
				case 31:
					*uParam2 = { 48.6572f, 580.1755f, 181.2269f };
					*uParam3 = 189f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 777:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -3081.307f, 227.581f, 13.0432f };
					*uParam3 = 322.6117f;
					break;
				
				case 1:
					*uParam2 = { -3079.703f, 226.4243f, 13.1319f };
					*uParam3 = 331.2f;
					break;
				
				case 2:
					*uParam2 = { -3083.391f, 228.5822f, 12.9177f };
					*uParam3 = 331.2f;
					break;
				
				case 3:
					*uParam2 = { -3078.581f, 224.983f, 13.1168f };
					*uParam3 = 331.2f;
					break;
				
				case 4:
					*uParam2 = { -3084.759f, 230.1487f, 12.8419f };
					*uParam3 = 322.8897f;
					break;
				
				case 5:
					*uParam2 = { -3080.001f, 227.8177f, 13.1279f };
					*uParam3 = 331.2f;
					break;
				
				case 6:
					*uParam2 = { -3078.324f, 226.6861f, 13.2535f };
					*uParam3 = 331.2f;
					break;
				
				case 7:
					*uParam2 = { -3081.578f, 228.6715f, 13.0337f };
					*uParam3 = 331.2f;
					break;
				
				case 8:
					*uParam2 = { -3076.922f, 225.7447f, 13.3959f };
					*uParam3 = 331.2f;
					break;
				
				case 9:
					*uParam2 = { -3083.545f, 230.2317f, 12.8721f };
					*uParam3 = 331.2f;
					break;
				
				case 10:
					*uParam2 = { -3078.639f, 227.9544f, 13.3024f };
					*uParam3 = 331.2f;
					break;
				
				case 11:
					*uParam2 = { -3076.86f, 227.0989f, 13.5063f };
					*uParam3 = 331.2f;
					break;
				
				case 12:
					*uParam2 = { -3080.458f, 228.9869f, 13.1373f };
					*uParam3 = 331.2f;
					break;
				
				case 13:
					*uParam2 = { -3075.62f, 226.3181f, 13.6302f };
					*uParam3 = 327.215f;
					break;
				
				case 14:
					*uParam2 = { -3082.278f, 229.9154f, 12.9889f };
					*uParam3 = 331.2f;
					break;
				
				case 15:
					*uParam2 = { -3069.499f, 221.6724f, 14.3555f };
					*uParam3 = 351.4616f;
					break;
				
				case 16:
					*uParam2 = { -3066.73f, 223.8882f, 14.4631f };
					*uParam3 = 355.6886f;
					break;
				
				case 17:
					*uParam2 = { -3065.81f, 222.9574f, 14.6571f };
					*uParam3 = 347.5893f;
					break;
				
				case 18:
					*uParam2 = { -3068.455f, 224.2052f, 14.3202f };
					*uParam3 = 351.9212f;
					break;
				
				case 19:
					*uParam2 = { -3084.044f, 231.4189f, 12.8182f };
					*uParam3 = 331.2f;
					break;
				
				case 20:
					*uParam2 = { -3070.04f, 224.8121f, 14.2218f };
					*uParam3 = 351.9415f;
					break;
				
				case 21:
					*uParam2 = { -3071.439f, 225.1889f, 14.1182f };
					*uParam3 = 343.3133f;
					break;
				
				case 22:
					*uParam2 = { -3066.295f, 222.0831f, 14.6235f };
					*uParam3 = 347.9753f;
					break;
				
				case 23:
					*uParam2 = { -3071.151f, 222.1575f, 14.2215f };
					*uParam3 = 347.7016f;
					break;
				
				case 24:
					*uParam2 = { -3068.237f, 222.6944f, 14.4766f };
					*uParam3 = 355.7686f;
					break;
				
				case 25:
					*uParam2 = { -3066.948f, 235.6128f, 14.1496f };
					*uParam3 = 167.8173f;
					break;
				
				case 26:
					*uParam2 = { -3071.66f, 223.8272f, 14.2122f };
					*uParam3 = 7.088152f;
					break;
				
				case 27:
					*uParam2 = { -3068.946f, 236.252f, 13.9333f };
					*uParam3 = 170.6788f;
					break;
				
				case 28:
					*uParam2 = { -3069.807f, 223.2945f, 14.3564f };
					*uParam3 = 347.4962f;
					break;
				
				case 29:
					*uParam2 = { -3070.951f, 237.2878f, 13.6355f };
					*uParam3 = 167.3761f;
					break;
				
				case 30:
					*uParam2 = { -3074.925f, 239.2939f, 13.0769f };
					*uParam3 = 154.2718f;
					break;
				
				case 31:
					*uParam2 = { -3073.038f, 238.1643f, 13.3654f };
					*uParam3 = 163.2216f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 778:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -816.6753f, -1334.744f, 4.1503f };
					*uParam3 = 112.32f;
					break;
				
				case 1:
					*uParam2 = { -817.2449f, -1333.356f, 4.1503f };
					*uParam3 = 112.32f;
					break;
				
				case 2:
					*uParam2 = { -816.1057f, -1336.131f, 4.1503f };
					*uParam3 = 112.32f;
					break;
				
				case 3:
					*uParam2 = { -819.233f, -1332.769f, 4.1503f };
					*uParam3 = 95.8179f;
					break;
				
				case 4:
					*uParam2 = { -817.162f, -1337.336f, 4.1503f };
					*uParam3 = 124.5398f;
					break;
				
				case 5:
					*uParam2 = { -818.9573f, -1339.082f, 4.1504f };
					*uParam3 = 112.32f;
					break;
				
				case 6:
					*uParam2 = { -819.0541f, -1336.9f, 4.1505f };
					*uParam3 = 112.32f;
					break;
				
				case 7:
					*uParam2 = { -821.7123f, -1336.779f, 4.1042f };
					*uParam3 = 112.32f;
					break;
				
				case 8:
					*uParam2 = { -821.7495f, -1332.991f, 4.1503f };
					*uParam3 = 99.9029f;
					break;
				
				case 9:
					*uParam2 = { -821.5684f, -1339.505f, 4.1505f };
					*uParam3 = 112.32f;
					break;
				
				case 10:
					*uParam2 = { -827.1141f, -1332.272f, 4.1545f };
					*uParam3 = 112.32f;
					break;
				
				case 11:
					*uParam2 = { -823.6188f, -1334.816f, 4.1531f };
					*uParam3 = 95.8631f;
					break;
				
				case 12:
					*uParam2 = { -826.6886f, -1334.413f, 4.1561f };
					*uParam3 = 112.32f;
					break;
				
				case 13:
					*uParam2 = { -824.6989f, -1332.28f, 4.153f };
					*uParam3 = 99.9932f;
					break;
				
				case 14:
					*uParam2 = { -821.1755f, -1341.977f, 4.1504f };
					*uParam3 = 120.4887f;
					break;
				
				case 15:
					*uParam2 = { -829.0634f, -1330.808f, 4.1518f };
					*uParam3 = 112.32f;
					break;
				
				case 16:
					*uParam2 = { -824.1336f, -1344.67f, 4.1504f };
					*uParam3 = 112.32f;
					break;
				
				case 17:
					*uParam2 = { -823.7188f, -1342.445f, 4.1509f };
					*uParam3 = 112.32f;
					break;
				
				case 18:
					*uParam2 = { -829.7715f, -1333.114f, 4.1576f };
					*uParam3 = 112.32f;
					break;
				
				case 19:
					*uParam2 = { -824.4214f, -1339.898f, 4.1057f };
					*uParam3 = 112.32f;
					break;
				
				case 20:
					*uParam2 = { -826.5271f, -1341.502f, 4.1065f };
					*uParam3 = 112.32f;
					break;
				
				case 21:
					*uParam2 = { -828.6345f, -1336.218f, 4.1039f };
					*uParam3 = 112.32f;
					break;
				
				case 22:
					*uParam2 = { -825.8774f, -1344.102f, 4.1529f };
					*uParam3 = 112.32f;
					break;
				
				case 23:
					*uParam2 = { -833.5002f, -1330.153f, 4.1521f };
					*uParam3 = 112.32f;
					break;
				
				case 24:
					*uParam2 = { -825.4216f, -1346.5f, 4.1504f };
					*uParam3 = 112.32f;
					break;
				
				case 25:
					*uParam2 = { -830.343f, -1338.847f, 4.1555f };
					*uParam3 = 112.32f;
					break;
				
				case 26:
					*uParam2 = { -831.3143f, -1336.325f, 4.1568f };
					*uParam3 = 112.32f;
					break;
				
				case 27:
					*uParam2 = { -830.0225f, -1341.139f, 4.1532f };
					*uParam3 = 112.32f;
					break;
				
				case 28:
					*uParam2 = { -832.4841f, -1332.505f, 4.157f };
					*uParam3 = 112.32f;
					break;
				
				case 29:
					*uParam2 = { -829.1557f, -1343.68f, 4.1527f };
					*uParam3 = 112.32f;
					break;
				
				case 30:
					*uParam2 = { -827.5688f, -1348.545f, 4.1519f };
					*uParam3 = 112.32f;
					break;
				
				case 31:
					*uParam2 = { -828.631f, -1345.66f, 4.1525f };
					*uParam3 = 112.32f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 779:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1854.368f, -380.5186f, 47.4461f };
					*uParam3 = 142.56f;
					break;
				
				case 1:
					*uParam2 = { -1855.559f, -379.6067f, 47.453f };
					*uParam3 = 142.56f;
					break;
				
				case 2:
					*uParam2 = { -1853.177f, -381.4305f, 47.4391f };
					*uParam3 = 142.56f;
					break;
				
				case 3:
					*uParam2 = { -1856.75f, -378.6948f, 47.4556f };
					*uParam3 = 142.56f;
					break;
				
				case 4:
					*uParam2 = { -1851.986f, -382.3424f, 47.4322f };
					*uParam3 = 142.56f;
					break;
				
				case 5:
					*uParam2 = { -1855.28f, -381.7096f, 47.2298f };
					*uParam3 = 142.56f;
					break;
				
				case 6:
					*uParam2 = { -1856.471f, -380.7977f, 47.2464f };
					*uParam3 = 142.56f;
					break;
				
				case 7:
					*uParam2 = { -1854.089f, -382.6215f, 47.2131f };
					*uParam3 = 142.56f;
					break;
				
				case 8:
					*uParam2 = { -1857.662f, -379.8858f, 47.263f };
					*uParam3 = 142.56f;
					break;
				
				case 9:
					*uParam2 = { -1852.898f, -383.5334f, 47.1965f };
					*uParam3 = 142.56f;
					break;
				
				case 10:
					*uParam2 = { -1856.192f, -382.9005f, 46.958f };
					*uParam3 = 142.56f;
					break;
				
				case 11:
					*uParam2 = { -1857.383f, -381.9886f, 46.9887f };
					*uParam3 = 142.56f;
					break;
				
				case 12:
					*uParam2 = { -1855.001f, -383.8124f, 46.9402f };
					*uParam3 = 142.56f;
					break;
				
				case 13:
					*uParam2 = { -1858.574f, -381.0768f, 47.0303f };
					*uParam3 = 142.56f;
					break;
				
				case 14:
					*uParam2 = { -1853.81f, -384.7243f, 46.9224f };
					*uParam3 = 142.56f;
					break;
				
				case 15:
					*uParam2 = { -1857.104f, -384.0915f, 46.7413f };
					*uParam3 = 142.56f;
					break;
				
				case 16:
					*uParam2 = { -1858.295f, -383.1796f, 46.7835f };
					*uParam3 = 142.56f;
					break;
				
				case 17:
					*uParam2 = { -1855.913f, -385.0034f, 46.6992f };
					*uParam3 = 142.56f;
					break;
				
				case 18:
					*uParam2 = { -1859.486f, -382.2677f, 46.8257f };
					*uParam3 = 142.56f;
					break;
				
				case 19:
					*uParam2 = { -1854.722f, -385.9153f, 46.6576f };
					*uParam3 = 142.56f;
					break;
				
				case 20:
					*uParam2 = { -1858.016f, -385.2825f, 46.4984f };
					*uParam3 = 142.56f;
					break;
				
				case 21:
					*uParam2 = { -1859.207f, -384.3706f, 46.5539f };
					*uParam3 = 142.56f;
					break;
				
				case 22:
					*uParam2 = { -1856.825f, -386.1944f, 46.4429f };
					*uParam3 = 142.56f;
					break;
				
				case 23:
					*uParam2 = { -1860.398f, -383.4587f, 46.6094f };
					*uParam3 = 142.56f;
					break;
				
				case 24:
					*uParam2 = { -1855.634f, -387.1063f, 46.3874f };
					*uParam3 = 142.56f;
					break;
				
				case 25:
					*uParam2 = { -1858.928f, -386.4735f, 46.2574f };
					*uParam3 = 142.56f;
					break;
				
				case 26:
					*uParam2 = { -1860.119f, -385.5616f, 46.3284f };
					*uParam3 = 142.56f;
					break;
				
				case 27:
					*uParam2 = { -1857.737f, -387.3854f, 46.1871f };
					*uParam3 = 142.56f;
					break;
				
				case 28:
					*uParam2 = { -1861.31f, -384.6497f, 46.4014f };
					*uParam3 = 142.56f;
					break;
				
				case 29:
					*uParam2 = { -1856.546f, -388.2973f, 46.1169f };
					*uParam3 = 142.56f;
					break;
				
				case 30:
					*uParam2 = { -1859.84f, -387.6645f, 46.0972f };
					*uParam3 = 142.56f;
					break;
				
				case 31:
					*uParam2 = { -1861.031f, -386.7526f, 46.175f };
					*uParam3 = 142.56f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 780:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -3235.182f, 955.5072f, 12.2111f };
					*uParam3 = 10.44f;
					break;
				
				case 1:
					*uParam2 = { -3234.24f, 956.8399f, 12.222f };
					*uParam3 = 10.44f;
					break;
				
				case 2:
					*uParam2 = { -3238.159f, 955.4146f, 11.7019f };
					*uParam3 = 10.44f;
					break;
				
				case 3:
					*uParam2 = { -3236.36f, 957.3724f, 12.1756f };
					*uParam3 = 10.44f;
					break;
				
				case 4:
					*uParam2 = { -3236.668f, 959.5195f, 12.1559f };
					*uParam3 = 10.44f;
					break;
				
				case 5:
					*uParam2 = { -3234.905f, 959.7594f, 12.1687f };
					*uParam3 = 10.44f;
					break;
				
				case 6:
					*uParam2 = { -3238.633f, 957.1829f, 11.4096f };
					*uParam3 = 10.44f;
					break;
				
				case 7:
					*uParam2 = { -3234.005f, 958.4041f, 12.199f };
					*uParam3 = 10.44f;
					break;
				
				case 8:
					*uParam2 = { -3235.455f, 962.3365f, 12.1181f };
					*uParam3 = 10.44f;
					break;
				
				case 9:
					*uParam2 = { -3236.286f, 961.1478f, 12.1364f };
					*uParam3 = 10.44f;
					break;
				
				case 10:
					*uParam2 = { -3239.244f, 961.584f, 11.7019f };
					*uParam3 = 2.4585f;
					break;
				
				case 11:
					*uParam2 = { -3238.914f, 959.3049f, 11.7019f };
					*uParam3 = 2.1061f;
					break;
				
				case 12:
					*uParam2 = { -3237.181f, 962.4586f, 12.1052f };
					*uParam3 = 10.44f;
					break;
				
				case 13:
					*uParam2 = { -3237.485f, 964.6573f, 12.0596f };
					*uParam3 = 10.44f;
					break;
				
				case 14:
					*uParam2 = { -3239.61f, 964.0398f, 11.7019f };
					*uParam3 = 358.085f;
					break;
				
				case 15:
					*uParam2 = { -3235.64f, 964.5833f, 12.0709f };
					*uParam3 = 10.44f;
					break;
				
				case 16:
					*uParam2 = { -3237.795f, 967.2527f, 11.9987f };
					*uParam3 = 10.44f;
					break;
				
				case 17:
					*uParam2 = { -3237.788f, 968.9925f, 11.9572f };
					*uParam3 = 10.44f;
					break;
				
				case 18:
					*uParam2 = { -3239.831f, 967.0061f, 11.7019f };
					*uParam3 = 6.2043f;
					break;
				
				case 19:
					*uParam2 = { -3235.953f, 967.0388f, 12.0166f };
					*uParam3 = 10.1911f;
					break;
				
				case 20:
					*uParam2 = { -3237.901f, 971.0781f, 11.9124f };
					*uParam3 = 10.44f;
					break;
				
				case 21:
					*uParam2 = { -3236.161f, 969.4367f, 11.9608f };
					*uParam3 = 10.44f;
					break;
				
				case 22:
					*uParam2 = { -3240.037f, 970.9451f, 11.7019f };
					*uParam3 = 6.3631f;
					break;
				
				case 23:
					*uParam2 = { -3236.509f, 972.7813f, 11.8925f };
					*uParam3 = 10.44f;
					break;
				
				case 24:
					*uParam2 = { -3240.611f, 980.0478f, 11.7019f };
					*uParam3 = 268.844f;
					break;
				
				case 25:
					*uParam2 = { -3240.34f, 977.0618f, 11.7019f };
					*uParam3 = 268.263f;
					break;
				
				case 26:
					*uParam2 = { -3238.483f, 976.729f, 11.7945f };
					*uParam3 = 272.506f;
					break;
				
				case 27:
					*uParam2 = { -3239.947f, 974.5887f, 11.7019f };
					*uParam3 = 284.47f;
					break;
				
				case 28:
					*uParam2 = { -3236.951f, 977.9911f, 11.7833f };
					*uParam3 = 268.342f;
					break;
				
				case 29:
					*uParam2 = { -3236.749f, 975.7599f, 11.8314f };
					*uParam3 = 276.56f;
					break;
				
				case 30:
					*uParam2 = { -3236.801f, 980.5408f, 11.7307f };
					*uParam3 = 268.228f;
					break;
				
				case 31:
					*uParam2 = { -3238.529f, 979.3701f, 11.7406f };
					*uParam3 = 272.861f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 781:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1709.641f, 4668.5f, 42.1264f };
					*uParam3 = 90f;
					break;
				
				case 1:
					*uParam2 = { 1709.641f, 4670f, 42.1154f };
					*uParam3 = 90f;
					break;
				
				case 2:
					*uParam2 = { 1709.641f, 4667f, 42.1911f };
					*uParam3 = 90f;
					break;
				
				case 3:
					*uParam2 = { 1709.641f, 4671.5f, 42.1254f };
					*uParam3 = 90f;
					break;
				
				case 4:
					*uParam2 = { 1708.209f, 4663.73f, 42.3311f };
					*uParam3 = 90f;
					break;
				
				case 5:
					*uParam2 = { 1708.141f, 4668.5f, 42.171f };
					*uParam3 = 90f;
					break;
				
				case 6:
					*uParam2 = { 1708.032f, 4670.568f, 42.1589f };
					*uParam3 = 90f;
					break;
				
				case 7:
					*uParam2 = { 1708.363f, 4665.987f, 42.2747f };
					*uParam3 = 90f;
					break;
				
				case 8:
					*uParam2 = { 1708.354f, 4672.371f, 42.1642f };
					*uParam3 = 90f;
					break;
				
				case 9:
					*uParam2 = { 1707.417f, 4665.221f, 42.3068f };
					*uParam3 = 90f;
					break;
				
				case 10:
					*uParam2 = { 1706.641f, 4668.5f, 42.2226f };
					*uParam3 = 90f;
					break;
				
				case 11:
					*uParam2 = { 1706.641f, 4670f, 42.2029f };
					*uParam3 = 90f;
					break;
				
				case 12:
					*uParam2 = { 1706.641f, 4667f, 42.2617f };
					*uParam3 = 90f;
					break;
				
				case 13:
					*uParam2 = { 1706.641f, 4671.5f, 42.1877f };
					*uParam3 = 90f;
					break;
				
				case 14:
					*uParam2 = { 1706.4f, 4663.616f, 42.3476f };
					*uParam3 = 90f;
					break;
				
				case 15:
					*uParam2 = { 1705.141f, 4668.5f, 42.2584f };
					*uParam3 = 90f;
					break;
				
				case 16:
					*uParam2 = { 1705.141f, 4670f, 42.227f };
					*uParam3 = 90f;
					break;
				
				case 17:
					*uParam2 = { 1705.141f, 4667f, 42.2934f };
					*uParam3 = 90f;
					break;
				
				case 18:
					*uParam2 = { 1705.141f, 4671.5f, 42.1956f };
					*uParam3 = 90f;
					break;
				
				case 19:
					*uParam2 = { 1705.141f, 4665.5f, 42.3203f };
					*uParam3 = 90f;
					break;
				
				case 20:
					*uParam2 = { 1703.641f, 4668.5f, 42.2062f };
					*uParam3 = 90f;
					break;
				
				case 21:
					*uParam2 = { 1703.641f, 4670f, 42.1749f };
					*uParam3 = 90f;
					break;
				
				case 22:
					*uParam2 = { 1703.641f, 4667f, 42.2375f };
					*uParam3 = 90f;
					break;
				
				case 23:
					*uParam2 = { 1703.641f, 4671.5f, 42.1436f };
					*uParam3 = 90f;
					break;
				
				case 24:
					*uParam2 = { 1703.641f, 4665.5f, 42.2683f };
					*uParam3 = 90f;
					break;
				
				case 25:
					*uParam2 = { 1702.141f, 4668.5f, 42.277f };
					*uParam3 = 90f;
					break;
				
				case 26:
					*uParam2 = { 1702.141f, 4670f, 42.2594f };
					*uParam3 = 90f;
					break;
				
				case 27:
					*uParam2 = { 1702.141f, 4667f, 42.2946f };
					*uParam3 = 90f;
					break;
				
				case 28:
					*uParam2 = { 1702.141f, 4671.5f, 42.2418f };
					*uParam3 = 90f;
					break;
				
				case 29:
					*uParam2 = { 1702.141f, 4665.5f, 42.3124f };
					*uParam3 = 90f;
					break;
				
				case 30:
					*uParam2 = { 1702.609f, 4663.404f, 42.2944f };
					*uParam3 = 90f;
					break;
				
				case 31:
					*uParam2 = { 1704.337f, 4663.593f, 42.3297f };
					*uParam3 = 90f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 782:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1097.865f, -1051f, 1.0761f };
					*uParam3 = 301.025f;
					break;
				
				case 1:
					*uParam2 = { -1098.364f, -1052.709f, 1.1153f };
					*uParam3 = 301.025f;
					break;
				
				case 2:
					*uParam2 = { -1099.483f, -1050.694f, 1.1117f };
					*uParam3 = 301.025f;
					break;
				
				case 3:
					*uParam2 = { -1097.443f, -1053.594f, 1.1315f };
					*uParam3 = 301.025f;
					break;
				
				case 4:
					*uParam2 = { -1100.123f, -1049.138f, 1.1494f };
					*uParam3 = 301.025f;
					break;
				
				case 5:
					*uParam2 = { -1097.029f, -1049.517f, 1.0784f };
					*uParam3 = 301.025f;
					break;
				
				case 6:
					*uParam2 = { -1096.508f, -1052.4f, 1.1043f };
					*uParam3 = 301.025f;
					break;
				
				case 7:
					*uParam2 = { -1098.89f, -1048.286f, 1.1601f };
					*uParam3 = 301.025f;
					break;
				
				case 8:
					*uParam2 = { -1095.411f, -1052.621f, 1.1309f };
					*uParam3 = 301.025f;
					break;
				
				case 9:
					*uParam2 = { -1097.71f, -1048.049f, 1.1658f };
					*uParam3 = 301.025f;
					break;
				
				case 10:
					*uParam2 = { -1095.87f, -1049.781f, 1.0632f };
					*uParam3 = 301.025f;
					break;
				
				case 11:
					*uParam2 = { -1095.565f, -1051.24f, 1.0774f };
					*uParam3 = 301.025f;
					break;
				
				case 12:
					*uParam2 = { -1095.932f, -1048.145f, 1.1335f };
					*uParam3 = 301.025f;
					break;
				
				case 13:
					*uParam2 = { -1094.291f, -1051.804f, 1.1338f };
					*uParam3 = 301.025f;
					break;
				
				case 14:
					*uParam2 = { -1097.352f, -1046.977f, 1.1522f };
					*uParam3 = 301.025f;
					break;
				
				case 15:
					*uParam2 = { -1093.182f, -1047.908f, 1.1458f };
					*uParam3 = 301.025f;
					break;
				
				case 16:
					*uParam2 = { -1094.186f, -1049.511f, 1.1135f };
					*uParam3 = 301.025f;
					break;
				
				case 17:
					*uParam2 = { -1094.357f, -1047.134f, 1.176f };
					*uParam3 = 301.025f;
					break;
				
				case 18:
					*uParam2 = { -1092.805f, -1051.113f, 1.1383f };
					*uParam3 = 301.025f;
					break;
				
				case 19:
					*uParam2 = { -1095.662f, -1046.249f, 1.1562f };
					*uParam3 = 301.025f;
					break;
				
				case 20:
					*uParam2 = { -1090.771f, -1047.328f, 1.1316f };
					*uParam3 = 301.025f;
					break;
				
				case 21:
					*uParam2 = { -1089.813f, -1049.057f, 1.1292f };
					*uParam3 = 301.025f;
					break;
				
				case 22:
					*uParam2 = { -1092.412f, -1045.867f, 1.1727f };
					*uParam3 = 301.025f;
					break;
				
				case 23:
					*uParam2 = { -1092.312f, -1049.669f, 1.1207f };
					*uParam3 = 301.025f;
					break;
				
				case 24:
					*uParam2 = { -1094.793f, -1044.984f, 1.1634f };
					*uParam3 = 301.025f;
					break;
				
				case 25:
					*uParam2 = { -1106.836f, -1056.589f, 1.099f };
					*uParam3 = 128.5829f;
					break;
				
				case 26:
					*uParam2 = { -1108.095f, -1054.787f, 1.1075f };
					*uParam3 = 125.0408f;
					break;
				
				case 27:
					*uParam2 = { -1112.551f, -1055.707f, 1.1448f };
					*uParam3 = 125.443f;
					break;
				
				case 28:
					*uParam2 = { -1108.41f, -1056.545f, 1.0814f };
					*uParam3 = 124.0992f;
					break;
				
				case 29:
					*uParam2 = { -1110.641f, -1056.166f, 1.1227f };
					*uParam3 = 116.7658f;
					break;
				
				case 30:
					*uParam2 = { -1108.588f, -1058.995f, 1.1289f };
					*uParam3 = 121.5317f;
					break;
				
				case 31:
					*uParam2 = { -1109.974f, -1058.157f, 1.0911f };
					*uParam3 = 123.282f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 783:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1158.909f, -1464.569f, 3.3685f };
					*uParam3 = 128.88f;
					break;
				
				case 1:
					*uParam2 = { -1160.111f, -1462.788f, 3.3668f };
					*uParam3 = 128.88f;
					break;
				
				case 2:
					*uParam2 = { -1162.183f, -1459.57f, 3.2471f };
					*uParam3 = 128.88f;
					break;
				
				case 3:
					*uParam2 = { -1164.206f, -1456.611f, 3.2448f };
					*uParam3 = 128.88f;
					break;
				
				case 4:
					*uParam2 = { -1161.161f, -1461.186f, 3.3668f };
					*uParam3 = 128.88f;
					break;
				
				case 5:
					*uParam2 = { -1160.853f, -1459.394f, 3.3744f };
					*uParam3 = 128.88f;
					break;
				
				case 6:
					*uParam2 = { -1161.603f, -1458.346f, 3.2927f };
					*uParam3 = 128.88f;
					break;
				
				case 7:
					*uParam2 = { -1161.077f, -1456.982f, 3.3286f };
					*uParam3 = 128.88f;
					break;
				
				case 8:
					*uParam2 = { -1162.371f, -1457.229f, 3.275f };
					*uParam3 = 128.88f;
					break;
				
				case 9:
					*uParam2 = { -1160.206f, -1458.451f, 3.3805f };
					*uParam3 = 128.88f;
					break;
				
				case 10:
					*uParam2 = { -1159.432f, -1457.09f, 3.3607f };
					*uParam3 = 128.88f;
					break;
				
				case 11:
					*uParam2 = { -1159.698f, -1455.818f, 3.3701f };
					*uParam3 = 128.88f;
					break;
				
				case 12:
					*uParam2 = { -1157.973f, -1457.155f, 3.3828f };
					*uParam3 = 128.88f;
					break;
				
				case 13:
					*uParam2 = { -1160.065f, -1454.594f, 3.3825f };
					*uParam3 = 120.4252f;
					break;
				
				case 14:
					*uParam2 = { -1158.949f, -1458.509f, 3.4084f };
					*uParam3 = 128.88f;
					break;
				
				case 15:
					*uParam2 = { -1157.903f, -1455.795f, 3.3285f };
					*uParam3 = 128.88f;
					break;
				
				case 16:
					*uParam2 = { -1158.637f, -1453.852f, 3.3694f };
					*uParam3 = 128.88f;
					break;
				
				case 17:
					*uParam2 = { -1156.552f, -1456.577f, 3.3393f };
					*uParam3 = 128.88f;
					break;
				
				case 18:
					*uParam2 = { -1156.913f, -1452.432f, 3.4217f };
					*uParam3 = 128.88f;
					break;
				
				case 19:
					*uParam2 = { -1157.695f, -1459.045f, 3.415f };
					*uParam3 = 128.88f;
					break;
				
				case 20:
					*uParam2 = { -1155.593f, -1451.959f, 3.4298f };
					*uParam3 = 128.88f;
					break;
				
				case 21:
					*uParam2 = { -1156.767f, -1453.84f, 3.3017f };
					*uParam3 = 128.88f;
					break;
				
				case 22:
					*uParam2 = { -1154.336f, -1453.126f, 3.273f };
					*uParam3 = 128.88f;
					break;
				
				case 23:
					*uParam2 = { -1155.149f, -1455.084f, 3.3271f };
					*uParam3 = 128.88f;
					break;
				
				case 24:
					*uParam2 = { -1153.917f, -1455.068f, 3.4026f };
					*uParam3 = 128.399f;
					break;
				
				case 25:
					*uParam2 = { -1173.674f, -1469.097f, 3.3857f };
					*uParam3 = 300.2633f;
					break;
				
				case 26:
					*uParam2 = { -1175.641f, -1464.792f, 3.3958f };
					*uParam3 = 295.691f;
					break;
				
				case 27:
					*uParam2 = { -1172.49f, -1470.038f, 3.3842f };
					*uParam3 = 300.9921f;
					break;
				
				case 28:
					*uParam2 = { -1174.274f, -1470.808f, 3.3831f };
					*uParam3 = 278.8469f;
					break;
				
				case 29:
					*uParam2 = { -1159.719f, -1460.677f, 3.3764f };
					*uParam3 = 128.88f;
					break;
				
				case 30:
					*uParam2 = { -1175.364f, -1466.672f, 3.3847f };
					*uParam3 = 295.5116f;
					break;
				
				case 31:
					*uParam2 = { -1177.114f, -1466.254f, 3.3819f };
					*uParam3 = 295.9021f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 784:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1824.188f, -663.9872f, 9.4996f };
					*uParam3 = 138.955f;
					break;
				
				case 1:
					*uParam2 = { -1825.545f, -662.8053f, 9.5014f };
					*uParam3 = 138.955f;
					break;
				
				case 2:
					*uParam2 = { -1822.83f, -665.1692f, 9.4978f };
					*uParam3 = 138.955f;
					break;
				
				case 3:
					*uParam2 = { -1826.903f, -661.6234f, 9.5032f };
					*uParam3 = 138.955f;
					break;
				
				case 4:
					*uParam2 = { -1821.473f, -666.3511f, 9.496f };
					*uParam3 = 138.955f;
					break;
				
				case 5:
					*uParam2 = { -1828.26f, -660.4414f, 9.505f };
					*uParam3 = 138.955f;
					break;
				
				case 6:
					*uParam2 = { -1820.115f, -667.5331f, 9.485f };
					*uParam3 = 138.955f;
					break;
				
				case 7:
					*uParam2 = { -1829.618f, -659.2595f, 9.5068f };
					*uParam3 = 138.955f;
					break;
				
				case 8:
					*uParam2 = { -1825.37f, -665.3448f, 9.3867f };
					*uParam3 = 138.955f;
					break;
				
				case 9:
					*uParam2 = { -1826.727f, -664.1628f, 9.3885f };
					*uParam3 = 138.955f;
					break;
				
				case 10:
					*uParam2 = { -1824.012f, -666.5267f, 9.3849f };
					*uParam3 = 138.955f;
					break;
				
				case 11:
					*uParam2 = { -1828.085f, -662.9809f, 9.3904f };
					*uParam3 = 138.955f;
					break;
				
				case 12:
					*uParam2 = { -1822.655f, -667.7087f, 9.3831f };
					*uParam3 = 138.955f;
					break;
				
				case 13:
					*uParam2 = { -1829.443f, -661.799f, 9.3922f };
					*uParam3 = 138.955f;
					break;
				
				case 14:
					*uParam2 = { -1821.297f, -668.8906f, 9.3672f };
					*uParam3 = 138.955f;
					break;
				
				case 15:
					*uParam2 = { -1830.8f, -660.617f, 9.3938f };
					*uParam3 = 138.955f;
					break;
				
				case 16:
					*uParam2 = { -1826.552f, -666.7023f, 9.3607f };
					*uParam3 = 138.955f;
					break;
				
				case 17:
					*uParam2 = { -1827.909f, -665.5204f, 9.36f };
					*uParam3 = 138.955f;
					break;
				
				case 18:
					*uParam2 = { -1825.194f, -667.8843f, 9.3614f };
					*uParam3 = 138.955f;
					break;
				
				case 19:
					*uParam2 = { -1829.267f, -664.3384f, 9.3592f };
					*uParam3 = 138.955f;
					break;
				
				case 20:
					*uParam2 = { -1823.837f, -669.0662f, 9.3621f };
					*uParam3 = 138.955f;
					break;
				
				case 21:
					*uParam2 = { -1830.625f, -663.1565f, 9.3585f };
					*uParam3 = 138.955f;
					break;
				
				case 22:
					*uParam2 = { -1822.479f, -670.2482f, 9.3628f };
					*uParam3 = 138.955f;
					break;
				
				case 23:
					*uParam2 = { -1831.982f, -661.9745f, 9.3578f };
					*uParam3 = 138.955f;
					break;
				
				case 24:
					*uParam2 = { -1827.734f, -668.0599f, 9.3993f };
					*uParam3 = 138.955f;
					break;
				
				case 25:
					*uParam2 = { -1829.091f, -666.8779f, 9.3987f };
					*uParam3 = 138.955f;
					break;
				
				case 26:
					*uParam2 = { -1826.376f, -669.2418f, 9.3998f };
					*uParam3 = 138.955f;
					break;
				
				case 27:
					*uParam2 = { -1830.57f, -666.3531f, 9.4086f };
					*uParam3 = 138.955f;
					break;
				
				case 28:
					*uParam2 = { -1825.019f, -670.4238f, 9.4004f };
					*uParam3 = 138.955f;
					break;
				
				case 29:
					*uParam2 = { -1832.348f, -664.7587f, 9.4072f };
					*uParam3 = 138.955f;
					break;
				
				case 30:
					*uParam2 = { -1823.661f, -671.6057f, 9.4009f };
					*uParam3 = 138.955f;
					break;
				
				case 31:
					*uParam2 = { -1833.164f, -663.3321f, 9.3975f };
					*uParam3 = 138.955f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 785:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 876.8036f, -509.6296f, 56.3301f };
					*uParam3 = 217.44f;
					break;
				
				case 1:
					*uParam2 = { 875.46f, -511.3341f, 56.3352f };
					*uParam3 = 217.44f;
					break;
				
				case 2:
					*uParam2 = { 878.2328f, -508.5353f, 56.3237f };
					*uParam3 = 217.44f;
					break;
				
				case 3:
					*uParam2 = { 873.6586f, -512.3547f, 56.3281f };
					*uParam3 = 217.44f;
					break;
				
				case 4:
					*uParam2 = { 880.637f, -507.4767f, 56.3321f };
					*uParam3 = 209.2742f;
					break;
				
				case 5:
					*uParam2 = { 872.3223f, -513.4522f, 56.3299f };
					*uParam3 = 217.44f;
					break;
				
				case 6:
					*uParam2 = { 882.5317f, -506.3899f, 56.3307f };
					*uParam3 = 205.0466f;
					break;
				
				case 7:
					*uParam2 = { 870.8762f, -514.4914f, 56.33f };
					*uParam3 = 234.3541f;
					break;
				
				case 8:
					*uParam2 = { 877.8979f, -511.0588f, 56.3266f };
					*uParam3 = 217.44f;
					break;
				
				case 9:
					*uParam2 = { 876.4687f, -512.1531f, 56.3289f };
					*uParam3 = 217.44f;
					break;
				
				case 10:
					*uParam2 = { 879.3271f, -509.9645f, 56.3333f };
					*uParam3 = 217.44f;
					break;
				
				case 11:
					*uParam2 = { 875.0395f, -513.2473f, 56.3283f };
					*uParam3 = 217.44f;
					break;
				
				case 12:
					*uParam2 = { 880.7563f, -508.8702f, 56.3403f };
					*uParam3 = 217.44f;
					break;
				
				case 13:
					*uParam2 = { 873.6103f, -514.3416f, 56.3319f };
					*uParam3 = 217.44f;
					break;
				
				case 14:
					*uParam2 = { 885.795f, -507.1485f, 56.3319f };
					*uParam3 = 209.199f;
					break;
				
				case 15:
					*uParam2 = { 872.1811f, -515.4359f, 56.3318f };
					*uParam3 = 217.44f;
					break;
				
				case 16:
					*uParam2 = { 878.9922f, -512.4879f, 56.2814f };
					*uParam3 = 217.44f;
					break;
				
				case 17:
					*uParam2 = { 877.563f, -513.5822f, 56.2792f };
					*uParam3 = 217.44f;
					break;
				
				case 18:
					*uParam2 = { 880.4214f, -511.3937f, 56.298f };
					*uParam3 = 217.44f;
					break;
				
				case 19:
					*uParam2 = { 876.1338f, -514.6765f, 56.3305f };
					*uParam3 = 217.44f;
					break;
				
				case 20:
					*uParam2 = { 881.8506f, -510.2994f, 56.3399f };
					*uParam3 = 217.44f;
					break;
				
				case 21:
					*uParam2 = { 874.7046f, -515.7708f, 56.373f };
					*uParam3 = 217.44f;
					break;
				
				case 22:
					*uParam2 = { 884.4017f, -508.8406f, 56.3431f };
					*uParam3 = 205.2478f;
					break;
				
				case 23:
					*uParam2 = { 873.2754f, -516.8651f, 56.3714f };
					*uParam3 = 217.44f;
					break;
				
				case 24:
					*uParam2 = { 879.562f, -513.8776f, 56.2068f };
					*uParam3 = 217.44f;
					break;
				
				case 25:
					*uParam2 = { 877.925f, -514.9755f, 56.2518f };
					*uParam3 = 217.44f;
					break;
				
				case 26:
					*uParam2 = { 881.9274f, -512.1732f, 56.2348f };
					*uParam3 = 213.6399f;
					break;
				
				case 27:
					*uParam2 = { 876.275f, -515.924f, 56.3727f };
					*uParam3 = 217.44f;
					break;
				
				case 28:
					*uParam2 = { 883.826f, -510.9079f, 56.4015f };
					*uParam3 = 213.3066f;
					break;
				
				case 29:
					*uParam2 = { 874.7527f, -517.3654f, 56.3741f };
					*uParam3 = 217.44f;
					break;
				
				case 30:
					*uParam2 = { 887.1552f, -509.0055f, 56.3889f };
					*uParam3 = 192.6829f;
					break;
				
				case 31:
					*uParam2 = { 872.7526f, -519.2885f, 56.373f };
					*uParam3 = 217.44f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 786:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1555.823f, -298.3855f, 47.1645f };
					*uParam3 = 227.84f;
					break;
				
				case 1:
					*uParam2 = { -1557.031f, -299.7198f, 47.1464f };
					*uParam3 = 227.84f;
					break;
				
				case 2:
					*uParam2 = { -1554.615f, -297.0512f, 47.1831f };
					*uParam3 = 227.84f;
					break;
				
				case 3:
					*uParam2 = { -1558.239f, -301.0541f, 47.1301f };
					*uParam3 = 227.84f;
					break;
				
				case 4:
					*uParam2 = { -1553.407f, -295.7169f, 47.2f };
					*uParam3 = 227.84f;
					break;
				
				case 5:
					*uParam2 = { -1554.489f, -299.5937f, 47.1281f };
					*uParam3 = 227.84f;
					break;
				
				case 6:
					*uParam2 = { -1555.697f, -300.9279f, 47.105f };
					*uParam3 = 227.84f;
					break;
				
				case 7:
					*uParam2 = { -1553.281f, -298.2594f, 47.1541f };
					*uParam3 = 227.84f;
					break;
				
				case 8:
					*uParam2 = { -1556.905f, -302.2622f, 47.0892f };
					*uParam3 = 227.84f;
					break;
				
				case 9:
					*uParam2 = { -1552.072f, -296.9251f, 47.18f };
					*uParam3 = 227.84f;
					break;
				
				case 10:
					*uParam2 = { -1553.154f, -300.8018f, 47.0807f };
					*uParam3 = 227.84f;
					break;
				
				case 11:
					*uParam2 = { -1554.362f, -302.1361f, 47.0389f };
					*uParam3 = 227.84f;
					break;
				
				case 12:
					*uParam2 = { -1551.946f, -299.4675f, 47.1226f };
					*uParam3 = 227.84f;
					break;
				
				case 13:
					*uParam2 = { -1555.571f, -303.4704f, 47.0156f };
					*uParam3 = 227.84f;
					break;
				
				case 14:
					*uParam2 = { -1550.738f, -298.1332f, 47.1647f };
					*uParam3 = 227.84f;
					break;
				
				case 15:
					*uParam2 = { -1551.82f, -302.01f, 46.9895f };
					*uParam3 = 227.84f;
					break;
				
				case 16:
					*uParam2 = { -1553.028f, -303.3443f, 46.942f };
					*uParam3 = 227.84f;
					break;
				
				case 17:
					*uParam2 = { -1550.612f, -300.6757f, 47.0437f };
					*uParam3 = 227.84f;
					break;
				
				case 18:
					*uParam2 = { -1554.236f, -304.6786f, 46.9172f };
					*uParam3 = 227.84f;
					break;
				
				case 19:
					*uParam2 = { -1549.404f, -299.3414f, 47.0979f };
					*uParam3 = 227.84f;
					break;
				
				case 20:
					*uParam2 = { -1550.486f, -303.2181f, 46.8713f };
					*uParam3 = 227.84f;
					break;
				
				case 21:
					*uParam2 = { -1551.694f, -304.5524f, 46.8178f };
					*uParam3 = 227.84f;
					break;
				
				case 22:
					*uParam2 = { -1549.277f, -301.8839f, 46.9232f };
					*uParam3 = 227.84f;
					break;
				
				case 23:
					*uParam2 = { -1552.902f, -305.8867f, 46.779f };
					*uParam3 = 227.84f;
					break;
				
				case 24:
					*uParam2 = { -1548.069f, -300.5496f, 46.973f };
					*uParam3 = 227.84f;
					break;
				
				case 25:
					*uParam2 = { -1549.151f, -304.4263f, 46.699f };
					*uParam3 = 227.84f;
					break;
				
				case 26:
					*uParam2 = { -1550.359f, -305.7606f, 46.6059f };
					*uParam3 = 227.84f;
					break;
				
				case 27:
					*uParam2 = { -1547.943f, -303.092f, 46.792f };
					*uParam3 = 227.84f;
					break;
				
				case 28:
					*uParam2 = { -1551.568f, -307.0949f, 46.5102f };
					*uParam3 = 227.84f;
					break;
				
				case 29:
					*uParam2 = { -1546.735f, -301.7577f, 46.8862f };
					*uParam3 = 227.84f;
					break;
				
				case 30:
					*uParam2 = { -1547.817f, -305.6345f, 46.7032f };
					*uParam3 = 227.84f;
					break;
				
				case 31:
					*uParam2 = { -1549.025f, -306.9688f, 46.6102f };
					*uParam3 = 227.84f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 787:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1011.992f, -2742.238f, 12.7585f };
					*uParam3 = 241.965f;
					break;
				
				case 1:
					*uParam2 = { -1013.139f, -2742.823f, 12.759f };
					*uParam3 = 241.965f;
					break;
				
				case 2:
					*uParam2 = { -1011.983f, -2740.746f, 12.7578f };
					*uParam3 = 241.965f;
					break;
				
				case 3:
					*uParam2 = { -1014.299f, -2743.687f, 12.7597f };
					*uParam3 = 241.965f;
					break;
				
				case 4:
					*uParam2 = { -1012.007f, -2739.52f, 12.7573f };
					*uParam3 = 241.965f;
					break;
				
				case 5:
					*uParam2 = { -1010.531f, -2742.951f, 12.7585f };
					*uParam3 = 241.965f;
					break;
				
				case 6:
					*uParam2 = { -1011.137f, -2743.783f, 12.759f };
					*uParam3 = 241.965f;
					break;
				
				case 7:
					*uParam2 = { -1009.911f, -2741.84f, 12.7578f };
					*uParam3 = 241.965f;
					break;
				
				case 8:
					*uParam2 = { -1012.231f, -2744.914f, 12.7598f };
					*uParam3 = 241.965f;
					break;
				
				case 9:
					*uParam2 = { -1009.296f, -2740.706f, 12.7571f };
					*uParam3 = 241.965f;
					break;
				
				case 10:
					*uParam2 = { -1009.465f, -2744.167f, 12.7588f };
					*uParam3 = 241.965f;
					break;
				
				case 11:
					*uParam2 = { -1010.623f, -2745.026f, 12.7594f };
					*uParam3 = 241.965f;
					break;
				
				case 12:
					*uParam2 = { -1008.924f, -2742.999f, 12.7581f };
					*uParam3 = 241.965f;
					break;
				
				case 13:
					*uParam2 = { -1009.5f, -2745.75f, 12.7587f };
					*uParam3 = 241.965f;
					break;
				
				case 14:
					*uParam2 = { -1008.151f, -2741.837f, 12.7574f };
					*uParam3 = 241.965f;
					break;
				
				case 15:
					*uParam2 = { -1007.598f, -2744.406f, 12.7579f };
					*uParam3 = 241.965f;
					break;
				
				case 16:
					*uParam2 = { -1008.16f, -2745.647f, 12.7579f };
					*uParam3 = 241.965f;
					break;
				
				case 17:
					*uParam2 = { -1007.091f, -2743.272f, 12.7578f };
					*uParam3 = 241.965f;
					break;
				
				case 18:
					*uParam2 = { -1008.94f, -2746.871f, 12.758f };
					*uParam3 = 241.965f;
					break;
				
				case 19:
					*uParam2 = { -1006.434f, -2742.192f, 12.7571f };
					*uParam3 = 241.965f;
					break;
				
				case 20:
					*uParam2 = { -1005.996f, -2745.891f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 21:
					*uParam2 = { -1006.71f, -2747.218f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 22:
					*uParam2 = { -1005.441f, -2744.439f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 23:
					*uParam2 = { -1007.249f, -2748.252f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 24:
					*uParam2 = { -1004.249f, -2743.115f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 25:
					*uParam2 = { -1001.587f, -2747.471f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 26:
					*uParam2 = { -1003.91f, -2748.12f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 27:
					*uParam2 = { -1002.558f, -2745.703f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 28:
					*uParam2 = { -1005.109f, -2750.108f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 29:
					*uParam2 = { -1001.304f, -2744.601f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 30:
					*uParam2 = { -996.9316f, -2747.054f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				case 31:
					*uParam2 = { -1001.075f, -2750.84f, 12.7566f };
					*uParam3 = 241.965f;
					break;
				
				default:
					return 0;
			}
			break;
		
		case 788:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -627.6099f, 188.1829f, 67.2672f };
					*uParam3 = 91.29f;
					break;
				
				case 1:
					*uParam2 = { -626.7203f, 190.3506f, 67.8756f };
					*uParam3 = 91.29f;
					break;
				
				case 2:
					*uParam2 = { -626.924f, 186.4211f, 66.8774f };
					*uParam3 = 91.29f;
					break;
				
				case 3:
					*uParam2 = { -626.7796f, 192.2087f, 68.3053f };
					*uParam3 = 91.29f;
					break;
				
				case 4:
					*uParam2 = { -627.6679f, 182.8091f, 65.8183f };
					*uParam3 = 91.29f;
					break;
				
				case 5:
					*uParam2 = { -628.1556f, 192.9405f, 68.338f };
					*uParam3 = 91.29f;
					break;
				
				case 6:
					*uParam2 = { -629.3879f, 187.0788f, 66.6684f };
					*uParam3 = 91.29f;
					break;
				
				case 7:
					*uParam2 = { -629.9278f, 189.8741f, 67.4163f };
					*uParam3 = 91.29f;
					break;
				
				case 8:
					*uParam2 = { -628.8543f, 184.8547f, 66.1415f };
					*uParam3 = 91.29f;
					break;
				
				case 9:
					*uParam2 = { -628.4518f, 191.1634f, 67.8835f };
					*uParam3 = 91.29f;
					break;
				
				case 10:
					*uParam2 = { -630.5839f, 182.5464f, 65.26f };
					*uParam3 = 91.29f;
					break;
				
				case 11:
					*uParam2 = { -629.4736f, 193.6239f, 68.4221f };
					*uParam3 = 91.29f;
					break;
				
				case 12:
					*uParam2 = { -631.3083f, 187.7198f, 66.6261f };
					*uParam3 = 91.29f;
					break;
				
				case 13:
					*uParam2 = { -631.3297f, 189.9269f, 67.2712f };
					*uParam3 = 91.29f;
					break;
				
				case 14:
					*uParam2 = { -630.6173f, 186.0896f, 66.1844f };
					*uParam3 = 91.29f;
					break;
				
				case 15:
					*uParam2 = { -630.8812f, 191.31f, 67.6629f };
					*uParam3 = 91.29f;
					break;
				
				case 16:
					*uParam2 = { -632.1068f, 184.0549f, 65.3961f };
					*uParam3 = 91.29f;
					break;
				
				case 17:
					*uParam2 = { -631.0272f, 193.6348f, 68.3015f };
					*uParam3 = 91.29f;
					break;
				
				case 18:
					*uParam2 = { -633.0806f, 187.7252f, 66.3944f };
					*uParam3 = 91.29f;
					break;
				
				case 19:
					*uParam2 = { -632.8481f, 189.8396f, 67.0935f };
					*uParam3 = 91.29f;
					break;
				
				case 20:
					*uParam2 = { -633.1104f, 185.8789f, 65.782f };
					*uParam3 = 91.29f;
					break;
				
				case 21:
					*uParam2 = { -632.4808f, 191.274f, 67.5243f };
					*uParam3 = 91.29f;
					break;
				
				case 22:
					*uParam2 = { -633.2818f, 182.4401f, 64.7758f };
					*uParam3 = 91.29f;
					break;
				
				case 23:
					*uParam2 = { -633.0287f, 192.9955f, 67.9619f };
					*uParam3 = 91.29f;
					break;
				
				case 24:
					*uParam2 = { -634.6408f, 188.0616f, 66.3085f };
					*uParam3 = 91.29f;
					break;
				
				case 25:
					*uParam2 = { -634.5385f, 190.4171f, 67.0652f };
					*uParam3 = 91.29f;
					break;
				
				case 26:
					*uParam2 = { -635.0911f, 184.6751f, 65.1279f };
					*uParam3 = 91.29f;
					break;
				
				case 27:
					*uParam2 = { -636.1261f, 191.4432f, 67.1933f };
					*uParam3 = 91.29f;
					break;
				
				case 28:
					*uParam2 = { -635.319f, 182.2772f, 64.4273f };
					*uParam3 = 91.29f;
					break;
				
				case 29:
					*uParam2 = { -634.9794f, 192.8967f, 67.7654f };
					*uParam3 = 91.29f;
					break;
				
				case 30:
					*uParam2 = { -636.1522f, 186.7233f, 65.6708f };
					*uParam3 = 91.29f;
					break;
				
				case 31:
					*uParam2 = { -636.1997f, 189.2993f, 66.5199f };
					*uParam3 = 91.29f;
					break;
				
				default:
					return 0;
			}
			break;
	}
	return 1;
}

int func_202(int iParam0, struct<3> Param1, struct<2> Param4, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1[5];
	var uVar7[5];
	var uVar13;
	bool bVar14;
	bool bVar15;
	struct<3> Var16;
	
	if (!func_222())
	{
		uVar13 = func_198(Param4);
		bVar14 = func_221(Param4, iParam0);
		if (uVar13 && !bVar14)
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_198(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/]))
				{
					iVar1[iVar0] = (func_220(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/]) - 1);
					uVar7[iVar0] = func_219(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/]);
				}
				iVar0++;
			}
			bVar15 = false;
			if (func_217(PLAYER::PLAYER_ID(), Param1) && iParam8)
			{
				MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554), 4);
				func_216(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1), &iVar1, iParam0, &uVar7, Param1, bVar15);
			}
			else
			{
				Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_12 = { Param4 };
				func_210(Param4, (func_220(Param4) - 1), iParam0, func_219(Param4), func_214(), bVar15);
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_198(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/]))
				{
					Var16 = { func_208(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/]) };
					if (func_207(Var16, Param1))
					{
						func_204(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_1[iVar0 /*2*/], iParam0, iVar1[iVar0], bParam6, bParam7);
					}
				}
				iVar0++;
			}
			func_203();
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_554.f_15 = iParam0;
			Global_1689734.f_4950 = { Param1 };
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_203()
{
	func_30(&(Global_1689734.f_4860), 0, 0);
}

void func_204(struct<2> Param0, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam2 > 0)
	{
		if (iParam3 <= 0)
		{
			if (bParam4)
			{
				func_206(Param0);
			}
			else if (bParam5)
			{
				func_205(Param0);
			}
		}
	}
}

void func_205(struct<2> Param0)
{
	struct<3> Var0;
	int iVar4;
	
	Var0.f_2.f_1 = -1;
	Var0.x = 1513967289;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar4 = func_188(1, 1);
	if (!iVar4 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iVar4);
	}
}

void func_206(struct<2> Param0)
{
	struct<3> Var0;
	int iVar4;
	
	Var0.f_2.f_1 = -1;
	Var0.x = -376395899;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar4 = func_188(1, 1);
	if (!iVar4 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iVar4);
	}
}

int func_207(struct<3> Param0, struct<3> Param3)
{
	if (!func_189(Param0))
	{
		return 0;
	}
	if (Param0.x == Param3.x && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_208(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_209(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2419497.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_209(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_191(Param0, Global_2419497.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_210(struct<2> Param0, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0 = 1659915470;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_6 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_7 = bParam5;
	if (bParam5)
	{
		Var0.f_8 = Global_2544210.f_6625.f_9;
		Var0.f_9 = Global_2544210.f_6625.f_10;
	}
	iVar10 = 0;
	if (bParam6)
	{
		iVar10 = func_188(1, 1);
	}
	if (iVar10 == 0)
	{
		if (func_212(PLAYER::PLAYER_ID(), Var0.f_2))
		{
			iVar10 = func_211(0, 1);
		}
		else
		{
			if (bParam5 && (iParam4 == 14 || iParam4 == 13))
			{
				if (func_111() != func_9())
				{
					iVar10 = func_211(0, 1);
				}
				if (func_22(Var0.f_2, 0, 1))
				{
					MISC::SET_BIT(&iVar10, Var0.f_2);
				}
			}
			else
			{
				if (func_22(Var0.f_2, 0, 1))
				{
					iVar10 = func_140(Var0.f_2);
				}
				if (func_111() != func_9())
				{
					MISC::SET_BIT(&iVar10, func_111());
				}
			}
			MISC::SET_BIT(&iVar10, PLAYER::PLAYER_ID());
		}
	}
	if (!iVar10 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 10, iVar10);
	}
}

int func_211(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_113(PLAYER::PLAYER_ID()))
	{
		iVar2 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar2 = func_111();
	}
	if (iVar2 == PLAYER::PLAYER_ID() || func_22(iVar2, bParam0, 1))
	{
		MISC::SET_BIT(&uVar0, iVar2);
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if ((iVar2 != iVar3 && func_212(iVar3, iVar2)) && func_22(iVar3, bParam0, 1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&uVar0, PLAYER::PLAYER_ID());
	}
	return uVar0;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_213(iParam0);
	if (!iVar0 == func_9())
	{
		if (iVar0 == func_213(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_9())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_9();
}

bool func_214()
{
	return func_215(PLAYER::PLAYER_ID(), 29);
}

bool func_215(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

void func_216(var uParam0, int iParam1, int iParam2, var uParam3, struct<3> Param4, bool bParam7)
{
	struct<21> Var0;
	int iVar26;
	struct<3> Var27;
	int iVar30;
	
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	Var0 = 575344561;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar26 = 0;
	while (iVar26 < 5)
	{
		if (func_198(*(uParam0[iVar26 /*2*/])))
		{
			Var27 = { func_208(*(uParam0[iVar26 /*2*/])) };
			if (func_207(Var27, Param4))
			{
				Var0.f_2[iVar26 /*2*/] = { *(uParam0[iVar26 /*2*/]) };
				Var0.f_20[iVar26] = (*iParam1)[iVar26];
				Var0.f_14[iVar26] = (*uParam3)[iVar26];
			}
		}
		iVar26++;
	}
	Var0.f_13 = iParam2;
	iVar30 = func_211(1, 1);
	if (!func_192(1))
	{
		iVar30 = 0;
		MISC::SET_BIT(&iVar30, PLAYER::PLAYER_ID());
	}
	if (bParam7)
	{
		iVar30 = func_188(1, 1);
	}
	if (!iVar30 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 26, iVar30);
	}
}

bool func_217(int iParam0, struct<3> Param1)
{
	return func_218(iParam0, Param1) > 1;
}

int func_218(int iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (iParam0 != func_9())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_198(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]) && func_190(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]))
			{
				Var2 = { func_208(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]) };
				if (func_207(Var2, Param1))
				{
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_219(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_191(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

int func_220(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_191(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_221(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_191(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_5[iVar1] != 0 && Global_2419497.f_199.f_1[iVar0 /*15*/].f_5[iVar1] == iParam2)
				{
					return 1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_222()
{
	return func_223(PLAYER::PLAYER_ID());
}

int func_223(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_198(Global_1630816[iParam0 /*597*/].f_554.f_12) || MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_554, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_224()
{
	if (func_225(PLAYER::PLAYER_ID()) && Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_10 != func_9())
	{
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_10 = func_9();
	}
}

int func_225(int iParam0)
{
	if (iParam0 != func_9() && func_22(iParam0, 1, 1))
	{
		if (func_226(iParam0) && !func_21(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if (iParam0 != func_9() && func_22(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

void func_227()
{
	int iVar0;
	struct<3> Var1;
	
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if (!func_228(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_226(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (Var1.f_2 > -95.5f && Var1.f_2 < -92f)
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, Var1.x, Var1.f_1, -99.8f, true, false, false, true);
		}
	}
}

int func_228(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_229()
{
	if (MISC::IS_BIT_SET(Global_1683970.f_8, 25))
	{
		if (Global_4016696 != -1)
		{
			Global_4016696 = -1;
		}
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_639)
	{
		if (func_242() > 16)
		{
			iLocal_639 = 1;
		}
	}
	if (func_22(PLAYER::PLAYER_ID(), 0, 0) && iLocal_639)
	{
		if (!iLocal_636)
		{
			iLocal_638 = func_42();
			iVar1 = (20 * iLocal_637 + 1);
			if (iVar1 >= 316)
			{
				iVar1 = 316;
			}
			iVar0 = (20 * iLocal_637);
			while (iVar0 <= iVar1)
			{
				if (!func_241(iVar0))
				{
					iVar2 = func_234(iVar0, 0);
					Global_1323703[iVar0 /*142*/].f_102 = func_231(iVar2, -1, -1);
				}
				iVar0++;
			}
			iLocal_637++;
			if (iVar1 == 316)
			{
				iLocal_636 = 1;
				iLocal_637 = 0;
			}
		}
	}
	else
	{
		func_27(0);
	}
	if (iLocal_638 != func_42())
	{
		func_27(1);
	}
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_42();
	}
	iVar0 = 0;
	iVar1 = func_233(iParam0, iParam1);
	iVar2 = func_232(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_42();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30707), false, true, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_234(int iParam0, bool bParam1)
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_235(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_240(iParam0);
		return func_239(iVar0);
	}
	return (func_236(iParam0, -1, 1) * iParam0 + 1);
}

int func_236(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_238(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_237(iParam1))
			{
				return 0;
			}
			else if (func_45(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 <= 127 && iParam1 > 0)
			{
				if (Global_1049961[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_238(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_240(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

int func_242()
{
	return Global_1312836;
}

void func_243()
{
	if (func_245())
	{
		if (func_107(Global_1701877))
		{
			Global_1701876 = joaat("imp_prop_ship_01a");
			Global_1701877 = { func_244() };
		}
	}
	else if (Global_1701876 != 0)
	{
		Global_1701876 = 0;
		Global_1701877 = { 0f, 0f, 0f };
	}
}

Vector3 func_244()
{
	switch (Global_2544210.f_6621.f_3)
	{
		case 18915:
			switch (Global_1701880)
			{
				case 0:
					return -983.0557f, 6242.934f, -40.0311f;
				
				default:
			}
			break;
		
		case 18916:
			switch (Global_1701880)
			{
				case 0:
					return 759.73f, 7392.77f, -50.93f;
				
				default:
			}
			break;
		
		case 18917:
			switch (Global_1701880)
			{
				case 0:
					return 451.1f, 5571.43f, 700.7f;
				
				default:
			}
			break;
		
		case 18918:
			switch (Global_1701880)
			{
				case 0:
					return 3431.02f, 5174.17f, -40.38f;
				
				default:
			}
			break;
		
		case 18919:
			switch (Global_1701880)
			{
				case 0:
					return -1005.79f, 4852f, 200.55f;
				
				default:
			}
			break;
		
		case 18920:
			switch (Global_1701880)
			{
				case 0:
					return 2489.052f, 3759.906f, 10.5049f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_245()
{
	int iVar0;
	
	iVar0 = func_246(func_247());
	if (iVar0 >= 22 || iVar0 <= 3)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_247()
{
	var uVar0;
	
	func_257(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_256(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_255(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_250(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_249(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_248(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_248(var uParam0, int iParam1)
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

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_250(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_254(*uParam0);
	iVar1 = func_252(*uParam0);
	if (iParam1 < 1 || iParam1 > func_251(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_251(int iParam0, int iParam1)
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

var func_252(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_253(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_254(var uParam0)
{
	return uParam0 & 15;
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_258()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_13(&uLocal_15))
	{
		MISC::SET_BIT(&Global_7669, 2);
		if (func_10(&uLocal_15, 60000, 0))
		{
			func_30(&uLocal_15, 0, 0);
			func_4(&uLocal_15);
		}
	}
	if (func_13(&uLocal_13) && func_10(&uLocal_13, 1000, 0))
	{
		if (iLocal_22 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_22 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_22, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_10(&uLocal_13, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_22))
			{
				AUDIO::STOP_SOUND(iLocal_22);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_22);
			iLocal_22 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_30(&uLocal_13, 0, 0);
			func_4(&uLocal_13);
		}
	}
	if (!iLocal_7 && !func_265())
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
			iVar1 = func_152(7868, -1, 0);
			func_128(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_17 = { ENTITY::GET_ENTITY_COORDS(iLocal_6, false) };
			iLocal_20 = 0;
		}
	}
	else
	{
		func_264();
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
				if (func_10(&uLocal_9, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6, false);
					func_30(&uLocal_9, 0, 0);
					func_4(&uLocal_9);
					func_12(&uLocal_11, 0, 0);
					iLocal_8 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_263(&uLocal_11, 0, 0)) / SYSTEM::TO_FLOAT(func_262()));
				fVar47 = (SYSTEM::TO_FLOAT(func_263(&uLocal_9, 0, 0)) / SYSTEM::TO_FLOAT(func_261()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_259(Local_17, func_260(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_6, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_20++;
					Local_17 = { ENTITY::GET_ENTITY_COORDS(iLocal_6, false) };
					func_30(&uLocal_9, 0, 0);
					func_4(&uLocal_9);
					if (func_261() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_6);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
						{
							AUDIO::STOP_SOUND(iLocal_21);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_21);
						iLocal_21 = -1;
						func_12(&uLocal_13, 0, 0);
						func_12(&uLocal_15, 0, 0);
						func_30(&uLocal_11, 0, 0);
						func_4(&uLocal_11);
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

Vector3 func_259(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_260()
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

int func_261()
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

int func_262()
{
	return 3150;
}

int func_263(var uParam0, bool bParam1, bool bParam2)
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

void func_264()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_6, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_6, Var0, 2, true);
}

int func_265()
{
	if (((((((func_118(22107, -1, -1) && Global_2409299 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_268(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2453903.f_3075.f_178 >= 1) && Global_2453903.f_3075.f_178 < 4) && func_267()) && func_266())
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	if (func_118(15476, -1, -1) && func_152(5452, func_42(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_267()
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

bool func_268(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

void func_269()
{
	if (func_276())
	{
		if (!iLocal_630)
		{
			func_275(45, 1, 1);
			iLocal_630 = 1;
		}
	}
	else if (iLocal_630)
	{
		func_274(45, 1, 1);
		iLocal_630 = 0;
		func_4(&uLocal_631);
	}
	if (func_270())
	{
		if (!iLocal_635)
		{
			Global_1701870 = 1;
			iLocal_635 = 1;
		}
	}
	else if (iLocal_635)
	{
		Global_1701870 = 0;
		iLocal_635 = 0;
		func_4(&uLocal_633);
	}
}

int func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_163(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 235;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 58;
	}
	if (func_273("CM_PV_MEM") || func_273("CM_PV_MEM_PC"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
		{
			func_30(&uLocal_633, 0, 0);
			return 1;
		}
	}
	if (func_13(&uLocal_633) && !func_10(&uLocal_633, 3000, 0))
	{
		return 1;
	}
	if (func_15(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_272(iVar1, 1))
		{
			iVar2 = func_271(iVar1);
			if ((iVar2 != func_9() && iVar2 != PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2426865[iVar2 /*449*/].f_319.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	if (!func_272(iParam0, 1))
	{
		return func_9();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_103(iVar0, 0, 1, 0);
}

int func_272(int iParam0, bool bParam1)
{
	if (Global_77248)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_273(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_274(int iParam0, int iParam1, bool bParam2)
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
		if (func_122() == 0)
		{
			iVar0 = func_152(func_180(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_128(func_180(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_275(int iParam0, int iParam1, bool bParam2)
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
		if (func_122() == 0)
		{
			iVar0 = func_152(func_180(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_128(func_180(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

int func_276()
{
	int iVar0;
	
	if (!func_163(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 201;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 223;
	}
	if (!func_273("CM_PV_MEM") && !func_273("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_30(&uLocal_631, 0, 0);
		return 1;
	}
	if (func_95() && MISC::ARE_STRINGS_EQUAL(&(Global_22670.f_1), "INST_MENU_TTL"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			func_30(&uLocal_631, 0, 0);
			return 1;
		}
	}
	if (func_13(&uLocal_631) && !func_10(&uLocal_631, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_277()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		if ((func_95() && MISC::ARE_STRINGS_EQUAL(&(Global_22670.f_1), "ORG_MENU_T")) || Global_2544210.f_4031)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_629 = 1;
			}
		}
		else if (iLocal_629)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_629 = 0;
		}
	}
}

void func_278()
{
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 5))
	{
		if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && (HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 15890625 || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == -862848537)) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 0)
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
		}
	}
}

void func_279()
{
	if (((func_282() == 3 && func_281()) && func_18()) && func_280(Global_4456448.f_85535))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

int func_280(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_281()
{
	return MISC::IS_BIT_SET(Global_2453903.f_1.f_2809, 5);
}

int func_282()
{
	return Global_968397;
}

void func_283()
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if (func_285(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_628)
		{
			MISC::SET_BIT(&(Global_1683970.f_4415.f_1), 9);
			iLocal_628 = 1;
		}
	}
	else if (iLocal_628)
	{
		MISC::CLEAR_BIT(&(Global_1683970.f_4415.f_1), 9);
		iLocal_628 = 0;
	}
	if (!func_228(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == func_9())
	{
		return;
	}
	if (!func_22(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9, 0, 1))
	{
		return;
	}
	if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_102226, 1))
		{
			Global_1683634 = 1;
			Global_99422.f_18[45] = 0;
		}
		if (func_10(&uLocal_626, 1000, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0], false);
						ENTITY::SET_ENTITY_VISIBLE(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0], true, false);
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[0]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1], false);
						ENTITY::SET_ENTITY_VISIBLE(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1], true, false);
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_452.f_4[1]);
				}
			}
			func_4(&uLocal_626);
		}
		return;
	}
	if (func_284(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9))
	{
		return;
	}
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_AUTO_SHOP", Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_7, 0) != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar16 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar17 = 0;
	while (iVar17 < iVar16)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar17]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar17], false)) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar17])) && DECORATOR::DECOR_EXIST_ON(uVar0[iVar17], "Not_Allow_As_Saved_Veh"))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uVar0[iVar17]);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0[iVar17]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar17], false, true);
				VEHICLE::DELETE_VEHICLE(&(uVar0[iVar17]));
			}
		}
		iVar17++;
	}
}

int func_284(int iParam0)
{
	if (func_228(PLAYER::PLAYER_ID()) && func_228(iParam0))
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_9 == Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	if (func_286(func_69(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 1;
		
		default:
	}
	return 0;
}

void func_287()
{
	switch (Global_262145.f_30549)
	{
		case joaat("mamba"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.655f;
			Global_1703131 = -2.6f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.565f;
			Global_1703131 = -3.3f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.98f;
			Global_1703131 = -2.7f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.849f;
			Global_1703131 = -4f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.87f;
			Global_1703131 = -2.6f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("previon"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 1.025f;
			Global_1703131 = -3.1f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("growler"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.7f;
			Global_1703131 = -2f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.725f;
			Global_1703131 = -2.9f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("calico"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.735f;
			Global_1703131 = -2.9f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.735f;
			Global_1703131 = -2.9f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.695f;
			Global_1703131 = -2.7f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1703128 = 0f;
			Global_1703129 = -1.52f;
			Global_1703130 = 0.715f;
			Global_1703131 = -3.2f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1703128 = 0f;
			Global_1703129 = -1.61f;
			Global_1703130 = 0.755f;
			Global_1703131 = -5f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1703128 = 0f;
			Global_1703129 = -1.6f;
			Global_1703130 = 0.695f;
			Global_1703131 = -3.2f;
			Global_1703132 = 0f;
			Global_1703133 = 180f;
			break;
	}
}

void func_288()
{
	int iVar0;
	
	if (func_293())
	{
		if ((!iLocal_625 && func_292()) && func_291())
		{
			iVar0 = 0;
			while (iVar0 < 1200)
			{
				if (func_290(Global_794709.f_107189[iVar0 /*13*/].f_1) || func_289(Global_794709.f_107189[iVar0 /*13*/].f_1))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 13);
				}
				iVar0++;
			}
			iLocal_625 = 1;
		}
		else if (!func_291())
		{
			iLocal_625 = 0;
		}
	}
	else if (iLocal_625)
	{
		iVar0 = 0;
		while (iVar0 < 1200)
		{
			if (func_290(Global_794709.f_107189[iVar0 /*13*/].f_1) || func_289(Global_794709.f_107189[iVar0 /*13*/].f_1))
			{
				MISC::SET_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 13);
			}
			iVar0++;
		}
		iLocal_625 = 0;
	}
}

int func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (Global_262145.f_6611[iVar1] == 279)
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

int func_290(int iParam0)
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

bool func_291()
{
	return Global_2461742;
}

var func_292()
{
	return Global_2461742.f_6;
}

bool func_293()
{
	return Global_1312861 == 10;
}

void func_294()
{
	if (!func_298())
	{
		func_297();
		return;
	}
	if (func_295())
	{
		func_297();
		return;
	}
	if (iLocal_624)
	{
		return;
	}
	Global_262145.f_30563 = 1;
	iLocal_624 = 1;
}

int func_295()
{
	int iVar0;
	
	iVar0 = func_296();
	if (iVar0 == func_9())
	{
		return 0;
	}
	if (!func_22(iVar0, 0, 1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar0, "tuner_sandbox_activity", iVar0))
	{
		return 0;
	}
	return 1;
}

var func_296()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35;
}

void func_297()
{
	if (iLocal_624)
	{
		Global_262145.f_30563 = 0;
		iLocal_624 = 0;
	}
}

int func_298()
{
	if (func_69(PLAYER::PLAYER_ID()) == 276)
	{
		if (func_68(PLAYER::PLAYER_ID()) == 1 || func_68(PLAYER::PLAYER_ID()) == 2)
		{
			return 1;
		}
	}
	return 0;
}

void func_299()
{
	var uVar0;
	var uVar3;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if (func_124(PLAYER::PLAYER_ID()) == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_300(&uVar0, &uVar3);
	if ((func_226(PLAYER::PLAYER_ID()) || Global_1683964 != 7) || !ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, false, true, 0))
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

void func_300(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

void func_301()
{
	if (func_163(PLAYER::PLAYER_ID()) && Global_1694749)
	{
		if (!iLocal_622)
		{
			func_275(45, 1, 1);
			iLocal_622 = 1;
		}
	}
	else if (iLocal_622 && !bLocal_621)
	{
		Global_1694749 = 0;
		func_274(45, 1, 1);
		iLocal_622 = 0;
	}
}

void func_302()
{
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if ((func_228(PLAYER::PLAYER_ID()) && Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_102814, 7))
	{
		if (func_310(5))
		{
			if (Global_4016696 != -1)
			{
				if (Global_2097152[func_309() /*5557*/].f_675.f_2 != -1)
				{
					if (!iLocal_623)
					{
						func_303(1, 1, 1, 0, 0, 0, 0);
						iLocal_623 = 1;
					}
					else
					{
						Global_2097152[func_309() /*5557*/].f_675.f_2 = Global_4016696;
					}
				}
				else
				{
					Global_2097152[func_309() /*5557*/].f_675.f_2 = Global_4016696;
				}
			}
		}
		else
		{
			iLocal_623 = 0;
		}
	}
	else
	{
		iLocal_623 = 0;
	}
}

void func_303(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_308() < 0 && Global_1695554)
	{
		return;
	}
	if (func_307(35))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2441237.f_502.f_52, 3))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2441237.f_502.f_56, 3))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2441237.f_502.f_60, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_306(2);
	}
	else
	{
		func_306(1);
	}
	if (bParam1)
	{
		func_306(11);
	}
	if (bParam2)
	{
		func_306(32);
		if (bParam3)
		{
			if (func_308() >= 0 && MISC::IS_BIT_SET(Global_1323703[func_308() /*142*/].f_103, 0))
			{
				func_306(33);
			}
		}
		else
		{
			func_305(33);
		}
		if (func_308() >= 0)
		{
			if (func_304(Global_1323703[func_308() /*142*/].f_66))
			{
				func_306(40);
			}
		}
	}
	else if (bParam5)
	{
		func_306(37);
	}
	if (bParam4)
	{
		func_306(36);
	}
	if (func_307(36))
	{
		if (func_307(2))
		{
			func_305(36);
		}
	}
	if (bParam6)
	{
		func_306(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2544210.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_304(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_305(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2441237.f_502.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2441237.f_502.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2441237.f_502.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2441237.f_502.f_2), (iParam0 - 32));
	}
}

void func_306(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2441237.f_502.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2441237.f_502.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2441237.f_502.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2441237.f_502.f_2), (iParam0 - 32));
	}
}

bool func_307(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2441237.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2441237.f_502.f_2, (iParam0 - 32));
}

int func_308()
{
	if (Global_2097152[func_309() /*5557*/].f_675.f_2 >= 317)
	{
		Global_2097152[func_309() /*5557*/].f_675.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_309() /*5557*/].f_675.f_2;
}

int func_309()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (func_181())
	{
		iVar0 = 0;
		while (iVar0 < 56)
		{
			if (func_311(iVar0) == iParam0)
			{
				if (func_178(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
	}
	return 6;
}

void func_312()
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return;
	}
	if (!func_228(PLAYER::PLAYER_ID()))
	{
		if (!func_226(PLAYER::PLAYER_ID()))
		{
			iLocal_615 = 0;
			iLocal_616 = -1;
			iLocal_617 = -1;
			func_4(&uLocal_619);
			if (iLocal_618)
			{
				iLocal_618 = 0;
			}
		}
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == func_9())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("tuner_property_carmod", Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_7, 0) != PLAYER::PLAYER_ID())
			{
				if (!bLocal_621)
				{
					func_275(45, 1, 1);
					bLocal_621 = true;
				}
			}
			else if (bLocal_621 && !iLocal_622)
			{
				func_274(45, 1, 1);
				bLocal_621 = false;
			}
		}
		else if (bLocal_621 && !iLocal_622)
		{
			func_274(45, 1, 1);
			bLocal_621 = false;
		}
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("tuner_property_carmod", Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_7, 0) == PLAYER::PLAYER_ID() && func_284(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9))
		{
			Global_1683634 = 1;
			Global_99422.f_18[45] = 0;
			return;
		}
		else
		{
			return;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_auto_shop")) > 0)
	{
		if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == func_9() || Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (PLAYER::GET_PLAYER_PED(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9) == iVar1)
		{
			return;
		}
		switch (iLocal_615)
		{
			case 0:
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tuner_property_carmod")) > 0)
				{
					Global_1683634 = 1;
					Global_99422.f_18[45] = 0;
				}
				else
				{
					iLocal_615 = 1;
				}
				break;
			
			case 1:
				if (func_313())
				{
					iLocal_615 = 2;
				}
				break;
		}
	}
	else if (!func_226(PLAYER::PLAYER_ID()))
	{
		iLocal_615 = 0;
		iLocal_616 = -1;
		iLocal_617 = -1;
		func_4(&uLocal_619);
		if (iLocal_618)
		{
			iLocal_618 = 0;
		}
	}
}

int func_313()
{
	struct<3> Var0;
	
	if (Global_1683634)
	{
		if (!func_13(&uLocal_619))
		{
			func_12(&uLocal_619, 0, 0);
		}
		else if (func_10(&uLocal_619, 8000, 0))
		{
			Global_1683634 = 0;
			func_4(&uLocal_619);
		}
	}
	if (!iLocal_618)
	{
		SCRIPT::REQUEST_SCRIPT("tuner_property_carmod");
		if ((SCRIPT::HAS_SCRIPT_LOADED("tuner_property_carmod") && !SCRIPT::IS_THREAD_ACTIVE(iLocal_617)) && !Global_1683634)
		{
			iLocal_616 = Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_7;
			if (Global_1683636 != (33 + iLocal_616))
			{
				Global_1683636 = (33 + iLocal_616);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("tuner_property_carmod")) < 1)
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("tuner_property_carmod", Global_1683636, true, 0))
				{
					Var0.f_1 = 0;
					Var0.x = 45;
					Var0.f_2 = 19;
					Global_101476 = Var0.f_2;
					iLocal_617 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuner_property_carmod", &Var0, 3, 3600);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuner_property_carmod");
					iLocal_618 = 1;
					Global_99422.f_18[45] = 1;
					Global_99422.f_75[45] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			if (!SCRIPT::HAS_SCRIPT_LOADED("tuner_property_carmod"))
			{
			}
			if (SCRIPT::IS_THREAD_ACTIVE(iLocal_617))
			{
			}
			if (Global_1683634)
			{
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_314()
{
	if (func_228(PLAYER::PLAYER_ID()) && !func_226(PLAYER::PLAYER_ID()))
	{
		if (Global_1316863 && !iLocal_612)
		{
			if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != func_9())
			{
				if (func_317(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9) && !func_316(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9))
				{
					func_315(1);
					iLocal_612 = 1;
				}
				else
				{
					iLocal_612 = 1;
				}
			}
		}
	}
	else if (iLocal_612)
	{
		iLocal_612 = 0;
	}
}

void func_315(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_140(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return;
	}
	Var1.x = 1123327551;
	Var1.f_1 = PLAYER::PLAYER_ID();
	Var1.f_2 = iParam0;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var1, 3, iVar0);
}

int func_316(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_452.f_2, 27);
	}
	return 0;
}

int func_317(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_452.f_2, 28);
	}
	return 0;
}

void func_318()
{
	if (!func_323(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_320())
	{
		return;
	}
	func_319();
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
}

void func_319()
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

bool func_320()
{
	return func_321(PLAYER::PLAYER_ID());
}

bool func_321(int iParam0)
{
	return func_322(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_322(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

bool func_323(int iParam0)
{
	return func_324(func_325(iParam0));
}

int func_324(int iParam0)
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

int func_325(int iParam0)
{
	if (func_69(iParam0) == 256)
	{
		return func_68(iParam0);
	}
	return -1;
}

void func_326()
{
	if (((Global_2544210.f_911 && Global_2544210.f_924) && !Global_2544210.f_5971) && !Global_2544210.f_913)
	{
		if (!iLocal_419)
		{
			func_327(Global_1323703[Global_2544210.f_958 /*142*/].f_66);
			iLocal_419 = 1;
		}
	}
	else if (iLocal_419)
	{
		iLocal_419 = 0;
	}
}

void func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	func_345();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar6 = func_344(iVar0);
		if (func_336(iVar6) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_1683970.f_516[iVar6 /*3*/], Global_1683970.f_516[iVar6 /*3*/].f_1, 0f) < 300f)
		{
			iVar1 = 0;
			if (func_335(iParam0))
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (func_334(iVar6, iVar1, &Var2, &uVar5))
					{
						func_333(Var2, uVar5);
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 30)
				{
					if (func_332(iVar6, iVar1, &Var2, &uVar5))
					{
						func_333(Var2, uVar5);
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_335(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			if (func_331(iVar1, &Var2, &uVar5))
			{
				func_333(Var2, uVar5);
			}
			iVar1++;
		}
	}
	else if (func_330(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 33)
		{
			if (func_329(iVar1, &Var2, &uVar5))
			{
				func_333(Var2, uVar5);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 33)
	{
		if (func_328(iVar1, &Var2, &uVar5))
		{
			func_333(Var2, uVar5);
		}
		iVar1++;
	}
}

bool func_328(int iParam0, var uParam1, var uParam2)
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
	return !func_107(*uParam1);
}

bool func_329(int iParam0, var uParam1, var uParam2)
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
	return !func_107(*uParam1);
}

int func_330(int iParam0)
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

bool func_331(int iParam0, var uParam1, var uParam2)
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
	return !func_107(*uParam1);
}

int func_332(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_333(struct<3> Param0, var uParam3)
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

int func_334(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_335(int iParam0)
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

int func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_343(iParam0);
	if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
	if (iVar1 != func_9())
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
	if (func_342(PLAYER::PLAYER_ID(), 0) || (func_225(PLAYER::PLAYER_ID()) && func_115(func_341(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_340(PLAYER::PLAYER_ID()) || (func_225(PLAYER::PLAYER_ID()) && func_115(func_341(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_339(PLAYER::PLAYER_ID()) || (func_225(PLAYER::PLAYER_ID()) && func_115(func_341(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_338(PLAYER::PLAYER_ID()) || (func_225(PLAYER::PLAYER_ID()) && func_115(func_341(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_337(PLAYER::PLAYER_ID()) || (func_225(PLAYER::PLAYER_ID()) && func_115(func_341(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_339(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_9())
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_9())
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	if (iParam0 != func_9() && func_22(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_342(int iParam0, bool bParam1)
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
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_9())
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
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

int func_344(int iParam0)
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

void func_345()
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

void func_346()
{
	var uVar0;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	switch (iLocal_417)
	{
		case 0:
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 444479190)
			{
				iLocal_417 = 1;
			}
			break;
		
		case 1:
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()) || !func_16()) || func_18()) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				iLocal_417 = 0;
				return;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_10 = func_9();
				MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5), 15);
				MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_1), 31);
				iLocal_418 = func_356();
				iLocal_417 = 2;
				return;
			}
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE() || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 444479190)
			{
				iLocal_417 = 0;
			}
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5), 15);
			MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_1), 31);
			Global_1683970.f_4415.f_6 = iLocal_418;
			iLocal_417 = 3;
			break;
		
		case 3:
			if (Global_1683970.f_4415.f_6 == -1)
			{
				if (((func_15(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_16()) && !func_18())
				{
					iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_15(iVar19))
					{
						iVar21 = ENTITY::GET_ENTITY_MODEL(iVar19);
						func_353(iLocal_418, &uVar0);
						if (!func_347(&uVar0, iVar19, iVar21, 0))
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
					MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_1), 31);
					MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_5), 15);
					MISC::CLEAR_BIT(&(Global_1683970.f_4415.f_1), 9);
					iLocal_417 = 0;
				}
			}
			break;
	}
}

int func_347(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	func_352(iParam1, iParam2, &Var0, &Var3, &Var6, &Var9);
	func_351(iParam1, iParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_349(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_349(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_349(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_349(Var21, Var9, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_348(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_349(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_349(Var0, Var3, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_348(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_348(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if ((func_348(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || func_348(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_348(float fParam0, float fParam1, float fParam2)
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

Vector3 func_349(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_350(Param0.x, Param3.x, fParam6, fParam7, fParam8), func_350(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_350(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_350(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_351(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

void func_352(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

void func_353(int iParam0, var uParam1)
{
	func_354(iParam0, &(uParam1->f_4), &(uParam1->f_7), &(uParam1->f_10), &(uParam1->f_13), &(uParam1->f_14));
	uParam1->f_2 = 1;
	MISC::SET_BIT(&(uParam1->f_3), 6);
	MISC::SET_BIT(&(uParam1->f_3), 0);
	MISC::SET_BIT(&(uParam1->f_3), 2);
	MISC::SET_BIT(&(uParam1->f_3), 4);
}

void func_354(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { func_355(iParam0) };
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

Vector3 func_355(int iParam0)
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

int func_356()
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

void func_357()
{
	if (!func_358())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 51, true);
}

int func_358()
{
	if (MISC::IS_BIT_SET(Global_1683970.f_3, 5))
	{
		return 1;
	}
	if ((func_360(PLAYER::PLAYER_ID()) && func_95()) && func_359(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_359(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_360(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_361()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		switch (Global_2526974[84 /*66*/][Global_2520218.f_6754])
		{
			case 4:
				if ((((!func_371(PLAYER::PLAYER_ID()) || func_370(PLAYER::PLAYER_ID())) || func_369(PLAYER::PLAYER_ID())) || func_368(PLAYER::PLAYER_ID())) || func_367(PLAYER::PLAYER_ID()))
				{
					func_366(0);
					func_365(1);
					func_364(0);
					func_363(0);
					func_362(0);
				}
				break;
			
			case 5:
				if ((((!func_368(PLAYER::PLAYER_ID()) || func_370(PLAYER::PLAYER_ID())) || func_369(PLAYER::PLAYER_ID())) || func_371(PLAYER::PLAYER_ID())) || func_367(PLAYER::PLAYER_ID()))
				{
					func_366(0);
					func_365(0);
					func_364(0);
					func_363(1);
					func_362(0);
				}
				break;
			
			case 6:
				if (((!func_369(PLAYER::PLAYER_ID()) || func_370(PLAYER::PLAYER_ID())) || func_371(PLAYER::PLAYER_ID())) || func_368(PLAYER::PLAYER_ID()))
				{
					func_366(0);
					func_365(0);
					func_364(0);
					func_363(0);
					func_362(1);
				}
				break;
			}
	}
}

void func_362(bool bParam0)
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

void func_363(bool bParam0)
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

void func_364(bool bParam0)
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

void func_365(bool bParam0)
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

void func_366(bool bParam0)
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

int func_367(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 2);
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 3);
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 4);
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 0);
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_461, 1);
	}
	return 0;
}

void func_372()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_113(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_373(PLAYER::PLAYER_ID()) == 16)
	{
		if (iLocal_416 == 0)
		{
			iLocal_416 = 1;
		}
		return;
	}
	else if (iLocal_416)
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
					if (func_22(iVar2, 0, 1))
					{
						iVar1 = iVar2;
						if (func_112(iVar2, 0))
						{
							if (func_213(iVar2) == PLAYER::PLAYER_ID())
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
		iLocal_416 = 0;
	}
}

int func_373(int iParam0)
{
	if (func_69(iParam0) == 271)
	{
		return func_68(iParam0);
	}
	return -1;
}

void func_374()
{
	if (func_163(PLAYER::PLAYER_ID()) && !func_226(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_415)
		{
			STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_side_panel02"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_side_panel02")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
				{
					iLocal_414 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ch_prop_ch_side_panel02"), -2216.521f, 1133.307f, -22.93f, false, false, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_414, -2216.521f, 1133.307f, -22.93f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_414, 0f, 0f, 166f, 2, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_414, true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_414, false);
					ENTITY::SET_ENTITY_ALPHA(iLocal_414, 0, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_414, true);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_side_panel02"));
				iLocal_415 = 1;
			}
		}
	}
	else if (iLocal_415)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_414))
		{
			OBJECT::DELETE_OBJECT(&iLocal_414);
		}
		iLocal_415 = 0;
	}
}

void func_375()
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
			func_380(&uLocal_39);
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
				if (func_379(&uLocal_39, iLocal_42))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					iVar3 = func_378(iLocal_42);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::GET_ENTITY_HEALTH(iVar3) <= 0)
					{
						iVar5 = func_377(iLocal_42);
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
							func_376(&uLocal_39, iLocal_42);
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

void func_376(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
}

int func_377(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_17161 - 1))
	{
		if (func_379(&(Local_165[iParam0 /*3*/]), iVar0))
		{
			return func_378(iVar0);
		}
		iVar0++;
	}
	return 0;
}

int func_378(int iParam0)
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

bool func_379(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 32)], (iParam1 % 32));
}

void func_380(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_381()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		if (!iLocal_413)
		{
		}
		iLocal_413 = 1;
		return;
	}
	if (iLocal_413 == 1)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
		iLocal_413 = 0;
	}
}

void func_382()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (func_51(PLAYER::PLAYER_ID()))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
			iVar66 = 0;
			while (iVar66 <= iVar0)
			{
				if (iVar66 < 64)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar66]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar1[iVar66]) == joaat("ig_rashcosvki"))
						{
							Var67 = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar66], true) };
							if (func_359(Var67, 1707f, 2520f, 45f, 5f, 0))
							{
								if (Var67.f_2 <= 45f)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1[iVar66]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar1[iVar66]);
										fVar70 = 0f;
										MISC::GET_GROUND_Z_FOR_3D_COORD(Var67, &fVar70, false, false);
										Var67.f_2 = fVar70;
										ENTITY::SET_ENTITY_COORDS(uVar1[iVar66], Var67, true, false, false, true);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uVar1[iVar66], false, false);
									}
								}
							}
						}
						else
						{
							iVar66++;
						}
					}

void func_383()
{
	int iVar0;
	int iVar1;
	
	if (Global_4456448.f_85535 != 808119513)
	{
		iLocal_379 = 5;
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_969056.f_119[iLocal_379]) && SYSTEM::VMAG2(NETWORK::_NETWORK_GET_LAST_VELOCITY_RECEIVED(Global_969056.f_119[iLocal_379])) < 1f) && !ENTITY::IS_ENTITY_ATTACHED(Global_969056.f_119[iLocal_379]))
	{
		iVar0 = func_386(iLocal_379);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false) || ENTITY::GET_ENTITY_COLLISION_DISABLED(iVar0))
			{
				iVar1 = func_384(iLocal_379);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !ENTITY::GET_ENTITY_COLLISION_DISABLED(iVar1))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
					}
				}
			}
		}
	}
	iLocal_379++;
	if (iLocal_379 > 11)
	{
		iLocal_379 = 5;
	}
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_380[iParam0]))
	{
		return iLocal_380[iParam0];
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Global_969056.f_119[iParam0], false), 2.5f, func_385(iVar0), false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iLocal_380[iParam0] = iVar1;
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("tr_prop_tr_container_01a");
		
		case 1:
			return joaat("tr_prop_tr_container_01b");
		
		case 2:
			return joaat("tr_prop_tr_container_01c");
		
		case 3:
			return joaat("tr_prop_tr_container_01d");
		
		case 4:
			return joaat("tr_prop_tr_container_01e");
		
		case 5:
			return joaat("tr_prop_tr_container_01f");
		
		case 6:
			return joaat("tr_prop_tr_container_01g");
		
		case 7:
			return joaat("tr_prop_tr_container_01h");
		
		case 8:
			return joaat("tr_prop_tr_container_01i");
		
		case 9:
			return joaat("prop_container_03_ld");
		
		default:
	}
	return 0;
}

int func_386(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[iParam0]))
	{
		return iLocal_346[iParam0];
	}
	iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Global_969056.f_119[iParam0], false), 6f, Global_4718592.f_17162[0 /*221*/], false, false, false);
	iLocal_346[iParam0] = iVar0;
	return iVar0;
}

void func_387()
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

void func_388()
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

void func_389()
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
			else if (func_399())
			{
				iLocal_27 = 0;
			}
			break;
		
		case 2:
			if (!Global_1312436.f_1)
			{
				iLocal_27 = 0;
			}
			else if (func_399())
			{
				iLocal_27 = 3;
			}
			break;
		
		case 3:
			iLocal_27 = 0;
			if (Global_1312436.f_1)
			{
				func_390();
			}
			break;
	}
}

void func_390()
{
	if (Global_1312436.f_1 == 1)
	{
		func_391(7, 0, 1);
		Global_1312436.f_1 = 0;
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_9 = 0;
	}
}

void func_391(int iParam0, int iParam1, bool bParam2)
{
	if (func_398())
	{
		if (iParam1 == 1)
		{
			if (Global_2544210.f_4461 == -1)
			{
				Global_2544210.f_4461 = Global_262145.f_26682;
			}
			func_30(&(Global_2544210.f_4459), 0, 0);
			if (bParam2)
			{
				if (Global_2544210.f_4464 == -1)
				{
					Global_2544210.f_4464 = Global_262145.f_26683;
				}
				func_30(&(Global_2544210.f_4462), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_8 = 0;
				func_397(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_8 = 0;
			func_397(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_396()) && !func_392(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_392(int iParam0)
{
	if (func_393(iParam0, 1))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_394(iParam0))
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

bool func_394(int iParam0)
{
	return func_395(iParam0);
}

bool func_395(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_396()
{
	return Global_2453009.f_840;
}

void func_397(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_398())
		{
			if (func_22(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_22(PLAYER::PLAYER_ID(), 1, 1))
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

bool func_398()
{
	return Global_1312436;
}

bool func_399()
{
	return (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_400(PLAYER::PLAYER_ID()));
}

int func_400(int iParam0)
{
	if (iParam0 != func_9())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319.f_5, 6);
	}
	return 0;
}

void func_401()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_36 = 0;
		func_4(&uLocal_34);
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
	if (func_13(&uLocal_34))
	{
		if (func_10(&uLocal_34, 30000, 0))
		{
			iLocal_36 = 1;
			Global_1590760 = -1;
		}
	}
	else
	{
		func_30(&uLocal_34, 0, 0);
	}
}

void func_402()
{
	if (MISC::IS_BIT_SET(Global_2518927.f_214, 11) || MISC::IS_BIT_SET(Global_2518927.f_214, 17))
	{
		if (Global_2518927.f_497 < MISC::GET_GAME_TIMER() + 200)
		{
			if (iLocal_33 == 0)
			{
				iLocal_33 = 1;
				if (func_22(PLAYER::PLAYER_ID(), 1, 1))
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

void func_403()
{
	switch (func_404())
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
		
		case joaat("veto2"):
			Global_1703116 = 0.39f;
			break;
		
		case joaat("gb200"):
			Global_1703116 = 0.49f;
			break;
		
		case joaat("landstalker2"):
			Global_1703116 = 1.1f;
			break;
		
		case joaat("lectro"):
			Global_1703116 = 0.82f;
			break;
		
		case joaat("outlaw"):
			Global_1703116 = 1.05f;
			break;
		
		case joaat("adder"):
			Global_1703116 = 0.82f;
			break;
		
		case joaat("specter"):
			Global_1703116 = 0.51f;
			break;
		
		case joaat("rebla"):
			Global_1703116 = 0.66f;
			break;
		
		case joaat("peyote2"):
			Global_1703116 = 0.79f;
			break;
		
		case joaat("lurcher"):
			Global_1703116 = 0.6f;
			break;
		
		case joaat("nebula"):
			Global_1703116 = 0.66f;
			break;
		
		case joaat("zorrusso"):
			Global_1703116 = 0.78f;
			break;
		
		case joaat("visione"):
			Global_1703116 = 0.81f;
			break;
		
		case joaat("casco"):
			Global_1703116 = 0.44f;
			break;
		
		case joaat("neon"):
			Global_1703116 = 0.89f;
			break;
	}
}

int func_404()
{
	return Global_262145.f_26274;
}

void func_405()
{
	func_406(&iLocal_32, -2163.247f, 1073.873f, -24.3537f, 0);
}

void func_406(int* iParam0, struct<3> Param1, bool bParam4)
{
	if (func_163(PLAYER::PLAYER_ID()) && !func_408())
	{
		if (*iParam0 == 0)
		{
			PED::GET_CLOSEST_PED(Param1, 0.1f, false, true, iParam0, false, true, -1);
		}
		else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
		{
			if (func_15(*iParam0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
				{
					if (!func_407(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Param1, 0))
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

bool func_407(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_408()
{
	return func_409(PLAYER::PLAYER_ID());
}

int func_409(int iParam0)
{
	if (func_163(iParam0) || func_341(PLAYER::PLAYER_ID()) == 153)
	{
		return !func_410(iParam0);
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 == func_9())
	{
		return 0;
	}
	return Global_2418033.f_903.f_135[iParam0];
}

void func_411()
{
	func_406(&iLocal_31, -2193.595f, 1104.256f, -23.2574f, 1);
}

void func_412()
{
	if (func_413())
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

int func_413()
{
	if (!MISC::IS_BIT_SET(Global_2441237.f_502.f_56, 3))
	{
		return 1;
	}
	if (func_414())
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
	if (!func_16())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_414()
{
	if (func_21(PLAYER::PLAYER_ID()))
	{
		return Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16 == 153;
	}
	return 0;
}

void func_415()
{
	int iVar0;
	
	if (func_163(PLAYER::PLAYER_ID()))
	{
		if (Global_2544210.f_5191.f_763)
		{
			iVar0 = func_417();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_13(&uLocal_25))
			{
				func_30(&uLocal_25, 1, 0);
				func_416(1, 1);
			}
		}
	}
	if (func_13(&uLocal_25))
	{
		if (func_10(&uLocal_25, 10000, 1))
		{
			func_4(&uLocal_25);
			func_416(0, 0);
		}
	}
}

void func_416(bool bParam0, bool bParam1)
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

int func_417()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_418(7, iVar0))
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

bool func_418(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1380638.f_6736[iParam0], iParam1);
}

void func_419()
{
	if (Global_1683964 == 1)
	{
		if (func_226(PLAYER::PLAYER_ID()))
		{
			if (func_421(PLAYER::PLAYER_ID()) == func_9() && Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 != func_9())
			{
				if (func_26(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16) && MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 4))
				{
					func_420(1, Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_16);
				}
			}
		}
	}
}

void func_420(bool bParam0, var uParam1)
{
	if (bParam0)
	{
		Global_1683970.f_487 = uParam1;
		Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_6 = uParam1;
	}
}

int func_421(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_9())
	{
		return iParam0;
	}
	if (func_422(iParam0) != -1)
	{
		iVar0 = func_115(func_422(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_112(iParam0, 0))
			{
				return func_213(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_9();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_9();
}

int func_422(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_22(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_22(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

void func_423()
{
	if (!iLocal_3)
	{
		if (!func_163(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_152(9831, -1, 0) == 0)
				{
					if ((((((!func_118(31708, -1, -1) && !func_118(31709, -1, -1)) && !func_118(31710, -1, -1)) && !func_118(31711, -1, -1)) && !func_118(31712, -1, -1)) && !func_118(31713, -1, -1)) && !func_118(31757, -1, -1))
					{
						func_128(9831, 6, -1, 1, 0);
						AUDIO::_FORCE_RADIO_TRACK_LIST_POSITION("RADIO_36_AUDIOPLAYER", "TUNER_AP_SILENCE_MUSIC", 0);
						iLocal_3 = 1;
					}
				}
			}
		}
	}
}

void func_424()
{
	if ((Global_111239 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_16())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_425()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574226)
		{
			iVar0 = func_426(joaat("mpply_char_exploit_level"));
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

int func_426(int iParam0)
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

void func_427()
{
	if (!iLocal_4)
	{
		if (Global_1574226)
		{
			if (func_429() || func_428())
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

int func_428()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_426(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10407)
	{
		return 0;
	}
	uVar1[0] = func_426(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_426(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_426(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_426(joaat("mpply_prevseason4exploitlevel"));
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

int func_429()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_426(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10406)
	{
		return 0;
	}
	uVar1[0] = func_426(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_426(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_426(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_426(joaat("mpply_prevseason4exploitlevel"));
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

void func_430()
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

void func_431()
{
	if (Global_262145.f_10382 != 120)
	{
		Global_262145.f_10382 = 120;
	}
}

void func_432()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_433(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_433(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_434()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

