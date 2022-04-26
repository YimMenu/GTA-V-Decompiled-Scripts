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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = -1;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_124[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_135 = NULL;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 16;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
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
	var uLocal_189 = 0;
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
	var uLocal_208 = 0;
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
	var uLocal_227 = 0;
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
	var uLocal_246 = 0;
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
	var uLocal_265 = 0;
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
	var uLocal_284 = 0;
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
	var uLocal_303 = 0;
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
	var uLocal_315[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_325[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<16> Local_357[31];
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
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
	iLocal_109 = -1;
	sLocal_135 = "";
	iLocal_139 = 8;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("appSmuggler")) > 1)
	{
		func_386(0, 1);
	}
	func_376();
	while (func_375())
	{
		func_374();
		if (!BitTest(uLocal_107, 5) && func_373())
		{
			func_371();
			func_348();
		}
		if (!BitTest(uLocal_107, 8) && BitTest(uLocal_107, 5))
		{
			func_342();
		}
		func_335();
		func_318();
		func_313();
		func_305();
		func_303();
		func_265();
		if (!BitTest(uLocal_107, 2))
		{
			func_6();
		}
		else if (!func_5(&uLocal_140))
		{
			func_4(&uLocal_140, 0, 0);
		}
		else if (func_3(&uLocal_140, 200, 0))
		{
			if (!Global_1946941.f_3363 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_1();
				Global_1946795 = 1;
				func_386(0, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!func_2())
	{
		Global_1946941.f_3363 = 1;
	}
}

bool func_2()
{
	return Global_1946941.f_518;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	
	func_263();
	if (BitTest(uLocal_107, 0))
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_855))
		{
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_855);
			switch (iVar0)
			{
				case 0:
					func_262();
					func_261();
					break;
				
				case 1:
					func_213();
					break;
				
				case 35:
					if (iLocal_137 != 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_137 = 0;
					break;
				
				case 36:
					if (iLocal_137 != 1)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_137 = 1;
					break;
				
				case 37:
					if (iLocal_137 != 2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_137 = 2;
					break;
				
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					func_198(func_212(iVar0), 0);
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (func_197(15964, -1))
					{
						func_198(func_212(iVar0), 0);
					}
					else
					{
						iLocal_137 = 2;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SHOW_SCREEN", 2f, -1f, -1f, -1f, -1f);
					}
					break;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					func_7(func_212(iVar0));
					break;
			}
			MISC::CLEAR_BIT(&uLocal_107, 0);
		}
	}
}

void func_7(int iParam0)
{
	struct<2> Var0;
	struct<4> Var4;
	
	if (func_196(PLAYER::PLAYER_ID()))
	{
		func_193("HAPP_STEAL_T", "HAPP_STEAL_D", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (iParam0 != 8 && func_191(iParam0))
	{
		func_193("HAPP_STEAL_T", "HAPP_STEAL_D1", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(229))
	{
		func_193("HAPP_STEAL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1", 16);
		StringCopy(&Var4, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0", 16);
			Var4 = { func_9(iParam0) };
		}
		func_193("HAPP_STEAL_T", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, -1, &Var4);
	}
	func_8();
}

void func_8()
{
	sLocal_135 = "";
}

struct<4> func_9(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED", 16);
			break;
	}
	return Var0;
}

void func_10(int iParam0)
{
	iLocal_139 = iParam0;
}

char* func_11()
{
	return sLocal_135;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (!func_190(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar0 = func_21(PLAYER::PLAYER_ID(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON1");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON2");
			}
			else
			{
				func_18("UA_ML_F_GOON3");
			}
		}
		else if (iVar0 == 15)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G1");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G2");
			}
			else
			{
				func_18("GENERAL_MLF_G3");
			}
		}
		else if (iVar0 == 16)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G4");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G5");
			}
			else
			{
				func_18("GENERAL_MLF_G6");
			}
		}
		else
		{
			func_18("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_15(PLAYER::PLAYER_ID()))
	{
		func_18("DBG_BUN_NB");
		return 0;
	}
	if (func_13(PLAYER::PLAYER_ID()))
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_14(iParam0, 9);
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_15(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_16())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

int func_17(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 26);
}

void func_18(char* sParam0)
{
	sLocal_135 = sParam0;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, 1);
}

int func_20(int iParam0, int iParam1)
{
	if (iParam0 != func_16())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_16())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_53(func_162(iParam1, -1, -1, -1), func_116(iParam1, -1, 1, -1, -1, iParam0), func_62(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_19(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_51(iParam1) >= func_50(iVar0))
	{
		return 5;
	}
	if (func_49(iParam0))
	{
		return 6;
	}
	if (func_48(iParam0))
	{
		return 14;
	}
	iVar1 = func_43(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_42(iParam1) == 1)
	{
		if ((func_41() || func_40()) || ((!bParam2 && func_39() != 0) && func_42(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_42(iParam1) == 2)
	{
		if (!func_36(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1893551[iParam0 /*599*/].f_10.f_34 != func_16())
			{
				return 9;
			}
		}
		if (func_35(iParam0))
		{
			return 10;
		}
	}
	else if (func_33(iParam1))
	{
		if (func_31(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_30(iParam1))
	{
		if (func_29())
		{
			return 13;
		}
		if (func_27())
		{
			return 12;
		}
	}
	if (func_31(iParam0) + 1 < func_26(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_23(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_22(iParam0, 21) || func_22(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_22(int iParam0, int iParam1)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_215, iParam1);
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_24(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_14(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_16())
	{
		if (!bParam2)
		{
			if (func_25(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[iParam0 /*599*/].f_10 != func_16())
		{
			return iParam1 == Global_1893551[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_16())
			{
				if (Global_1893551[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18430;
		
		case 183:
			return Global_262145.f_18438;
		
		case 185:
			return Global_262145.f_18447;
		
		case 182:
			return Global_262145.f_18458;
		
		case 186:
			return Global_262145.f_18467;
		
		case 195:
			return Global_262145.f_18485;
		
		case 198:
			return Global_262145.f_18495;
		
		case 197:
			return Global_262145.f_18507;
		
		case 207:
			return Global_262145.f_18515;
		
		case 209:
			return Global_262145.f_18528;
		
		case 208:
			return Global_262145.f_18536;
		
		case 201:
			return Global_262145.f_18569;
		
		case 211:
			return Global_262145.f_18637;
		
		case 193:
			return Global_262145.f_18660;
		
		case 205:
			return Global_262145.f_18678;
		
		case 189:
			return Global_262145.f_18643;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_27()
{
	if (func_28())
	{
		return 1;
	}
	return Global_2714635.f_744;
}

bool func_28()
{
	return Global_1575013 == 10;
}

bool func_29()
{
	return Global_262145.f_15487;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_31(int iParam0)
{
	if (func_32(iParam0) == func_16())
	{
		return 0;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_19;
}

int func_32(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_16();
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_34(iParam0, 0);
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1893551[iParam0 /*599*/].f_10.f_34 != func_16() && Global_1893551[iParam0 /*599*/].f_10.f_34 == iVar1) && Global_1893551[iVar1 /*599*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_38() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_19(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_39()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_103;
}

bool func_40()
{
	return Global_1921039.f_11.f_144 != -1;
}

bool func_41()
{
	return Global_1921039.f_11.f_143 != -1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_45())
	{
		iVar1 = Global_1893551[iParam0 /*599*/].f_10.f_11[iVar0];
		if (iVar1 != func_16())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_49(iVar1))
				{
					return 7;
				}
				if (func_48(iVar1))
				{
					return 15;
				}
				if (func_44(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (((((BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 2) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 3)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 5)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 6)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 7)) || BitTest(Global_1853131[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	return (func_46() - 1);
}

int func_46()
{
	return func_47(PLAYER::PLAYER_ID());
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_16() && Global_1893551[iVar0 /*599*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2784005;
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

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12831;
		
		case 155:
			return Global_262145.f_12856;
		
		case 153:
			return Global_262145.f_12820;
		
		case 163:
			return Global_262145.f_12796;
		
		case 160:
			return Global_262145.f_12809;
		
		case 154:
			return Global_262145.f_12866;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15314;
		
		case 172:
			return Global_262145.f_15333;
		
		case 148:
			return Global_262145.f_18544;
		
		case 179:
			return Global_262145.f_18552;
		
		case 201:
			return Global_262145.f_18566;
		
		case 200:
			return Global_262145.f_18606;
		
		case 211:
			return Global_262145.f_18635;
		
		case 194:
			return Global_262145.f_18647;
		
		case 193:
			return Global_262145.f_18658;
		
		case 210:
			return Global_262145.f_18670;
		
		case 205:
			return Global_262145.f_18676;
		
		case 199:
			return Global_262145.f_18689;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_51(int iParam0)
{
	return Global_1921039.f_11.f_147[func_52(iParam0)];
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		default:
	}
	return -1;
}

int func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_61(iParam0, bParam3, bParam4) || func_60(iParam1, bParam3, bParam4)) || func_54(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(2, iParam0, 0, bParam1, bParam2);
}

int func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1656884, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_59(iParam0) - func_58(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_57(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_58(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_59(iParam0) - func_58(iParam0, 1));
		}
		if (!bParam4 && Global_1853131[PLAYER::PLAYER_ID() /*888*/] != 3)
		{
			iVar1 = (iVar1 - func_56(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656884.f_1;
			break;
		
		case 1:
			return Global_1656884.f_2;
			break;
		
		case 2:
			return Global_1656884.f_3;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_216;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656892;
			break;
		
		case 1:
			return Global_1656893;
			break;
		
		case 2:
			return Global_1656894;
			break;
	}
	return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(1, iParam0, 0, bParam1, bParam2);
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(0, iParam0, 0, bParam1, bParam2);
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_115(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_113(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_107(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_95(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_88(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_79(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_76(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_75(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_71(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_66(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_63(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_65(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_64(iParam0, iParam2));
	return iVar0;
}

int func_64(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_65(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_70(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_67(iParam0, iParam2));
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_69(iParam1, 1))
			{
				Var0 = { func_68(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_68(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_305;
}

bool func_69(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_16();
}

int func_70(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (!func_73(iParam0))
	{
		iVar0 = (iVar0 + func_72(iParam0, iParam2));
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_31(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_73(int iParam0)
{
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_78(iParam0, iParam1);
	if (func_77(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_77(int iParam0)
{
	return 1;
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_87(iParam0, iParam1);
	if (!func_86(iParam0))
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	if (iParam0 == 14 || ((((func_86(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_83(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_82(iParam0, iParam1);
			iVar2 = func_81(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_86(iParam0))
		{
			if (iVar0 > Global_262145.f_18181)
			{
				iVar0 = Global_262145.f_18181;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18180)
			{
				iVar0 = Global_262145.f_18180;
			}
			if (iVar0 > Global_262145.f_18179)
			{
				iVar0 = Global_262145.f_18179;
			}
		}
	}
	return iVar0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18218;
		
		case 10:
			return Global_262145.f_18243;
		
		default:
	}
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (func_86(iParam0))
	{
		if (iParam1 >= Global_262145.f_18182)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18219;
		
		case 10:
			return Global_262145.f_18244;
		
		default:
	}
	return 8;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_84()
{
	if (func_85() == func_16())
	{
		return 0;
	}
	return func_31(func_85());
}

int func_85()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_94(iParam0, iParam1, iParam2, iParam4);
	if (!func_93(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_90(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_89(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_93(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_92(iParam0))
	{
		iVar0 = func_92(iParam0);
	}
	else if (iVar0 < func_91(iParam0))
	{
		iVar0 = func_91(iParam0);
	}
	return iVar0;
}

int func_91(int iParam0)
{
	return 1;
}

int func_92(int iParam0)
{
	return 4;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_106(iParam0, iParam1, iParam2, iParam4);
	if (!func_105(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_97(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_96(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_104(iParam0))
	{
		iVar1 = func_103(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_102(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_101(iParam2))
		{
			iVar0 = func_101(iParam2);
		}
	}
	if (iVar0 > func_99(iParam0))
	{
		iVar0 = func_99(iParam0);
	}
	else if (iVar0 < func_98(iParam0))
	{
		iVar0 = func_98(iParam0);
	}
	return iVar0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_99(int iParam0)
{
	if (!func_104(iParam0))
	{
		if (func_105(iParam0))
		{
			if (func_100(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == func_16() || Global_1853131[iParam0 /*888*/].f_267.f_274 == 0)
	{
		return 50;
	}
	return (50 - Global_1853131[iParam0 /*888*/].f_267.f_274.f_3);
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_105(int iParam0)
{
	if (func_104(iParam0) || func_102(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_112(iParam0, iParam1, iParam2, iParam3);
	if (!func_111(iParam0))
	{
		iVar0 = (iVar0 + func_109(iParam0, func_84() + 1, -1, iParam2));
	}
	if (func_108(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_110(iParam0))
	{
		if (iParam2 <= Global_262145.f_21475)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21476)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_111(iParam0))
	{
		if (iParam1 < Global_262145.f_21435)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_113(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_114(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_161(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_157(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_153(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_147(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_138(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_137(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_136(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_135(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_129(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_123(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_117(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_122(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_121(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_120(func_31(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_119(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_118(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_119(int iParam0, int iParam1)
{
	return func_118(iParam0, iParam1) > 0;
}

int func_120(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_121(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_128(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_127(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_126(func_31(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_124(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)
{
	return func_124(iParam0, iParam1) > 0;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_16())
			{
				if (func_69(iParam2, 1))
				{
					Var0 = { func_68(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_73(iParam0))
		{
			iVar0 = (iVar0 + func_72(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_134(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_133(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_132(func_31(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_130(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	return func_130(iParam0, iParam1) > 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_77(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_86(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	return iVar0;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_93(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_90(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_143(iParam0, func_31(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_142(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_141(func_31(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_140(iParam0))
		{
			iVar0 = (iVar0 + func_139(iParam0));
		}
	}
	return iVar0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_139(iParam0) > 0;
}

int func_141(var uParam0, int iParam1)
{
	return 2;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_143(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_144(5328, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_145(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_146();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_146()
{
	return Global_1574915;
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_105(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_97(iParam0, func_31(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_152(iParam0, func_31(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_151(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_150(func_31(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_149(iParam0))
		{
			iVar0 = (iVar0 + func_148(iParam0));
		}
	}
	return iVar0;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_149(int iParam0)
{
	return func_148(iParam0) > 0;
}

int func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_100(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_100(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_100(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_151(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_152(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_109(iParam0, func_84() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_111(iParam0))
		{
			iVar0 = (iVar0 + func_109(iParam0, func_84() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_156(iParam0, func_84() + 1));
	}
	if (!bParam3)
	{
		if (func_155(iParam0))
		{
			iVar0 = (iVar0 + func_154(iParam0));
		}
	}
	return iVar0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_155(int iParam0)
{
	return func_154(iParam0) > 0;
}

int func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_160(iParam0, func_84() + 1, iParam2));
	iVar0 = (iVar0 + func_158(iParam0));
	return iVar0;
}

int func_158(int iParam0)
{
	if (func_159(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_189(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_186(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_183(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_180(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_177(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_176(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_175();
		
		case 218:
			return func_174();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_173(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_172(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_169(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_166(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_163(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_119(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_164(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_164(int iParam0, var uParam1)
{
	if (func_119(iParam0, uParam1))
	{
		return (func_118(iParam0, uParam1) + func_165(iParam0, uParam1));
	}
	return 0;
}

int func_165(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_166(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_167(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_167(int iParam0, int iParam1)
{
	if (func_125(iParam0, iParam1))
	{
		return (func_124(iParam0, iParam1) + func_168(iParam0, iParam1));
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_170(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1)
{
	if (func_131(iParam0, iParam1))
	{
		return (func_130(iParam0, iParam1) + func_171(iParam0, iParam1));
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_174()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_175()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_80(iParam0, func_84() + 1));
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_140(iParam0))
		{
			iVar0 = (iVar0 + func_178(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_178(int iParam0, var uParam1)
{
	if (func_140(iParam0))
	{
		return (func_139(iParam0) + func_179(iParam0, uParam1));
	}
	return 0;
}

int func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_149(iParam0))
		{
			iVar0 = (iVar0 + func_181(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_181(int iParam0, int iParam1)
{
	if (func_149(iParam0))
	{
		return (func_148(iParam0) + func_182(iParam0, iParam1));
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_155(iParam0))
		{
			iVar0 = (iVar0 + func_184(iParam0));
		}
	}
	return iVar0;
}

int func_184(int iParam0)
{
	if (func_155(iParam0))
	{
		return (func_154(iParam0) + func_185(iParam0));
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_186(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_187(iParam0));
	return iVar0;
}

int func_187(int iParam0)
{
	if (func_159(iParam0))
	{
		if (func_188(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

bool func_190(int iParam0, int iParam1, bool bParam2)
{
	return func_21(iParam0, iParam1, bParam2) == -1;
}

int func_191(int iParam0)
{
	if (func_5(&(Global_2785141[iParam0 /*2*/])) && func_3(&(Global_2785141[iParam0 /*2*/]), Global_2785141.f_17[iParam0], 0))
	{
		func_192(&(Global_2785141[iParam0 /*2*/]));
		return 0;
	}
	return func_5(&(Global_2785141[iParam0 /*2*/]));
}

void func_192(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_193(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "SHOW_OVERLAY");
	func_195(sParam0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		if (iParam6 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
	}
	else if (iParam6 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_195(sParam2);
	func_195(sParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	else if (bParam4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	MISC::SET_BIT(&uLocal_107, 1);
	func_194(iParam7);
}

void func_194(int iParam0)
{
	if (iLocal_138 != iParam0)
	{
		iLocal_138 = iParam0;
	}
}

void func_195(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_196(int iParam0)
{
	return 0 == func_101(iParam0);
}

bool func_197(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_198(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<4> Var5;
	struct<2> Var9;
	struct<4> Var13;
	int iVar17;
	int iVar18;
	float fVar19;
	
	iVar0 = func_210(PLAYER::PLAYER_ID());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_315[func_209(iParam0)];
	}
	if (!func_207(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1", 16);
		StringCopy(&Var5, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0", 16);
			Var5 = { func_9(iParam0) };
		}
		func_193("HAPP_SELL_T", &Var1, "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, &Var5);
	}
	else if (func_206())
	{
		func_193("HAPP_SELL_T", "HAPP_SELL_C3", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(230))
	{
		func_193("HAPP_SELL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (func_103(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_193("HAPP_SELL_T", "HAPP_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 4, -1, 0);
	}
	else
	{
		StringCopy(&Var9, "HAPP_SELL_C2", 16);
		StringCopy(&Var13, "", 16);
		iVar17 = -1;
		iVar18 = -1;
		if ((func_205() && func_203() != -1) || iParam0 != 8)
		{
			if (func_205())
			{
				iParam0 = func_203();
				iVar0 = uLocal_315[func_209(iParam0)];
			}
			iVar18 = func_201(iParam0, iVar0);
			StringCopy(&Var9, "HAPP_SELL_C0", 16);
			fVar19 = (func_200(iParam0, iVar0) * 100f);
			if (fVar19 > 0f)
			{
				iVar17 = func_199(iParam0, iVar0);
				iVar18 = (iVar18 + iVar17);
				StringCopy(&Var9, "HAPP_SELL_C1", 16);
				iVar17 = SYSTEM::ROUND(fVar19);
			}
			Var13 = { func_9(iParam0) };
		}
		else if (iParam0 == 8)
		{
			MISC::SET_BIT(&uLocal_107, 11);
		}
		func_10(iParam0);
		if (iVar17 > 0)
		{
			MISC::SET_BIT(&uLocal_107, 12);
			func_193("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar17, 1, iVar18, &Var13);
		}
		else
		{
			func_193("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar18, 1, iVar17, &Var13);
		}
	}
	func_8();
}

int func_199(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_200(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_201(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

float func_200(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22589);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22591;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22588);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22591;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22588);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_201(int iParam0, int iParam1)
{
	return (func_202(iParam0) * iParam1);
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22579;
		
		case 0:
			return Global_262145.f_22580;
		
		case 1:
			return Global_262145.f_22581;
		
		case 2:
			return Global_262145.f_22582;
		
		case 3:
			return Global_262145.f_22583;
		
		case 4:
			return Global_262145.f_22584;
		
		case 5:
			return Global_262145.f_22585;
		
		case 6:
			return Global_262145.f_22586;
		
		case 7:
			return Global_262145.f_22587;
		
		default:
	}
	return 0;
}

int func_203()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_315[iVar0] > 0 && iVar0 != 0)
		{
			return func_204(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 6;
		
		case 2:
			return 2;
		
		case 3:
			return 5;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 4;
		
		case 7:
			return 7;
		
		case 8:
			return 3;
		
		default:
	}
	return -1;
}

bool func_205()
{
	return BitTest(uLocal_107, 10);
}

int func_206()
{
	if (func_5(&(Global_2785141.f_26)) && func_3(&(Global_2785141.f_26), Global_2785141.f_28, 0))
	{
		func_192(&(Global_2785141.f_26));
		return 0;
	}
	return func_5(&(Global_2785141.f_26));
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return !func_208(PLAYER::PLAYER_ID());
		
		default:
	}
	return uLocal_315[func_209(iParam0)] > 0;
	return 0;
}

bool func_208(int iParam0)
{
	return func_210(iParam0) == 0;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 6:
			return 1;
		
		case 2:
			return 2;
		
		case 5:
			return 3;
		
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 4:
			return 6;
		
		case 7:
			return 7;
		
		case 3:
			return 8;
		
		default:
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_16() && func_211(iParam0))
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_274.f_3;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_274 != 0;
	}
	return 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 13:
			return 8;
			break;
		
		case 3:
		case 14:
		case 22:
			return 6;
			break;
		
		case 4:
		case 15:
		case 23:
			return 2;
			break;
		
		case 5:
		case 16:
		case 24:
			return 5;
			break;
		
		case 6:
		case 17:
		case 25:
			return 0;
			break;
		
		case 7:
		case 18:
		case 26:
			return 1;
			break;
		
		case 8:
		case 19:
		case 27:
			return 4;
			break;
		
		case 9:
		case 20:
		case 28:
			return 7;
			break;
		
		case 10:
		case 21:
		case 29:
			return 3;
			break;
	}
	return -1;
}

void func_213()
{
	switch (func_260())
	{
		case 2:
			if (func_239(0))
			{
				func_238();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_218(229, 0);
			}
			else
			{
				func_193("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 1:
			if (func_239(1))
			{
				func_215();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_218(230, 0);
			}
			else
			{
				func_193("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_261();
			func_198(func_214(), 1);
			return;
		
		case 5:
			if (!func_12(229))
			{
				func_193("HAPP_T1", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			else if (func_239(0))
			{
				func_238();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_218(229, 1);
				return;
			}
			else
			{
				func_193("HAPP_T1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		default:
			func_262();
			break;
	}
	func_261();
}

int func_214()
{
	return iLocal_139;
}

void func_215()
{
	func_216(1, 6116);
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_144(iParam1, -1, 0);
	func_217(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_217(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_218(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_214();
	if (iVar0 == 8 && iParam0 == 229)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		func_237(18);
	}
	else
	{
		func_236(18);
	}
	if (bParam1)
	{
		func_235(26);
	}
	if ((iParam0 == 230 && func_205()) && iVar0 == 8)
	{
		iVar0 = func_203();
	}
	Global_1944805.f_53 = 0;
	func_219(iParam0, 0, iVar0);
	func_1();
	Global_1946795 = 1;
	MISC::SET_BIT(&uLocal_107, 2);
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_234(iParam1, uVar0);
	func_220(iParam0, -1);
}

void func_220(int iParam0, int iParam1)
{
	if ((func_233() || !func_232(1)) || func_42(iParam0) == 3)
	{
		if (!func_230(PLAYER::PLAYER_ID(), 0) && !func_230(PLAYER::PLAYER_ID(), 3))
		{
			func_229(iParam0);
			func_221(iParam0, func_225(1, 1), func_224(), func_223(), func_222(), iParam1);
		}
	}
}

void func_221(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 985284033;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iParam1);
	}
}

var func_222()
{
	return Global_2810701.f_5194.f_346;
}

var func_223()
{
	return Global_2810701.f_5194.f_345;
}

var func_224()
{
	return Global_2810701.f_5194.f_344;
}

int func_225(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_228(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_226(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_226(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_227(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
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

int func_227(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_146();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_228(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_229(int iParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_32 = iParam0;
}

int func_230(int iParam0, int iParam1)
{
	if (func_231(iParam0, 0))
	{
		return func_42(Global_1893551[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_231(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_232(bool bParam0)
{
	return func_69(PLAYER::PLAYER_ID(), bParam0);
}

int func_233()
{
	return func_15(PLAYER::PLAYER_ID());
}

void func_234(var uParam0, var uParam1)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_234 = uParam0;
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_234.f_22 = uParam1;
}

void func_235(int iParam0)
{
	if (Global_2810701.f_5194.f_344 != iParam0)
	{
		Global_2810701.f_5194.f_344 = iParam0;
	}
}

void func_236(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_47), iParam0);
}

void func_237(int iParam0)
{
	MISC::SET_BIT(&(Global_2810701.f_5194.f_47), iParam0);
}

void func_238()
{
	func_216(1, 6114);
}

bool func_239(bool bParam0)
{
	int iVar0;
	
	if (!func_259())
	{
		return 1;
	}
	while (!func_240(&iVar0, bParam0))
	{
		func_318();
		SYSTEM::WAIT(0);
	}
	func_318();
	return iVar0 == 2;
}

bool func_240(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = 244232650;
	}
	else
	{
		iVar0 = 357925343;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_258() != -1)
			{
				return 0;
			}
			iVar1 = MISC::GET_HASH_KEY("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_254(78225582, -1799524201, iVar0, -1018905335, 1, 0, 1, 4, iVar1, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_248())
			{
			}
			else
			{
				*uParam0 = 3;
				func_244(func_258());
			}
			break;
		
		case 1:
			if (func_243(func_258()))
			{
				if (func_242(func_258()) == 2)
				{
					*uParam0 = 2;
					func_244(func_258());
					func_241(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_244(func_258());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_241(int iParam0)
{
	Global_4529821 = iParam0;
}

int func_242(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_244(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_247(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_245(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_245(var uParam0)
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
	func_246(&(uParam0->f_14));
	func_246(&(uParam0->f_14.f_13));
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

void func_246(var uParam0)
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

int func_247(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_248()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_258();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_146()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_253(Global_4528329[iVar2 /*85*/].f_66.f_6, Global_4528329[iVar2 /*85*/].f_66.f_4, Global_4528329[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4529831 = 1;
			}
			return 0;
		}
		if (Global_2726400)
		{
			if (Global_4528329[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4528329[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_252(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4528329[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4528329[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4528329[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4528329[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4528329[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_249(Global_4528329[iVar2 /*85*/], iVar2);
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	return 0;
}

void func_249(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_251(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_250();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_250()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_251(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_252(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_253(int iParam0, int iParam1, int iParam2)
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
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
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

int func_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_146()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_258();
	if (iVar1 == -1)
	{
		if (!func_256(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_255(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4528329[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4528329[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4528329[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0)
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

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_146()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4528329[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4528329[iVar1 /*85*/].f_66.f_5 == 1)
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
		*iParam0 = func_257(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_257(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_259())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = uParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_249(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_258()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_252(iVar0) != 2147483647)
		{
			if (func_247(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_259()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_260()
{
	return iLocal_138;
}

void func_261()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_194(0);
	MISC::CLEAR_BIT(&uLocal_107, 1);
}

void func_262()
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

void func_263()
{
	if (func_264())
	{
		if (!BitTest(uLocal_107, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "GET_CURRENT_SELECTION");
			iLocal_855 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&uLocal_107, 0);
		}
	}
}

int func_264()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_265()
{
	if (iLocal_111 != func_302())
	{
		if (!func_5(&uLocal_148))
		{
			func_4(&uLocal_148, 0, 0);
		}
		else if (func_3(&uLocal_148, 750, 0))
		{
			func_192(&uLocal_148);
			func_266();
		}
	}
}

void func_266()
{
	int iVar0;
	
	func_294();
	if (func_293())
	{
		MISC::SET_BIT(&uLocal_107, 10);
	}
	func_272();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_271(iVar0);
		iVar0++;
	}
	func_270();
	func_267();
	func_4(&uLocal_144, 0, 0);
}

void func_267()
{
	if (func_206())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_269(Global_2785141.f_26, Global_2785141.f_28));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_268(Global_2785141.f_28));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_268(int iParam0)
{
	return (iParam0 / 1000);
}

int func_269(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_204(iVar0);
		iVar2 = iVar1;
		if (func_191(iVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_269(Global_2785141[iVar2 /*2*/], Global_2785141.f_17[iVar2]));
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = uLocal_315[iParam0];
	iVar1 = 50;
	iVar2 = func_201(func_204(iParam0), iVar0);
	iVar3 = SYSTEM::ROUND((func_200(func_204(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = func_199(func_204(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		MISC::SET_BIT(&uLocal_107, 14);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "ADD_CARGO");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar3));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_272()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	sVar0 = func_283(PLAYER::PLAYER_ID());
	iVar1 = 0;
	iVar2 = func_282();
	iVar3 = func_281();
	iVar4 = func_280();
	iVar5 = func_279();
	iVar6 = func_278();
	iLocal_111 = func_302();
	iVar7 = 50;
	iVar8 = (iLocal_111 * func_202(8));
	fVar9 = func_276(iVar2, func_277());
	fVar10 = func_276(iVar3, func_275());
	fVar9 = func_274(fVar9, 0f, 100f);
	fVar10 = func_274(fVar10, 0f, 100f);
	if (func_273(iLocal_136))
	{
		iVar1 = 1;
	}
	if (func_205())
	{
		iVar11 = func_203();
		iVar8 = (iLocal_111 * func_202(iVar11));
		fVar12 = (func_200(iVar11, iLocal_111) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = func_199(iVar11, iLocal_111);
			iVar8 = (iVar8 + iVar13);
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "SET_STATS");
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_111);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

float func_274(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_275()
{
	return func_144(6116, -1, 0);
}

float func_276(int iParam0, int iParam1)
{
	return ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
}

int func_277()
{
	return func_144(6114, -1, 0);
}

int func_278()
{
	return func_144(6119, -1, 0);
}

int func_279()
{
	return func_144(6118, -1, 0);
}

int func_280()
{
	return func_144(6120, -1, 0);
}

int func_281()
{
	return func_144(6117, -1, 0);
}

int func_282()
{
	return func_144(6115, -1, 0);
}

char* func_283(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_292(&(Global_1893551[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1893551[iParam0 /*599*/].f_10.f_121 != Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_288(iParam0, 0);
		return sVar0;
	}
	if (((func_14(iParam0, 28) || func_14(PLAYER::PLAYER_ID(), 28)) || func_287(iParam0)) && !func_285(iParam0))
	{
		return func_288(iParam0, 0);
	}
	iVar1 = func_32(iParam0);
	if (iVar1 != func_16())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_284() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_288(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_16())
	{
		sVar0 = func_292(&(Global_1893551[iVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_288(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_284()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

int func_285(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_286(iParam0) };
	if (func_284())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_286(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_287(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_16())
	{
		Var0 = { func_286(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !unk_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_284() || unk_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_288(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_290(iParam0, 1))
		{
			return func_289();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_289()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_290(int iParam0, bool bParam1)
{
	return func_291(iParam0, bParam1, 1);
}

int func_291(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_20(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_16() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_292(var uParam0)
{
	return uParam0;
}

bool func_293()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_315[iVar0] > 0)
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return iVar1 <= 2;
}

void func_294()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_204(iVar0);
		uLocal_315[iVar0] = func_295(iVar1);
		iVar0++;
	}
}

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_300())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_210(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_297(func_298(func_299(iVar0), -1));
		if (func_296(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_300()
{
	return func_301() != 0;
}

int func_301()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_274;
}

int func_302()
{
	return func_210(PLAYER::PLAYER_ID());
}

void func_303()
{
	if (func_5(&uLocal_144))
	{
		if (func_3(&uLocal_144, 1000, 0))
		{
			func_270();
			func_267();
			func_304(&uLocal_144, 0, 0);
		}
	}
	else
	{
		func_4(&uLocal_144, 0, 0);
	}
}

void func_304(var uParam0, bool bParam1, bool bParam2)
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

void func_305()
{
	int iVar0;
	
	bLocal_108++;
	if (bLocal_108 == 32)
	{
		bLocal_108 = false;
	}
	iVar0 = bLocal_108;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && func_211(iVar0)) && !func_69(iVar0, 0)) && !func_312())
	{
		if (!func_311())
		{
			func_308(iVar0, bLocal_108);
		}
	}
	else if (func_311())
	{
		func_306();
	}
	if (BitTest(uLocal_112, bLocal_108))
	{
		if (!func_15(iVar0) && func_311())
		{
			func_306();
		}
	}
	else if (func_15(iVar0) && func_311())
	{
		func_306();
	}
}

void func_306()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_325[iVar0] == bLocal_108)
		{
			iLocal_325[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "REMOVE_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Local_357[iVar1 /*16*/]));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		StringCopy(&(Local_357[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&uLocal_112, bLocal_108);
		func_307(PLAYER::INT_TO_PLAYERINDEX(bLocal_108));
	}
}

void func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_124[iVar0] == iParam0)
		{
			iLocal_113[iVar0] = 0;
			iLocal_124[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_308(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4[7];
	int iVar117;
	int iVar118;
	
	iVar0 = 0;
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam0);
	if (MISC::ARE_STRINGS_EQUAL(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 7;
	if (func_15(iParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar117 = Global_1893551[iParam1 /*599*/].f_10.f_11[iVar2];
			if (iVar117 != func_16())
			{
				StringCopy(&(Var4[iVar2 /*16*/]), PLAYER::GET_PLAYER_NAME(iVar117), 64);
			}
			else
			{
				StringCopy(&(Var4[iVar2 /*16*/]), "", 64);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar2 /*16*/])))
			{
				if (iVar2 != iVar3)
				{
					iVar118 = iVar2;
					while (iVar118 <= (iVar3 - 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar118 /*16*/])))
						{
							Var4[iVar2 /*16*/] = { Var4[iVar118 /*16*/] };
							StringCopy(&(Var4[iVar118 /*16*/]), "", 64);
							iVar118 = (iVar3 - 1);
						}
						iVar118++;
					}
				}
			}
			iVar2++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(func_310(iParam0));
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Var4[iVar2 /*16*/]));
			iVar2++;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		sVar1 = func_310(iParam0);
		func_309(iParam0, func_31(iParam0));
		MISC::SET_BIT(&uLocal_112, iParam1);
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_325[iVar0] == -1)
		{
			iLocal_325[iVar0] = iParam1;
			StringCopy(&(Local_357[iVar0 /*16*/]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_309(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_124[iVar0] == -1)
		{
			iLocal_113[iVar0] = iParam1;
			iLocal_124[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

char* func_310(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_32(iParam0);
		if (iVar0 != func_16())
		{
			sVar1 = func_292(&(Global_1893551[iVar0 /*599*/].f_10.f_105));
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				return func_288(iVar0, 0);
			}
			else
			{
				return sVar1;
			}
		}
	}
	return func_283(iParam0);
}

int func_311()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_325[iVar0] == bLocal_108)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_312()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_124[iVar0] == bLocal_108)
		{
			if (!func_15(PLAYER::INT_TO_PLAYERINDEX(bLocal_108)))
			{
				return 1;
			}
			else
			{
				return iLocal_113[iVar0] != func_31(PLAYER::INT_TO_PLAYERINDEX(bLocal_108));
			}
		}
		iVar0++;
	}
	return 0;
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	func_316(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1f, -1f, -1f, -1f);
		if (iLocal_137 == 1)
		{
			iLocal_137 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_137 == 2)
		{
			iLocal_137 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	func_316(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1f, -1f, -1f, -1f);
		if (iLocal_137 == 0)
		{
			iLocal_137 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_137 == 1)
		{
			iLocal_137 = 2;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		func_316(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
		func_316(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
	}
	else
	{
		func_316(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1f, -1f, -1f, -1f);
		}
		func_316(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1f, -1f, -1f, -1f);
		}
	}
	func_316(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1f, -1f, -1f, -1f);
	}
	func_316(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1f, -1f, -1f, -1f);
	}
	func_316(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
	}
	func_316(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		func_314();
	}
	func_316(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1f, -1f, -1f, -1f);
	}
	func_316(2, 204, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1f, -1f, -1f, -1f);
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_316(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
		}
		func_316(2, 238, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			func_314();
		}
	}
	else
	{
		func_316(2, 195, 1);
		func_316(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2, 195);
		iVar1 = PAD::GET_CONTROL_VALUE(2, 196);
		if (((iVar0 != 127 || iLocal_856 != 127) || iVar1 != 127) || iLocal_857 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "SET_ANALOG_STICK_INPUT");
			iLocal_856 = iVar0;
			iLocal_857 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_856);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_857);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	func_316(2, 197, 1);
	func_316(2, 198, 1);
	iVar2 = PAD::GET_CONTROL_VALUE(2, 197);
	iVar3 = PAD::GET_CONTROL_VALUE(2, 198);
	if (((iVar2 != 127 || iLocal_858 != 127) || iVar3 != 127) || iLocal_859 != 127)
	{
		bVar4 = (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
		if (!bVar4)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_854, "SET_ANALOG_STICK_INPUT");
		iLocal_858 = iVar2;
		iLocal_859 = iVar3;
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_858);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_859);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_386(0, 1);
	}
}

void func_314()
{
	if (!func_373())
	{
		func_386(0, 1);
	}
	if (iLocal_137 == 0)
	{
		if (!func_315())
		{
			func_386(0, 1);
		}
	}
	else if (!func_315())
	{
		iLocal_137 = 0;
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SHOW_SCREEN", 0f, -1f, -1f, -1f, -1f);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		return;
	}
	if (func_315())
	{
		func_261();
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_854, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1f, -1f, -1f, -1f);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

bool func_315()
{
	return BitTest(uLocal_107, 1);
}

void func_316(int iParam0, int iParam1, bool bParam2)
{
	if (!func_317())
	{
		PAD::SET_INPUT_EXCLUSIVE(iParam0, iParam1);
		PAD::ENABLE_CONTROL_ACTION(iParam0, iParam1, bParam2);
	}
}

bool func_317()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_318()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_332();
	if (Global_77858)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_316(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_331(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_854, 255, 255, 255, 255, 0);
	func_329();
	func_322(0);
	func_319(1);
	Global_1964920.f_5 = MISC::GET_FRAME_COUNT();
}

void func_319(bool bParam0)
{
	if (bParam0)
	{
		func_321();
	}
	func_320(4, -1);
	func_320(6, -1);
	func_320(7, -1);
	func_320(3, -1);
	func_320(1, -1);
	func_320(2, -1);
	func_320(11, -1);
	func_320(13, -1);
	func_320(14, -1);
	func_320(16, -1);
}

void func_320(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1644218.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644218.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_321()
{
	Global_2810701.f_4599 = 0;
}

void func_322(int iParam0)
{
	if (func_328())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_327(0))
		{
			func_323(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_323(int iParam0)
{
	if (func_328())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_326())
		{
			func_325(1, 1);
		}
		else
		{
			func_325(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_324())
	{
		Global_19954.f_1 = 3;
	}
}

int func_324()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_325(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_327(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_326()
{
	return BitTest(Global_1958928, 5);
}

int func_327(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_328()
{
	return BitTest(Global_1958928, 19);
}

void func_329()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_330();
}

void func_330()
{
	Global_22691.f_134 = 1;
}

void func_331(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_332()
{
	func_333(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	}
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		if (func_334())
		{
			Global_2714635.f_41 = 1;
		}
	}
	else
	{
		Global_2714635.f_41 = 0;
	}
}

bool func_334()
{
	return BitTest(Global_2714635.f_2, 11);
}

void func_335()
{
	if (!BitTest(uLocal_107, 9))
	{
		if (!func_315())
		{
			if (!func_373())
			{
				MISC::SET_BIT(&uLocal_107, 13);
				func_193("HAPP_T1", "HAPP_D1", "HAPP_SU", "", 0, 0, -1, 5, -1, 0);
				if ((!func_340(2) && !BitTest(Global_1946789, 2)) && BitTest(uLocal_107, 13))
				{
					func_339("HAPP_HELP_3", 14000);
					MISC::SET_BIT(&Global_1946789, 2);
					func_336(2);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_107, 9);
			}
		}
	}
}

void func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_337(15967);
			break;
		
		case 1:
			func_337(15970);
			break;
		
		case 2:
			func_337(15973);
			break;
		
		case 3:
			func_337(15976);
			break;
		
		case 4:
			func_337(15979);
			break;
		
		case 5:
			func_337(15982);
			break;
		
		case 6:
			func_337(15985);
			break;
		
		case 7:
			func_337(15988);
			break;
		
		case 8:
			func_337(15991);
			break;
	}
}

void func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_197(iVar1, -1))
		{
			func_338(iVar1, 1, -1);
			return;
		}
		iVar0++;
	}
}

void func_338(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_146();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_339(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_341(15967);
		
		case 1:
			return func_341(15970);
		
		case 2:
			return func_341(15973);
		
		case 3:
			return func_341(15976);
		
		case 4:
			return func_341(15979);
		
		case 5:
			return func_341(15982);
		
		case 6:
			return func_341(15985);
		
		case 7:
			return func_341(15988);
		
		case 8:
			return func_341(15991);
		
		default:
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_197(iVar1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_342()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 8 + 1;
	if (!BitTest(uLocal_107, 7) && !func_347())
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar6 = iVar4;
			if (func_346(iVar6))
			{
				Var0 = { func_345(iVar6) };
				iLocal_110 = func_344(iVar6);
				MISC::SET_BIT(&Global_1946789, iVar4);
				func_336(iVar6);
			}
			else
			{
				iVar4++;
			}
		}
	}
	if (!BitTest(uLocal_107, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		func_339(&Var0, iLocal_110);
		MISC::SET_BIT(&uLocal_107, 7);
	}
	else if (BitTest(uLocal_107, 7))
	{
		if (!func_5(&uLocal_146))
		{
			func_4(&uLocal_146, 0, 0);
		}
		else if (func_3(&uLocal_146, iLocal_110, 0))
		{
			MISC::CLEAR_BIT(&uLocal_107, 7);
			iLocal_110 = 0;
			func_192(&uLocal_146);
			if (func_343())
			{
				MISC::SET_BIT(&uLocal_107, 8);
			}
		}
	}
}

int func_343()
{
	if (((((((func_340(0) && func_340(1)) && func_340(2)) && func_340(3)) && func_340(4)) && func_340(6)) && func_340(7)) && func_340(8))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 14000;
		
		case 1:
			return 15000;
		
		case 2:
			return 14000;
		
		case 3:
			return 14500;
		
		case 4:
			return 14000;
		
		case 5:
			return 14000;
		
		case 6:
			return 14000;
		
		case 7:
			return 15000;
		
		case 8:
			return 14500;
		
		default:
	}
	return 0;
}

struct<4> func_345(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9", 16);
			break;
	}
	return Var0;
}

int func_346(int iParam0)
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!BitTest(uLocal_107, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && BitTest(uLocal_107, 11))
			{
				return 1;
			}
			break;
		
		case 1:
			if ((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && BitTest(uLocal_107, 12))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && BitTest(uLocal_107, 13))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && BitTest(uLocal_107, 9)) && iLocal_137 == 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if ((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && iLocal_137 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && iLocal_137 == 1) && (BitTest(Global_1946789, 4) || func_340(4)))
			{
				return 1;
			}
			break;
		
		case 6:
			if ((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && iLocal_137 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && iLocal_137 == 2) && (BitTest(Global_1946789, 6) || func_340(6)))
			{
				return 1;
			}
			break;
		
		case 8:
			if (((((!func_340(iParam0) && !BitTest(Global_1946789, bVar0)) && BitTest(uLocal_107, 14)) && iLocal_137 == 2) && (BitTest(Global_1946789, 6) || func_340(6))) && (BitTest(Global_1946789, 7) || func_340(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_347()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_348()
{
	if (iLocal_109 != -1)
	{
		func_349(iLocal_109);
	}
}

void func_349(int iParam0)
{
	if (func_350(&uLocal_150, "SMGCAUD", func_370(iParam0), 8, 0, 0, 0))
	{
		iLocal_109 = -1;
	}
}

bool func_350(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_369(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_351(sParam2, iParam3, 0);
}

int func_351(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_368();
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
		if (func_367(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_366();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, false);
			if (bParam2)
			{
				func_358();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_357())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
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
			if (func_324())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_356();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_355();
		func_352();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_368();
	}
	return 0;
}

void func_352()
{
	if (!func_353())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_353()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 0;
	}
	if (func_354(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_354(int iParam0)
{
	return func_14(iParam0, 20);
}

void func_355()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

void func_356()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_357()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
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
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
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

void func_358()
{
	if (func_365(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_359();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_359()
{
	func_360();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_360()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_363(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_362(PLAYER::PLAYER_PED_ID());
			if (func_361(iVar0) && (!func_365(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_361(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_361(int iParam0)
{
	return iParam0 < 3;
}

int func_362(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_363(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_363(int iParam0)
{
	if (func_361(iParam0))
	{
		return func_364(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_364(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_365(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_366()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_368()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_369(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SMGC_LAPTUT1";
		
		case 1:
			return "SMGC_LAPTUT2";
		
		case 2:
			return "SMGC_LAPTUT3";
		
		default:
	}
	return "SMGC_LAPTUT1";
}

void func_371()
{
	bool bVar0;
	
	if (!BitTest(uLocal_107, 4) && !func_347())
	{
		if (iLocal_137 == 0)
		{
			if (!func_197(15963, -1))
			{
				bVar0 = true;
				iLocal_110 = 9000;
				iLocal_109 = 0;
				func_338(15963, 1, -1);
			}
		}
		else if (iLocal_137 == 2)
		{
			if (!func_197(15964, -1))
			{
				bVar0 = true;
				iLocal_110 = 9000;
				iLocal_109 = 2;
				func_338(15964, 1, -1);
			}
		}
		else if (iLocal_137 == 1)
		{
			if (!func_197(15965, -1))
			{
				bVar0 = true;
				iLocal_110 = 9000;
				iLocal_109 = 1;
				func_338(15965, 1, -1);
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&uLocal_107, 4);
	}
	else if (BitTest(uLocal_107, 4))
	{
		if (!func_5(&uLocal_142))
		{
			func_4(&uLocal_142, 0, 0);
		}
		else if (func_3(&uLocal_142, iLocal_110, 0))
		{
			MISC::CLEAR_BIT(&uLocal_107, 4);
			iLocal_110 = 0;
			func_192(&uLocal_142);
			if (func_372())
			{
				MISC::SET_BIT(&uLocal_107, 5);
			}
		}
	}
}

int func_372()
{
	if ((func_197(15963, -1) && func_197(15964, -1)) && func_197(15965, -1))
	{
		return 1;
	}
	return 0;
}

bool func_373()
{
	return func_197(15966, -1);
}

void func_374()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_386(0, 1);
	}
	else if (func_317())
	{
		func_386(0, 1);
	}
	else if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_386(0, 1);
	}
}

bool func_375()
{
	return Global_75027;
}

void func_376()
{
	func_374();
	iLocal_854 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("HANGAR_CARGO");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_854))
	{
		SYSTEM::WAIT(0);
	}
	func_323(1);
	func_384(1);
	func_383();
	HUD::THEFEED_PAUSE();
	func_382(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2810701.f_1917)
	{
		if (Global_2810701.f_1917)
		{
		}
		func_386(0, 1);
	}
	func_382(1);
	iLocal_136 = func_301();
	func_266();
	func_379();
	if (func_343())
	{
		MISC::SET_BIT(&uLocal_107, 8);
	}
	func_378();
	if (func_373())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_377(1, 1, 1, 1);
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
}

int func_377(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_378()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_325[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_124[iVar0] = -1;
		iLocal_113[iVar0] = 0;
		iVar0++;
	}
}

void func_379()
{
	if (func_372())
	{
		MISC::SET_BIT(&uLocal_107, 5);
	}
	else
	{
		MISC::SET_BIT(&uLocal_107, 4);
		iLocal_110 = 800;
		func_381(1);
		func_380(&uLocal_150, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_380(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		Global_1835497 = 1;
	}
	else
	{
		Global_1835497 = 0;
	}
}

void func_382(int iParam0)
{
	if (Global_75027 != iParam0)
	{
		Global_75027 = iParam0;
	}
}

void func_383()
{
	Global_1574745 = 1;
	StringCopy(&(Global_1574745.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574745.f_9 = MISC::GET_HASH_KEY(&(Global_1574745.f_1));
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		func_385();
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7825, 16);
		}
		Global_19954.f_1 = 1;
		if (func_327(0))
		{
			func_323(0);
		}
	}
	else if (Global_19954.f_1 == 1)
	{
		if (!Global_19954.f_1 == 0)
		{
			Global_19954.f_1 = 3;
		}
	}
}

void func_385()
{
	if (Global_19954.f_1 == 9 || Global_19954.f_1 == 10)
	{
		Global_21338 = 0;
		Global_21334 = 1;
	}
}

void func_386(int iParam0, bool bParam1)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_854);
	func_382(iParam0);
	func_384(0);
	func_387();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_377(0, 1, 1, 1);
	}
	HUD::THEFEED_RESUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
	Global_1964920.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_387()
{
	if (!Global_1574745)
	{
		return;
	}
	func_388();
}

void func_388()
{
	Global_1574745 = 0;
	StringCopy(&(Global_1574745.f_1), "", 32);
	Global_1574745.f_9 = 0;
}

