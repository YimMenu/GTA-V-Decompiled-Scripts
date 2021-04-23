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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
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
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar2;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_66 = 0.952f;
	fLocal_67 = 0.949f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		if (func_244(&uVar0, 5, 0))
		{
			func_41();
		}
		if (Global_1378744.f_1 == 0)
		{
			bVar2 = true;
		}
		func_40();
		func_39();
		func_11();
		if (bVar2)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("timerbar_lines");
			func_1();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1378744 = 0;
	Global_1378744.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1378744.f_2[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_23[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_44[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_65[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_86[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_107[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_128[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_149[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_170[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_191[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_212[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_233[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_254[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_275[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_296[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_317[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_338[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_359[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_464[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_485[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_506[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_527[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_548[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_569[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_590[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_611[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_632[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_653[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_674[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_695[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_716[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_737[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_758[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_779[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_863[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_1087[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_895[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_927[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_959[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_991[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_1023[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_1055[iVar0 /*2*/] = { Var1 };
		Global_1378744.f_884[iVar0] = 0;
		Global_1378744.f_916[iVar0] = 0;
		Global_1378744.f_948[iVar0] = 0;
		Global_1378744.f_980[iVar0] = 0;
		Global_1378744.f_1012[iVar0] = 0;
		Global_1378744.f_1044[iVar0] = 0;
		Global_1378744.f_1076[iVar0] = 0;
		Global_1378744.f_1108[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_1378744.f_6304[iVar0] = 0;
		Global_1378744.f_6318[iVar0] = 0;
		Global_1378744.f_6332[iVar0] = 0;
		Global_1378744.f_6346[iVar0] = 0;
		iVar0++;
	}
	Global_1378744.f_6360 = 0;
	Global_1378744.f_6361 = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_4974), &Var0, 227);
	}
	else
	{
		Global_1378744.f_4974 = { Var0 };
	}
}

void func_3()
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_4573), &Var0, 401);
	}
	else
	{
		Global_1378744.f_4573 = { Var0 };
	}
}

void func_4()
{
	struct<618> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	Var0.f_596 = 10;
	Var0.f_607 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_3955), &Var0, 618);
	}
	else
	{
		Global_1378744.f_3955 = { Var0 };
	}
}

void func_5()
{
	struct<314> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_3641), &Var0, 314);
	}
	else
	{
		Global_1378744.f_3641 = { Var0 };
	}
}

void func_6()
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_3283), &Var0, 358);
	}
	else
	{
		Global_1378744.f_3283 = { Var0 };
	}
}

void func_7()
{
	struct<508> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	Var0.f_475 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_2775), &Var0, 508);
	}
	else
	{
		Global_1378744.f_2775 = { Var0 };
	}
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_2056), &Var0, 719);
	}
	else
	{
		Global_1378744.f_2056 = { Var0 };
	}
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_1711), &Var0, 345);
	}
	else
	{
		Global_1378744.f_1711 = { Var0 };
	}
}

void func_10()
{
	struct<576> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	Var0.f_466 = 10;
	Var0.f_477 = 10;
	Var0.f_488 = 10;
	Var0.f_499 = 10;
	Var0.f_510 = 10;
	Var0.f_521 = 10;
	Var0.f_532 = 10;
	Var0.f_543 = 10;
	Var0.f_554 = 10;
	Var0.f_565 = 10;
	if (Global_2440276)
	{
		MISC::_COPY_MEMORY(&(Global_1378744.f_1135), &Var0, 576);
	}
	else
	{
		Global_1378744.f_1135 = { Var0 };
	}
}

void func_11()
{
	int iVar0;
	
	Global_1378744 = 0;
	Global_1378744.f_1120 = 0.725f;
	Global_1378744.f_1119 = func_30();
	Global_1378744.f_1 = 0;
	Global_1378744.f_1121 = 0;
	Global_1378744.f_1122 = 0;
	Global_1378744.f_1123 = 0;
	Global_1378744.f_1124 = 0;
	Global_1378744.f_1125 = 0;
	Global_1378744.f_1126 = 0;
	Global_1378744.f_1127 = 0;
	Global_1378744.f_1128 = 0;
	Global_1378744.f_1129 = 0;
	Global_1378744.f_1130 = 0;
	Global_1378744.f_1131 = 0;
	Global_1378744.f_1132 = 0;
	Global_1378744.f_1133 = 0;
	Global_1378744.f_1134 = 0;
	Global_2464021 = 0;
	Global_2462492 = 0;
	Global_2462493 = 0;
	Global_2463996 = 1;
	Global_2464716 = 0;
	if (func_29(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(3, iVar0) && func_27(3, iVar0))
			{
				func_26(iVar0);
				func_25(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(6, iVar0) && func_27(6, iVar0))
			{
				func_24(iVar0);
				func_25(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(7, iVar0) && func_27(7, iVar0))
			{
				func_23(iVar0);
				func_25(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(4, iVar0) && func_27(4, iVar0))
			{
				func_22(iVar0);
				func_25(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(5, iVar0) && func_27(5, iVar0))
			{
				func_21(iVar0);
				func_25(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(1, iVar0) && func_27(1, iVar0))
			{
				func_20(iVar0);
				func_25(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(0, iVar0) && func_27(0, iVar0))
			{
				func_19(iVar0);
				func_25(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0) == 0)
			{
				func_18(iVar0);
				func_25(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(8, iVar0) && func_27(8, iVar0) == 0)
			{
				func_17(iVar0);
				func_25(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(9, iVar0) && func_27(9, iVar0) == 0)
			{
				func_16(iVar0);
				func_25(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(10, iVar0) && func_27(10, iVar0) == 0)
			{
				func_14(iVar0);
				func_25(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(11, iVar0) && func_27(11, iVar0) == 0)
			{
				func_13(iVar0);
				func_25(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(12, iVar0) && func_27(12, iVar0) == 0)
			{
				func_12(iVar0);
				func_25(12, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	Global_1378744.f_5902[iParam0] = 0;
	Global_1378744.f_5902.f_11[iParam0] = 0;
	Global_1378744.f_5902.f_22[iParam0] = 0f;
	StringCopy(&(Global_1378744.f_5902.f_33[iParam0 /*6*/]), "", 24);
	Global_1378744.f_5902.f_94[iParam0] = 0;
	Global_1378744.f_5902.f_105[iParam0] = 0;
	Global_1378744.f_5902.f_116[iParam0] = 0;
	Global_1378744.f_5902.f_127[iParam0] = 0;
	Global_1378744.f_5902.f_138[iParam0] = 0;
	Global_1378744.f_5902.f_149[iParam0] = 0;
	Global_1378744.f_5902.f_160[iParam0] = 0;
	Global_1378744.f_5902.f_171[iParam0] = 0;
	Global_1378744.f_5902.f_182[iParam0] = 0;
	Global_1378744.f_5902.f_193[iParam0] = 0;
	Global_1378744.f_5902.f_204[iParam0] = 0;
	Global_1378744.f_5902.f_215[iParam0] = 0;
	Global_1378744.f_5902.f_226[iParam0] = 0;
	Global_1378744.f_5902.f_237[iParam0] = 2;
	Global_1378744.f_5902.f_248[iParam0] = 0;
	Global_1378744.f_5902.f_259[iParam0] = 0;
	Global_1378744.f_5902.f_270[iParam0] = 0;
	Global_1378744.f_5902.f_281[iParam0] = 0;
	Global_1378744.f_5902.f_292[iParam0] = 0;
	Global_1378744.f_5902.f_303[iParam0] = 0;
	Global_1378744.f_5902.f_314[iParam0] = 0;
	Global_1378744.f_5902.f_325[iParam0] = 0;
	Global_1378744.f_5902.f_336[iParam0] = 0;
	Global_1378744.f_5902.f_347[iParam0] = 0;
	Global_1378744.f_5902.f_358[iParam0] = 0;
	Global_1378744.f_5902.f_369[iParam0] = 0;
	Global_1378744.f_5902.f_380[iParam0] = 0;
	Global_1378744.f_5902.f_391[iParam0] = 0;
}

void func_13(int iParam0)
{
	Global_1378744.f_5737[iParam0] = 0;
	Global_1378744.f_5737.f_11[iParam0] = 0;
	Global_1378744.f_5737.f_22[iParam0] = 0;
	Global_1378744.f_5737.f_33[iParam0] = 0;
	Global_1378744.f_5737.f_44[iParam0] = 0;
	Global_1378744.f_5737.f_55[iParam0] = 0;
	Global_1378744.f_5737.f_66[iParam0] = 0;
	Global_1378744.f_5737.f_77[iParam0] = 0;
	Global_1378744.f_5737.f_88[iParam0] = 0;
	Global_1378744.f_5737.f_99[iParam0] = 2;
	Global_1378744.f_5737.f_110[iParam0] = 0;
	Global_1378744.f_5737.f_121[iParam0] = 0;
	Global_1378744.f_5737.f_132[iParam0] = 0;
	Global_1378744.f_5737.f_143[iParam0] = 0;
	Global_1378744.f_5737.f_154[iParam0] = -1;
}

void func_14(int iParam0)
{
	Global_1378744.f_5234.f_6[iParam0] = 0;
	Global_1378744.f_5234.f_17[iParam0] = 0;
	StringCopy(&(Global_1378744.f_5234.f_28[iParam0 /*16*/]), "", 64);
	Global_1378744.f_5234.f_189[iParam0] = -1;
	Global_1378744.f_5234.f_200[iParam0] = 1;
	Global_1378744.f_5234.f_211[iParam0] = -1;
	Global_1378744.f_5234.f_222[iParam0] = 2;
	Global_1378744.f_5234.f_233[iParam0] = 0;
	Global_1378744.f_5234.f_244[iParam0] = 0;
	func_15(&(Global_1378744.f_5234.f_255[iParam0 /*2*/]));
	Global_1378744.f_5234.f_276[iParam0] = -1;
	Global_1378744.f_5234.f_470[iParam0] = 0;
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_16(int iParam0)
{
	Global_1378744.f_5201[iParam0] = 0;
	Global_1378744.f_5201.f_11[iParam0] = 1;
	Global_1378744.f_5201.f_22[iParam0] = 2;
}

void func_17(int iParam0)
{
	Global_1378744.f_4974[iParam0] = 0f;
	StringCopy(&(Global_1378744.f_4974.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_4974.f_172[iParam0] = 0;
	Global_1378744.f_4974[iParam0] = 0f;
	Global_1378744.f_4974.f_183[iParam0] = 0;
	Global_1378744.f_4974.f_194[iParam0] = 0;
	Global_1378744.f_4974.f_205[iParam0] = 0;
	Global_1378744.f_4974.f_216[iParam0] = 2;
}

void func_18(int iParam0)
{
	Global_1378744.f_2056[iParam0] = 0;
	Global_1378744.f_2056.f_11[iParam0] = 0;
	Global_1378744.f_2056.f_22[iParam0] = 0;
	Global_1378744.f_2056.f_33[iParam0] = 0;
	Global_1378744.f_2056.f_44[iParam0] = 0;
	Global_1378744.f_2056.f_55[iParam0] = 0;
	Global_1378744.f_2056.f_66[iParam0] = 0;
	Global_1378744.f_2056.f_77[iParam0] = 0;
	Global_1378744.f_2056.f_88[iParam0] = 0;
	StringCopy(&(Global_1378744.f_2056.f_99[iParam0 /*16*/]), "", 64);
	Global_1378744.f_2056.f_260[iParam0] = -1;
	Global_1378744.f_2056.f_271[iParam0] = -1;
	Global_1378744.f_2056.f_282[iParam0] = 18;
	Global_1378744.f_2056.f_293[iParam0] = 6;
	Global_1378744.f_2056.f_304[iParam0] = -1;
	Global_1378744.f_2056.f_315[iParam0] = 2;
	Global_1378744.f_2056.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1378744.f_2056.f_357[iParam0] = 0;
	Global_1378744.f_2056.f_368[iParam0] = 1;
	Global_1378744.f_2056.f_379[iParam0] = 1;
	Global_1378744.f_2056.f_390[iParam0] = 1;
	Global_1378744.f_2056.f_401[iParam0] = 1;
	Global_1378744.f_2056.f_412[iParam0] = 1;
	Global_1378744.f_2056.f_423[iParam0] = 1;
	Global_1378744.f_2056.f_434[iParam0] = 1;
	Global_1378744.f_2056.f_445[iParam0] = 1;
	Global_1378744.f_2056.f_456[iParam0] = 1;
	Global_1378744.f_2056.f_467[iParam0] = 1;
	Global_1378744.f_2056.f_478[iParam0] = 1;
	Global_1378744.f_2056.f_489[iParam0] = 1;
	Global_1378744.f_2056.f_500[iParam0] = 1;
	Global_1378744.f_2056.f_511[iParam0] = 1;
	Global_1378744.f_2056.f_522[iParam0] = 1;
	Global_1378744.f_2056.f_533[iParam0] = 1;
	func_15(&(Global_1378744.f_2056.f_555[iParam0 /*2*/]));
	Global_1378744.f_2056.f_576[iParam0] = -1;
	Global_1378744.f_2056.f_609[iParam0] = 0;
}

void func_19(int iParam0)
{
	Global_1378744.f_1135[iParam0] = 0;
	Global_1378744.f_1135.f_11[iParam0] = 0;
	StringCopy(&(Global_1378744.f_1135.f_22[iParam0 /*16*/]), "", 64);
	Global_1378744.f_1135.f_183[iParam0] = -1;
	Global_1378744.f_1135.f_194[iParam0] = 1;
	Global_1378744.f_1135.f_205[iParam0] = -1;
	Global_1378744.f_1135.f_216[iParam0] = 2;
	Global_1378744.f_1135.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1378744.f_1135.f_258[iParam0] = 0;
	Global_1378744.f_1135.f_269[iParam0] = 0;
	func_15(&(Global_1378744.f_1135.f_280[iParam0 /*2*/]));
	Global_1378744.f_1135.f_301[iParam0] = -1;
	Global_1378744.f_1135.f_334[iParam0] = 0;
	Global_1378744.f_1135.f_345[iParam0] = 0;
	Global_1378744.f_1135.f_356[iParam0] = 0;
	Global_1378744.f_1135.f_444[iParam0] = 1;
	Global_1378744.f_1135.f_455[iParam0] = -1;
}

void func_20(int iParam0)
{
	Global_1378744.f_1711[iParam0] = 0;
	Global_1378744.f_1711.f_11[iParam0] = 0;
	StringCopy(&(Global_1378744.f_1711.f_22[iParam0 /*16*/]), "", 64);
	Global_1378744.f_1711.f_183[iParam0] = -1;
	Global_1378744.f_1711.f_194[iParam0] = 1;
	Global_1378744.f_1711.f_205[iParam0] = -1;
	Global_1378744.f_1711.f_216[iParam0] = 2;
	Global_1378744.f_1711.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1378744.f_1711.f_258[iParam0] = 0;
	Global_2550199[iParam0] = 0;
	Global_2550210[iParam0] = 0;
	Global_2550221[iParam0] = 0;
	Global_2550232[iParam0] = 0;
	Global_2550243[iParam0] = 0;
	Global_2550254[iParam0] = 0;
	Global_2550265[iParam0] = 0;
	Global_2550276[iParam0] = 0;
	Global_2550287[iParam0] = 0;
	Global_2550298[iParam0] = 0;
	Global_2550309[iParam0] = 0;
	Global_2550320[iParam0] = 0;
	Global_2550331[iParam0] = 0;
	Global_2550342[iParam0] = 0;
	Global_2550353[iParam0] = 0;
	Global_2550364[iParam0] = 0;
	func_15(&(Global_1378744.f_1711.f_280[iParam0 /*2*/]));
	Global_1378744.f_1711.f_301[iParam0] = -1;
}

void func_21(int iParam0)
{
	Global_1378744.f_3641[iParam0] = 0;
	StringCopy(&(Global_1378744.f_3641.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_3641.f_172[iParam0] = -1;
	Global_1378744.f_3641.f_183[iParam0] = -1;
	Global_1378744.f_3641.f_194[iParam0] = 1;
	Global_1378744.f_3641.f_205[iParam0] = -1;
	Global_1378744.f_3641.f_216[iParam0] = 2;
	Global_1378744.f_3641.f_227[iParam0] = 0;
	func_15(&(Global_1378744.f_3641.f_238[iParam0 /*2*/]));
	Global_1378744.f_3641.f_259[iParam0] = -1;
}

void func_22(int iParam0)
{
	Global_1378744.f_3283[iParam0] = -1;
	StringCopy(&(Global_1378744.f_3283.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_3283.f_172[iParam0] = -1;
	Global_1378744.f_3283.f_183[iParam0] = -1;
	Global_1378744.f_3283.f_194[iParam0] = 1;
	Global_1378744.f_3283.f_205[iParam0] = -1;
	Global_1378744.f_3283.f_216[iParam0] = 2;
	Global_1378744.f_3283.f_227[iParam0] = 0;
	func_15(&(Global_1378744.f_3283.f_238[iParam0 /*2*/]));
	Global_1378744.f_3283.f_259[iParam0] = -1;
}

void func_23(int iParam0)
{
	Global_1378744.f_4573[iParam0] = 0;
	StringCopy(&(Global_1378744.f_4573.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_4573.f_172[iParam0] = -1;
	Global_1378744.f_4573.f_183[iParam0] = -1;
	Global_1378744.f_4573.f_194[iParam0] = 0;
	Global_1378744.f_4573.f_205[iParam0] = 1;
	Global_1378744.f_4573.f_216[iParam0] = 0;
	Global_1378744.f_4573.f_227[iParam0] = -1;
	Global_1378744.f_4573.f_249[iParam0] = 2;
	Global_1378744.f_4573.f_260[iParam0] = 0;
	func_15(&(Global_1378744.f_4573.f_282[iParam0 /*2*/]));
	Global_1378744.f_4573.f_303[iParam0] = -1;
}

void func_24(int iParam0)
{
	Global_1378744.f_3955[iParam0] = 0;
	StringCopy(&(Global_1378744.f_3955.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_3955.f_172[iParam0] = -1;
	Global_1378744.f_3955.f_183[iParam0] = 1;
	Global_1378744.f_3955.f_194[iParam0] = -1;
	Global_1378744.f_3955.f_260[iParam0] = 2;
	Global_1378744.f_3955.f_271[iParam0] = 0;
	StringCopy(&(Global_1378744.f_3955.f_282[iParam0 /*16*/]), "", 64);
	Global_1378744.f_3955.f_443[iParam0] = 0;
	Global_1378744.f_3955.f_454[iParam0] = -1f;
	func_15(&(Global_1378744.f_3955.f_465[iParam0 /*2*/]));
	Global_1378744.f_3955.f_486[iParam0] = -1;
	Global_1378744.f_3955.f_519[iParam0] = 0;
}

void func_25(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_1378744.f_6332[iParam0]), iParam1);
}

void func_26(int iParam0)
{
	Global_1378744.f_2775[iParam0] = 0;
	StringCopy(&(Global_1378744.f_2775.f_11[iParam0 /*16*/]), "", 64);
	Global_1378744.f_2775.f_172[iParam0] = -1;
	Global_1378744.f_2775.f_183[iParam0] = 1;
	Global_1378744.f_2775.f_194[iParam0] = -1;
	Global_1378744.f_2775.f_205[iParam0] = 2;
	Global_1378744.f_2775.f_216[iParam0] = 0;
	func_15(&(Global_1378744.f_2775.f_227[iParam0 /*2*/]));
	Global_1378744.f_2775.f_248[iParam0] = -1;
}

bool func_27(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6304[iParam0], iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6332[iParam0], iParam1);
}

int func_29(int iParam0)
{
	if (Global_1378744.f_6304[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_30()
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1378744.f_1121)));
	if (Global_1378744.f_1122 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1378744.f_1123 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1378744.f_1126 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1378744.f_1127 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1378744.f_1128 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1378744.f_1124 == 1 && Global_1378744.f_1125 == 0)
	{
		switch (func_32())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				if (!func_31())
				{
					fVar0 = (fVar0 + -0.405f);
				}
				break;
			}
	}
	return fVar0;
}

int func_31()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	func_33();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_36(PLAYER::PLAYER_PED_ID());
			if (func_35(iVar0) && (!func_34(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_35(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_34(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1378744.f_6304[iVar0] = 0;
		iVar0++;
	}
}

void func_40()
{
	Global_2463901 = 0;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (HUD::BUSYSPINNER_IS_DISPLAYING())
	{
		if (Global_1378744.f_1121 == 0)
		{
			func_243(1);
		}
	}
	func_239();
	if (func_234())
	{
		if ((MISC::GET_FRAME_COUNT() % 100) == 0)
		{
			if (func_229(PLAYER::PLAYER_ID()))
			{
				func_228();
			}
		}
		if (func_227())
		{
			Global_1377236.f_1179 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar16 = 0;
			if (func_27(7, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3955.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_27(3, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_2775.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_27(4, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3283.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_27(5, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3641.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_27(1, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_1711.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_27(0, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_1135.f_216[iVar0];
			}
			iVar16 = 6;
			if (func_27(6, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3955.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_27(2, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_2056.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_27(8, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_4974.f_216[iVar0];
			}
			iVar16 = 9;
			if (func_27(9, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5201.f_22[iVar0];
			}
			iVar16 = 10;
			if (func_27(10, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5234.f_222[iVar0];
			}
			iVar16 = 11;
			if (func_27(11, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5737.f_99[iVar0];
			}
			iVar16 = 12;
			if (func_27(12, iVar0))
			{
				Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5902.f_237[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1377236.f_1179 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar16 = 0;
				if (func_27(7, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_4573.f_249[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_4573.f_249[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_4573.f_249[iVar0] == 2) || Global_1378744.f_4573.f_249[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_4573.f_249[iVar0] == 13) || Global_1378744.f_4573.f_249[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_4573.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_27(3, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_2775.f_205[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_2775.f_205[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_2775.f_205[iVar0] == 2) || Global_1378744.f_2775.f_205[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_2775.f_205[iVar0] == 13) || Global_1378744.f_2775.f_205[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_2775.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_27(4, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3283.f_216[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_3283.f_216[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3283.f_216[iVar0] == 2) || Global_1378744.f_3283.f_216[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3283.f_216[iVar0] == 13) || Global_1378744.f_3283.f_216[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_3283.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_27(5, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3641.f_216[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_3641.f_216[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3641.f_216[iVar0] == 2) || Global_1378744.f_3641.f_216[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3641.f_216[iVar0] == 13) || Global_1378744.f_3641.f_216[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_3641.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_27(1, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_1711.f_216[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_1711.f_216[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_1711.f_216[iVar0] == 2) || Global_1378744.f_1711.f_216[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_1711.f_216[iVar0] == 13) || Global_1378744.f_1711.f_216[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_1711.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_27(0, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_1135.f_216[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_1135.f_216[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_1135.f_216[iVar0] == 2) || Global_1378744.f_1135.f_216[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_1135.f_216[iVar0] == 13) || Global_1378744.f_1135.f_216[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_1135.f_216[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_27(6, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_3955.f_260[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_3955.f_260[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3955.f_260[iVar0] == 2) || Global_1378744.f_3955.f_260[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_3955.f_260[iVar0] == 13) || Global_1378744.f_3955.f_260[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_3955.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_27(2, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_2056.f_315[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_2056.f_315[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_2056.f_315[iVar0] == 2) || Global_1378744.f_2056.f_315[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_2056.f_315[iVar0] == 13) || Global_1378744.f_2056.f_315[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_2056.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_27(8, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_4974.f_216[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_4974.f_216[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_4974.f_216[iVar0] == 2) || Global_1378744.f_4974.f_216[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_4974.f_216[iVar0] == 13) || Global_1378744.f_4974.f_216[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_4974.f_216[iVar0];
						}
					}
				}
				iVar16 = 9;
				if (func_27(9, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5201.f_22[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_5201.f_22[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5201.f_22[iVar0] == 2) || Global_1378744.f_5201.f_22[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5201.f_22[iVar0] == 13) || Global_1378744.f_5201.f_22[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_5201.f_22[iVar0];
						}
					}
				}
				iVar16 = 10;
				if (func_27(10, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5234.f_222[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_5234.f_222[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5234.f_222[iVar0] == 2) || Global_1378744.f_5234.f_222[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5234.f_222[iVar0] == 13) || Global_1378744.f_5234.f_222[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_5234.f_222[iVar0];
						}
					}
				}
				iVar16 = 11;
				if (func_27(11, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5737.f_99[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_5737.f_99[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5737.f_99[iVar0] == 2) || Global_1378744.f_5737.f_99[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5737.f_99[iVar0] == 13) || Global_1378744.f_5737.f_99[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_5737.f_99[iVar0];
						}
					}
				}
				iVar16 = 12;
				if (func_27(12, iVar0))
				{
					Global_1377236.f_1180[iVar16 /*11*/][iVar0] = Global_1378744.f_5902.f_237[iVar0];
					if (Global_1377236.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] != Global_1378744.f_5902.f_237[iVar0] && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5902.f_237[iVar0] == 2) || Global_1378744.f_5902.f_237[iVar0] != 2)) && ((Global_1377236.f_1324[iVar16 /*11*/][iVar0] == 0 && Global_1378744.f_5902.f_237[iVar0] == 13) || Global_1378744.f_5902.f_237[iVar0] != 13))
						{
							Global_1377236.f_1324[iVar16 /*11*/][iVar0] = Global_1378744.f_5902.f_237[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] != Global_1377236.f_1324[iVar1 /*11*/][iVar0])
					{
						Global_1377236.f_1324[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1377236.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1377236.f_1324[iVar1 /*11*/][iVar0] = Global_1377236.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_1377236.f_1180[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_1377236.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1377236.f_1324[iVar1 /*11*/][iVar0] = Global_1377236.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1377236.f_1180[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1377236.f_1324[iVar1 /*11*/][iVar0] = Global_1377236.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1377236.f_1179 = 0;
		}
		if (Global_1378744.f_1126)
		{
			iVar17 = 84;
		}
		else
		{
			iVar17 = 66;
		}
		if (func_234())
		{
			iVar1 = 0;
			while (iVar1 <= 13)
			{
				if (func_226(0))
				{
					if (func_29(func_224(0)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar18 = func_223(func_224(0));
							if (func_222(iVar18))
							{
								if (Global_1377236.f_1324[iVar18 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[iVar18 /*11*/][iVar0] == 1)
								{
									if (func_218(Global_1377236.f_1180[iVar18 /*11*/][iVar0]))
									{
										func_214(1);
										if (Global_1378744.f_1123 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
										}
										func_213(func_224(0), iVar0);
										if (Global_1378744.f_1123 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_214(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_226(1))
				{
					if (func_29(func_224(1)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar19 = func_223(func_224(1));
							if (func_222(iVar19))
							{
								if (Global_1377236.f_1324[iVar19 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[iVar19 /*11*/][iVar0] == 1)
								{
									if (func_218(Global_1377236.f_1180[iVar19 /*11*/][iVar0]))
									{
										func_214(1);
										if (Global_1378744.f_1123 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
										}
										func_213(func_224(1), iVar0);
										if (Global_1378744.f_1123 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_214(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_29(7) && !func_212(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[0 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[0 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[0 /*11*/][iVar0]))
							{
								func_214(1);
								if (Global_1378744.f_1123 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								}
								func_196(iVar0, Global_1378744.f_4573[iVar0], &(Global_1378744.f_4573.f_11[iVar0 /*16*/]), Global_1378744.f_4573.f_172[iVar0], Global_1378744.f_4573.f_194[iVar0], Global_1378744.f_4573.f_216[iVar0], Global_1378744.f_4573.f_205[iVar0], Global_1378744.f_4573.f_183[iVar0], Global_1378744.f_4573.f_227[iVar0], Global_1378744.f_4573.f_260[iVar0], Global_1378744.f_4573.f_314[iVar0], Global_1378744.f_4573.f_325[iVar0], Global_1378744.f_4573.f_357[iVar0], Global_1378744.f_4573.f_238[iVar0], Global_1378744.f_4573.f_271[iVar0], Global_1378744.f_4573.f_368[iVar0], Global_1378744.f_4573.f_379[iVar0], Global_1378744.f_4573.f_390[iVar0]);
								if (Global_1378744.f_1123 == 0)
								{
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(3) && !func_212(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[1 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[1 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[1 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_195(iVar0, Global_1378744.f_2775[iVar0], &(Global_1378744.f_2775.f_11[iVar0 /*16*/]), Global_1378744.f_2775.f_183[iVar0], Global_1378744.f_2775.f_172[iVar0], Global_1378744.f_2775.f_194[iVar0], Global_1378744.f_2775.f_216[iVar0], &(Global_1378744.f_2775.f_259[iVar0 /*16*/]), Global_1378744.f_2775.f_420[iVar0], Global_1378744.f_2775.f_453[iVar0], Global_1378744.f_2775.f_431[iVar0], Global_1378744.f_2775.f_442[iVar0], Global_1378744.f_2775.f_464[iVar0], Global_1378744.f_2775.f_475[iVar0], Global_1378744.f_2775.f_486[iVar0], Global_1378744.f_2775.f_497[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(4) && !func_212(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[2 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[2 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[2 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_194(iVar0, Global_1378744.f_3283[iVar0], Global_1378744.f_3283.f_172[iVar0], &(Global_1378744.f_3283.f_11[iVar0 /*16*/]), Global_1378744.f_3283.f_194[iVar0], Global_1378744.f_3283.f_183[iVar0], Global_1378744.f_3283.f_205[iVar0], Global_1378744.f_3283.f_227[iVar0], Global_1378744.f_3283.f_270[iVar0], Global_1378744.f_3283.f_281[iVar0], Global_1378744.f_3283.f_292[iVar0], Global_1378744.f_3283.f_303[iVar0], Global_1378744.f_3283.f_314[iVar0], Global_1378744.f_3283.f_325[iVar0], Global_1378744.f_3283.f_336[iVar0], Global_1378744.f_3283.f_347[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(5) && !func_212(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[3 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[3 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[3 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_193(iVar0, Global_1378744.f_3641[iVar0], Global_1378744.f_3641.f_172[iVar0], &(Global_1378744.f_3641.f_11[iVar0 /*16*/]), Global_1378744.f_3641.f_194[iVar0], Global_1378744.f_3641.f_183[iVar0], Global_1378744.f_3641.f_205[iVar0], Global_1378744.f_3641.f_227[iVar0], Global_1378744.f_3641.f_270[iVar0], Global_1378744.f_3641.f_281[iVar0], Global_1378744.f_3641.f_292[iVar0], Global_1378744.f_3641.f_303[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(1) && !func_212(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[4 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[4 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[4 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_183(iVar0, Global_1378744.f_1711[iVar0], Global_1378744.f_1711.f_11[iVar0], &(Global_1378744.f_1711.f_22[iVar0 /*16*/]), Global_1378744.f_1711.f_194[iVar0], Global_1378744.f_1711.f_205[iVar0], Global_1378744.f_1711.f_258[iVar0], Global_1378744.f_1711.f_183[iVar0], Global_1378744.f_1711.f_227[iVar0 /*3*/], Global_1378744.f_1711.f_227[iVar0 /*3*/].f_1, Global_1378744.f_1711.f_312[iVar0], Global_1378744.f_1711.f_323[iVar0], Global_1378744.f_1711.f_269[iVar0], Global_2550199[iVar0], Global_2550210[iVar0], Global_2550221[iVar0], Global_2550232[iVar0], Global_2550243[iVar0], Global_2550254[iVar0], Global_2550265[iVar0], Global_2550276[iVar0], Global_1378744.f_1711.f_334[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(0) && !func_212(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[5 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[5 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[5 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_174(iVar0, Global_1378744.f_1135[iVar0], Global_1378744.f_1135.f_11[iVar0], &(Global_1378744.f_1135.f_22[iVar0 /*16*/]), Global_1378744.f_1135.f_194[iVar0], Global_1378744.f_1135.f_183[iVar0], Global_1378744.f_1135.f_227[iVar0 /*3*/], Global_1378744.f_1135.f_227[iVar0 /*3*/].f_1, Global_1378744.f_1135.f_258[iVar0], Global_1378744.f_1135.f_205[iVar0], Global_1378744.f_1135.f_269[iVar0], Global_1378744.f_1135.f_312[iVar0], Global_1378744.f_1135.f_323[iVar0], Global_1378744.f_1135.f_334[iVar0], Global_1378744.f_1135.f_345[iVar0], Global_1378744.f_1135.f_356[iVar0], Global_1378744.f_1135.f_367[iVar0], Global_1378744.f_1135.f_378[iVar0], Global_1378744.f_1135.f_389[iVar0], Global_1378744.f_1135.f_400[iVar0], Global_1378744.f_1135.f_411[iVar0], Global_1378744.f_1135.f_422[iVar0], Global_1378744.f_1135.f_433[iVar0], Global_1378744.f_1135.f_444[iVar0], Global_1378744.f_1135.f_455[iVar0], Global_1378744.f_1135.f_466[iVar0], Global_1378744.f_1135.f_477[iVar0], Global_1378744.f_1135.f_488[iVar0], Global_1378744.f_1135.f_499[iVar0], Global_1378744.f_1135.f_510[iVar0], Global_1378744.f_1135.f_521[iVar0], Global_1378744.f_1135.f_532[iVar0], Global_1378744.f_1135.f_543[iVar0], Global_1378744.f_1135.f_554[iVar0], Global_1378744.f_1135.f_565[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(6) && !func_212(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[6 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[6 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[6 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_164(iVar0, Global_1378744.f_3955[iVar0], &(Global_1378744.f_3955.f_11[iVar0 /*16*/]), Global_1378744.f_3955.f_183[iVar0], Global_1378744.f_3955.f_172[iVar0], Global_1378744.f_3955.f_194[iVar0], Global_1378744.f_3955.f_271[iVar0], &(Global_1378744.f_3955.f_282[iVar0 /*16*/]), Global_1378744.f_3955.f_443[iVar0], Global_1378744.f_3955.f_454[iVar0], Global_1378744.f_3955.f_497[iVar0], Global_1378744.f_3955.f_508[iVar0], Global_1378744.f_3955.f_205[iVar0], Global_1378744.f_3955.f_216[iVar0], Global_1378744.f_3955.f_227[iVar0], Global_1378744.f_3955.f_238[iVar0], Global_1378744.f_3955.f_249[iVar0], Global_1378744.f_3955.f_519[iVar0], Global_1378744.f_3955.f_530[iVar0], Global_1378744.f_3955.f_541[iVar0], Global_1378744.f_3955.f_552[iVar0], Global_1378744.f_3955.f_563[iVar0], Global_1378744.f_3955.f_574[iVar0], Global_1378744.f_3955.f_585[iVar0], Global_1378744.f_3955.f_596[iVar0], Global_1378744.f_3955.f_607[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(2) && !func_212(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[7 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[7 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[7 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_152(iVar0, Global_1378744.f_2056[iVar0], &(Global_1378744.f_2056.f_99[iVar0 /*16*/]), Global_1378744.f_2056.f_282[iVar0], Global_1378744.f_2056.f_293[iVar0], Global_1378744.f_2056.f_260[iVar0], Global_1378744.f_2056.f_11[iVar0], Global_1378744.f_2056.f_22[iVar0], Global_1378744.f_2056.f_33[iVar0], Global_1378744.f_2056.f_44[iVar0], Global_1378744.f_2056.f_55[iVar0], Global_1378744.f_2056.f_66[iVar0], Global_1378744.f_2056.f_77[iVar0], Global_1378744.f_2056.f_88[iVar0], Global_1378744.f_2056.f_271[iVar0], Global_1378744.f_2056.f_304[iVar0], Global_1378744.f_2056.f_357[iVar0], Global_1378744.f_2056.f_326[iVar0 /*3*/], Global_1378744.f_2056.f_326[iVar0 /*3*/].f_1, Global_1378744.f_2056.f_368[iVar0], Global_1378744.f_2056.f_379[iVar0], Global_1378744.f_2056.f_390[iVar0], Global_1378744.f_2056.f_401[iVar0], Global_1378744.f_2056.f_412[iVar0], Global_1378744.f_2056.f_423[iVar0], Global_1378744.f_2056.f_434[iVar0], Global_1378744.f_2056.f_445[iVar0], Global_1378744.f_2056.f_456[iVar0], Global_1378744.f_2056.f_467[iVar0], Global_1378744.f_2056.f_478[iVar0], Global_1378744.f_2056.f_489[iVar0], Global_1378744.f_2056.f_500[iVar0], Global_1378744.f_2056.f_511[iVar0], Global_1378744.f_2056.f_522[iVar0], Global_1378744.f_2056.f_533[iVar0], Global_1378744.f_2056.f_587[iVar0], Global_1378744.f_2056.f_598[iVar0], Global_1378744.f_2056.f_544[iVar0], Global_2550287[iVar0], Global_2550298[iVar0], Global_2550309[iVar0], Global_2550320[iVar0], Global_2550331[iVar0], Global_2550342[iVar0], Global_2550353[iVar0], Global_2550364[iVar0], Global_1378744.f_2056.f_609[iVar0], Global_1378744.f_2056.f_620[iVar0], Global_1378744.f_2056.f_631[iVar0], Global_1378744.f_2056.f_642[iVar0], Global_1378744.f_2056.f_653[iVar0], Global_1378744.f_2056.f_664[iVar0], Global_1378744.f_2056.f_675[iVar0], Global_1378744.f_2056.f_686[iVar0], Global_1378744.f_2056.f_697[iVar0], Global_1378744.f_2056.f_708[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(8) && !func_212(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[8 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[8 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[8 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_149(iVar0, &(Global_1378744.f_4974.f_11[iVar0 /*16*/]), Global_1378744.f_4974[iVar0], Global_1378744.f_4974.f_172[iVar0], Global_1378744.f_4974.f_183[iVar0], Global_1378744.f_4974.f_194[iVar0], Global_1378744.f_4974.f_205[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(9) && !func_212(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[9 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[9 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[9 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_143(iVar0, Global_1378744.f_5201[iVar0], Global_1378744.f_5201.f_11[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(10) && !func_212(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[10 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[10 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[10 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_112(iVar0, Global_1378744.f_5234.f_6[iVar0], Global_1378744.f_5234.f_17[iVar0], &(Global_1378744.f_5234.f_28[iVar0 /*16*/]), Global_1378744.f_5234.f_200[iVar0], Global_1378744.f_5234.f_189[iVar0], Global_1378744.f_5234.f_233[iVar0], Global_1378744.f_5234.f_211[iVar0], Global_1378744.f_5234.f_244[iVar0], Global_1378744.f_5234.f_287[iVar0], Global_1378744.f_5234.f_298[iVar0], &(Global_1378744.f_5234.f_309[iVar0 /*16*/]), &(Global_1378744.f_5234), Global_1378744.f_5234.f_470[iVar0], Global_1378744.f_5234.f_481[iVar0], Global_1378744.f_5234.f_492[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(11) && !func_212(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[11 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[11 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[11 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_108(iVar0, Global_1378744.f_5737[iVar0], Global_1378744.f_5737.f_11[iVar0], Global_1378744.f_5737.f_22[iVar0], Global_1378744.f_5737.f_33[iVar0], Global_1378744.f_5737.f_44[iVar0], Global_1378744.f_5737.f_55[iVar0], Global_1378744.f_5737.f_66[iVar0], Global_1378744.f_5737.f_77[iVar0], Global_1378744.f_5737.f_88[iVar0], Global_1378744.f_5737.f_110[iVar0], Global_1378744.f_5737.f_121[iVar0], Global_1378744.f_5737.f_132[iVar0], Global_1378744.f_5737.f_143[iVar0], Global_1378744.f_5737.f_154[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(12) && !func_212(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1377236.f_1324[12 /*11*/][iVar0] == iVar1 + 3 || Global_1377236.f_1180[12 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_1377236.f_1180[12 /*11*/][iVar0]))
							{
								func_214(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_43(iVar0, Global_1378744.f_5902[iVar0], Global_1378744.f_5902.f_22[iVar0], &(Global_1378744.f_5902.f_33[iVar0 /*6*/]), Global_1378744.f_5902.f_94[iVar0], Global_1378744.f_5902.f_11[iVar0], Global_1378744.f_5902.f_105[iVar0], Global_1378744.f_5902.f_116[iVar0], Global_1378744.f_5902.f_127[iVar0], Global_1378744.f_5902.f_138[iVar0], Global_1378744.f_5902.f_149[iVar0], Global_1378744.f_5902.f_160[iVar0], Global_1378744.f_5902.f_171[iVar0], Global_1378744.f_5902.f_182[iVar0], Global_1378744.f_5902.f_193[iVar0], Global_1378744.f_5902.f_204[iVar0], Global_1378744.f_5902.f_215[iVar0], Global_1378744.f_5902.f_226[iVar0], Global_1378744.f_5902.f_248[iVar0], Global_1378744.f_5902.f_259[iVar0], Global_1378744.f_5902.f_270[iVar0], Global_1378744.f_5902.f_281[iVar0], Global_1378744.f_5902.f_292[iVar0], Global_1378744.f_5902.f_303[iVar0], Global_1378744.f_5902.f_314[iVar0], Global_1378744.f_5902.f_325[iVar0], Global_1378744.f_5902.f_336[iVar0], Global_1378744.f_5902.f_347[iVar0], Global_1378744.f_5902.f_358[iVar0], Global_1378744.f_5902.f_369[iVar0], Global_1378744.f_5902.f_380[iVar0], Global_1378744.f_5902.f_391[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_42();
	}
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1378744.f_6318[iVar0] = Global_1378744.f_6304[iVar0];
		iVar0++;
	}
}

void func_43(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(12, iParam0))
	{
		func_44(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_44(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)
{
	struct<8> Var0;
	struct<8> Var9;
	struct<8> Var18;
	struct<8> Var27;
	struct<8> Var36;
	struct<8> Var45;
	struct<8> Var54;
	struct<8> Var63;
	struct<8> Var72;
	struct<8> Var81;
	struct<8> Var90;
	struct<8> Var99;
	struct<8> Var108;
	struct<8> Var117;
	struct<8> Var126;
	struct<8> Var135;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	char cVar149[24];
	struct<3> Var155;
	char cVar161[24];
	char cVar167[24];
	struct<3> Var173;
	char cVar179[24];
	char cVar185[24];
	struct<3> Var191;
	char cVar197[24];
	char cVar203[24];
	struct<3> Var209;
	char cVar215[24];
	char cVar221[24];
	struct<3> Var227;
	char cVar233[24];
	char cVar239[24];
	char cVar245[24];
	char cVar251[24];
	char cVar257[24];
	char cVar263[24];
	char cVar269[24];
	char cVar275[24];
	char cVar281[24];
	char cVar287[24];
	char cVar293[24];
	char cVar299[24];
	char cVar305[24];
	char cVar311[24];
	char cVar317[24];
	char cVar323[24];
	int iVar329;
	int iVar330;
	int iVar331;
	int iVar332;
	int iVar333;
	int iVar334;
	int iVar335;
	int iVar336;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	int iVar341;
	int iVar342;
	int iVar343;
	int iVar344;
	bool bVar345;
	bool bVar346;
	
	Global_1378744++;
	if (func_107())
	{
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_105(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam6 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN", sParam7))
			{
				func_104(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_104(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_103(uParam2, 0, 0);
			}
			else
			{
				func_102(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam7)))
		{
			func_104(uParam2, 0, 0);
		}
		else
		{
			func_103(uParam2, 0, 0);
		}
		func_100(uParam1);
		func_99(uParam2);
		func_98(12, iParam0);
		if (Global_1378744 == 1)
		{
			func_97(iParam12);
		}
		func_91(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_90(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var9 = (*uParam4 + 0.095f);
		Var18 = (*uParam4 + 0.095f);
		Var27 = (*uParam4 + 0.095f);
		Var36 = (*uParam4 + 0.072f);
		Var45 = (*uParam4 + 0.072f);
		Var54 = (*uParam4 + 0.072f);
		Var63 = (*uParam4 + 0.049f);
		Var72 = (*uParam4 + 0.049f);
		Var81 = (*uParam4 + 0.049f);
		Var90 = (*uParam4 + 0.026f);
		Var99 = (*uParam4 + 0.026f);
		Var108 = (*uParam4 + 0.026f);
		Var117 = (*uParam4 + 0.003f);
		Var126 = (*uParam4 + 0.003f);
		Var135 = (*uParam4 + 0.003f);
		if (func_89())
		{
			Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var18.f_1 = (uParam4->f_1 + 0.016f);
			Var27.f_1 = (uParam4->f_1 + 0.016f);
			Var36.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var45.f_1 = (uParam4->f_1 + 0.016f);
			Var54.f_1 = (uParam4->f_1 + 0.016f);
			Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var72.f_1 = (uParam4->f_1 + 0.016f);
			Var81.f_1 = (uParam4->f_1 + 0.016f);
			Var90.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var99.f_1 = (uParam4->f_1 + 0.016f);
			Var108.f_1 = (uParam4->f_1 + 0.016f);
			Var117.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var126.f_1 = (uParam4->f_1 + 0.016f);
			Var135.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var9.f_1 = (uParam4->f_1 + 0.0185f);
			Var18.f_1 = (uParam4->f_1 + 0.019f);
			Var27.f_1 = (uParam4->f_1 + 0.019f);
			Var36.f_1 = (uParam4->f_1 + 0.0185f);
			Var45.f_1 = (uParam4->f_1 + 0.019f);
			Var54.f_1 = (uParam4->f_1 + 0.019f);
			Var63.f_1 = (uParam4->f_1 + 0.0185f);
			Var72.f_1 = (uParam4->f_1 + 0.019f);
			Var81.f_1 = (uParam4->f_1 + 0.019f);
			Var90.f_1 = (uParam4->f_1 + 0.0185f);
			Var99.f_1 = (uParam4->f_1 + 0.019f);
			Var108.f_1 = (uParam4->f_1 + 0.019f);
			Var117.f_1 = (uParam4->f_1 + 0.0185f);
			Var126.f_1 = (uParam4->f_1 + 0.019f);
			Var135.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var9.f_2 = (0.016f + 0.003f);
		Var18.f_2 = (0.016f + 0.003f);
		Var27.f_2 = (0.016f + 0.003f);
		Var36.f_2 = (0.016f + 0.003f);
		Var45.f_2 = (0.016f + 0.003f);
		Var54.f_2 = (0.016f + 0.003f);
		Var63.f_2 = (0.016f + 0.003f);
		Var72.f_2 = (0.016f + 0.003f);
		Var81.f_2 = (0.016f + 0.003f);
		Var90.f_2 = (0.016f + 0.003f);
		Var99.f_2 = (0.016f + 0.003f);
		Var108.f_2 = (0.016f + 0.003f);
		Var117.f_2 = (0.016f + 0.003f);
		Var126.f_2 = (0.016f + 0.003f);
		Var135.f_2 = (0.016f + 0.003f);
		Var9.f_3 = (0.032f + 0.004f);
		Var18.f_3 = (0.032f + 0.004f);
		Var27.f_3 = (0.032f + 0.004f);
		Var36.f_3 = (0.032f + 0.004f);
		Var45.f_3 = (0.032f + 0.004f);
		Var54.f_3 = (0.032f + 0.004f);
		Var63.f_3 = (0.032f + 0.004f);
		Var72.f_3 = (0.032f + 0.004f);
		Var81.f_3 = (0.032f + 0.004f);
		Var90.f_3 = (0.032f + 0.004f);
		Var99.f_3 = (0.032f + 0.004f);
		Var108.f_3 = (0.032f + 0.004f);
		Var117.f_3 = (0.032f + 0.004f);
		Var126.f_3 = (0.032f + 0.004f);
		Var135.f_3 = (0.032f + 0.004f);
		Var9.f_7 = 255;
		Var18.f_7 = 255;
		Var27.f_7 = 255;
		Var36.f_7 = 255;
		Var45.f_7 = 255;
		Var54.f_7 = 255;
		Var63.f_7 = 255;
		Var72.f_7 = 255;
		Var81.f_7 = 255;
		Var90.f_7 = 255;
		Var99.f_7 = 255;
		Var108.f_7 = 255;
		Var117.f_7 = 255;
		Var126.f_7 = 255;
		Var135.f_7 = 255;
		func_88(&Var9, 1);
		func_88(&Var18, 1);
		func_88(&Var27, 1);
		func_88(&Var36, 1);
		func_88(&Var45, 1);
		func_88(&Var54, 1);
		func_88(&Var63, 1);
		func_88(&Var72, 1);
		func_88(&Var81, 1);
		func_88(&Var90, 1);
		func_88(&Var99, 1);
		func_88(&Var108, 1);
		func_88(&Var117, 1);
		func_88(&Var126, 1);
		func_88(&Var135, 1);
		StringCopy(&cVar149, "", 24);
		StringCopy(&Var155, "", 24);
		StringCopy(&cVar161, "", 24);
		StringCopy(&cVar167, "", 24);
		StringCopy(&Var173, "", 24);
		StringCopy(&cVar179, "", 24);
		StringCopy(&cVar185, "", 24);
		StringCopy(&Var191, "", 24);
		StringCopy(&cVar197, "", 24);
		StringCopy(&cVar203, "", 24);
		StringCopy(&Var209, "", 24);
		StringCopy(&cVar215, "", 24);
		StringCopy(&cVar221, "", 24);
		StringCopy(&Var227, "", 24);
		StringCopy(&cVar233, "", 24);
		StringCopy(&cVar239, "", 24);
		StringCopy(&cVar245, "", 24);
		StringCopy(&cVar251, "", 24);
		StringCopy(&cVar257, "", 24);
		StringCopy(&cVar263, "", 24);
		StringCopy(&cVar269, "", 24);
		StringCopy(&cVar275, "", 24);
		StringCopy(&cVar281, "", 24);
		StringCopy(&cVar287, "", 24);
		StringCopy(&cVar293, "", 24);
		StringCopy(&cVar299, "", 24);
		StringCopy(&cVar305, "", 24);
		StringCopy(&cVar311, "", 24);
		StringCopy(&cVar317, "", 24);
		StringCopy(&cVar323, "", 24);
		iVar329 = 1;
		iVar330 = 1;
		iVar331 = 1;
		iVar332 = 1;
		iVar333 = 1;
		iVar334 = 1;
		iVar335 = 1;
		iVar336 = 1;
		iVar337 = 1;
		iVar338 = 1;
		iVar339 = 1;
		iVar340 = 1;
		iVar341 = 1;
		iVar342 = 1;
		iVar343 = 1;
		func_80(&iParam18, &Var9, &cVar149, &cVar239, &iVar329, &iParam13, &uVar144, &Var18, &Var155, &cVar245, &iVar330, iParam11, iParam25);
		func_80(&iParam19, &Var36, &cVar167, &cVar257, &iVar332, &iParam14, &uVar145, &Var45, &Var173, &cVar263, &iVar333, iParam11, iParam26);
		func_80(&iParam20, &Var63, &cVar185, &cVar275, &iVar335, &iParam15, &uVar146, &Var72, &Var191, &cVar281, &iVar336, iParam11, iParam27);
		func_80(&iParam21, &Var90, &cVar203, &cVar293, &iVar338, &iParam16, &uVar147, &Var99, &Var209, &cVar299, &iVar339, iParam11, iParam28);
		func_80(&iParam22, &Var117, &cVar221, &cVar311, &iVar341, &iParam17, &uVar148, &Var126, &Var227, &cVar317, &iVar342, iParam11, iParam29);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (func_78(&cVar149, &Var155, &cVar167, &Var173, &cVar185, &Var191, &cVar203, &Var209, &cVar221, &Var227) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar344 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar344);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(uParam1, 0);
			if (iParam35 == 0)
			{
				func_67(iParam0);
			}
			if (func_64(iParam35, &(Global_1378744.f_422[iParam0 /*2*/]), &(Global_1378744.f_443[iParam0 /*2*/])))
			{
				bVar345 = true;
			}
			else
			{
				bVar345 = false;
			}
			if (uParam34 && GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (bVar345)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_63(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_63(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_63(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_63(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_63(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_63(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_63(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_63(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_63(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_63(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
				if (iParam33 != iParam13)
				{
					func_63(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 != iParam14)
				{
					func_63(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 != iParam15)
				{
					func_63(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 != iParam16)
				{
					func_63(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 != iParam17)
				{
					func_63(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
			}
			else
			{
				func_63(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				func_63(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				func_63(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				func_63(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				func_63(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
			}
			if (iParam32 == 0)
			{
				func_62(iParam0);
			}
			if (func_64(iParam32, &(Global_1378744.f_380[iParam0 /*2*/]), &(Global_1378744.f_401[iParam0 /*2*/])))
			{
				bVar346 = true;
			}
			else
			{
				bVar346 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_60(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						func_60(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						func_60(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						func_60(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						func_60(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var27, &cVar161, &cVar251, iVar331);
								func_59(&Var54, &cVar179, &cVar269, iVar334);
								func_59(&Var81, &cVar197, &cVar287, iVar337);
								func_59(&Var108, &cVar215, &cVar305, iVar340);
								func_59(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_59(&Var27, &cVar161, &cVar251, iVar331);
							func_59(&Var54, &cVar179, &cVar269, iVar334);
							func_59(&Var81, &cVar197, &cVar287, iVar337);
							func_59(&Var108, &cVar215, &cVar305, iVar340);
							func_59(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_60(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var27, &cVar161, &cVar251, iVar331);
							}
						}
						else
						{
							func_59(&Var27, &cVar161, &cVar251, iVar331);
						}
						break;
					
					case 2:
						func_60(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var54, &cVar179, &cVar269, iVar334);
							}
						}
						else
						{
							func_59(&Var54, &cVar179, &cVar269, iVar334);
						}
						break;
					
					case 3:
						func_60(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var81, &cVar197, &cVar287, iVar337);
							}
						}
						else
						{
							func_59(&Var81, &cVar197, &cVar287, iVar337);
						}
						break;
					
					case 4:
						func_60(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var108, &cVar215, &cVar305, iVar340);
							}
						}
						else
						{
							func_59(&Var108, &cVar215, &cVar305, iVar340);
						}
						break;
					
					case 5:
						func_60(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_59(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_59(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					}
			}
			func_68(uParam2, 0);
			if (bParam10)
			{
				func_58(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_57(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != -999)
						{
							func_55(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_53(uParam4, uParam2, "NUMBER", fParam6, Global_2463996, 2);
					}
				}
				else
				{
					func_51(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S", sParam7))
			{
				sParam7 = "HUD_CASH_S";
				*uParam2 = 5;
				func_68(uParam2, 0);
				func_46(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S", sParam7))
			{
				*uParam2 = 5;
				func_68(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_46(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_55(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_53(uParam4, uParam2, sParam7, fParam6, Global_2463996, 2);
			}
			func_45();
		}
	}
}

void func_45()
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, true);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_48(*uParam0), func_47(uParam0->f_1), 0);
		}
	}
}

float func_47(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_48(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_49()
{
	if (func_50())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_50()
{
	return Global_1312458;
}

void func_51(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_CENTRE(bParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_52(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_52(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_53(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)
{
	if (!func_57(sParam2))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_54(func_48(*uParam0), func_47(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_54(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_55(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_56(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_56(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

int func_57(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_58(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_57(sParam2))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			if (func_57(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_48(*uParam0), func_47(uParam0->f_1), 0);
		}
	}
}

void func_59(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			func_88(uParam0, iParam3);
			func_69(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_60(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	if (*uParam5 != func_61() && *iParam4 != func_61())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

int func_61()
{
	return -1;
}

void func_62(int iParam0)
{
	func_15(&(Global_1378744.f_380[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_401[iParam0 /*2*/]));
}

void func_63(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_88(uParam1, iParam5);
		func_69(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, false);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			func_88(uParam2, iParam8);
			func_69(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

int func_64(int iParam0, var uParam1, var uParam2)
{
	if (func_244(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (!func_66(uParam2))
	{
		func_65(uParam2, 0, 0);
	}
	else if (func_244(uParam2, 300, 0))
	{
		if (func_244(uParam2, 800, 0))
		{
			func_15(uParam2);
			return 1;
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
	return 1;
}

void func_65(var uParam0, bool bParam1, bool bParam2)
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

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(int iParam0)
{
	func_15(&(Global_1378744.f_422[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_443[iParam0 /*2*/]));
}

void func_68(var uParam0, bool bParam1)
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_69(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_76(&Var0);
			break;
		
		case 1:
			func_75(&Var0);
			break;
		
		case 5:
			func_74(&Var0);
			break;
		
		case 6:
			func_73(&Var0);
			break;
		
		case 7:
			func_72(&Var0);
			break;
		
		case 8:
			func_71(&Var0);
			break;
		
		case 9:
			func_70(&Var0);
			break;
	}
	if (func_49())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_70(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_71(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_72(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_73(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_74(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_75(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_76(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_77()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1378744.f_1129)
	{
		iVar0 = 7;
	}
	return iVar0;
}

int func_78(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_79(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_79(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam0, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_80(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_89())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			if (*uParam5 != func_61())
			{
				*uParam6 = func_81(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
					StringCopy(sParam3, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		func_82(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_82(int iParam0, bool bParam1)
{
	if (!func_84(iParam0, 0, 1))
	{
		return;
	}
	if (func_85(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_83(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2440277.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (!func_84(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_86(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_86(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389221[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_87(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_87(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_61();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_88(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_89()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_90(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_91(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_93(uParam0));
	func_92(iParam3, -fVar0);
}

void func_92(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_1378744.f_1119 = (Global_1378744.f_1119 + fParam1);
			break;
		
		case 2:
			Global_1378744.f_1120 = (Global_1378744.f_1120 + fParam1);
			break;
	}
}

float func_93(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_89())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_94(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1378744.f_1119;
			break;
		
		case 2:
			return Global_1378744.f_1120;
			break;
	}
	return Global_1378744.f_1119;
}

float func_96(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_1378744.f_1119 = func_30();
			break;
		
		case 2:
			Global_1378744.f_1120 = func_30();
			break;
	}
}

void func_98(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6332[iParam0]), iParam1);
}

void func_99(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1378744.f_1123 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1378744.f_1123 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_100(var uParam0)
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1378744.f_1130)
	{
		fVar0 = (fVar0 + -0.034f);
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1378744.f_1131 && Global_1378744.f_1130 == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1378744.f_1132 && Global_1378744.f_1131 == 0) && Global_1378744.f_1130 == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1378744.f_1123 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && !GRAPHICS::GET_IS_WIDESCREEN()) && Global_1378744.f_1132)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1378744.f_1133)
	{
		if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1378744.f_1134)
	{
		if (func_101())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && Global_1378744.f_1131 == 0) && Global_1378744.f_1130 == 0) && Global_1378744.f_1123 == 0) && Global_1378744.f_1132 == 0) && Global_1378744.f_1133 == 0) && Global_1378744.f_1134 == 0) && MISC::IS_PC_VERSION())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_101()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

void func_102(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_103(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_104(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_106(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_107()
{
	return 1;
}

void func_108(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(11, iParam0))
	{
		func_109(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	var uVar83;
	var uVar84;
	var uVar85;
	var uVar86;
	char cVar87[24];
	struct<3> Var93;
	char cVar99[24];
	struct<3> Var105;
	char cVar111[24];
	struct<3> Var117;
	char cVar123[24];
	struct<3> Var129;
	char[] cVar135[8];
	char[] cVar141[8];
	char[] cVar147[8];
	char[] cVar153[8];
	char[] cVar159[8];
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	
	Global_1378744++;
	if (func_107())
	{
		func_98(11, iParam0);
		func_105(uParam1, 0);
		func_100(uParam1);
		if (Global_1378744 == 1)
		{
			func_97(iParam6);
		}
		func_102(uParam2, 0, 0);
		func_99(uParam2);
		func_91(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_111(iParam0);
		}
		if (func_64(iParam19, &(Global_1378744.f_338[iParam0 /*2*/]), &(Global_1378744.f_359[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(uParam1, 0);
			Var11 = ((*uParam4 + 0.145f) + 0.001f);
			Var20 = ((*uParam4 + 0.145f) + 0.001f);
			Var29 = (*uParam4 + 0.123f);
			Var38 = (*uParam4 + 0.123f);
			Var47 = (*uParam4 + 0.101f);
			Var56 = (*uParam4 + 0.101f);
			Var65 = (*uParam4 + 0.078f);
			Var74 = (*uParam4 + 0.078f);
			if (func_89())
			{
				Var11.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var20.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var29.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var38.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var47.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var56.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var65.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var74.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var11.f_1 = (uParam4->f_1 + 0.0185f);
				Var20.f_1 = (uParam4->f_1 + 0.019f);
				Var29.f_1 = (uParam4->f_1 + 0.0185f);
				Var38.f_1 = (uParam4->f_1 + 0.019f);
				Var47.f_1 = (uParam4->f_1 + 0.0185f);
				Var56.f_1 = (uParam4->f_1 + 0.019f);
				Var65.f_1 = (uParam4->f_1 + 0.0185f);
				Var74.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var11.f_2 = (0.016f + 0.003f);
			Var20.f_2 = (0.016f + 0.003f);
			Var29.f_2 = (0.016f + 0.003f);
			Var38.f_2 = (0.016f + 0.003f);
			Var47.f_2 = (0.016f + 0.003f);
			Var56.f_2 = (0.016f + 0.003f);
			Var65.f_2 = (0.016f + 0.003f);
			Var74.f_2 = (0.016f + 0.003f);
			Var11.f_3 = (0.032f + 0.004f);
			Var20.f_3 = (0.032f + 0.004f);
			Var29.f_3 = (0.032f + 0.004f);
			Var38.f_3 = (0.032f + 0.004f);
			Var47.f_3 = (0.032f + 0.004f);
			Var56.f_3 = (0.032f + 0.004f);
			Var65.f_3 = (0.032f + 0.004f);
			Var74.f_3 = (0.032f + 0.004f);
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			func_88(&Var11, 1);
			func_88(&Var20, 1);
			func_88(&Var29, 1);
			func_88(&Var38, 1);
			func_88(&Var47, 1);
			func_88(&Var56, 1);
			func_88(&Var65, 1);
			func_88(&Var74, 1);
			StringCopy(&cVar87, "", 24);
			StringCopy(&Var93, "", 24);
			StringCopy(&cVar99, "", 24);
			StringCopy(&Var105, "", 24);
			StringCopy(&cVar111, "", 24);
			StringCopy(&Var117, "", 24);
			StringCopy(&cVar123, "", 24);
			StringCopy(&Var129, "", 24);
			iVar183 = 1;
			iVar184 = 1;
			iVar185 = 1;
			iVar186 = 1;
			iVar187 = 1;
			iVar188 = 1;
			iVar189 = 1;
			iVar190 = 1;
			func_80(&iParam11, &Var11, &cVar87, &cVar135, &iVar183, &uParam7, &uVar83, &Var20, &Var93, &cVar141, &iVar184, uParam5, 0);
			func_80(&iParam12, &Var29, &cVar99, &cVar147, &iVar185, &uParam8, &uVar84, &Var38, &Var105, &cVar153, &iVar186, uParam5, 0);
			func_80(&iParam13, &Var47, &cVar111, &cVar159, &iVar187, &uParam9, &uVar85, &Var56, &Var117, &cVar165, &iVar188, uParam5, 0);
			func_80(&iParam14, &Var65, &cVar123, &cVar171, &iVar189, &uParam10, &uVar86, &Var74, &Var129, &cVar177, &iVar190, uParam5, 0);
			if (bParam15)
			{
				if (bVar9)
				{
					func_110(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
				}
			}
			else
			{
				func_110(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
			}
			if (bParam16)
			{
				if (bVar9)
				{
					func_110(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
				}
			}
			else
			{
				func_110(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
			}
			if (bParam17)
			{
				if (bVar9)
				{
					func_110(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
				}
			}
			else
			{
				func_110(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
			}
			if (bParam18)
			{
				if (bVar9)
				{
					func_110(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
				}
			}
			else
			{
				func_110(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
			}
		}
		func_45();
	}
}

void func_110(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
		{
			func_88(uParam1, iParam5);
			func_69(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, false);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam6, false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam6))
			{
				func_88(uParam2, iParam8);
				func_69(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_111(int iParam0)
{
	func_15(&(Global_1378744.f_338[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_359[iParam0 /*2*/]));
}

void func_112(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(10, iParam0))
	{
		uVar13 = 4;
		func_113(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}
}

void func_113(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, int iParam19)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1378744++;
	if (func_107())
	{
		if (iParam13 == 2)
		{
		}
		func_98(10, iParam0);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam17)
		{
			func_105(uParam1, 0);
		}
		else if (bParam10)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_1378744 == 1)
		{
			func_97(iParam6);
		}
		func_135(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam11 == 0)
		{
			func_132(iParam0);
		}
		if (iParam14 == 0)
		{
			func_131(iParam0);
		}
		if (func_64(iParam11, &(Global_1378744.f_296[iParam0 /*2*/]), &(Global_1378744.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			Var0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
			if (iParam14 > 0)
			{
				Var11 = { Var0 };
				if (func_244(&(Global_1378744.f_863[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_1378744.f_863[iParam0 /*2*/], 1250, 0))
					{
						Global_1378744.f_884[iParam0] = (Global_1378744.f_884[iParam0] - 17);
					}
					Var11.f_7 = Global_1378744.f_884[iParam0];
					func_88(&Var11, iParam8);
					func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
				}
			}
			else
			{
				Global_1378744.f_884[iParam0] = 255;
				func_129(&(Global_1378744.f_863[iParam0 /*2*/]), 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			func_123(&Var0, iParam18);
			if (func_89())
			{
				if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bParam17)
			{
				func_122(uParam1, iParam8);
				func_68(uParam1, 0);
				func_58(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == 1)
			{
				func_122(uParam1, iParam8);
				func_68(uParam1, 0);
				func_58(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_68(uParam1, 0);
				if (iParam9 == -1)
				{
					func_120(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_55(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bVar9)
			{
				func_116(iParam4, iParam5, uParam3, iParam8, uParam12, iVar10);
				func_114(sParam15, uParam3, iVar10, sParam16);
			}
			func_45();
		}
	}
}

void func_114(char* sParam0, var uParam1, int iParam2, char* sParam3)
{
	struct<9> Var0[1];
	
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
	{
		func_115(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_88(uParam1[0 /*9*/], 1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_69(sParam3, sParam0, uParam1[0 /*9*/], 0, 0, iParam2, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	}
}

void func_115(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_116(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	struct<9> Var0[2];
	float fVar19;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		func_88(uParam2[3 /*9*/], iParam3);
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_88(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_117(struct<9> Param0, float fParam9, var uParam10, int iParam11, int iParam12, var uParam13, float fParam14)
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
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_119(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam9 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam9 > 95f && fParam9 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam12 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0;
		fVar8 = func_118(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam9 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	if (fParam14 > 0f && fParam14 < 100f)
	{
		fVar10 = (Param0.f_2 * 0.01f);
		fVar9 = (fVar9 + (fParam14 * fVar10));
	}
	*uParam10 = fVar9;
	uParam10->f_1 = Param0.f_1;
	uParam10->f_2 = fVar7;
	if (iParam11 == 1)
	{
		uParam10->f_3 = Param0.f_3;
	}
	uParam10->f_8 = Param0.f_8;
}

float func_118(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_119(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_120(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_121(func_48(*uParam0), func_47(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_121(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_122(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_123(var uParam0, int iParam1)
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_124(Var0, 0, 0);
}

void func_124(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_128(&Var0);
			break;
		
		case 1:
			func_127(&Var0);
			break;
		
		case 3:
			func_126(&Var0);
			break;
		
		case 4:
			func_125(&Var0);
			break;
	}
	if (func_49())
	{
		if (iParam9 == 1)
		{
			GRAPHICS::DRAW_RECT(func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
	}
}

void func_125(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_126(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_127(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_128(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_129(var uParam0, bool bParam1, bool bParam2)
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

int func_130(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	func_15(&(Global_1378744.f_758[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_779[iParam0 /*2*/]));
}

void func_132(int iParam0)
{
	func_15(&(Global_1378744.f_296[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_317[iParam0 /*2*/]));
	Global_1378744.f_1135.f_205[iParam0] = -1;
}

float func_133()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(false);
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar1, &iVar2);
	fVar3 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar2));
	fVar0 = func_134(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_134(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_135(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_140(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam4));
	func_136(uParam1, iParam3, -1f, -1f);
	func_92(iParam3, -fVar0);
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_136(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_137();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

float func_137()
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_138()
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

int func_139(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_140(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar11;
	
	if (func_27(9, iParam0))
	{
		func_144(iParam0, &uVar0, &uVar11, 1, iParam1, iParam2);
	}
}

void func_144(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_1378744++;
	if (func_107())
	{
		func_148();
		HUD::GET_HUD_COLOUR(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_147(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_89())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_1378744 == 1)
		{
			func_97(iParam3);
		}
		fVar4 = 0.131f;
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_95(iParam3) + func_93(uParam1)) - fVar4);
		func_99(uParam1);
		func_68(uParam1, 0);
		func_98(9, iParam0);
		func_146(&uVar5, iParam4);
		func_120(uParam2, uParam1, func_145(&uVar5), 0, 1);
		func_45();
	}
}

var func_145(var uParam0)
{
	return uParam0;
}

void func_146(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_147(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_148()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_149(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(8, iParam0))
	{
		uVar13 = 2;
		func_150(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	struct<8> Var9;
	
	Global_1378744++;
	if (func_107())
	{
		func_106(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_105(uParam1, 0);
		func_100(uParam1);
		func_98(8, iParam0);
		if (Global_1378744 == 1)
		{
			func_97(iParam4);
		}
		func_151(uParam2, iParam4, uParam1, &Var0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			Var9 = *uParam2;
			Var9.f_1 = uParam2->f_1;
			Var9 = (Var9 + 0.079f);
			Var9.f_1 = (Var9.f_1 + 0.008f);
			Var9.f_2 = (Var9.f_2 + 0.157f);
			Var9.f_3 = (Var9.f_3 + 0.036f);
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_89())
			{
				Var9 = (Var9 + -0.025f);
				Var9.f_2 = (Var9.f_2 + 0.05f);
			}
			Global_1378744.f_6361 = (Global_1378744.f_6361 + Var9.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_69("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_68(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_55(uParam2, uParam1, sParam5, iParam6, 2);
			func_45();
		}
	}
}

void func_151(var uParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = func_140(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam2));
	func_92(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_152(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar95;
	
	if (func_27(2, iParam0))
	{
		uVar13 = 9;
		if (iParam1 < 9)
		{
			func_153(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1378744++;
	if (func_107())
	{
		if (iParam40 == 2)
		{
		}
		func_98(2, iParam0);
		if (Global_1378744 == 1)
		{
			func_97(iParam6);
		}
		func_160(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam51)
		{
			func_105(uParam1, 0);
		}
		else if (bParam21)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam19 == 0)
		{
			func_159(iParam0);
		}
		if (iParam41 == 0)
		{
			func_158(iParam0);
		}
		iVar10 = func_77();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_64(iParam19, &(Global_1378744.f_212[iParam0 /*2*/]), &(Global_1378744.f_233[iParam0 /*2*/])))
			{
				bVar9 = true;
			}
			else
			{
				bVar9 = false;
			}
			if (!func_139(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var11 = { Var0 };
					if (func_244(&(Global_1378744.f_1023[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_1378744.f_1023[iParam0 /*2*/], 1250, 0))
						{
							Global_1378744.f_1044[iParam0] = (Global_1378744.f_1044[iParam0] - 17);
						}
						Var11.f_7 = Global_1378744.f_1044[iParam0];
						func_88(&Var11, iParam7);
						func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1378744.f_1044[iParam0] = 255;
					func_129(&(Global_1378744.f_1023[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_123(&Var0, iParam52);
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			func_122(uParam1, iParam42);
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_89())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_89() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.003f);
			}
			if (!func_139(fParam22, fParam23))
			{
				func_68(uParam1, 0);
				if (bParam51)
				{
					func_58(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_58(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_120(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_55(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar9)
			{
				func_154(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_45();
		}
	}
}

void func_154(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;
	
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_157(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar14 = false;
				if (iVar2 == 2)
				{
					bVar14 = true;
					iVar2 = 1;
				}
				Var5 = { func_156(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar14)
				{
					Var5.f_7 = 51;
				}
				func_69("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_155(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_88(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_88(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_88(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_88(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_88(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_88(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_88(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_88(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_69("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_156(struct<9> Param0, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam12 == 0)
	{
		if (bParam9)
		{
			func_88(&Var0, iParam10);
		}
		else
		{
			func_88(&Var0, iParam11);
		}
	}
	else if (bParam9)
	{
		func_88(&Var0, iParam12);
	}
	else
	{
		func_88(&Var0, iParam13);
	}
	if (bParam9 == 0)
	{
	}
	return Var0;
}

int func_157(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0)
{
	func_15(&(Global_1378744.f_674[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_695[iParam0 /*2*/]));
}

void func_159(int iParam0)
{
	func_15(&(Global_1378744.f_212[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_233[iParam0 /*2*/]));
}

void func_160(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_140(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam7));
	func_162(uParam1, iParam4, fParam5, fParam6);
	func_161(uParam3);
	if (!func_139(fParam5, fParam6))
	{
		func_92(iParam4, -fVar0);
	}
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_161(var uParam0)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_162(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_163();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_163()
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_164(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, bool bParam24, int iParam25)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(6, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, 0, 0, -1);
	}
}

void func_165(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23, int iParam24, int iParam25, bool bParam26, int iParam27, bool bParam28, bool bParam29, int iParam30, bool bParam31, int iParam32, int iParam33)
{
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	bool bVar36;
	int iVar37;
	struct<9> Var38;
	bool bVar47;
	float fVar48;
	float fVar49;
	struct<8> Var50;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	struct<8> Var63;
	struct<8> Var72;
	int iVar81;
	char* sVar82;
	char* sVar83;
	int iVar84;
	char* sVar85;
	char* sVar86;
	int iVar87;
	
	Global_1378744++;
	if (func_107())
	{
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_89())
		{
			if (bParam23)
			{
				func_173(uParam1, 0);
			}
			else if (bParam11)
			{
				func_141(uParam1, 3);
			}
			else
			{
				func_173(uParam1, 0);
			}
		}
		else if (bParam23)
		{
			func_105(uParam1, 0);
		}
		else if (bParam11)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_2462492 && bParam11)
		{
			if (func_89())
			{
				func_173(uParam1, 0);
			}
			else
			{
				func_105(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam14 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN", sParam12))
			{
				func_104(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_104(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_103(uParam2, 0, 0);
			}
			else
			{
				func_102(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12)))
		{
			func_104(uParam2, 0, 0);
		}
		else
		{
			func_103(uParam2, 0, 0);
		}
		func_100(uParam1);
		func_99(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		func_98(6, iParam0);
		if (Global_1378744 == 1)
		{
			func_97(iParam6);
		}
		func_91(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_90(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_172(iParam0);
		}
		if (iParam16 == 0)
		{
			func_171(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar37 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			if (func_64(iParam9, &(Global_1378744.f_86[iParam0 /*2*/]), &(Global_1378744.f_107[iParam0 /*2*/])))
			{
				bVar36 = true;
			}
			else
			{
				bVar36 = false;
			}
			Var27 = *uParam3;
			Var27.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.002f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.049f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.008f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.036f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.01f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.033f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_89())
			{
				Var27 = (Var27 + -0.025f);
				Var27.f_2 = (Var27.f_2 + 0.05f);
			}
			Global_1378744.f_6361 = (Global_1378744.f_6361 + Var27.f_3);
			if (iParam16 > 0)
			{
				Var38 = { Var27 };
				if (func_244(&(Global_1378744.f_1087[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_1378744.f_1087[iParam0 /*2*/], 1250, 0))
					{
						Global_1378744.f_1108[iParam0] = (Global_1378744.f_1108[iParam0] - 17);
					}
					Var38.f_7 = Global_1378744.f_1108[iParam0];
					if (iParam15 == 2)
					{
						func_88(&Var38, 6);
					}
					else if (iParam15 == 3)
					{
						func_88(&Var38, 18);
					}
					else
					{
						func_88(&Var38, iParam8);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else
			{
				Global_1378744.f_1108[iParam0] = 255;
				func_129(&(Global_1378744.f_1087[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_69("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else
			{
				func_69("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_123(&Var27, iParam24);
			iVar37 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			func_122(uParam1, iParam17);
			bVar47 = true;
			if (Global_2462492)
			{
				bVar47 = false;
			}
			if (Global_2462493 == 1)
			{
				bVar47 = true;
			}
			func_68(uParam1, 0);
			if (func_89())
			{
				if (bParam11)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_89())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam23)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2462492 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			uParam1->f_6 = iParam25;
			uParam2->f_6 = iParam25;
			if (bParam26)
			{
				uParam2->f_6 = 0;
			}
			if (bParam28)
			{
				if (bVar36)
				{
					func_170(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
				}
			}
			else
			{
				func_170(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
			}
			if (bParam31)
			{
				if (iParam33 > 0)
				{
					if (!func_66(&(Global_1378744.f_842[iParam0 /*2*/])))
					{
						func_65(&(Global_1378744.f_842[iParam0 /*2*/]), 0, 0);
					}
					else if (func_244(&(Global_1378744.f_842[iParam0 /*2*/]), iParam33, 0))
					{
						func_129(&(Global_1378744.f_842[iParam0 /*2*/]), 0, 0);
					}
					func_167(uParam2, iParam8, iParam32, iParam33, Global_1378744.f_842[iParam0 /*2*/]);
				}
			}
			if (iParam22 == 1)
			{
				Var9 = uParam2->f_9;
				Var9.f_1 = (uParam4->f_1 - 0.0175f);
				Var18 = uParam2->f_9;
				Var18.f_1 = (uParam4->f_1 + 0.0175f);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					Var9 = (Var9 + 0.0095f);
					Var9 = (Var9 - 0.015f);
					Var9.f_1 = (Var9.f_1 + 0.019f);
					Var9.f_2 = (Var9.f_2 + 0.01f);
					Var9.f_3 = (Var9.f_3 + 0.01f);
					Var9.f_4 = Var9.f_4;
					Var9.f_5 = Var9.f_5;
					Var9.f_6 = Var9.f_6;
					Var9.f_7 = (Var9.f_7 - 50);
					Var9.f_8 = -90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18 = (Var18 + 0.0095f);
					Var18 = (Var18 - 0.015f);
					Var18.f_1 = (Var18.f_1 + 0.019f);
					Var18.f_2 = (Var18.f_2 + 0.01f);
					Var18.f_3 = (Var18.f_3 + 0.01f);
					Var18.f_4 = Var18.f_4;
					Var18.f_5 = Var18.f_5;
					Var18.f_6 = Var18.f_6;
					Var18.f_7 = (Var18.f_7 - 50);
					Var18.f_8 = 90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (bParam29)
			{
				fVar48 = (func_138() + func_95(iParam6));
				fVar49 = func_137();
				if (func_89())
				{
					Var50 = (fVar49 - 0.061f);
				}
				else
				{
					Var50 = (fVar49 - 0.0365f);
				}
				Var50.f_1 = (fVar48 + 0.057f);
				Var50.f_2 = (Var27.f_2 - 0.004f);
				Var50.f_3 = 0.01f;
				Var50.f_4 = 255;
				Var50.f_5 = 255;
				Var50.f_6 = 255;
				Var50.f_7 = 255;
				func_88(&Var50, iParam30);
				func_69("TimerBars", "DamagebarFill_128", &Var50, 0, 0, iVar37, 0);
			}
			if (bParam18)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					fVar59 = 0f;
					if (bParam11 == 1)
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						fVar60 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
					}
					else
					{
						HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam7);
						if (iParam10 != -1)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
						}
						fVar60 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam11 == 0)
					{
						fVar61 = (0.153f - 0.072f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.01f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else
					{
						fVar61 = ((0.153f - 0.037f) - 0.036f);
						fVar62 = (-0.457f + 0.194f);
					}
					fVar61 = (fVar61 + 0.03f);
					if (Global_1378744.f_1130)
					{
						fVar61 = (fVar61 + -0.03f);
					}
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
					{
						fVar61 = (fVar61 + -0.015f);
					}
					if (Global_1378744.f_1131 && Global_1378744.f_1130 == 0)
					{
						fVar61 = (fVar61 + (-0.015f - 0.003f));
					}
					fVar59 = ((fVar62 * fVar60) + fVar61);
					Var0 = (Var0 + fVar59);
					Var0 = (Var0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_69("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (bVar36)
			{
				if (iParam21 != 0)
				{
					func_166(uParam2);
					Var63 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_89())
					{
						Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var63.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var63.f_2 = (0.016f + 0.003f);
					Var63.f_3 = (0.032f + 0.004f);
					Var63.f_7 = iParam25;
					func_88(&Var63, 1);
					Var72 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_89())
					{
						Var72.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var72.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var72.f_2 = (0.016f + 0.003f);
					Var72.f_3 = (0.032f + 0.004f);
					Var72.f_7 = 255;
					func_88(&Var72, 1);
					if (bParam26)
					{
						Var63.f_7 = 0;
					}
					sVar82 = "";
					iVar84 = 1;
					sVar85 = "";
					iVar87 = 1;
					switch (iParam21)
					{
						case 5:
							Var63.f_3 = (Var63.f_3 + -0.009f);
							Var63.f_2 = (Var63.f_2 + -0.002f);
							if (func_89())
							{
								Var63.f_1 = (Var63.f_1 + 0.0055f);
							}
							else
							{
								Var63.f_1 = (Var63.f_1 + 0.0025f);
							}
							sVar85 = "MPRPSymbol";
							sVar86 = "RP";
							break;
						
						case 2:
							sVar85 = "TimerBars";
							sVar86 = "Rockets";
							break;
						
						case 3:
							sVar85 = "MpSpecialRace";
							sVar86 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar85 = "TimerBars";
							sVar86 = "Spikes";
							break;
						
						case 4:
							sVar85 = "TimerBars";
							sVar86 = "Boost";
							break;
						
						case 6:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeTick_32";
							iVar87 = 18;
							break;
						
						case 7:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeCross_32";
							iVar87 = 6;
							break;
						
						case 8:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Beast";
							iVar87 = 118;
							break;
						
						case 9:
							sVar85 = "MPSpecialRace";
							sVar86 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Random";
							iVar87 = 118;
							break;
						
						case 11:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Swap";
							iVar87 = 118;
							break;
						
						case 13:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Testosterone";
							iVar87 = 118;
							break;
						
						case 14:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Thermal";
							iVar87 = 118;
							break;
						
						case 15:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Weed";
							iVar87 = 118;
							break;
						
						case 16:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Hidden";
							iVar87 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam27 != func_61())
							{
								iVar81 = func_81(iParam27);
								if (iVar81 != 0)
								{
									sVar85 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar81);
									sVar86 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar81);
								}
							}
							if (func_89())
							{
								Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var63.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var63.f_2 = (0.016f + 0.004f);
							Var63.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_89())
								{
									Var72.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var72.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var72.f_2 = (0.016f + 0.004f);
								Var72.f_3 = (0.032f + 0.002f);
								sVar82 = "timerbar_sr";
								sVar83 = "timer_cross";
								iVar84 = iParam17;
								Var63.f_7 = 127;
							}
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar85))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar85, false);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar85))
						{
							func_88(&Var63, iVar87);
							func_69(sVar85, sVar86, &Var63, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar82))
						{
							GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar82, false);
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar82))
							{
								func_88(&Var72, iVar84);
								func_69(sVar82, sVar83, &Var72, 1, 0, 4, 0);
							}
						}
					}
				}
				func_68(uParam2, 0);
				iVar37 = func_77();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					if (bParam20)
					{
						func_58(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (iParam13 == 0)
						{
							func_55(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_53(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2463996, 2);
						}
					}
					else if (func_57(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_55(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_53(uParam4, uParam2, "NUMBER", fParam14, Global_2463996, 2);
							}
						}
						else
						{
							func_51(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_68(uParam2, 0);
						func_46(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG", sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_68(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_46(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_55(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_53(uParam4, uParam2, sParam12, fParam14, Global_2463996, 2);
					}
				}
			}
			func_45();
		}
	}
}

void func_166(var uParam0)
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	
	iVar8 = func_169(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_3 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_4 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

float func_168(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_169(var uParam0, bool bParam1, bool bParam2)
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

void func_170(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_58(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_58(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1)
	{
		func_120(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_55(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_171(int iParam0)
{
	func_15(&(Global_1378744.f_548[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_569[iParam0 /*2*/]));
}

void func_172(int iParam0)
{
	func_15(&(Global_1378744.f_86[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_107[iParam0 /*2*/]));
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_174(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24, bool bParam25, float fParam26, float fParam27, bool bParam28, int iParam29, float fParam30, bool bParam31, int iParam32, int iParam33, float fParam34)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_27(0, iParam0))
	{
		uVar13 = 4;
		func_175(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25, fParam26, fParam27, bParam28, iParam29, fParam30, bParam31, iParam32, iParam33, fParam34);
	}
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28, bool bParam29, float fParam30, float fParam31, bool bParam32, int iParam33, float fParam34, bool bParam35, int iParam36, int iParam37, float fParam38)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;
	
	Global_1378744++;
	if (func_107())
	{
		if (iParam15 == 2)
		{
		}
		func_98(0, iParam0);
		if (func_89())
		{
			if (bParam17)
			{
				func_182(uParam1, 0);
			}
			else
			{
				func_142(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_105(uParam1, 0);
		}
		else if (bParam10)
		{
			func_141(uParam1, 3);
		}
		else if (bParam17)
		{
			func_181(uParam1, 0);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_1378744 == 1)
		{
			func_97(iParam6);
		}
		func_180(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam11 == 0)
		{
			func_132(iParam0);
		}
		if (iParam16 == 0)
		{
			func_131(iParam0);
		}
		if (func_64(iParam11, &(Global_1378744.f_296[iParam0 /*2*/]), &(Global_1378744.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (!func_139(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
				if (iParam16 > 0)
				{
					Var11 = { Var0 };
					if (func_244(&(Global_1378744.f_863[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_1378744.f_863[iParam0 /*2*/], 1250, 0))
						{
							Global_1378744.f_884[iParam0] = (Global_1378744.f_884[iParam0] - 17);
						}
						Var11.f_7 = Global_1378744.f_884[iParam0];
						func_88(&Var11, iParam8);
						func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1378744.f_884[iParam0] = 255;
					func_129(&(Global_1378744.f_863[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_123(&Var0, iParam21);
			if (func_89())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (!func_139(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_122(uParam1, iParam8);
					func_68(uParam1, 0);
					func_58(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_122(uParam1, iParam8);
					func_68(uParam1, 0);
					func_58(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_122(uParam1, iParam22);
					func_68(uParam1, 0);
					if (bParam29)
					{
						func_179(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					}
					else if (iParam9 == -1)
					{
						func_120(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_55(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_139(fParam12, fParam13))
				{
					fVar20 = (func_138() + func_95(iParam6));
					fVar21 = func_137();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = (fVar20 + 0.0486f);
				Var22 = (fVar21 - 0.0505f);
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_88(&Var22, iParam24);
				func_69("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bVar9)
			{
				if (bParam17)
				{
					func_178(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20, &(Global_1378744.f_800[iParam0 /*2*/]), &(Global_1378744.f_821[iParam0 /*2*/]), fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37);
				}
				else
				{
					func_176(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, &(Global_1378744.f_800[iParam0 /*2*/]), &(Global_1378744.f_821[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37, fParam38);
				}
			}
			func_45();
		}
	}
}

void func_176(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, float fParam18, bool bParam19, int iParam20, int iParam21, float fParam22)
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam9 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		if (bParam10)
		{
			func_88(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_88(uParam2[3 /*9*/], iParam3);
		}
		if (iParam11 != 0 && iParam0 < iParam11)
		{
			func_88(uParam2[1 /*9*/], 6);
		}
		if (iParam15 > 0)
		{
			if (!func_66(uParam6))
			{
				func_65(uParam6, 0, 0);
			}
			else if (func_244(uParam6, iParam15, 0))
			{
				func_129(uParam6, 0, 0);
			}
			func_177(uParam2[1 /*9*/], iParam3, iParam14, iParam15, *uParam6);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam12 != -1f && fParam13 != -1f)
		{
			fVar19 = ((fParam12 / fParam13) * 100f);
		}
		else if (fParam12 != -1f && fParam13 == -1f)
		{
			fVar19 = ((fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam12 == -1f && fParam13 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam10)
		{
			func_88(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_88(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam16)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_117(*(uParam2[0 /*9*/]), fParam18, &Var20, 1, 1, uParam4, fParam22);
			func_88(&Var20, iParam17);
			Var20.f_7 = 255;
			if (iParam21 > 0)
			{
				if (!func_66(uParam7))
				{
					func_65(uParam7, 0, 0);
				}
				else if (func_244(uParam7, iParam21, 0))
				{
					func_129(uParam7, 0, 0);
				}
				func_177(&Var20, iParam17, iParam20, iParam21, *uParam7);
			}
			if (bParam19)
			{
				if (fVar19 <= fParam18)
				{
					Var20.f_7 = 100;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_69("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam9 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					sVar29 = "LineMarker90_128";
					switch (iParam9)
					{
						case 1:
							sVar29 = "LineMarker10_128";
							break;
						
						case 2:
							sVar29 = "LineMarker20_128";
							break;
						
						case 3:
							sVar29 = "LineMarker30_128";
							break;
						
						case 4:
							sVar29 = "LineMarker40_128";
							break;
						
						case 5:
							sVar29 = "LineMarker50_128";
							break;
						
						case 6:
							sVar29 = "LineMarker60_128";
							break;
						
						case 7:
							sVar29 = "LineMarker70_128";
							break;
						
						case 8:
							sVar29 = "LineMarker80_128";
							break;
						
						case 9:
							sVar29 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_88(uParam2[3 /*9*/], 2);
					func_69("timerbar_lines", sVar29, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_88(uParam2[3 /*9*/], 2);
					func_69("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam8 > 0 && fVar19 >= IntToFloat(iParam8))
		{
			func_88(uParam2[1 /*9*/], 6);
			func_117(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam8), uParam2[1 /*9*/], 1, 1, uParam4, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	
	iVar8 = func_169(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_7 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

void func_178(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, bool bParam16, int iParam17, int iParam18)
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam6 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		func_88(uParam2[3 /*9*/], iParam3);
		if (iParam12 > 0)
		{
			if (!func_66(uParam7))
			{
				func_65(uParam7, 0, 0);
			}
			else if (func_244(uParam7, iParam12, 0))
			{
				func_129(uParam7, 0, 0);
			}
			func_177(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam7);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam9 != -1f && fParam10 != -1f)
		{
			fVar19 = ((fParam9 / fParam10) * 100f);
		}
		else if (fParam9 != -1f && fParam10 == -1f)
		{
			fVar19 = ((fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam9 == -1f && fParam10 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_88(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam13)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_117(*(uParam2[0 /*9*/]), fParam15, &Var20, 1, 1, uParam4, 0);
			func_88(&Var20, iParam14);
			Var20.f_7 = 255;
			if (iParam18 > 0)
			{
				if (!func_66(uParam8))
				{
					func_65(uParam8, 0, 0);
				}
				else if (func_244(uParam8, iParam18, 0))
				{
					func_129(uParam8, 0, 0);
				}
				func_177(&Var20, iParam14, iParam17, iParam18, *uParam8);
			}
			if (bParam16)
			{
				if (fVar19 <= fParam15)
				{
					Var20.f_7 = 100;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_69("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam6 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				sVar29 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar29 = "LineMarker10_128";
						break;
					
					case 2:
						sVar29 = "LineMarker20_128";
						break;
					
					case 3:
						sVar29 = "LineMarker30_128";
						break;
					
					case 4:
						sVar29 = "LineMarker40_128";
						break;
					
					case 5:
						sVar29 = "LineMarker50_128";
						break;
					
					case 6:
						sVar29 = "LineMarker60_128";
						break;
					
					case 7:
						sVar29 = "LineMarker70_128";
						break;
					
					case 8:
						sVar29 = "LineMarker80_128";
						break;
					
					case 9:
						sVar29 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_88(uParam2[1 /*9*/], 2);
				func_69("timerbar_lines", sVar29, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_179(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_52(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam5, iParam6);
		}
	}
}

void func_180(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)
{
	float fVar0;
	
	fVar0 = func_140(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam6));
	func_136(uParam1, iParam3, fParam4, fParam5);
	if (!func_139(fParam4, fParam5))
	{
		func_92(iParam3, -fVar0);
	}
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_183(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar113;
	var uVar124;
	var uVar126;
	
	if (func_27(1, iParam0))
	{
		uVar13 = 11;
		func_184(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_184(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var9;
	struct<3> Var11;
	bool bVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;
	
	Global_1378744++;
	if (func_107())
	{
		if (iParam17 == 2)
		{
		}
		func_98(1, iParam0);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam13)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		func_105(&Var11, 0);
		Var11.f_2 = (Var11.f_2 + (0.166f + 0.095f));
		if (Global_1378744 == 1)
		{
			func_97(iParam9);
		}
		func_192(uParam5, 0, 0);
		func_99(uParam5);
		func_68(uParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0)
		{
			iVar23 = 1;
		}
		func_190(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar23);
		Var9 = *uParam2;
		Var9.f_1 = uParam2->f_1;
		Var9.f_1 = (Var9.f_1 + (-0.006f - 0.007f));
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		func_189(&Var11);
		if (iParam14 == 0)
		{
			func_188(iParam0);
		}
		if (iParam18 == 0)
		{
			func_187(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar24 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
			if (func_64(iParam14, &(Global_1378744.f_254[iParam0 /*2*/]), &(Global_1378744.f_275[iParam0 /*2*/])))
			{
				bVar22 = true;
			}
			else
			{
				bVar22 = false;
			}
			if (!func_139(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1378744.f_6361 = (Global_1378744.f_6361 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var25 = { Var0 };
					if (func_244(&(Global_1378744.f_1055[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_1378744.f_1055[iParam0 /*2*/], 1250, 0))
						{
							Global_1378744.f_1076[iParam0] = (Global_1378744.f_1076[iParam0] - 17);
						}
						Var25.f_7 = Global_1378744.f_1076[iParam0];
						func_88(&Var25, iParam11);
						func_69("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1378744.f_1076[iParam0] = 255;
					func_129(&(Global_1378744.f_1055[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_123(&Var0, iParam29);
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_89() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_89())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar24 = func_77();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
			if (!func_139(fParam15, fParam16))
			{
				func_68(uParam1, 0);
				if (bParam13 == 1)
				{
					func_58(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_120(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_55(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_55(&Var9, &Var11, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar22)
			{
				func_185(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar24, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_45();
		}
	}
}

void func_185(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_88(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_69("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_88(uParam2[iVar1 /*9*/], iParam5);
					func_69("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_155(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_88(uParam2[iVar1 /*9*/], 2);
						func_69("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_51(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_186(uParam3);
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_88(uParam2[0 /*9*/], iParam5);
				func_69("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_51(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_186(var uParam0)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_187(int iParam0)
{
	func_15(&(Global_1378744.f_716[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_737[iParam0 /*2*/]));
}

void func_188(int iParam0)
{
	func_15(&(Global_1378744.f_254[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_275[iParam0 /*2*/]));
	Global_1378744.f_1711.f_205[iParam0] = -1;
}

void func_189(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_96(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_140(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_93(uParam5));
	func_191(uParam2, iParam7, fParam8, fParam9);
	func_161(uParam6);
	if (!func_139(fParam8, fParam9))
	{
		func_92(iParam7, -fVar0);
	}
	func_106(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_191(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_163();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_192(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_193(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(5, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11, 255, 0, 0, 0, 0, 1, 0, 0, -1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(4, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, bParam11, iParam13, iParam14, 0, 0, bParam15, 0, 1, 0, 0, -1);
	}
}

void func_195(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_27(3, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0, iParam12, 255, 0, 0, 0, 0, 1, bParam13, iParam14, iParam15);
	}
}

void func_196(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar33;
	var uVar35;
	var uVar37;
	
	if (func_27(7, iParam0))
	{
		func_197(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)
{
	var uVar0;
	var uVar11;
	struct<9> Var13;
	bool bVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;
	
	Global_1378744++;
	if (iParam17 == 2)
	{
	}
	func_106(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_98(7, iParam0);
	if (bParam21)
	{
		func_105(uParam1, 0);
	}
	else if (bParam16)
	{
		func_141(uParam1, 3);
	}
	else if (func_89())
	{
		func_173(uParam1, 0);
	}
	else
	{
		func_105(uParam1, 0);
	}
	func_211(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_210(uParam3, 0);
				func_192(uParam2, 0, 0);
			}
			else
			{
				func_210(uParam3, 0);
				func_192(uParam2, 0, 5);
			}
			func_99(uParam2);
			func_99(uParam3);
			break;
		
		case 2:
			func_192(uParam2, 0, 0);
			func_99(&uVar0);
			func_99(uParam3);
			func_209(uParam2);
			break;
		
		case 3:
			func_192(uParam2, 0, 0);
			func_99(&uVar0);
			func_99(uParam3);
			func_209(uParam2);
			break;
		
		case 4:
			func_192(uParam3, 0, 0);
			if (bParam19)
			{
				func_192(uParam2, 0, 0);
			}
			else
			{
				func_192(uParam2, 0, 5);
			}
			func_99(uParam2);
			func_99(uParam3);
			break;
	}
	func_100(uParam1);
	if (Global_1378744.f_1130 == 0 && Global_1378744.f_1131 == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_89())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_1378744.f_1130 == 0 && Global_1378744.f_1131 == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_89())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_1378744 == 1)
	{
		func_97(iParam8);
	}
	func_208(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
	func_90(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_207(iParam0);
	}
	if (iParam18 == 0)
	{
		func_206(iParam0);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		iVar23 = func_77();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
		if (func_64(iParam14, &(Global_1378744.f_170[iParam0 /*2*/]), &(Global_1378744.f_191[iParam0 /*2*/])))
		{
			bVar22 = true;
		}
		else
		{
			bVar22 = false;
		}
		Var13 = *uParam4;
		Var13.f_1 = uParam4->f_1;
		if (Global_1378744.f_1123 == 1)
		{
			Var13 = (Var13 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 2:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 3:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 4:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
		}
		Var24 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_89())
		{
			Var24.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var24.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var24.f_2 = (0.016f + 0.003f);
		Var24.f_3 = (0.032f + 0.004f);
		Var24.f_7 = 255;
		func_88(&Var24, 1);
		Var24 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_89())
		{
			Var24 = (Var24 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var24.f_3 = (Var24.f_3 + -0.009f);
				Var24.f_2 = (Var24.f_2 + -0.002f);
				if (func_89())
				{
					Var24.f_1 = (Var24.f_1 + 0.0055f);
				}
				else
				{
					Var24.f_1 = (Var24.f_1 + 0.0025f);
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
				{
					func_69("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_69("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_69("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_69("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_88(&Var24, 18);
					func_69("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_88(&Var24, 6);
					func_69("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_88(&Var24, 118);
					func_69("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
				}
				break;
		}
		if (func_89())
		{
			Var13 = (Var13 + -0.025f);
			Var13.f_2 = (Var13.f_2 + 0.05f);
		}
		Global_1378744.f_6361 = (Global_1378744.f_6361 + Var13.f_3);
		if (Global_1378744.f_1123 == 0)
		{
			if (iParam18 > 0)
			{
				Var33 = { Var13 };
				if (func_244(&(Global_1378744.f_991[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_1378744.f_991[iParam0 /*2*/], 1250, 0))
					{
						Global_1378744.f_1012[iParam0] = (Global_1378744.f_1012[iParam0] - 17);
					}
					Var33.f_7 = Global_1378744.f_1012[iParam0];
					if (iParam17 == 2)
					{
						func_88(&Var33, 6);
					}
					else if (iParam17 == 3)
					{
						func_88(&Var33, 18);
					}
					else
					{
						func_88(&Var33, iParam12);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1378744.f_1012[iParam0] = 255;
				func_129(&(Global_1378744.f_991[iParam0 /*2*/]), 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_123(&Var13, iParam22);
		if (bParam16)
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_89())
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar23 = func_77();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
		func_90(uParam1, iParam20);
		if (Global_1378744.f_1123 == 0)
		{
			func_68(uParam1, 0);
			if (func_57(sParam11) == 0)
			{
				if (bParam21 == 1)
				{
					func_58(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_58(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_120(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_55(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (bVar22)
		{
			if (iParam9 == 0)
			{
				func_205(iParam0);
			}
			if (iParam9 != 0 && func_244(&(Global_1378744.f_4573.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_204(uParam3);
						func_203(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_202(uParam3);
					}
					else
					{
						func_201(uParam3);
						func_203(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_202(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_201(uParam3);
					func_203(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_202(uParam3);
				}
				else
				{
					func_204(uParam3);
					func_203(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_202(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_200(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_199(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_198(uParam2);
					}
				}
				if (Global_1378744.f_1123 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
				func_68(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_203(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_203(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_120(&uVar11, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_120(&uVar11, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_203(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_203(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_45();
	}
}

void func_198(var uParam0)
{
	func_122(uParam0, 109);
}

void func_199(var uParam0)
{
	func_122(uParam0, 108);
}

void func_200(var uParam0)
{
	func_122(uParam0, 107);
}

void func_201(var uParam0)
{
	func_122(uParam0, 6);
}

void func_202(var uParam0)
{
	func_122(uParam0, 1);
}

void func_203(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	char* sVar0;
	
	if (func_49())
	{
		func_68(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
		if (func_57(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_48(*uParam0), func_47(uParam0->f_1), 0);
	}
}

void func_204(var uParam0)
{
	func_122(uParam0, 18);
}

void func_205(int iParam0)
{
	func_15(&(Global_1378744.f_4573.f_336[iParam0 /*2*/]));
}

void func_206(int iParam0)
{
	func_15(&(Global_1378744.f_632[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_653[iParam0 /*2*/]));
}

void func_207(int iParam0)
{
	func_15(&(Global_1378744.f_170[iParam0 /*2*/]));
	func_15(&(Global_1378744.f_191[iParam0 /*2*/]));
}

void func_208(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_93(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_93(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_92(iParam4, -fVar0);
}

void func_209(var uParam0)
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_222(iParam0))
	{
		iVar1 = 2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (Global_1373210[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			func_196(iParam1, Global_1378744.f_4573[iParam1], &(Global_1378744.f_4573.f_11[iParam1 /*16*/]), Global_1378744.f_4573.f_172[iParam1], Global_1378744.f_4573.f_194[iParam1], Global_1378744.f_4573.f_216[iParam1], Global_1378744.f_4573.f_205[iParam1], Global_1378744.f_4573.f_183[iParam1], Global_1378744.f_4573.f_227[iParam1], Global_1378744.f_4573.f_260[iParam1], Global_1378744.f_4573.f_314[iParam1], Global_1378744.f_4573.f_325[iParam1], Global_1378744.f_4573.f_357[iParam1], Global_1378744.f_4573.f_238[iParam1], Global_1378744.f_4573.f_271[iParam1], Global_1378744.f_4573.f_368[iParam1], Global_1378744.f_4573.f_379[iParam1], Global_1378744.f_4573.f_390[iParam1]);
			break;
		
		case 3:
			func_195(iParam1, Global_1378744.f_2775[iParam1], &(Global_1378744.f_2775.f_11[iParam1 /*16*/]), Global_1378744.f_2775.f_183[iParam1], Global_1378744.f_2775.f_172[iParam1], Global_1378744.f_2775.f_194[iParam1], Global_1378744.f_2775.f_216[iParam1], &(Global_1378744.f_2775.f_259[iParam1 /*16*/]), Global_1378744.f_2775.f_420[iParam1], Global_1378744.f_2775.f_453[iParam1], Global_1378744.f_2775.f_431[iParam1], Global_1378744.f_2775.f_442[iParam1], Global_1378744.f_2775.f_464[iParam1], Global_1378744.f_2775.f_475[iParam1], Global_1378744.f_2775.f_486[iParam1], Global_1378744.f_2775.f_497[iParam1]);
			break;
		
		case 4:
			func_194(iParam1, Global_1378744.f_3283[iParam1], Global_1378744.f_3283.f_172[iParam1], &(Global_1378744.f_3283.f_11[iParam1 /*16*/]), Global_1378744.f_3283.f_194[iParam1], Global_1378744.f_3283.f_183[iParam1], Global_1378744.f_3283.f_205[iParam1], Global_1378744.f_3283.f_227[iParam1], Global_1378744.f_3283.f_270[iParam1], Global_1378744.f_3283.f_281[iParam1], Global_1378744.f_3283.f_292[iParam1], Global_1378744.f_3283.f_303[iParam1], Global_1378744.f_3283.f_314[iParam1], Global_1378744.f_3283.f_325[iParam1], Global_1378744.f_3283.f_336[iParam1], Global_1378744.f_3283.f_347[iParam1]);
			break;
		
		case 5:
			func_193(iParam1, Global_1378744.f_3641[iParam1], Global_1378744.f_3641.f_172[iParam1], &(Global_1378744.f_3641.f_11[iParam1 /*16*/]), Global_1378744.f_3641.f_194[iParam1], Global_1378744.f_3641.f_183[iParam1], Global_1378744.f_3641.f_205[iParam1], Global_1378744.f_3641.f_227[iParam1], Global_1378744.f_3641.f_270[iParam1], Global_1378744.f_3641.f_281[iParam1], Global_1378744.f_3641.f_292[iParam1], Global_1378744.f_3641.f_303[iParam1]);
			break;
		
		case 1:
			func_183(iParam1, Global_1378744.f_1711[iParam1], Global_1378744.f_1711.f_11[iParam1], &(Global_1378744.f_1711.f_22[iParam1 /*16*/]), Global_1378744.f_1711.f_194[iParam1], Global_1378744.f_1711.f_205[iParam1], Global_1378744.f_1711.f_258[iParam1], Global_1378744.f_1711.f_183[iParam1], Global_1378744.f_1711.f_227[iParam1 /*3*/], Global_1378744.f_1711.f_227[iParam1 /*3*/].f_1, Global_1378744.f_1711.f_312[iParam1], Global_1378744.f_1711.f_323[iParam1], Global_1378744.f_1711.f_269[iParam1], Global_2550199[iParam1], Global_2550210[iParam1], Global_2550221[iParam1], Global_2550232[iParam1], Global_2550243[iParam1], Global_2550254[iParam1], Global_2550265[iParam1], Global_2550276[iParam1], Global_1378744.f_1711.f_334[iParam1]);
			break;
		
		case 0:
			func_174(iParam1, Global_1378744.f_1135[iParam1], Global_1378744.f_1135.f_11[iParam1], &(Global_1378744.f_1135.f_22[iParam1 /*16*/]), Global_1378744.f_1135.f_194[iParam1], Global_1378744.f_1135.f_183[iParam1], Global_1378744.f_1135.f_227[iParam1 /*3*/], Global_1378744.f_1135.f_227[iParam1 /*3*/].f_1, Global_1378744.f_1135.f_258[iParam1], Global_1378744.f_1135.f_205[iParam1], Global_1378744.f_1135.f_269[iParam1], Global_1378744.f_1135.f_312[iParam1], Global_1378744.f_1135.f_323[iParam1], Global_1378744.f_1135.f_334[iParam1], Global_1378744.f_1135.f_345[iParam1], Global_1378744.f_1135.f_356[iParam1], Global_1378744.f_1135.f_367[iParam1], Global_1378744.f_1135.f_378[iParam1], Global_1378744.f_1135.f_389[iParam1], Global_1378744.f_1135.f_400[iParam1], Global_1378744.f_1135.f_411[iParam1], Global_1378744.f_1135.f_422[iParam1], Global_1378744.f_1135.f_433[iParam1], Global_1378744.f_1135.f_444[iParam1], Global_1378744.f_1135.f_455[iParam1], Global_1378744.f_1135.f_466[iParam1], Global_1378744.f_1135.f_477[iParam1], Global_1378744.f_1135.f_488[iParam1], Global_1378744.f_1135.f_499[iParam1], Global_1378744.f_1135.f_510[iParam1], Global_1378744.f_1135.f_521[iParam1], Global_1378744.f_1135.f_532[iParam1], Global_1378744.f_1135.f_543[iParam1], Global_1378744.f_1135.f_554[iParam1], Global_1378744.f_1135.f_565[iParam1]);
			break;
		
		case 6:
			func_164(iParam1, Global_1378744.f_3955[iParam1], &(Global_1378744.f_3955.f_11[iParam1 /*16*/]), Global_1378744.f_3955.f_183[iParam1], Global_1378744.f_3955.f_172[iParam1], Global_1378744.f_3955.f_194[iParam1], Global_1378744.f_3955.f_271[iParam1], &(Global_1378744.f_3955.f_282[iParam1 /*16*/]), Global_1378744.f_3955.f_443[iParam1], Global_1378744.f_3955.f_454[iParam1], Global_1378744.f_3955.f_497[iParam1], Global_1378744.f_3955.f_508[iParam1], Global_1378744.f_3955.f_205[iParam1], Global_1378744.f_3955.f_216[iParam1], Global_1378744.f_3955.f_227[iParam1], Global_1378744.f_3955.f_238[iParam1], Global_1378744.f_3955.f_249[iParam1], Global_1378744.f_3955.f_519[iParam1], Global_1378744.f_3955.f_530[iParam1], Global_1378744.f_3955.f_541[iParam1], Global_1378744.f_3955.f_552[iParam1], Global_1378744.f_3955.f_563[iParam1], Global_1378744.f_3955.f_574[iParam1], Global_1378744.f_3955.f_585[iParam1], Global_1378744.f_3955.f_596[iParam1], Global_1378744.f_3955.f_607[iParam1]);
			break;
		
		case 2:
			func_152(iParam1, Global_1378744.f_2056[iParam1], &(Global_1378744.f_2056.f_99[iParam1 /*16*/]), Global_1378744.f_2056.f_282[iParam1], Global_1378744.f_2056.f_293[iParam1], Global_1378744.f_2056.f_260[iParam1], Global_1378744.f_2056.f_11[iParam1], Global_1378744.f_2056.f_22[iParam1], Global_1378744.f_2056.f_33[iParam1], Global_1378744.f_2056.f_44[iParam1], Global_1378744.f_2056.f_55[iParam1], Global_1378744.f_2056.f_66[iParam1], Global_1378744.f_2056.f_77[iParam1], Global_1378744.f_2056.f_88[iParam1], Global_1378744.f_2056.f_271[iParam1], Global_1378744.f_2056.f_304[iParam1], Global_1378744.f_2056.f_357[iParam1], Global_1378744.f_2056.f_326[iParam1 /*3*/], Global_1378744.f_2056.f_326[iParam1 /*3*/].f_1, Global_1378744.f_2056.f_368[iParam1], Global_1378744.f_2056.f_379[iParam1], Global_1378744.f_2056.f_390[iParam1], Global_1378744.f_2056.f_401[iParam1], Global_1378744.f_2056.f_412[iParam1], Global_1378744.f_2056.f_423[iParam1], Global_1378744.f_2056.f_434[iParam1], Global_1378744.f_2056.f_445[iParam1], Global_1378744.f_2056.f_456[iParam1], Global_1378744.f_2056.f_467[iParam1], Global_1378744.f_2056.f_478[iParam1], Global_1378744.f_2056.f_489[iParam1], Global_1378744.f_2056.f_500[iParam1], Global_1378744.f_2056.f_511[iParam1], Global_1378744.f_2056.f_522[iParam1], Global_1378744.f_2056.f_533[iParam1], Global_1378744.f_2056.f_587[iParam1], Global_1378744.f_2056.f_598[iParam1], Global_1378744.f_2056.f_544[iParam1], Global_2550287[iParam1], Global_2550298[iParam1], Global_2550309[iParam1], Global_2550320[iParam1], Global_2550331[iParam1], Global_2550342[iParam1], Global_2550353[iParam1], Global_2550364[iParam1], Global_1378744.f_2056.f_609[iParam1], Global_1378744.f_2056.f_620[iParam1], Global_1378744.f_2056.f_631[iParam1], Global_1378744.f_2056.f_642[iParam1], Global_1378744.f_2056.f_653[iParam1], Global_1378744.f_2056.f_664[iParam1], Global_1378744.f_2056.f_675[iParam1], Global_1378744.f_2056.f_686[iParam1], Global_1378744.f_2056.f_697[iParam1], Global_1378744.f_2056.f_708[iParam1]);
			break;
		
		case 8:
			func_149(iParam1, &(Global_1378744.f_4974.f_11[iParam1 /*16*/]), Global_1378744.f_4974[iParam1], Global_1378744.f_4974.f_172[iParam1], Global_1378744.f_4974.f_183[iParam1], Global_1378744.f_4974.f_194[iParam1], Global_1378744.f_4974.f_205[iParam1]);
			break;
		
		case 9:
			func_143(iParam1, Global_1378744.f_5201[iParam1], Global_1378744.f_5201.f_11[iParam1]);
			break;
		
		case 10:
			func_112(iParam1, Global_1378744.f_5234.f_6[iParam1], Global_1378744.f_5234.f_17[iParam1], &(Global_1378744.f_5234.f_28[iParam1 /*16*/]), Global_1378744.f_5234.f_200[iParam1], Global_1378744.f_5234.f_189[iParam1], Global_1378744.f_5234.f_233[iParam1], Global_1378744.f_5234.f_211[iParam1], Global_1378744.f_5234.f_244[iParam1], Global_1378744.f_5234.f_287[iParam1], Global_1378744.f_5234.f_298[iParam1], &(Global_1378744.f_5234.f_309[iParam1 /*16*/]), &(Global_1378744.f_5234), Global_1378744.f_5234.f_470[iParam1], Global_1378744.f_5234.f_481[iParam1], Global_1378744.f_5234.f_492[iParam1]);
			break;
		
		case 11:
			func_108(iParam1, Global_1378744.f_5737[iParam1], Global_1378744.f_5737.f_11[iParam1], Global_1378744.f_5737.f_22[iParam1], Global_1378744.f_5737.f_33[iParam1], Global_1378744.f_5737.f_44[iParam1], Global_1378744.f_5737.f_55[iParam1], Global_1378744.f_5737.f_66[iParam1], Global_1378744.f_5737.f_77[iParam1], Global_1378744.f_5737.f_88[iParam1], Global_1378744.f_5737.f_110[iParam1], Global_1378744.f_5737.f_121[iParam1], Global_1378744.f_5737.f_132[iParam1], Global_1378744.f_5737.f_143[iParam1], Global_1378744.f_5737.f_154[iParam1]);
			break;
		
		case 12:
			func_43(iParam1, Global_1378744.f_5902[iParam1], Global_1378744.f_5902.f_22[iParam1], &(Global_1378744.f_5902.f_33[iParam1 /*6*/]), Global_1378744.f_5902.f_94[iParam1], Global_1378744.f_5902.f_11[iParam1], Global_1378744.f_5902.f_105[iParam1], Global_1378744.f_5902.f_116[iParam1], Global_1378744.f_5902.f_127[iParam1], Global_1378744.f_5902.f_138[iParam1], Global_1378744.f_5902.f_149[iParam1], Global_1378744.f_5902.f_160[iParam1], Global_1378744.f_5902.f_171[iParam1], Global_1378744.f_5902.f_182[iParam1], Global_1378744.f_5902.f_193[iParam1], Global_1378744.f_5902.f_204[iParam1], Global_1378744.f_5902.f_215[iParam1], Global_1378744.f_5902.f_226[iParam1], Global_1378744.f_5902.f_248[iParam1], Global_1378744.f_5902.f_259[iParam1], Global_1378744.f_5902.f_270[iParam1], Global_1378744.f_5902.f_281[iParam1], Global_1378744.f_5902.f_292[iParam1], Global_1378744.f_5902.f_303[iParam1], Global_1378744.f_5902.f_314[iParam1], Global_1378744.f_5902.f_325[iParam1], Global_1378744.f_5902.f_336[iParam1], Global_1378744.f_5902.f_347[iParam1], Global_1378744.f_5902.f_358[iParam1], Global_1378744.f_5902.f_369[iParam1], Global_1378744.f_5902.f_380[iParam1], Global_1378744.f_5902.f_391[iParam1]);
			break;
	}
}

void func_214(bool bParam0)
{
	if (func_215())
	{
		if (bParam0)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		}
		else
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		}
	}
}

int func_215()
{
	if (func_216(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (func_217(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_217(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196;
}

int func_218(int iParam0)
{
	if (Global_2464021 == 1)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_1378744.f_1124 == 0) && Global_1378744.f_1125 == 0)
	{
		if (func_219())
		{
			return 0;
		}
	}
	return 1;
}

int func_219()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_220())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_220()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	return Global_30968;
}

bool func_222(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 13);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 7:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 3;
		
		case 1:
			return 4;
		
		case 0:
			return 5;
		
		case 6:
			return 6;
		
		case 2:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

int func_224(int iParam0)
{
	if (func_225(iParam0))
	{
		return Global_1373210[iParam0];
	}
	return -1;
}

bool func_225(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 2);
}

int func_226(int iParam0)
{
	if (func_225(iParam0))
	{
		return Global_1373210[iParam0] != -1;
	}
	return 0;
}

int func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1378744.f_6318[iVar0] != Global_1378744.f_6304[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1378744.f_6360)
	{
		Global_1378744.f_6360 = 0;
		return 1;
	}
	return 0;
}

void func_228()
{
	Global_1378744.f_6360 = 1;
}

int func_229(int iParam0)
{
	if (func_231(iParam0, 0))
	{
		return 1;
	}
	if (func_230())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_230()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_231(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_232(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
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

int func_232(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_233();
	}
	if (Global_1312876[iVar1] == 1)
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

int func_233()
{
	return Global_1312763;
}

int func_234()
{
	if (Global_1312385)
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (HUD::_IS_MULTIPLAYER_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_1672612.f_4)
	{
		return 0;
	}
	if (Global_1378744.f_1127 || Global_1378744.f_1128)
	{
		if (Global_1378744.f_1129 == 0)
		{
			if (func_238(PLAYER::PLAYER_PED_ID()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (func_50())
	{
		if (Global_1378744.f_1129 == 0)
		{
			if (func_238(PLAYER::PLAYER_PED_ID()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (Global_2464716)
	{
		return 0;
	}
	if (Global_1315709)
	{
		return 0;
	}
	if (func_236())
	{
		if (Global_1378744.f_1129 == 0)
		{
			if (func_238(PLAYER::PLAYER_PED_ID()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (Global_22411.f_4 && func_216(PLAYER::PLAYER_ID()) == 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1378744.f_1129 == 0)
	{
		if (func_238(PLAYER::PLAYER_PED_ID()))
		{
			func_237();
		}
	}
	if (func_235(8, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == 0)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_226 != 99)
		{
			if (((NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == 0 && Global_1574407 == 0) && !MISC::IS_BIT_SET(Global_2440277.f_2005.f_756, 11)) && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 0)
			{
				return 0;
			}
		}
	}
	if (MISC::IS_BIT_SET(Global_2359302, 11))
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

int func_236()
{
	if (Global_1654381)
	{
		return 1;
	}
	return 0;
}

void func_237()
{
	Global_1378744.f_1129 = 1;
}

int func_238(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_239()
{
	int iVar0;
	
	if (func_242(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0))
			{
				func_15(&(Global_1378744.f_2056.f_555[iVar0 /*2*/]));
			}
			else if (func_244(&(Global_1378744.f_2056.f_555[iVar0 /*2*/]), Global_1378744.f_2056.f_576[iVar0], 0) == 0)
			{
				Global_1378744.f_1 = 1;
				func_241(2, iVar0);
			}
			else
			{
				func_240(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_240(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_1378744.f_6346[iParam0]), iParam1);
}

void func_241(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6304[iParam0]), iParam1);
}

int func_242(int iParam0)
{
	if (Global_1378744.f_6346[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

int func_244(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_65(uParam0, bParam2, 0);
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

