#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<3> Local_20 = { 0, 0, 0 } ;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	struct<5> Local_28 = { 0, 0, 0, 0, 31 } ;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<15> Local_74 = { 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153[4] = { 0, 0, 0, 0 };
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 10;
	var uLocal_170 = -1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = -1;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = -1;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = -1;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = -1;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = -1;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = -1;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = -1;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = -1;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.54.07";
	iLocal_24 = -1;
	iLocal_25 = -1;
	iLocal_149 = -1;
	iLocal_375 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315828 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	func_261();
	while (true)
	{
		if (func_260())
		{
			func_258();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2460706.f_3)
		{
			func_257();
			func_256();
			func_255();
			func_252();
			func_250();
			func_249();
			func_247();
			func_244();
			func_242();
			func_241();
			func_228();
			func_226();
			func_225();
			func_224();
			func_216();
			func_199();
			func_195();
			func_188();
			func_185();
			func_184();
			func_182();
			func_176();
			func_164();
			func_163();
			func_161();
			func_159();
			func_156();
			func_155();
			func_148();
			func_141();
			func_137();
			func_136();
			func_131();
			func_130();
			func_123();
			func_114();
			func_108();
			func_106();
			func_102();
			func_101();
			func_97();
			func_95();
			func_93();
			func_89();
			func_82();
			func_80();
			func_75();
			if (MISC::IS_PC_VERSION())
			{
				func_74();
				func_70();
				func_66();
			}
			func_63();
			func_62();
			func_40();
			func_35();
			func_31();
			func_28();
			func_27();
		}
		else
		{
			func_26(&uLocal_376);
			iLocal_378 = 0;
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_25();
			func_24();
			func_16();
			func_9();
			func_6();
			func_3();
			func_2();
		}
		else
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!Global_2452015.f_23)
	{
		if (iLocal_140)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iLocal_107[iVar0] = 0;
				iVar0++;
			}
			iLocal_140 = 0;
		}
		if (iLocal_68)
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iLocal_64[iVar1] = 0;
				iVar1++;
			}
			iLocal_68 = 0;
		}
	}
}

void func_2()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_race_controler")) <= 0)
	{
		return;
	}
	if (Global_4456448.f_82708 != -2069323509)
	{
		return;
	}
	if ((Global_4456448.f_74281 - 1) < 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_4456448.f_69433[(Global_4456448.f_74281 - 1)], 9))
	{
		MISC::SET_BIT(&(Global_4456448.f_69433[(Global_4456448.f_74281 - 1)]), 9);
	}
}

void func_3()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (func_5(PLAYER::PLAYER_ID()))
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
							if (func_4(Var67, 1707f, 2520f, 45f, 5f, 0))
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

int func_4(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

bool func_5(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 2;
}

void func_6()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	
	if (!func_8())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_119[iLocal_141]) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Global_969055.f_119[iLocal_141]))
	{
		if (MISC::IS_BIT_SET(iLocal_142, iLocal_141))
		{
		}
		else
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(Global_969055.f_119[iLocal_141]);
			if (func_7(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_969055.f_119[iLocal_141]))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(Global_969055.f_119[iLocal_141], true) };
					iVar4 = 0;
					while (iVar4 <= 31)
					{
						Var5 = { Global_4718592.f_4797[iVar4 /*280*/] };
						if (func_4(Var1, Var5, 5f, 1) && Global_4718592.f_4797[iVar4 /*280*/].f_15 == iVar0)
						{
							if (MISC::IS_BIT_SET(Global_4718592.f_4797[iVar4 /*280*/].f_87, 4))
							{
								ENTITY::SET_ENTITY_COORDS(Global_969055.f_119[iLocal_141], Var5, true, false, false, true);
							}
							MISC::SET_BIT(&iLocal_142, iLocal_141);
						}
						iVar4++;
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_142, iLocal_141))
	{
		MISC::CLEAR_BIT(&iLocal_142, iLocal_141);
	}
	iLocal_141++;
	if (iLocal_141 >= 32)
	{
		iLocal_141 = 0;
	}
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bkr_prop_coke_boxeddoll"):
		case joaat("bkr_prop_weed_bigbag_01a"):
		case joaat("hei_prop_hei_drug_pack_01a"):
		case joaat("prop_cs_duffel_01"):
		case joaat("bkr_prop_meth_smallbag_01a"):
		case joaat("prop_ld_scrap"):
		case joaat("prop_money_bag_01"):
			return 1;
		
		default:
	}
	return 0;
}

int func_8()
{
	switch (Global_4456448.f_82708)
	{
		case 9278650:
		case -234846869:
		case 1940037361:
			return 1;
		
		default:
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	if (func_15(Global_4456448.f_82708) && func_14() == 26)
	{
		if (!iLocal_143)
		{
			iVar0 = func_10();
			if (iVar0 != -1)
			{
				Global_1704028.f_6 = Global_1706031[iVar0 /*53*/].f_5.f_6;
				Global_1704028.f_7 = Global_1706031[iVar0 /*53*/].f_5.f_7;
				Global_1704028.f_8 = Global_1706031[iVar0 /*53*/].f_5.f_8;
			}
			iLocal_143 = 1;
		}
	}
	else if (iLocal_143)
	{
		iLocal_143 = 0;
	}
}

int func_10()
{
	var uVar0;
	struct<13> Var1;
	
	Var1 = { func_11(&uVar0) };
	return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var1);
}

struct<13> func_11(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	struct<13> Var14;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(iVar0))
		{
			*uParam0 = 0;
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				Var1 = { func_12(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&Var1, 13))
				{
					if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2452907.f_1.f_845[iVar0 /*57*/]), 13))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2452907.f_1.f_845[iVar0 /*57*/]), &Var1))
						{
							*uParam0 = 1;
						}
					}
				}
			}
			return Global_2452907.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var14;
}

struct<13> func_12(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_13(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2452907.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_14()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29188[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (!Global_2452015.f_23)
	{
		return;
	}
	if (Global_969017.f_1 != 6)
	{
		return;
	}
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11 != PLAYER::PLAYER_ID())
	{
		return;
	}
	iLocal_140 = 1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		func_17(iVar0);
		iVar0++;
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<21> Var3;
	
	iVar0 = SCRIPT::GET_EVENT_AT_INDEX(1, iParam0);
	if (iVar0 == 174)
	{
		SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar1, 2);
		switch (iVar1)
		{
			case 535012684:
				func_23(iParam0);
				break;
			
			case -1916698999:
				func_22(iParam0);
				break;
			
			case 1830665727:
				func_21(iParam0);
				break;
		}
	}
	else if (iVar0 == 154)
	{
		Var3.f_20 = 20;
		SCRIPT::GET_EVENT_DATA(1, iParam0, &Var3, 56);
		func_18(iLocal_107[Var3.f_16], 500);
	}
}

void func_18(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0 = 1830665727;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar4 = func_19(1);
	if (!iVar4 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar4);
	}
}

var func_19(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				MISC::SET_BIT(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
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

void func_21(int iParam0)
{
	struct<3> Var0;
	
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] - Var0.f_2);
}

void func_22(int iParam0)
{
	struct<3> Var0;
	
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] + Var0.f_2);
}

void func_23(int iParam0)
{
	struct<3> Var0;
	
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] + Var0.f_2);
}

void func_24()
{
	if (!Global_2452015.f_23)
	{
		return;
	}
	if (Global_2452907.f_6238)
	{
		return;
	}
	if (Global_2452907.f_6634.f_13.f_1 > 0)
	{
		Global_2452907.f_6238 = 1;
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if (MISC::IS_BIT_SET(Global_4718592.f_70220[iVar0 /*636*/].f_296, 22))
		{
			iVar1 = Global_969055.f_152[iVar0];
			if (PED::IS_PED_INJURED(iVar1))
			{
				MISC::CLEAR_BIT(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				MISC::CLEAR_BIT(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (MISC::IS_BIT_SET(iLocal_64[(iVar0 / 32)], (iVar0 % 32)))
			{
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 245, true);
				MISC::SET_BIT(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
				iLocal_68 = 1;
			}
		}
		iVar0++;
	}
}

void func_26(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_27()
{
	if (!iLocal_379)
	{
		if ((((Global_2540612.f_930 || Global_2540612.f_942) || Global_2540612.f_918) || Global_2540612.f_922) || Global_2540612.f_910)
		{
			MISC::SET_BIT(&(Global_2540612.f_4655), 0);
			iLocal_379 = 1;
		}
	}
	else if ((((!Global_2540612.f_930 && !Global_2540612.f_942) && !Global_2540612.f_918) && !Global_2540612.f_922) && !Global_2540612.f_910)
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_4655), 0);
		iLocal_379 = 0;
	}
}

void func_28()
{
	if (!func_29())
	{
		if (Global_1678257)
		{
			Global_1678257 = 0;
		}
		if (Global_1678258)
		{
			Global_1678258 = 0;
		}
		if (Global_1678269)
		{
			Global_1678269 = 0;
		}
	}
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
	return Global_1312485.f_18;
}

void func_31()
{
	if (!STREAMING::IS_IPL_ACTIVE("hei_ch3_12"))
	{
		if (func_29() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!iLocal_378)
			{
				if (!func_34(&uLocal_376))
				{
					func_33(&uLocal_376, 1, 0);
				}
				else if (func_32(&uLocal_376, 10000, 1))
				{
					iLocal_378 = 1;
					NETWORK::NETWORK_BAIL(1, 0, 0);
				}
			}
		}
	}
	else
	{
		func_26(&uLocal_376);
		iLocal_378 = 0;
	}
}

int func_32(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_33(uParam0, bParam2, 0);
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

void func_33(var uParam0, bool bParam1, bool bParam2)
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

bool func_34(var uParam0)
{
	return uParam0->f_1;
}

void func_35()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if ((((!CAM::IS_GAMEPLAY_CAM_RENDERING() && (func_39() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 122, false, 0)) && func_29()) && func_37(PLAYER::PLAYER_ID()) == -1)
	{
		if ((func_20(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_36(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) == -940725565)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
}

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_37(int iParam0)
{
	if (iParam0 != func_38() && func_20(iParam0, 1, 1))
	{
		return Global_2426097[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_38()
{
	return -1;
}

bool func_39()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_40()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_262145.f_29177 != 0)
	{
		iVar1 = func_59(9360, -1, -1);
		if (iVar1 == Global_262145.f_29177)
		{
			if (!iLocal_375)
			{
				bVar0 = true;
				iLocal_375 = 1;
			}
		}
		else if (iLocal_375)
		{
			iLocal_375 = 0;
		}
		if (!bVar0)
		{
			return;
		}
		iVar2 = func_58(9507, -1, 0);
		if (func_57())
		{
			if (func_58(9485, -1, 0) == 5 && MISC::IS_BIT_SET(func_58(9507, -1, 0), 0))
			{
				if (!MISC::IS_BIT_SET(iVar2, 1))
				{
					MISC::SET_BIT(&iVar2, 1);
				}
				else if (!MISC::IS_BIT_SET(iVar2, 3))
				{
					MISC::SET_BIT(&iVar2, 3);
				}
				MISC::SET_BIT(&(Global_2540612.f_1796), 20);
				func_54();
				func_52(9505, (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_29170), -1, 1, 0);
				func_52(9506, (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_29171), -1, 1, 0);
				MISC::CLEAR_BIT(&iVar2, 14);
				func_52(9507, iVar2, -1, 1, 0);
				func_46(1);
			}
		}
		else if (func_43(0))
		{
			if (iVar1 > 1)
			{
				iVar1 = (iVar1 - 1);
				func_41(9360, iVar1, -1, 1);
			}
			else
			{
				iVar1 = 0;
				func_41(9360, iVar1, -1, 1);
			}
			if (!MISC::IS_BIT_SET(iVar2, 2))
			{
				MISC::SET_BIT(&iVar2, 2);
			}
			else if (!MISC::IS_BIT_SET(iVar2, 4))
			{
				MISC::SET_BIT(&iVar2, 4);
			}
			func_52(9507, iVar2, -1, 1, 0);
			iLocal_375 = 0;
		}
	}
}

bool func_41(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_42();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_42()
{
	return Global_1312763;
}

bool func_43(bool bParam0)
{
	return func_44(PLAYER::PLAYER_ID(), bParam0);
}

bool func_44(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_45(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_38();
}

int func_45(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_38())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_46(bool bParam0)
{
	int iVar0;
	struct<46> Var1;
	
	func_52(9522, 0, -1, 1, 0);
	func_52(9480, 0, -1, 1, 0);
	func_52(9486, 0, -1, 1, 0);
	func_52(9487, 0, -1, 1, 0);
	func_52(9488, 0, -1, 1, 0);
	func_52(9481, 0, -1, 1, 0);
	func_52(9482, 0, -1, 1, 0);
	func_52(9483, 0, -1, 1, 0);
	func_52(9484, 0, -1, 1, 0);
	func_52(9485, 0, -1, 1, 0);
	func_52(9489, 0, -1, 1, 0);
	func_52(9491, 0, -1, 1, 0);
	func_52(9514, 0, -1, 1, 0);
	func_52(9492, 0, -1, 1, 0);
	func_52(9515, 0, -1, 1, 0);
	func_52(9493, 0, -1, 1, 0);
	func_52(9494, 0, -1, 1, 0);
	func_52(9516, 0, -1, 1, 0);
	func_52(9495, 0, -1, 1, 0);
	func_52(9517, 0, -1, 1, 0);
	func_52(9496, 0, -1, 1, 0);
	func_52(9497, 0, -1, 1, 0);
	func_52(9518, 0, -1, 1, 0);
	func_52(9498, 0, -1, 1, 0);
	func_52(9519, 0, -1, 1, 0);
	func_52(9499, 0, -1, 1, 0);
	func_52(9500, 0, -1, 1, 0);
	func_52(9520, 0, -1, 1, 0);
	func_52(9501, 0, -1, 1, 0);
	func_52(9521, 0, -1, 1, 0);
	func_52(9502, 0, -1, 1, 0);
	func_52(9503, 0, -1, 1, 0);
	func_52(9539, 0, -1, 1, 0);
	func_52(9504, 0, -1, 1, 0);
	iVar0 = func_58(9478, -1, 0);
	MISC::CLEAR_BIT(&iVar0, 0);
	MISC::CLEAR_BIT(&iVar0, 1);
	MISC::CLEAR_BIT(&iVar0, 2);
	MISC::CLEAR_BIT(&iVar0, 3);
	MISC::CLEAR_BIT(&iVar0, 4);
	MISC::CLEAR_BIT(&iVar0, 5);
	MISC::CLEAR_BIT(&iVar0, 6);
	MISC::CLEAR_BIT(&iVar0, 7);
	MISC::CLEAR_BIT(&iVar0, 8);
	MISC::CLEAR_BIT(&iVar0, 9);
	MISC::CLEAR_BIT(&iVar0, 10);
	MISC::CLEAR_BIT(&iVar0, 11);
	MISC::CLEAR_BIT(&iVar0, 12);
	MISC::CLEAR_BIT(&iVar0, 13);
	MISC::CLEAR_BIT(&iVar0, 15);
	func_52(9478, iVar0, -1, 1, 0);
	iVar0 = func_58(9507, -1, 0);
	MISC::CLEAR_BIT(&iVar0, 0);
	MISC::CLEAR_BIT(&iVar0, 5);
	MISC::CLEAR_BIT(&iVar0, 12);
	func_52(9507, iVar0, -1, 1, 0);
	func_51(-1);
	func_50(30324, 0, -1, 1);
	func_50(30325, 0, -1, 1);
	func_50(30326, 0, -1, 1);
	func_50(30327, 0, -1, 1);
	func_50(30328, 0, -1, 1);
	func_50(30329, 0, -1, 1);
	func_50(30330, 0, -1, 1);
	func_50(30331, 0, -1, 1);
	func_50(30332, 0, -1, 1);
	func_50(30333, 0, -1, 1);
	func_50(30334, 0, -1, 1);
	func_50(30335, 0, -1, 1);
	func_50(30336, 0, -1, 1);
	func_50(30337, 0, -1, 1);
	func_50(30338, 0, -1, 1);
	func_50(30339, 0, -1, 1);
	func_50(30340, 0, -1, 1);
	func_50(30341, 0, -1, 1);
	func_50(30342, 0, -1, 1);
	func_50(30343, 0, -1, 1);
	func_50(30344, 0, -1, 1);
	func_50(30345, 0, -1, 1);
	func_50(30346, 0, -1, 1);
	func_50(30347, 0, -1, 1);
	func_50(30348, 0, -1, 1);
	func_50(30349, 0, -1, 1);
	func_50(30350, 0, -1, 1);
	func_50(30351, 0, -1, 1);
	if (bParam0)
	{
		Var1.f_40 = -1;
		Var1.f_41 = -1;
		Var1.f_42 = -1;
		Var1.f_44 = 1;
		Global_1704028 = { Var1 };
	}
	func_47(-1713398555, 18, 0);
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_49(iParam1, iParam2))
	{
		iVar0 = func_48();
		Global_2462355[iVar0] = iParam1;
		Global_2462366[iVar0] = iParam0;
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462355[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_49(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_50(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	return bVar0;
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = func_59(30500, -1, -1);
	if (iVar0 != iParam0)
	{
		func_41(30500, iParam0, -1, 1);
	}
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2552060[iParam0 /*3*/][func_53(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_42();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

void func_54()
{
	switch (Global_1704028.f_39)
	{
		case 2:
			if (!func_56(284, -1))
			{
				func_55(284, 1, -1, 1);
			}
			break;
		
		case 6:
			if (!func_56(282, -1))
			{
				func_55(282, 1, -1, 1);
			}
			break;
		
		case 4:
			if (!func_56(283, -1))
			{
				func_55(283, 1, -1, 1);
			}
			break;
		
		case 5:
			if (!func_56(285, -1))
			{
				func_55(285, 1, -1, 1);
			}
			break;
	}
}

void func_55(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2588062[iParam0 /*3*/][func_53(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2588062[iParam0 /*3*/][func_53(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_57()
{
	return func_45(PLAYER::PLAYER_ID());
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2552060[iParam0 /*3*/][func_53(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_42();
	}
	iVar0 = 0;
	iVar1 = func_61(iParam0, iParam1);
	iVar2 = func_60(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_60(int iParam0)
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
	return iVar0;
}

int func_61(int iParam0, int iParam1)
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
	return iVar0;
}

void func_62()
{
	if (!iLocal_374)
	{
		if (Global_2440277.f_502.f_48 != 0 && Global_2440277.f_502.f_17)
		{
			iLocal_374 = 1;
		}
	}
	else if (Global_2440277.f_502.f_48 == 0)
	{
		if (Global_2440277.f_502.f_17 == 1)
		{
			Global_2440277.f_502.f_17 = 0;
		}
		iLocal_374 = 0;
	}
}

void func_63()
{
	if (Global_4456448 != 3)
	{
		return;
	}
	if (func_64(PLAYER::PLAYER_ID(), 0))
	{
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_65(-1, 0) == 8;
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

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
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

void func_66()
{
	if (((((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) || NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID())) || func_69()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || func_68())
	{
		return;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID()))
		{
			func_67(0);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			func_67(1);
		}
	}
}

void func_67(int iParam0)
{
	if (iLocal_153[iParam0] == 0)
	{
		iLocal_153[iParam0] = 1;
	}
}

bool func_68()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_69()
{
	return Global_1678289.f_482;
}

void func_70()
{
	switch (iLocal_152)
	{
		case 0:
			iLocal_151 = func_73();
			if (iLocal_151 != 4)
			{
				iLocal_152 = 2;
			}
			break;
		
		case 2:
			if (NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iLocal_149, 1474183246, func_72(iLocal_151), -50712147, 0, 1))
			{
				if (NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iLocal_149))
				{
					iLocal_152 = 1;
					iLocal_153[iLocal_151] = 2;
				}
			}
			break;
		
		case 1:
			func_71();
			if (iLocal_150 && NETSHOPPING::NET_GAMESERVER_END_SERVICE(iLocal_149))
			{
				iLocal_149 = -1;
				iLocal_152 = 0;
				iLocal_153[iLocal_151] = 3;
				iLocal_151 = 4;
			}
			break;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_149 == -1 || iLocal_150)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 226)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar1, 7))
			{
				if (iVar1 == iLocal_149 && iVar1 != -1)
				{
					iLocal_150 = 1;
				}
			}
		}
		iVar0++;
	}
}

int func_72(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = -2114390367;
			break;
		
		case 1:
			iVar0 = -1454779202;
			break;
		
		case 2:
			iVar0 = 1604862494;
			break;
		
		case 3:
			iVar0 = -1862553257;
			break;
	}
	return iVar0;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_153[iVar0] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_74()
{
	if (iLocal_153[3] == 0)
	{
		if ((Global_4265525.f_10 != 0 && Global_4265525.f_4 == 0) && Global_4265525.f_6 == 1445302971)
		{
			func_67(3);
		}
	}
}

void func_75()
{
	if (func_76())
	{
		if (!MISC::IS_BIT_SET(Global_1678289.f_4285, 3))
		{
			MISC::SET_BIT(&(Global_1678289.f_4285), 3);
			iLocal_373 = 1;
		}
	}
	else if (iLocal_373)
	{
		iLocal_373 = 0;
		MISC::CLEAR_BIT(&(Global_1678289.f_4285), 3);
	}
}

int func_76()
{
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6 != -1 && func_79(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6) == 4)
	{
		if (func_78(0))
		{
			func_77(&uLocal_371, 1, 0);
			return 1;
		}
		if (func_34(&uLocal_371))
		{
			if (!func_32(&uLocal_371, 10000, 1))
			{
				return 1;
			}
		}
	}
	func_26(&uLocal_371);
	return 0;
}

void func_77(var uParam0, bool bParam1, bool bParam2)
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

int func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
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
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
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
	}
	return -1;
}

void func_80()
{
	if (func_20(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("rcbandito")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("minitank")))
			{
				if (Global_1689760 == 3)
				{
					func_81();
				}
			}
		}
	}
}

void func_81()
{
	if (!Global_2440277.f_1267.f_10)
	{
		Global_2440277.f_1267.f_10 = 1;
	}
}

void func_82()
{
	func_85();
	switch (iLocal_363)
	{
		case 0:
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				if (func_84(PLAYER::PLAYER_ID()))
				{
					func_83(1);
				}
			}
			break;
		
		case 1:
			if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				func_83(2);
			}
			break;
		
		case 2:
			if (HUD::BUSYSPINNER_IS_DISPLAYING())
			{
				func_83(3);
				func_33(&uLocal_365, 0, 0);
				if (!MISC::IS_BIT_SET(Global_1678289.f_2, 27))
				{
					MISC::SET_BIT(&(Global_1678289.f_2), 27);
					iLocal_367 = 1;
				}
			}
			else if (iLocal_364 >= 60)
			{
				func_83(0);
			}
			else
			{
				iLocal_364++;
			}
			break;
		
		case 3:
			if (func_32(&uLocal_365, 10000, 0))
			{
				if (iLocal_367)
				{
					MISC::CLEAR_BIT(&(Global_1678289.f_2), 27);
				}
				func_83(0);
			}
			else if (!MISC::IS_BIT_SET(Global_1678289.f_2, 27))
			{
				MISC::SET_BIT(&(Global_1678289.f_2), 27);
				iLocal_367 = 1;
			}
			break;
	}
}

void func_83(int iParam0)
{
	if (iLocal_363 != iParam0)
	{
		iLocal_363 = iParam0;
		iLocal_364 = 0;
		func_26(&uLocal_365);
		iLocal_367 = 0;
	}
}

int func_84(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_20(iParam0, 1, 1))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_20(iParam0, 1, 0))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	
	bVar0 = false;
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_1678289.f_3, 5)) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		bVar0 = true;
		func_77(&uLocal_369, 1, 0);
	}
	if (bVar0)
	{
		if (!iLocal_368)
		{
			func_88(171);
			func_88(170);
			iLocal_368 = 1;
		}
	}
	else if (iLocal_368)
	{
		if (!func_34(&uLocal_369))
		{
			func_33(&uLocal_369, 1, 0);
		}
		if (func_32(&uLocal_369, 7500, 1))
		{
			func_86(171);
			func_86(170);
			iLocal_368 = 0;
		}
		if (NETWORK::_0xC42DD763159F3461())
		{
			NETWORK::NETWORK_SESSION_FORCE_CANCEL_INVITE();
		}
	}
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1393218.f_22 <= 0)
	{
		return;
	}
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1393218.f_23[iVar0] == iVar1)
		{
			Global_1393218.f_23[iVar0] = 0;
			Global_1393218.f_22 = (Global_1393218.f_22 - 1);
		}
		iVar0++;
	}
	func_87();
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar0++;
	}
}

void func_88(int iParam0)
{
	var uVar0;
	
	if (Global_1393218.f_22 >= 20)
	{
		return;
	}
	uVar0 = iParam0;
	Global_1393218.f_23[Global_1393218.f_22] = uVar0;
	Global_1393218.f_22++;
	func_87();
}

void func_89()
{
	if (func_20(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (func_92(Global_1683922.f_4766) && func_91(Global_1683922.f_4766))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_1683922.f_4766) <= 0)
			{
				if (!func_34(&uLocal_361))
				{
					func_33(&uLocal_361, 0, 0);
				}
				else if (func_32(&uLocal_361, 30000, 0))
				{
					func_90();
					func_26(&uLocal_361);
				}
			}
			else if (func_34(&uLocal_361))
			{
				func_26(&uLocal_361);
			}
		}
		else if (func_34(&uLocal_361))
		{
			func_26(&uLocal_361);
		}
	}
	else if (func_34(&uLocal_361))
	{
		func_26(&uLocal_361);
	}
}

void func_90()
{
	Global_1683922.f_4766.f_3 = 0;
	Global_1683922.f_4766 = -1;
	Global_1683922.f_4766.f_2 = -1000;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("business_battles"):
		case joaat("fm_content_drug_vehicle"):
		case joaat("fm_content_business_battles"):
		case joaat("fm_content_movie_props"):
			return 1;
			break;
	}
	return 0;
}

int func_92(struct<3> Param0)
{
	if (Param0.x == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

void func_93()
{
	if (func_20(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_94(Global_2540612.f_324))
		{
			if (!iLocal_360)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2540612.f_324))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_2540612.f_324, false, true, false, false, false, false, false, false);
					iLocal_360 = 1;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2540612.f_324);
				}
			}
		}
		else if (iLocal_360)
		{
			iLocal_360 = 0;
		}
	}
}

int func_94(int iParam0)
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

void func_95()
{
	if (PLAYER::PLAYER_ID() == func_38())
	{
		return;
	}
	if (func_96(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_99007.f_1364[45], 6))
	{
		if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_200, 22))
		{
			Global_262145.f_25209 = 1;
			iLocal_167 = 1;
		}
	}
	else if (!func_96(PLAYER::PLAYER_ID()))
	{
		if (iLocal_167)
		{
			MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_200), 22);
			Global_262145.f_25209 = 0;
			iLocal_167 = 0;
		}
	}
}

int func_96(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_79(Global_2426097[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

void func_97()
{
	if (((PLAYER::PLAYER_ID() != func_38() && MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_123, 31)) && func_100()) && func_99(11))
	{
		func_98(11);
	}
}

void func_98(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2440277.f_502.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2440277.f_502.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2440277.f_502.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2440277.f_502.f_2), (iParam0 - 32));
	}
}

bool func_99(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2440277.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2440277.f_502.f_2, (iParam0 - 32));
}

int func_100()
{
	if (func_99(2) || func_99(1))
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	if (!func_69() && Global_2440277.f_3858)
	{
		if (!iLocal_26)
		{
			iLocal_26 = 1;
			Global_1689677 = 1;
			Global_1689676 = 1;
		}
	}
	else if (iLocal_26)
	{
		iLocal_26 = 0;
		Global_1689677 = 0;
		Global_1689676 = 0;
	}
}

void func_102()
{
	if (PLAYER::PLAYER_ID() != func_38() && func_104(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2540612.f_303))
		{
			func_103(1);
		}
		if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_59 == 2)
		{
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_59 = 3;
		}
	}
}

void func_103(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2540612.f_303))
	{
		Global_2540612.f_5979 = 1;
		Global_2540612.f_5980 = iParam0;
	}
}

bool func_104(int iParam0)
{
	return func_105(&(Global_2426097[iParam0 /*443*/].f_429), 0);
}

bool func_105(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_106()
{
	int iVar0;
	
	if ((func_94(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_36(PLAYER::PLAYER_PED_ID(), 0) == -1)
	{
		if (!iLocal_166)
		{
			if ((!func_107(PLAYER::PLAYER_ID()) && !func_84(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("seasparrow2")))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
						iLocal_166 = 1;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
					}
				}
			}
		}
	}
	else
	{
		iLocal_166 = 0;
	}
}

int func_107(int iParam0)
{
	if (iParam0 != func_38() && func_20(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

void func_108()
{
	if (func_112() || func_110())
	{
		func_109();
	}
}

void func_109()
{
	Global_2452907.f_4312.f_700 = 1;
}

bool func_110()
{
	return func_111() == 1;
}

int func_111()
{
	return Global_1704009;
}

var func_112()
{
	return func_113(PLAYER::PLAYER_ID());
}

var func_113(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_431.f_1;
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	if (!func_122(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_120();
		iVar1 = func_117(iVar0, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_36(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (!iLocal_162)
				{
					iLocal_162 = 1;
				}
				MISC::SET_BIT(&Global_1678289, 19);
				if (!MISC::IS_BIT_SET(Global_1678289.f_1, 3) && func_115(iVar1))
				{
					MISC::SET_BIT(&(Global_1678289.f_1), 3);
				}
			}
			else if (iLocal_162)
			{
				MISC::CLEAR_BIT(&Global_1678289, 19);
				iLocal_162 = 0;
			}
		}
		else if (iLocal_162)
		{
			MISC::CLEAR_BIT(&Global_1678289, 19);
			iLocal_162 = 0;
		}
	}
}

int func_115(int iParam0)
{
	if (func_20(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_116(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_20(iParam0, 1, 1))
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

int func_117(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_119(iParam0, 1))
	{
		return func_38();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_118(iVar0, 0, bParam1, iParam2);
	}
	return func_38();
}

int func_118(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_20(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1 = (iVar1 + 1);
		}
	}
	else if (func_20(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_38();
}

int func_119(int iParam0, bool bParam1)
{
	if (Global_76833)
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

var func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_38();
	if (func_94(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_94(iVar1))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (func_94(iVar2) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	if (iVar0 == func_38() && func_44(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_121();
	}
	if (iVar0 != func_38() && PLAYER::PLAYER_ID() != iVar0)
	{
		return Global_2440277.f_673[iVar0 /*3*/][1];
	}
	return Global_2540612.f_304[1];
}

int func_121()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

int func_122(int iParam0)
{
	if (iParam0 != func_38())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

void func_123()
{
	if (!iLocal_159)
	{
		iLocal_160 = func_38();
		iLocal_159 = 1;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 147, false, 0))
	{
		func_125();
		if (iLocal_160 != func_38())
		{
			switch (iLocal_161)
			{
				case 0:
					if ((((((func_107(PLAYER::PLAYER_ID()) && func_37(PLAYER::PLAYER_ID()) == 147) && !Global_1678289.f_3057) && !func_124()) && !MISC::IS_BIT_SET(Global_1678289, 27)) && !Global_2405074.f_2673) && iLocal_160 == PLAYER::PLAYER_ID())
					{
						Global_1678289.f_469 = 0;
						MISC::SET_BIT(&(Global_1678289.f_469), 29);
						iLocal_161 = 1;
					}
					break;
				
				case 1:
					if (!func_107(PLAYER::PLAYER_ID()))
					{
						iLocal_161 = 2;
					}
					else if (!func_84(PLAYER::PLAYER_ID()) && !func_107(PLAYER::PLAYER_ID()))
					{
						iLocal_161 = 0;
					}
					else if (!MISC::IS_BIT_SET(Global_1678289.f_469, 29))
					{
						if (Global_1678289.f_469 == 0)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
							MISC::SET_BIT(&(Global_1678289.f_469), 0);
							MISC::SET_BIT(&(Global_1678289.f_469), 29);
							Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 = PLAYER::PLAYER_ID();
						}
					}
					break;
				
				case 2:
					if (!func_107(PLAYER::PLAYER_ID()) && func_37(PLAYER::PLAYER_ID()) == 147)
					{
						iLocal_161 = 0;
					}
					else if (!func_84(PLAYER::PLAYER_ID()))
					{
						iLocal_161 = 0;
					}
					break;
			}
		}
		else if (iLocal_160 != func_38())
		{
			iLocal_160 = func_38();
			iLocal_161 = 0;
		}
	}
	else if (iLocal_160 != func_38())
	{
		iLocal_160 = func_38();
		iLocal_161 = 0;
	}
}

bool func_124()
{
	return MISC::IS_BIT_SET(Global_1678289, 6);
}

void func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_129();
	if (func_94(iVar0))
	{
		iVar1 = func_126(iVar0);
		if (iLocal_160 != iVar1 && iVar1 != func_38())
		{
			iLocal_160 = iVar1;
		}
	}
}

int func_126(int iParam0)
{
	if (iParam0 != 0)
	{
		return func_127(iParam0, 1, 0);
	}
	return func_127(func_129(), 1, 0);
}

int func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_128(iParam0, 1))
	{
		return func_38();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Submarine");
		return func_118(iVar0, 0, bParam1, iParam2);
	}
	return func_38();
}

int func_128(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Submarine"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_38();
	if (func_94(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_94(iVar1))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (func_94(iVar2) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	if (iVar0 == func_38() && func_44(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_121();
	}
	if (iVar0 != func_38() && PLAYER::PLAYER_ID() != iVar0)
	{
		return Global_2440277.f_836[iVar0];
	}
	return Global_2540612.f_324;
}

void func_130()
{
	if (MISC::IS_BIT_SET(Global_1678289.f_7, 11))
	{
		if (!func_29())
		{
			MISC::CLEAR_BIT(&(Global_1678289.f_7), 11);
		}
	}
}

void func_131()
{
	if (func_135(PLAYER::PLAYER_ID()))
	{
		if (func_132())
		{
			Global_262145.f_24170 = 1;
			Global_262145.f_24171 = 1;
			if (!iLocal_158)
			{
				iLocal_158 = 1;
			}
		}
		else if (iLocal_158)
		{
			Global_262145.f_24170 = 0;
			Global_262145.f_24171 = 0;
			iLocal_158 = 0;
		}
	}
	else if (iLocal_158)
	{
		Global_262145.f_24170 = 0;
		Global_262145.f_24171 = 0;
		iLocal_158 = 0;
	}
}

int func_132()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_20(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter_left", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter", 3)) || func_133(PLAYER::GET_PLAYER_PED(iVar1), 2106541073))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true);
					if (fVar2 < 2f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	if (func_134(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	if (func_94(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_38())
			{
				return func_79(Global_2426097[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
	}
	return 0;
}

void func_136()
{
	if (MISC::IS_BIT_SET(Global_2517045.f_1, 0) && (Global_2517045.f_3 == 1 || Global_2517045.f_3 == 2))
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
}

void func_137()
{
	int iVar0;
	
	if (func_94(PLAYER::PLAYER_PED_ID()))
	{
		if (func_135(PLAYER::PLAYER_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_36(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_140(iVar0))
				{
					if (func_138())
					{
						Global_1689715 = 0;
					}
					else
					{
						Global_1689715 = 1;
					}
				}
			}
		}
	}
}

int func_138()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	iVar0 = func_139();
	if (func_94(iVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		Var4 = { 0f, 0f, -8f };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var4) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var7, &uVar10, false, true))
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

int func_139()
{
	if (Global_1590528 != func_38())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1370325))
		{
			return Global_1370325;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1694882[Global_1590528]))
		{
			return Global_1694882[Global_1590528];
		}
	}
	return -1;
}

int func_140(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("avisa"):
			case joaat("toreador"):
			case joaat("stromberg"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (func_45(PLAYER::PLAYER_ID()))
	{
		if (func_34(&uLocal_145) && !func_32(&uLocal_145, 10000, 0))
		{
			return;
		}
		if (!func_147(PLAYER::PLAYER_ID(), 1) || !func_145(PLAYER::PLAYER_ID()))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2419386.f_199.f_722[iVar1 /*75*/] == PLAYER::PLAYER_ID())
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2419386.f_199.f_722[iVar1 /*75*/].f_1[iVar2] == 755 || Global_2419386.f_199.f_722[iVar1 /*75*/].f_1[iVar2] == 756)
						{
							if (!func_92(Global_2419386.f_199.f_722[iVar1 /*75*/].f_20[iVar2 /*3*/]) && !func_78(0))
							{
								if (func_34(&uLocal_147) && func_32(&uLocal_147, 15000, 0))
								{
									func_142();
									func_77(&uLocal_145, 0, 0);
								}
								else if (!func_34(&uLocal_147))
								{
									func_33(&uLocal_147, 0, 0);
								}
								iVar0 = 0;
							}
						}
						iVar2++;
					}
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
	if (iVar0 && func_34(&uLocal_147))
	{
		func_26(&uLocal_147);
	}
}

void func_142()
{
	struct<3> Var0;
	
	if (func_57())
	{
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1000;
		func_143(0, Var0);
	}
}

void func_143(int iParam0, struct<3> Param1)
{
	struct<4> Var0;
	int iVar6;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0 = -1014199946;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	iVar6 = func_144(1, 1);
	if (!iVar6 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iVar6);
	}
}

var func_144(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_64(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_145(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_146(iParam0, 9);
	}
	return 0;
}

bool func_146(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_147(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	if (((func_94(PLAYER::PLAYER_PED_ID()) && func_154(PLAYER::PLAYER_ID()) == 256) && func_153(PLAYER::PLAYER_ID()) == 18) && func_152())
	{
		iVar0 = joaat("h4_prop_h4_card_hack_01a");
		iVar1 = ENTITY::_GET_ENTITY_PICKUP(PLAYER::PLAYER_PED_ID(), iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			iVar2 = func_151();
			if (func_149(iVar2, &Var3, &fVar6))
			{
				Var3 = { Var3.x, Var3.f_1, (Var3.f_2 + 5f) };
				ENTITY::DETACH_ENTITY(iVar1, true, true);
				ENTITY::SET_ENTITY_COORDS(iVar1, Var3, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar1, fVar6);
				INTERIOR::CLEAR_ROOM_FOR_ENTITY(iVar1);
			}
		}
	}
}

bool func_149(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_150(*uParam1, 0f, 0f, 0f, 0);
}

bool func_150(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

var func_151()
{
	return Global_99007.f_444;
}

bool func_152()
{
	return Global_99007.f_351 > 0;
}

int func_153(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_154(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

void func_155()
{
	int iVar0;
	float fVar1;
	
	if (func_94(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_94(iVar0))
		{
			fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
			if (fVar1 > 25f)
			{
				Global_2462514.f_301 = 1;
				iLocal_144 = 1;
			}
			else if (iLocal_144)
			{
				iLocal_144 = 0;
				Global_2462514.f_301 = 0;
			}
		}
		else if (iLocal_144)
		{
			iLocal_144 = 0;
			Global_2462514.f_301 = 0;
		}
	}
	else if (iLocal_144)
	{
		iLocal_144 = 0;
		Global_2462514.f_301 = 0;
	}
}

void func_156()
{
	if (func_158(105, -1) >= 20000000 && func_158(105, -1) < 200000000)
	{
		func_157(105, 200000000, -1);
	}
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2589761[iParam0 /*3*/][func_53(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2589761[iParam0 /*3*/][func_53(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159()
{
	if (func_160(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_36(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("alkonost")))
				{
					iLocal_104 = 1;
					func_26(&uLocal_105);
				}
			}
			else
			{
				iLocal_104 = 0;
			}
		}
		else if (iLocal_104)
		{
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (func_32(&uLocal_105, 30000, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::DO_SCREEN_FADE_IN(500);
					func_26(&uLocal_105);
				}
			}
			else
			{
				iLocal_104 = 0;
			}
		}
	}
	else
	{
		iLocal_104 = 0;
	}
}

int func_160(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_79(Global_2426097[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

void func_161()
{
	if (MISC::IS_BIT_SET(Global_102381, 0))
	{
		if (!func_162())
		{
			if (!func_34(&uLocal_102))
			{
				func_33(&uLocal_102, 0, 0);
			}
			else if (func_32(&uLocal_102, 5000, 0))
			{
				MISC::CLEAR_BIT(&Global_102381, 0);
			}
		}
		else
		{
			func_26(&uLocal_102);
		}
	}
	else
	{
		func_26(&uLocal_102);
	}
}

bool func_162()
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, false, true, 0);
}

void func_163()
{
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_104(PLAYER::PLAYER_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4726.769f, -5534.592f, 18.04668f, true) < 8f)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
	}
}

void func_164()
{
	bool bVar0;
	
	if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_104(PLAYER::PLAYER_ID())) && !func_175(PLAYER::PLAYER_ID(), 25)) && !func_152())
	{
		switch (iLocal_3)
		{
			case joaat("kosatka"):
			case joaat("alkonost"):
			case joaat("seasparrow2"):
			case joaat("toreador"):
			case joaat("patrolboat"):
			case joaat("dinghy5"):
			case joaat("annihilator2"):
				bVar0 = true;
				if (!MISC::IS_BIT_SET(Global_2540612.f_4655, 28))
				{
					func_174(1);
					iLocal_100 = 1;
				}
				if (func_173() && !func_172())
				{
					if (!iLocal_101)
					{
						iLocal_101 = 1;
						func_165(10, 1, 1);
					}
				}
				break;
			}
	}
	if (!bVar0)
	{
		if (iLocal_100)
		{
			func_174(0);
			iLocal_100 = 0;
		}
		if (iLocal_101)
		{
			iLocal_101 = 0;
		}
	}
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	if (func_173())
	{
		if (iParam1 == 1)
		{
			if (Global_2540612.f_4458 == -1)
			{
				Global_2540612.f_4458 = Global_262145.f_26467;
			}
			func_77(&(Global_2540612.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540612.f_4461 == -1)
				{
					Global_2540612.f_4461 = Global_262145.f_26468;
				}
				func_77(&(Global_2540612.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
				func_171(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
			func_171(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_170()) && !func_166(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_166(int iParam0)
{
	if (func_167(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_168(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	return func_169(iParam0);
}

bool func_169(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_170()
{
	return Global_2452015.f_838;
}

void func_171(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_173())
		{
			if (func_20(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_20(PLAYER::PLAYER_ID(), 1, 1))
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

bool func_172()
{
	return Global_1312436.f_1;
}

bool func_173()
{
	return Global_1312436;
}

void func_174(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2540612.f_4655, 28))
		{
			MISC::SET_BIT(&(Global_2540612.f_4655), 28);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540612.f_4655, 28))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_4655), 28);
	}
}

bool func_175(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_212, iParam1);
}

void func_176()
{
	int iVar0;
	
	if (func_181(PLAYER::PLAYER_ID()) == 4 && !func_177(func_180(), 0))
	{
		if (!iLocal_95)
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (MISC::IS_BIT_SET(Global_4271024, 21) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					iLocal_95 = 1;
					if (iLocal_96)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_97, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					}
				}
				else if (func_32(&uLocal_93, 60000, 0))
				{
					if (!iLocal_96)
					{
						Local_97 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
						ENTITY::SET_ENTITY_COORDS(iVar0, 4978.723f, -5764.301f, -2.3232f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
						iLocal_96 = 1;
					}
				}
			}
		}
	}
	else
	{
		if (iLocal_95)
		{
			iLocal_95 = 0;
		}
		if (iLocal_96)
		{
			iLocal_96 = 0;
		}
		if (func_34(&uLocal_93))
		{
			func_26(&uLocal_93);
		}
	}
}

int func_177(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_178(iParam0, func_179(iParam1));
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1706031[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_180()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

int func_181(int iParam0)
{
	if (func_154(iParam0) == 256)
	{
		return func_153(iParam0);
	}
	return -1;
}

void func_182()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || !func_135(PLAYER::PLAYER_ID()))
	{
		iLocal_91 = 0;
		iLocal_92 = 0;
		return;
	}
	if (func_183())
	{
		if (!iLocal_91)
		{
			iLocal_91 = 1;
		}
	}
	else if (iLocal_91)
	{
		if (!iLocal_92)
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(1559.421f, 381.4f, -50.105f, 25f, 0);
			iLocal_92 = 1;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_91 = 0;
				iLocal_92 = 0;
			}
		}
	}
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_1678289.f_7, 14);
}

void func_184()
{
	if (iLocal_3 == joaat("toreador"))
	{
		if (!Global_262145.f_10188)
		{
			Global_262145.f_10188 = 1;
		}
	}
	else if (Global_262145.f_10188)
	{
		Global_262145.f_10188 = 0;
	}
}

void func_185()
{
	if (func_186(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_90)
		{
			if (func_104(PLAYER::PLAYER_ID()))
			{
				iLocal_90 = 1;
			}
		}
		else if (func_68())
		{
			if (!Global_2540612.f_4631)
			{
				Global_2540612.f_4631 = 1;
			}
		}
	}
	else
	{
		if (iLocal_90)
		{
			iLocal_90 = 0;
		}
		if (Global_2540612.f_4631)
		{
			Global_2540612.f_4631 = 0;
		}
	}
}

bool func_186(int iParam0)
{
	return func_187(func_181(iParam0));
}

int func_187(int iParam0)
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

void func_188()
{
	func_194();
	func_189();
}

void func_189()
{
	bool bVar0;
	
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_431.f_1)
	{
		if (func_34(&uLocal_164))
		{
			func_26(&uLocal_164);
		}
		return;
	}
	bVar0 = false;
	if (func_44(PLAYER::PLAYER_ID(), 1))
	{
		if (func_104(func_121()) && func_192(func_121()) == 256)
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && !func_190(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()) != 63)
			{
				if (func_32(&uLocal_164, 20000, 0))
				{
					func_26(&uLocal_164);
					if (Global_1704009 != 1)
					{
						Global_1704009.f_2 = 1;
						Global_1704009.f_1 = 0;
						Global_1704009 = 1;
					}
					return;
				}
			}
		}
	}
	else if (func_34(&uLocal_164))
	{
		func_26(&uLocal_164);
	}
}

int func_190(int iParam0)
{
	if (func_191(func_154(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (iLocal_163 != 0)
		{
			iLocal_163 = 0;
		}
		return;
	}
	if (!func_20(PLAYER::PLAYER_ID(), 0, 1))
	{
		return;
	}
	switch (iLocal_163)
	{
		case 0:
			if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_431.f_1)
			{
				return;
			}
			if (STREAMING::IS_IPL_ACTIVE("H4_islandx_terrain_01") && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_163 = 1;
			}
			break;
		
		case 1:
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_163 = 2;
			}
			break;
		
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1168.914f, -2751.29f, 13.029f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 293.599f);
			STREAMING::REQUEST_COLLISION_AT_COORD(-1168.914f, -2751.29f, 13.029f);
			STREAMING::LOAD_ALL_OBJECTS_NOW();
			CAM::DO_SCREEN_FADE_IN(800);
			iLocal_163 = 3;
			break;
		
		case 3:
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iLocal_163 = 0;
			}
			break;
	}
}

void func_195()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_43(1))
	{
		if (func_154(PLAYER::PLAYER_ID()) == 256 && func_145(PLAYER::PLAYER_ID()))
		{
			if (func_181(PLAYER::PLAYER_ID()) == 21)
			{
				if (!func_198(10))
				{
					func_197(10);
					iLocal_89 = 1;
				}
				bVar0 = true;
			}
		}
	}
	if (iLocal_89 && !bVar0)
	{
		if (func_198(10))
		{
			func_196(10);
		}
		iLocal_89 = 0;
	}
}

void func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1678289.f_4481 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 == Global_1678289.f_4477[iVar0])
		{
			Global_1678289.f_4477[iVar0] = -1;
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		if (Global_1678289.f_4481 > 0)
		{
			Global_1678289.f_4481 = (Global_1678289.f_4481 - 1);
		}
	}
}

void func_197(int iParam0)
{
	if (Global_1678289.f_4481 >= 3)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		return;
	}
	else if (func_198(iParam0))
	{
		return;
	}
	Global_1678289.f_4477[Global_1678289.f_4481] = iParam0;
	Global_1678289.f_4481++;
}

int func_198(int iParam0)
{
	int iVar0;
	
	if (Global_1678289.f_4481 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1678289.f_4481)
		{
			if (iParam0 == Global_1678289.f_4477[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_199()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (PLAYER::PLAYER_ID() != NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_215(), -1, 0))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_2419386.f_1672[1 /*15*/].f_6, 0))
	{
		return;
	}
	if (Global_2419386.f_1672[1 /*15*/].f_8 == -1)
	{
		return;
	}
	if (func_213())
	{
		return;
	}
	Local_74 = { Global_2419386.f_1672[1 /*15*/] };
	iVar0 = func_212(&(Local_74.f_13), 0, 1);
	iVar1 = func_211(Local_74.f_10);
	bVar2 = true;
	iVar3 = 1;
	while (iVar3 <= iVar1)
	{
		if (iVar0 < func_210(&Local_74, iVar3))
		{
			Local_74 = iVar3;
			if (iVar3 == 1)
			{
				Local_74.f_2 = func_209(&Local_74, iVar0);
			}
			else
			{
				Local_74.f_2 = func_209(&Local_74, (iVar0 - func_210(&Local_74, (iVar3 - 1))));
			}
			bVar2 = false;
			Jump @212; //curOff = 194
		}
		else
		{
			bVar2 = true;
		}
		iVar3++;
	}
	if (!bVar2)
	{
		if (Local_74 == func_211(Local_74.f_10))
		{
			iVar4 = func_208(&Local_74, iVar0);
			iVar5 = func_206(Local_74.f_10, Local_74);
			if ((iVar5 - iVar4) <= 30000)
			{
				bVar2 = true;
			}
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_2419386.f_1672[1 /*15*/].f_8 = func_203(Global_2419386.f_1672[1 /*15*/].f_8, 1);
	Global_2419386.f_1672[1 /*15*/].f_10 = func_202(Global_2419386.f_1672[1 /*15*/].f_8, 0);
	Global_2419386.f_1672[1 /*15*/] = 1;
	Global_2419386.f_1672[1 /*15*/].f_3 = func_201(&(Global_2419386.f_1672[1 /*15*/]), 0);
	Global_2419386.f_1672[1 /*15*/].f_2 = 0;
	func_77(&(Global_2419386.f_1672[1 /*15*/].f_13), 0, 0);
	Global_2419386.f_1672[1 /*15*/].f_13 = NETWORK::GET_TIME_OFFSET(Global_2419386.f_1672[1 /*15*/].f_13, -Global_2419386.f_1672[1 /*15*/].f_2);
	Global_2419386.f_1672[1 /*15*/].f_1 = MISC::GET_HASH_KEY(func_200(Global_2419386.f_1672[1 /*15*/].f_10, Global_2419386.f_1672[1 /*15*/]));
}

char* func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_01";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_02";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_03";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_04";
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P3";
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
	}
	return "";
}

int func_201(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= func_211(uParam0->f_10))
	{
		iVar1 = (iVar1 + func_206(uParam0->f_10, iVar0));
		if (!bParam1)
		{
			if (*uParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
			return iVar1;
		}

int func_202(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
			
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 7;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 2:
				iVar0 = 1;
				break;
			
			case 1:
				iVar0 = 2;
				break;
			
			case 3:
				iVar0 = 3;
				break;
			}
	}
	switch (iParam0)
	{
		case 4:
			iVar0 = 8;
			break;
		
		case 5:
			iVar0 = 9;
			break;
		
		case 6:
			iVar0 = 10;
			break;
		
		case 7:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_203(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	if (!bParam1)
	{
		if (func_205())
		{
			iVar1 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 7);
			}
			switch (iVar1)
			{
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 7;
				
				default:
			}
			return 6;
		}
		else if (!Global_262145.f_24207 && !Global_262145.f_24208)
		{
			iVar2 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_204())
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 9;
				}
			}
			switch (iVar2)
			{
				case 7:
					return 7;
				
				case 9:
					return 4;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24208 && !Global_262145.f_24209)
		{
			iVar3 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_204())
				{
					iVar3 = 10;
				}
				else
				{
					iVar3 = 12;
				}
			}
			switch (iVar3)
			{
				case 10:
					return 4;
				
				case 12:
					return 6;
				
				default:
			}
			return 4;
		}
		else if (!Global_262145.f_24209 && !Global_262145.f_24207)
		{
			iVar4 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_204())
				{
					iVar4 = 8;
				}
				else
				{
					iVar4 = 11;
				}
			}
			switch (iVar4)
			{
				case 8:
					return 7;
				
				case 11:
					return 6;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24207)
		{
			return 7;
		}
		else if (!Global_262145.f_24208)
		{
			return 4;
		}
		else if (!Global_262145.f_24209)
		{
			return 6;
		}
	}
	else if (func_205())
	{
		switch (Global_262145.f_24206)
		{
			case 1:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 5:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 6:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			default:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 4;
				}
				break;
			
			case 6:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				break;
			
			case 7:
				if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 7;
				}
				break;
			}
	}
	return iVar0;
}

int func_204()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	if (Global_262145.f_24207)
	{
		return 0;
	}
	if (Global_262145.f_24208)
	{
		return 0;
	}
	if (Global_262145.f_24209)
	{
		return 0;
	}
	return 1;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = func_207(iParam0, iParam1);
	iVar0 = (iVar0 - 1000);
	return iVar0;
}

int func_207(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152081;
				
				case 4:
					return 1587519;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1813200;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 1041521;
				
				case 2:
					return 1537939;
				
				case 3:
					return 1811912;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2353875;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1287786;
				
				default:
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0->f_3 - iParam1);
	return (func_206(iParam0->f_10, *iParam0) - iVar0);
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 1)
	{
		iVar0 = 2;
		while (iVar0 <= func_211(iParam0->f_10))
		{
			iParam1 = (iParam1 + func_206(iParam0->f_10, (iVar0 - 1)));
			if (*iParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iParam1;
}

int func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 <= iParam1)
	{
		iVar1 = (iVar1 + func_206(uParam0->f_10, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 4;
		
		case 8:
			return 4;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return 0;
}

int func_212(var uParam0, bool bParam1, bool bParam2)
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

int func_213()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_20(iVar1, 0, 1))
		{
			if (func_214(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_79(Global_2426097[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

char* func_215()
{
	switch (Global_2464823)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_216()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<5> Var7;
	
	bVar6 = (func_45(PLAYER::PLAYER_ID()) && func_154(PLAYER::PLAYER_ID()) == 256);
	switch (Local_28.f_2)
	{
		case 0:
			if (bVar6)
			{
				switch (func_153(PLAYER::PLAYER_ID()))
				{
					case 11:
					case 20:
					case 21:
					case 23:
					case 18:
					case 16:
					case 12:
						func_33(&Local_28, 0, 0);
						Local_28.f_2 = 1;
						break;
					}
			}
			break;
		
		case 1:
			if (func_34(&Local_28))
			{
				if (func_32(&Local_28, 5000, 0))
				{
					iVar4 = func_223(PLAYER::PLAYER_ID());
					if (iVar4 != -1)
					{
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (!MISC::IS_BIT_SET(Local_28.f_3, iVar3))
							{
								Var0 = { func_222(iVar4, iVar3) };
								iVar5 = func_221(iVar4, iVar3);
								if (!func_220(Var0) && iVar5 != 0)
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_28.f_4[iVar3]))
									{
										Local_28.f_4[iVar3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 5f, iVar5, false, false, false);
										MISC::SET_BIT(&(Local_28.f_3), iVar3);
									}
								}
							}
							iVar3++;
						}
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (MISC::IS_BIT_SET(Local_28.f_3, iVar3))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_28.f_4[iVar3]) && func_219(Local_28.f_4[iVar3]))
								{
									NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Local_28.f_4[iVar3], true);
									MISC::CLEAR_BIT(&(Local_28.f_3), iVar3);
								}
							}
							iVar3++;
						}
					}
					if (func_217(Local_28.f_3) == 0 || func_32(&Local_28, 10000, 0))
					{
						Local_28.f_2 = 2;
					}
				}
			}
			else
			{
				Local_28.f_2 = 2;
			}
			break;
		
		case 2:
			if (!bVar6)
			{
				Var7.f_4 = 31;
				MISC::_COPY_MEMORY(&Local_28, &Var7, 36);
			}
			break;
	}
}

int func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_218(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_218(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_219(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_220(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_03a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 19:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
				
				case 22:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 23:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 17:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("hei_p_attache_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 17:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 18:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 19:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("hei_p_attache_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 16:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 19:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("bkr_prop_biker_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 19:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 10:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 13:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 14:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 20:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 16:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 10:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 11:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 20:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 15:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 18:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 19:
					iVar0 = joaat("p_parachute_s_shop");
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 17:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 1:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 2:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 4:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 5:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 6:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 7:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 22:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
	}
	return iVar0;
}

Vector3 func_222(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.24f, -3193.93f, -40.022f };
					break;
				
				case 4:
					Var0 = { 1167.76f, -3199.4f, -39.006f };
					break;
				
				case 5:
					Var0 = { 1162.08f, -3190.13f, -39.099f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.8f, -3197.08f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.54f, -3195.36f, -39.093f };
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.52f, -3194.46f, -40.006f };
					break;
				
				case 4:
					Var0 = { 1167.81f, -3199.39f, -39.018f };
					break;
				
				case 5:
					Var0 = { 1162.06f, -3190.14f, -39.092f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.9f, -3197.07f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.49f, -3195.34f, -39.093f };
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.31f, -3193.94f, -40.01f };
					break;
				
				case 4:
					Var0 = { 1167.74f, -3199.35f, -39.011f };
					break;
				
				case 5:
					Var0 = { 1162.09f, -3190.13f, -39.102f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.66f, -3197.04f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.53f, -3195.28f, -39.093f };
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					Var0 = { -776.483f, 608.112f, 145.335f };
					break;
				
				case 1:
					Var0 = { -777.702f, 611.747f, 145.33f };
					break;
				
				case 2:
					Var0 = { -777.088f, 609.926f, 145.336f };
					break;
				
				case 3:
					Var0 = { -775.876f, 606.296f, 145.34f };
					break;
				
				case 4:
					Var0 = { -775.27f, 604.485f, 145.337f };
					break;
				
				case 5:
					Var0 = { -766.149f, 606.328f, 146.521f };
					break;
				
				case 6:
					Var0 = { -764.436f, 606.901f, 146.522f };
					break;
				
				case 7:
					Var0 = { -757.752f, 609.172f, 146.82f };
					break;
				
				case 8:
					Var0 = { -773.336f, 603.948f, 142.998f };
					break;
				
				case 9:
					Var0 = { -775.905f, 606.284f, 141.932f };
					break;
				
				case 10:
					Var0 = { -775.299f, 604.465f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.513f, 608.104f, 141.932f };
					break;
				
				case 12:
					Var0 = { -777.12f, 609.919f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.728f, 611.732f, 141.933f };
					break;
				
				case 14:
					Var0 = { -760.101f, 617.678f, 135.509f };
					break;
				
				case 15:
					Var0 = { -761.855f, 613.439f, 144.443f };
					break;
				
				case 16:
					Var0 = { -766.645f, 610.83f, 143.731f };
					break;
				
				case 17:
					Var0 = { -755.653f, 615.589f, 135.53f };
					break;
				
				case 18:
					Var0 = { -759.518f, 616.393f, 135.508f };
					break;
				
				case 19:
					Var0 = { -765.752f, 616.25f, 142.93f };
					break;
				
				case 20:
					Var0 = { -770.441f, 606.968f, 140.098f };
					break;
				
				case 21:
					Var0 = { -770.675f, 607.569f, 140.038f };
					break;
				
				case 22:
					Var0 = { -765.897f, 610.676f, 143.745f };
					break;
				
				case 23:
					Var0 = { -766.637f, 610.734f, 143.726f };
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					Var0 = { -773.265f, 603.954f, 142.96f };
					break;
				
				case 1:
					Var0 = { -775.297f, 604.469f, 141.935f };
					break;
				
				case 2:
					Var0 = { -775.279f, 604.502f, 145.342f };
					break;
				
				case 3:
					Var0 = { -777.085f, 609.915f, 145.341f };
					break;
				
				case 4:
					Var0 = { -777.688f, 611.717f, 145.341f };
					break;
				
				case 5:
					Var0 = { -757.826f, 609.156f, 146.854f };
					break;
				
				case 6:
					Var0 = { -764.546f, 606.874f, 146.622f };
					break;
				
				case 7:
					Var0 = { -766.287f, 606.29f, 146.621f };
					break;
				
				case 8:
					Var0 = { -775.883f, 606.3f, 145.34f };
					break;
				
				case 9:
					Var0 = { -776.479f, 608.106f, 145.341f };
					break;
				
				case 10:
					Var0 = { -775.904f, 606.279f, 141.93f };
					break;
				
				case 11:
					Var0 = { -776.514f, 608.115f, 141.927f };
					break;
				
				case 12:
					Var0 = { -777.114f, 609.913f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.73f, 611.735f, 141.93f };
					break;
				
				case 14:
					Var0 = { -760.008f, 617.577f, 135.529f };
					break;
				
				case 15:
					Var0 = { -761.979f, 613.297f, 144.432f };
					break;
				
				case 16:
					Var0 = { -759.454f, 616.171f, 135.527f };
					break;
				
				case 17:
					Var0 = { -755.663f, 615.504f, 135.53f };
					break;
				
				case 18:
					Var0 = { -765.722f, 616.303f, 142.921f };
					break;
				
				case 19:
					Var0 = { -766.58f, 610.731f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.525f, 606.775f, 140.084f };
					break;
				
				case 21:
					Var0 = { -770.866f, 607.453f, 140.038f };
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					Var0 = { -757.78f, 609.162f, 146.802f };
					break;
				
				case 1:
					Var0 = { -766.203f, 606.319f, 146.559f };
					break;
				
				case 2:
					Var0 = { -764.563f, 606.867f, 146.558f };
					break;
				
				case 3:
					Var0 = { -777.699f, 611.734f, 145.348f };
					break;
				
				case 4:
					Var0 = { -777.089f, 609.912f, 145.347f };
					break;
				
				case 5:
					Var0 = { -776.485f, 608.096f, 145.346f };
					break;
				
				case 6:
					Var0 = { -775.876f, 606.28f, 145.344f };
					break;
				
				case 7:
					Var0 = { -775.272f, 604.479f, 145.342f };
					break;
				
				case 8:
					Var0 = { -773.352f, 603.944f, 142.957f };
					break;
				
				case 9:
					Var0 = { -775.292f, 604.464f, 141.93f };
					break;
				
				case 10:
					Var0 = { -775.9f, 606.28f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.501f, 608.107f, 141.929f };
					break;
				
				case 12:
					Var0 = { -777.094f, 609.913f, 141.931f };
					break;
				
				case 13:
					Var0 = { -777.704f, 611.727f, 141.927f };
					break;
				
				case 14:
					Var0 = { -760.067f, 617.711f, 135.519f };
					break;
				
				case 15:
					Var0 = { -761.857f, 613.312f, 144.436f };
					break;
				
				case 16:
					Var0 = { -755.771f, 615.58f, 135.53f };
					break;
				
				case 17:
					Var0 = { -759.542f, 616.43f, 135.428f };
					break;
				
				case 18:
					Var0 = { -765.681f, 616.25f, 142.925f };
					break;
				
				case 19:
					Var0 = { -766.199f, 610.998f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.641f, 606.95f, 140.067f };
					break;
				
				case 21:
					Var0 = { -770.854f, 607.562f, 140.035f };
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.08f, -579.813f, 111.013f };
					break;
				
				case 1:
					Var0 = { -1554.52f, -578.673f, 111.013f };
					break;
				
				case 2:
					Var0 = { -1552.97f, -577.536f, 111.01f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.932f, 111.014f };
					break;
				
				case 4:
					Var0 = { -1559.78f, -582.504f, 110.976f };
					break;
				
				case 5:
					Var0 = { -1561.27f, -583.588f, 110.978f };
					break;
				
				case 6:
					Var0 = { -1562.74f, -584.654f, 110.977f };
					break;
				
				case 7:
					Var0 = { -1564.21f, -585.721f, 110.976f };
					break;
				
				case 8:
					Var0 = { -1565.64f, -586.759f, 110.98f };
					break;
				
				case 9:
					Var0 = { -1567.12f, -587.838f, 110.979f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.432f, 111.009f };
					break;
				
				case 11:
					Var0 = { -1572.47f, -591.724f, 111.008f };
					break;
				
				case 12:
					Var0 = { -1570.88f, -590.57f, 111.005f };
					break;
				
				case 14:
					Var0 = { -1556.14f, -575.462f, 108.362f };
					break;
				
				case 15:
					Var0 = { -1554.89f, -571.738f, 108.101f };
					break;
				
				case 16:
					Var0 = { -1554.76f, -571.925f, 108.052f };
					break;
				
				case 17:
					Var0 = { -1555.03f, -571.701f, 108.065f };
					break;
				
				case 18:
					Var0 = { -1554.5f, -572.978f, 107.494f };
					break;
				
				case 19:
					Var0 = { -1554.78f, -573.08f, 107.529f };
					break;
				
				case 20:
					Var0 = { -1555.4f, -571.738f, 108.599f };
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.803f, 111.027f };
					break;
				
				case 1:
					Var0 = { -1554.53f, -578.681f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.99f, -577.554f, 111.024f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.933f, 111.024f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.582f, 110.955f };
					break;
				
				case 5:
					Var0 = { -1561.35f, -583.627f, 110.958f };
					break;
				
				case 6:
					Var0 = { -1562.81f, -584.689f, 110.954f };
					break;
				
				case 7:
					Var0 = { -1564.31f, -585.781f, 110.953f };
					break;
				
				case 8:
					Var0 = { -1565.59f, -586.719f, 110.954f };
					break;
				
				case 9:
					Var0 = { -1567.09f, -587.805f, 110.954f };
					break;
				
				case 10:
					Var0 = { -1569.33f, -589.432f, 111.002f };
					break;
				
				case 11:
					Var0 = { -1572.5f, -591.744f, 110.994f };
					break;
				
				case 12:
					Var0 = { -1570.9f, -590.583f, 110.997f };
					break;
				
				case 14:
					Var0 = { -1556.11f, -575.479f, 108.372f };
					break;
				
				case 15:
					Var0 = { -1554.47f, -572.967f, 107.525f };
					break;
				
				case 16:
					Var0 = { -1554.77f, -573.14f, 107.535f };
					break;
				
				case 17:
					Var0 = { -1554.78f, -571.919f, 108.074f };
					break;
				
				case 18:
					Var0 = { -1554.88f, -571.728f, 108.109f };
					break;
				
				case 19:
					Var0 = { -1554.96f, -571.639f, 108.149f };
					break;
				
				case 20:
					Var0 = { -1555.41f, -571.733f, 108.581f };
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.804f, 111.021f };
					break;
				
				case 1:
					Var0 = { -1554.51f, -578.669f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.96f, -577.541f, 111.02f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.931f, 111.02f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.595f, 110.941f };
					break;
				
				case 5:
					Var0 = { -1561.41f, -583.686f, 110.941f };
					break;
				
				case 6:
					Var0 = { -1562.79f, -584.688f, 110.942f };
					break;
				
				case 7:
					Var0 = { -1564.24f, -585.738f, 110.934f };
					break;
				
				case 8:
					Var0 = { -1565.69f, -586.794f, 110.932f };
					break;
				
				case 9:
					Var0 = { -1567.01f, -587.755f, 110.933f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.433f, 110.994f };
					break;
				
				case 11:
					Var0 = { -1572.46f, -591.715f, 110.991f };
					break;
				
				case 12:
					Var0 = { -1570.89f, -590.573f, 110.993f };
					break;
				
				case 14:
					Var0 = { -1556.16f, -575.495f, 108.366f };
					break;
				
				case 15:
					Var0 = { -1554.69f, -573.113f, 107.565f };
					break;
				
				case 16:
					Var0 = { -1554.92f, -571.749f, 108.114f };
					break;
				
				case 17:
					Var0 = { -1554.97f, -571.647f, 108.087f };
					break;
				
				case 18:
					Var0 = { -1554.81f, -571.941f, 108.193f };
					break;
				
				case 19:
					Var0 = { -1555.41f, -571.733f, 108.577f };
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1060.03f, -3098.1f, -39.993f };
					break;
				
				case 10:
					Var0 = { 1053.52f, -3107.47f, -39.997f };
					break;
				
				case 11:
					Var0 = { 1068.56f, -3100.27f, -39.911f };
					break;
				
				case 12:
					Var0 = { 1068.13f, -3106.15f, -39.875f };
					break;
				
				case 13:
					Var0 = { 1050.45f, -3095.33f, -39.875f };
					break;
				
				case 14:
					Var0 = { 1062.71f, -3102.73f, -39.999f };
					break;
				
				case 15:
					Var0 = { 1062.64f, -3109.4f, -40.104f };
					break;
				
				case 16:
					Var0 = { 1055.59f, -3095.77f, -40.004f };
					break;
				
				case 17:
					Var0 = { 1062.8f, -3096.05f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.94f, -3110.31f, -40f };
					break;
				
				case 19:
					Var0 = { 1055.37f, -3102.58f, -40f };
					break;
				
				case 20:
					Var0 = { 1050.41f, -3096.75f, -40f };
					break;
				
				case 21:
					Var0 = { 1065.13f, -3095.59f, -40f };
					break;
				
				case 22:
					Var0 = { 1057.63f, -3102.73f, -40f };
					break;
				
				case 23:
					Var0 = { 1060.28f, -3109.25f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.12f, -3107.19f, -40f };
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					Var0 = { 1062.73f, -3102.65f, -40.005f };
					break;
				
				case 11:
					Var0 = { 1059.84f, -3098.36f, -39.993f };
					break;
				
				case 12:
					Var0 = { 1053.18f, -3107.29f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1055.54f, -3095.79f, -40.004f };
					break;
				
				case 14:
					Var0 = { 1068.45f, -3100.11f, -39.911f };
					break;
				
				case 15:
					Var0 = { 1068.19f, -3106.3f, -39.875f };
					break;
				
				case 16:
					Var0 = { 1050.28f, -3095.22f, -39.875f };
					break;
				
				case 17:
					Var0 = { 1055.49f, -3102.77f, -40f };
					break;
				
				case 18:
					Var0 = { 1062.57f, -3096.19f, -40f };
					break;
				
				case 19:
					Var0 = { 1062.73f, -3109.38f, -40.004f };
					break;
				
				case 20:
					Var0 = { 1057.81f, -3110.68f, -40f };
					break;
				
				case 21:
					Var0 = { 1050.54f, -3097.03f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.13f, -3095.94f, -40f };
					break;
				
				case 23:
					Var0 = { 1057.57f, -3102.46f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.05f, -3106.59f, -40f };
					break;
				
				case 25:
					Var0 = { 1060.13f, -3109.52f, -40.1f };
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1051.8f, -3100.1f, -39.911f };
					break;
				
				case 10:
					Var0 = { 1053.11f, -3096.68f, -39.875f };
					break;
				
				case 11:
					Var0 = { 1057.84f, -3102.69f, -39.999f };
					break;
				
				case 12:
					Var0 = { 1068.43f, -3107.14f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1060.64f, -3097.96f, -39.993f };
					break;
				
				case 14:
					Var0 = { 1060.27f, -3109.22f, -40.004f };
					break;
				
				case 15:
					Var0 = { 1065.18f, -3095.68f, -40.004f };
					break;
				
				case 16:
					Var0 = { 1065.26f, -3102.84f, -40f };
					break;
				
				case 17:
					Var0 = { 1055.62f, -3110.61f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.95f, -3095.86f, -40f };
					break;
				
				case 19:
					Var0 = { 1057.89f, -3109.3f, -40f };
					break;
				
				case 20:
					Var0 = { 1062.7f, -3095.94f, -40f };
					break;
				
				case 21:
					Var0 = { 1067.55f, -3102.7f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.21f, -3109.07f, -40f };
					break;
				
				case 23:
					Var0 = { 1069.96f, -3096.07f, -40.019f };
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					Var0 = { 527.034f, 4750.56f, -69.996f };
					break;
				
				case 15:
					Var0 = { 523.106f, 4748.99f, -69.996f };
					break;
				
				case 16:
					Var0 = { 520.783f, 4751.96f, -70f };
					break;
				
				case 17:
					Var0 = { 509.587f, 4749.41f, -69.816f };
					break;
				
				case 18:
					Var0 = { 508.629f, 4748.8f, -68.493f };
					break;
				
				case 19:
					Var0 = { 507.79f, 4748.8f, -68.49f };
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					Var0 = { 527.282f, 4750.55f, -69.978f };
					break;
				
				case 14:
					Var0 = { 523.103f, 4749.02f, -69.996f };
					break;
				
				case 15:
					Var0 = { 520.286f, 4752.03f, -70f };
					break;
				
				case 16:
					Var0 = { 508.642f, 4748.81f, -68.53f };
					break;
				
				case 17:
					Var0 = { 507.783f, 4748.78f, -68.551f };
					break;
				
				case 18:
					Var0 = { 509.609f, 4749.65f, -69.816f };
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 1:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 2:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 3:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 5:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 6:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 7:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 8:
					Var0 = { -1256.88f, -3028.78f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 10:
					Var0 = { -1271.01f, -3006.86f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1250.56f, -3033.55f, -49.488f };
					break;
				
				case 12:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 13:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 14:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 15:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 16:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 17:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 18:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					Var0 = { -1253.65f, -3036.25f, -49.484f };
					break;
				
				case 22:
					Var0 = { -1241.2f, -3002.71f, -42.888f };
					break;
				
				case 23:
					Var0 = { -1239.3f, -3002.78f, -43.08f };
					break;
				
				case 24:
					Var0 = { -1239.61f, -3002.97f, -43.086f };
					break;
				
				case 25:
					Var0 = { -1299.62f, -3031.62f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.31f, -48.707f };
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1254.13f, -3033.29f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.51f, -3034.71f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1241.19f, -3002.96f, -42.884f };
					break;
				
				case 23:
					Var0 = { -1240.54f, -3003.18f, -43.067f };
					break;
				
				case 24:
					Var0 = { -1239.34f, -3002.96f, -43.085f };
					break;
				
				case 25:
					Var0 = { -1299.53f, -3031.74f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.39f, -48.711f };
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1253.62f, -3034.36f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.1f, -3035.93f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1239.38f, -3002.83f, -43.087f };
					break;
				
				case 23:
					Var0 = { -1240.49f, -3002.92f, -43.063f };
					break;
				
				case 24:
					Var0 = { -1241.19f, -3002.83f, -42.88f };
					break;
				
				case 25:
					Var0 = { -1299.56f, -3030.33f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.46f, -3031.64f, -48.708f };
					break;
			}
			break;
	}
	return Var0;
}

int func_223(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_192;
	}
	return -1;
}

void func_224()
{
	int iVar0;
	struct<3> Var1;
	
	if (func_154(PLAYER::PLAYER_ID()) == 256)
	{
		iVar0 = -1;
		switch (func_153(PLAYER::PLAYER_ID()))
		{
			case 19:
				iVar0 = func_223(PLAYER::PLAYER_ID());
				switch (iVar0)
				{
					case 48:
						Var1 = { -2136.9f, 5406.84f, -72.701f };
						break;
					
					case 49:
						Var1 = { 3721.85f, 6010.4f, -153.529f };
						break;
					
					case 50:
						Var1 = { 204.126f, 7645.72f, -153.104f };
						break;
				}
				if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !CAM::IS_SCREEN_FADED_OUT()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var1) < 25f) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_32(&uLocal_72, 20000, 0))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				else if (func_34(&uLocal_72))
				{
					func_26(&uLocal_72);
				}
				break;
			
			case 17:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 971.6008f, 60.19165f, 118.2942f, 967.9448f, 53.68709f, 119.7942f, 9.5f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 972.0234f, 58.7202f, 115.1641f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.7022f);
				}
				break;
		}
	}
	else if (func_34(&uLocal_72))
	{
		func_26(&uLocal_72);
	}
}

void func_225()
{
	if (Global_2540612.f_342)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		PAD::DISABLE_CONTROL_ACTION(2, 201, true);
		iLocal_69 = 1;
		func_26(&uLocal_70);
	}
	else if (iLocal_69)
	{
		if ((!func_32(&uLocal_70, 1500, 0) || !CAM::IS_SCREEN_FADED_IN()) || CAM::IS_SCREEN_FADING_IN())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			PAD::DISABLE_CONTROL_ACTION(2, 201, true);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_69 = 0;
			func_26(&uLocal_70);
		}
	}
}

void func_226()
{
	bool bVar0;
	int iVar1;
	
	if (func_69())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::DISABLE_CONTROL_ACTION(0, 104, true);
		PAD::DISABLE_CONTROL_ACTION(0, 54, true);
	}
	if (func_227(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("dune3") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("apc"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 104, true);
					PAD::DISABLE_CONTROL_ACTION(0, 54, true);
				}
			}
		}
	}
	if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
	{
		if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6 != -1 && func_79(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6) == 11)
		{
			bVar0 = true;
			if (!iLocal_27 || !Global_1689676)
			{
				Global_1689676 = 1;
				iLocal_27 = 1;
			}
		}
	}
	if (!bVar0)
	{
		if (iLocal_27)
		{
			if (!iLocal_26)
			{
				Global_1689676 = 0;
			}
			iLocal_27 = 0;
		}
	}
}

int func_227(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_38())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_228()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_34(&uLocal_18))
	{
		MISC::SET_BIT(&Global_7552, 2);
		if (func_32(&uLocal_18, 60000, 0))
		{
			func_77(&uLocal_18, 0, 0);
			func_26(&uLocal_18);
		}
	}
	if (func_34(&uLocal_16) && func_32(&uLocal_16, 1000, 0))
	{
		if (iLocal_25 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_25 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_25, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_32(&uLocal_16, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_25))
			{
				AUDIO::STOP_SOUND(iLocal_25);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_25);
			iLocal_25 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_77(&uLocal_16, 0, 0);
			func_26(&uLocal_16);
		}
	}
	if (!iLocal_10 && !func_234())
	{
		return;
	}
	iLocal_10 = 1;
	MISC::SET_BIT(&Global_7552, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_9))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_9 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_9, 8000);
			iVar1 = func_58(7867, -1, 0);
			func_52(7867, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
			iLocal_23 = 0;
		}
	}
	else
	{
		func_233();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_24 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_24 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_24, "07", iLocal_9, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_11)
			{
				if (func_32(&uLocal_12, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, false);
					func_77(&uLocal_12, 0, 0);
					func_26(&uLocal_12);
					func_33(&uLocal_14, 0, 0);
					iLocal_11 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_212(&uLocal_14, 0, 0)) / SYSTEM::TO_FLOAT(func_232()));
				fVar47 = (SYSTEM::TO_FLOAT(func_212(&uLocal_12, 0, 0)) / SYSTEM::TO_FLOAT(func_231()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_229(Local_20, func_230(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_9, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_23++;
					Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
					func_77(&uLocal_12, 0, 0);
					func_26(&uLocal_12);
					if (func_231() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_9);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_24))
						{
							AUDIO::STOP_SOUND(iLocal_24);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_24);
						iLocal_24 = -1;
						func_33(&uLocal_16, 0, 0);
						func_33(&uLocal_18, 0, 0);
						func_77(&uLocal_14, 0, 0);
						func_26(&uLocal_14);
						Local_20 = { 0f, 0f, 0f };
						iLocal_23 = 0;
						iLocal_10 = 0;
						iLocal_11 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_229(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_230()
{
	switch (iLocal_23)
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

int func_231()
{
	switch (iLocal_23)
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

int func_232()
{
	return 3150;
}

void func_233()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_9, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_9, Var0, 2, true);
}

int func_234()
{
	if (((((((func_238(22107, -1, -1) && Global_2409291 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_237(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2452907.f_3074.f_178 >= 1) && Global_2452907.f_3074.f_178 < 4) && func_236()) && func_235())
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	if (func_238(15476, -1, -1) && func_58(5451, func_42(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_236()
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

bool func_237(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_238(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_42();
	}
	iVar1 = func_240(iParam0, iParam1);
	iVar2 = func_239(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_239(int iParam0)
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
	return iVar0;
}

int func_240(int iParam0, int iParam1)
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
	return iVar0;
}

void func_241()
{
	if (Global_1704009 == 1)
	{
		if (!Global_1689727)
		{
			Global_1689727 = 1;
		}
	}
	else if (Global_1689727)
	{
		Global_1689727 = 0;
	}
}

void func_242()
{
	if (!func_243())
	{
		if (func_34(&uLocal_6))
		{
			func_26(&uLocal_6);
		}
		iLocal_8 = 0;
	}
	if (iLocal_8)
	{
		return;
	}
	if (!func_34(&uLocal_6))
	{
		func_77(&uLocal_6, 0, 0);
	}
	if (!func_32(&uLocal_6, 35000, 0))
	{
		return;
	}
	iLocal_8 = 1;
	Global_2452015.f_42.f_3 = 3;
	Global_2452015.f_42.f_40 = 1;
	MISC::SET_BIT(&(Global_4456448.f_27), 22);
	CAM::DO_SCREEN_FADE_OUT(0);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
	CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
}

int func_243()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!Global_2452015.f_23)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_2452015.f_42.f_4, 0) && !Global_2452015.f_42.f_57)
	{
		return 0;
	}
	if (Global_2452015.f_42 == -1)
	{
		return 0;
	}
	if (Global_2452015.f_42.f_3 != 6)
	{
		return 0;
	}
	return 1;
}

void func_244()
{
	if ((NETWORK::GET_CLOUD_TIME_AS_INT() > func_58(9583, -1, 0) && func_192(PLAYER::PLAYER_ID()) == 258) && func_246() == 3)
	{
		func_245(-1);
	}
}

void func_245(int iParam0)
{
	int iVar0;
	
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_29436);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	func_52(9583, iVar0, -1, 1, 0);
}

int func_246()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_102;
}

void func_247()
{
	switch (func_248())
	{
		case joaat("cheetah2"):
			Global_1696944 = 0.8f;
			break;
		
		case joaat("paragon2"):
			Global_1696944 = 0.65f;
			break;
		
		case joaat("dominator3"):
			Global_1696944 = 0.65f;
			break;
		
		case joaat("tropos"):
			Global_1696944 = 0.56f;
			break;
		
		case joaat("omnis"):
			Global_1696944 = 0.66f;
			break;
		
		case joaat("paragon"):
			Global_1696944 = 0.65f;
			break;
		
		case joaat("toreador"):
			Global_1696944 = 0.55f;
			break;
		
		case joaat("peyote3"):
			Global_1696944 = 0.47f;
			break;
		
		case joaat("osiris"):
			Global_1696944 = 0.8f;
			break;
		
		case joaat("tyrus"):
			Global_1696944 = 0.47f;
			break;
		
		case joaat("verlierer2"):
			Global_1696944 = 0.77f;
			break;
		
		case joaat("nightshark"):
			Global_1696944 = 0.69f;
			break;
		
		case joaat("tyrant"):
			Global_1696944 = 0.49f;
			break;
		
		case joaat("fmj"):
			Global_1696944 = 0.63f;
			break;
		
		case joaat("comet5"):
			Global_1696944 = 0.8f;
			break;
		
		case joaat("hakuchou2"):
			Global_1696944 = 0.79f;
			break;
		
		case joaat("kanjo"):
			Global_1696944 = 0.68f;
			break;
		
		case joaat("vstr"):
			Global_1696944 = 0.66f;
			break;
		
		case joaat("italirsx"):
			Global_1696944 = 0.59f;
			break;
		
		case joaat("le7b"):
			Global_1696944 = 0.62f;
			break;
		
		case joaat("freecrawler"):
			Global_1696944 = 0.8f;
			break;
		
		case joaat("revolter"):
			Global_1696944 = 0.74f;
			break;
		
		case joaat("yosemite2"):
			Global_1696944 = 0.71f;
			break;
		
		case joaat("nero2"):
			Global_1696944 = 0.84f;
			break;
		
		case joaat("winky"):
			Global_1696944 = 0.66f;
			break;
		
		case joaat("entityxf"):
			Global_1696944 = 0.65f;
			break;
		
		case joaat("entity2"):
			Global_1696944 = 0.67f;
			break;
		
		case joaat("sultanrs"):
			Global_1696944 = 0.62f;
			break;
		
		case joaat("windsor2"):
			Global_1696944 = 0.69f;
			break;
		
		case joaat("hotring"):
			Global_1696944 = 0.74f;
			break;
		
		case joaat("retinue2"):
			Global_1696944 = 0.65f;
			break;
	}
}

int func_248()
{
	return Global_262145.f_26059;
}

void func_249()
{
	if ((Global_110804 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_29())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_250()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574217)
		{
			iVar0 = func_251(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10128 = 1;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_5 = 0;
	}
}

int func_251(int iParam0)
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

void func_252()
{
	if (!iLocal_4)
	{
		if (Global_1574217)
		{
			if (func_254() || func_253())
			{
				Global_262145.f_19705 = 1;
			}
			else
			{
				Global_262145.f_19705 = 0;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_4 = 0;
	}
}

int func_253()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_251(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10237)
	{
		return 0;
	}
	uVar1[0] = func_251(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_251(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_251(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_251(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10233 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10237)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_254()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_251(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10236)
	{
		return 0;
	}
	uVar1[0] = func_251(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_251(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_251(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_251(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10232 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10236)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_255()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590682)
		{
			MISC::SET_BIT(&(Global_1590682[iVar0 /*883*/].f_744), 1);
			iVar0++;
		}
	}
}

void func_256()
{
	if (Global_262145.f_10212 != 120)
	{
		Global_262145.f_10212 = 120;
	}
}

void func_257()
{
	int iVar0;
	
	iLocal_3 = 0;
	if (func_20(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iLocal_3 = ENTITY::GET_ENTITY_MODEL(iVar0);
		}
	}
}

void func_258()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_259(0.875f, 0.03f, "STRING", sLocal_0);
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

void func_259(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_260()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_261()
{
	AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_13_JAZZ", "WWFM_ISLAND_UPDATE_MUSIC_MUSIC");
	AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_14_DANCE_02", "FLYLO_ISLAND_UPDATE_MUSIC_MUSIC");
}

