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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
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
	int iLocal_98 = 0;
	struct<3> Local_99 = { 0, 0, 0 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	float fLocal_111 = 0f;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int* iLocal_118 = NULL;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int* iLocal_121 = NULL;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
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
	var uLocal_150 = 0;
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
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var12;
	
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	bLocal_77 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_78 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_83 = { 500f, 500f, 500f };
	iLocal_108 = -1;
	fLocal_111 = 0f;
	iLocal_117 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_90(&(Global_112293.f_19095), 4);
	func_90(&(Global_112293.f_19095), 256);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_89();
	}
	func_88(16);
	while (true)
	{
		bVar0 = !func_87(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_86(9))
			{
				func_85(&iLocal_118);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = func_84(PLAYER::PLAYER_PED_ID());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_83();
						if (!func_82(Global_112293.f_19095, 64))
						{
							func_80(&(Global_112293.f_19095), 64);
						}
						func_79(&uLocal_124);
						iVar1 = 1;
						func_77(&iLocal_118);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_76(1))
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				if (!func_75() && !Global_96298)
				{
					if (iVar1 != 2)
					{
						if ((!MISC::IS_MINIGAME_IN_PROGRESS() && !bVar0) && !func_74(5))
						{
							func_71();
							if (func_70())
							{
								if (!iLocal_113)
								{
									if (func_68() == 2)
									{
										if (!func_82(Global_112293.f_19095, 1))
										{
											switch (func_67("TC_H_TOODAMAGED"))
											{
												case 2:
													func_65("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_80(&(Global_112293.f_19095), 1);
													break;
												}
										}
									}
									else
									{
										func_90(&(Global_112293.f_19095), 1);
									}
									iLocal_113 = 1;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
								{
									iLocal_106 = 0;
								}
								else if (bLocal_114)
								{
									if (!func_82(Global_112293.f_19095, 16384))
									{
										switch (func_67("TC_ANOTHERJOB"))
										{
											case 2:
												func_65("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_80(&(Global_112293.f_19095), 16384);
												break;
											}
									}
								}
								else if (!func_82(Global_112293.f_19095, 16))
								{
									if (!iLocal_116)
									{
										switch (func_67("TC_HOWTOSTART"))
										{
											case 2:
												func_65("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_110 = MISC::GET_GAME_TIMER();
												iLocal_116 = 1;
												if (func_64("TC_HOWTOSTART"))
												{
													Global_112293.f_19095.f_22[15]++;
												}
												if (Global_112293.f_19095.f_22[15] >= 5)
												{
													func_80(&(Global_112293.f_19095), 16);
												}
												break;
											}
										}
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_105))
								{
									HUD::REMOVE_BLIP(&iLocal_105);
								}
								switch (iLocal_106)
								{
									case 0:
										if (func_68() == 0)
										{
											if (!func_63(&iLocal_118))
											{
												func_62(&iLocal_118);
											}
											if (func_63(&iLocal_121))
											{
												func_85(&iLocal_121);
											}
											if (func_59(&iLocal_118) > 20f)
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_58())
												{
													iLocal_107 = 9;
													StringCopy(&Local_99, "Taxi_Procedural", 24);
													func_57(&uLocal_124, 8, 0, "TaxiDispatch", 0, 1);
													func_56(&uLocal_124, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_77(&iLocal_118);
													iLocal_106 = 1;
												}
												else if (!func_58())
												{
													if ((MISC::GET_GAME_TIMER() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_63(&iLocal_118))
										{
											func_62(&iLocal_118);
										}
										if (func_59(&iLocal_118) >= 6f)
										{
											switch (func_67("TC_JOBOFFERED"))
											{
												case 2:
													func_65("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_112 = 1;
													func_77(&iLocal_118);
													iLocal_106 = 2;
													break;
											}
											if ((MISC::GET_GAME_TIMER() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_63(&iLocal_118))
										{
											func_62(&iLocal_118);
										}
										if (func_59(&iLocal_118) > 15f)
										{
											if (!func_82(Global_112293.f_19095, 32))
											{
												func_55("TC_MISSEDJOB", -1);
												func_80(&(Global_112293.f_19095), 32);
											}
											fLocal_111 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 40f) + func_59(&iLocal_118));
											iLocal_106 = 3;
										}
										else if (iLocal_112)
										{
											if (func_59(&iLocal_118) > 6f)
											{
												iLocal_112 = 0;
												HUD::CLEAR_HELP(true);
											}
										}
										break;
									
									case 3:
										if (!func_63(&iLocal_118))
										{
											func_62(&iLocal_118);
										}
										if (func_59(&iLocal_118) > fLocal_111)
										{
											func_85(&iLocal_118);
											iLocal_106 = 0;
										}
										break;
								}
								if (((PAD::IS_CONTROL_PRESSED(0, 86) && !ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID())) && !Global_31497) && (MISC::GET_GAME_TIMER() - iLocal_109) > 3000)
								{
									iVar4 = func_68();
									if (iVar4 == 0)
									{
										if (iLocal_106 == 0 || iLocal_106 == 3)
										{
											func_79(&uLocal_124);
											iLocal_107 = 9;
											func_33(iLocal_107, &Local_99, &uLocal_124, 0);
											iLocal_115 = 1;
											iVar1 = 4;
										}
										else
										{
											HUD::CLEAR_PRINTS();
											HUD::CLEAR_HELP(true);
											if (!func_82(Global_112293.f_19095, 128))
											{
												func_80(&(Global_112293.f_19095), 128);
											}
											iVar1 = 4;
										}
										SCRIPT::REQUEST_SCRIPT(&Local_99);
										func_85(&iLocal_118);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_55("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_64("TXC_WANTED_WARN"))
											{
												if (!func_82(Global_112293.f_19095, 32768))
												{
													func_55("TXC_WANTED_WARN", -1);
													func_80(&(Global_112293.f_19095), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_63(&iLocal_121))
								{
									func_62(&iLocal_121);
								}
								else
								{
									if (func_59(&iLocal_121) < 10f)
									{
										if ((MISC::GET_GAME_TIMER() % 1000) < 50)
										{
										}
									}
									if (func_59(&iLocal_121) > 10f && iLocal_106 != 0)
									{
										iLocal_106 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if (((MISC::GET_GAME_TIMER() - iLocal_110) > 60000 && !func_64("TC_HOWTOSTART")) && iLocal_116)
								{
									iLocal_116 = 0;
								}
								if (bLocal_114)
								{
									bLocal_114 = false;
								}
								iLocal_113 = 0;
								func_85(&iLocal_118);
							}
						}
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				{
					iLocal_106 = 0;
				}
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::SET_HORN_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED(&Local_99))
				{
					iVar5 = func_24(&iLocal_108, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_111348 = 1;
						if (iLocal_115)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_106 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_117, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&Var6, "OJTX_PLRDE1", 24);
				func_22(&Var6, 1);
				func_56(&uLocal_124, "OJTXAUD", &Var6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_21())
				{
					func_56(&uLocal_124, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_21())
				{
					StringCopy(&Var12, "OJTX_ACCEPT", 24);
					func_22(&Var12, 1);
					func_79(&uLocal_124);
					func_56(&uLocal_124, "OJTXAUD", &Var12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_70())
				{
					if (!func_21())
					{
						bLocal_114 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_98 = SYSTEM::START_NEW_SCRIPT(&Local_99, 41500);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_99);
						if (!func_82(Global_112293.f_19095, 4))
						{
							func_80(&(Global_112293.f_19095), 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), true);
						}
						func_80(&(Global_112293.f_19095), 256);
						StringCopy(&Local_99, "", 24);
						iLocal_115 = 0;
						iVar1 = 10;
						iLocal_106 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					bLocal_114 = false;
					iLocal_115 = 0;
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_99);
					func_80(&(Global_112293.f_19095), 256);
					StringCopy(&Local_99, "", 24);
					iLocal_106 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
				{
					func_90(&(Global_112293.f_19095), 2048);
					if (func_82(Global_112293.f_19095, 4))
					{
						func_90(&(Global_112293.f_19095), 4);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
					}
					Global_111348 = 0;
					iLocal_107 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_82(Global_112293.f_19095, 1024))
				{
					func_90(&(Global_112293.f_19095), 1024);
					func_11(func_17(iLocal_107), 0, 0);
					bLocal_114 = true;
					func_9(iLocal_107, bLocal_114);
					func_8(1, 0);
					func_5();
				}
				break;
			
			case 11:
				if (func_82(Global_112293.f_19095, 256))
				{
					func_90(&(Global_112293.f_19095), 256);
					func_4(&iLocal_108);
				}
				iLocal_108 = -1;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&Local_99, "", 24);
					if (iLocal_98 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
						{
							SCRIPT::TERMINATE_THREAD(iLocal_98);
							iLocal_98 = 0;
						}
					}
					func_85(&iLocal_118);
					func_1(0);
					iLocal_106 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_89();
				break;
			
			default:
				func_89();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

void func_2()
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

bool func_3()
{
	return Global_99409.f_1;
}

void func_4(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41971)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41970 = 0;
	Global_41972 = 0;
	Global_42009 = 15;
	Global_62095 = 0;
	Global_62096 = 0;
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77496, 0);
}

void func_8(int iParam0, int iParam1)
{
	Global_99409.f_7 = iParam0;
	Global_99409.f_8 = iParam1;
}

void func_9(int iParam0, bool bParam1)
{
	func_10();
	if (bParam1)
	{
		Global_112293.f_19095.f_1[iParam0 /*2*/] = 1;
		Global_112293.f_19095.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_112293.f_19095.f_1[iParam0 /*2*/] = 0;
		Global_112293.f_19095.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_112293.f_19095.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_15((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = iParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_12();
	}
}

void func_12()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!MISC::IS_BIT_SET(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_112016, 0);
					MISC::SET_BIT(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_112029, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_112012, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_112030, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_112013, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_112031, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_112014, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_112032, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_112015, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_112019, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_112035 + Global_112034), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_112018 + Global_112017), true);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_112293.f_10192.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_112036, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_112037, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_112038, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112293.f_10192.f_3853))
	{
		func_14(13, SYSTEM::FLOOR(Global_112293.f_10192.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_77248)
		{
			if (func_13() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_6();
				}
			}
		}
	}
}

int func_13()
{
	return Global_31345;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

bool func_15(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		iParam2 = func_16();
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

int func_16()
{
	return Global_1312763;
}

int func_17(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_18()
{
	Global_19991 = 0;
	func_19();
}

void func_19()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22136 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21125 = 6;
		return;
	}
}

int func_20()
{
	return joaat("taxi");
}

int func_21()
{
	if (Global_21125 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_22(char* sParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96848.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_86(0))
		{
			return 0;
		}
		Global_41973++;
		*iParam0 = Global_41973;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_42009 = iParam2;
		Global_41971 = *iParam0;
		Global_41972 = iParam4;
		Global_41970 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41970 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41970)
			{
				if (Global_41976[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41971 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_26(iParam2))
		{
			return 0;
		}
		if (Global_41970 == 8)
		{
			return 0;
		}
		Global_41973++;
		*iParam0 = Global_41973;
		Global_41976[Global_41970 /*4*/] = Global_41973;
		Global_41976[Global_41970 /*4*/].f_1 = iParam1;
		Global_41976[Global_41970 /*4*/].f_2 = iParam2;
		Global_41976[Global_41970 /*4*/].f_3 = 0;
		Global_41970++;
		if (iParam4 != 0)
		{
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41970 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41970)
	{
		if (Global_41976[iVar0 /*4*/] == *uParam0)
		{
			Global_41976[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, Global_42009);
}

int func_27(int iParam0, int iParam1)
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

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_110933 && iParam1)
	{
		if (func_64(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_112293.f_20408.f_145 - 1));
			Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/].f_4), "", 16);
	Global_112293.f_20408[iParam0 /*16*/].f_8 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = -1;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_112293.f_20408[iParam0 /*16*/] = { Global_112293.f_20408[iParam1 /*16*/] };
	Global_112293.f_20408[iParam0 /*16*/].f_4 = { Global_112293.f_20408[iParam1 /*16*/].f_4 };
	Global_112293.f_20408[iParam0 /*16*/].f_8 = Global_112293.f_20408[iParam1 /*16*/].f_8;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = Global_112293.f_20408[iParam1 /*16*/].f_10;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = Global_112293.f_20408[iParam1 /*16*/].f_9;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = Global_112293.f_20408[iParam1 /*16*/].f_11;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = Global_112293.f_20408[iParam1 /*16*/].f_12;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = Global_112293.f_20408[iParam1 /*16*/].f_13;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = Global_112293.f_20408[iParam1 /*16*/].f_14;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = Global_112293.f_20408[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)
{
	struct<6> Var0;
	char cVar6[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_54(iParam0), 24);
		cVar6 = { Var0 };
		StringConCat(&cVar6, "_1", 24);
		func_79(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &cVar6, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 1;
	Global_22118 = 0;
	Global_22122 = 0;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_35(sParam2, iParam4, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_19();
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
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_51();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			MISC::CLEAR_BIT(&Global_7668, 20);
			MISC::CLEAR_BIT(&Global_7669, 17);
			MISC::CLEAR_BIT(&Global_7670, 0);
			if (bParam2)
			{
				func_45();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_44())
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
				if (!Global_77248)
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
			if (func_43())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
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
				if (MISC::IS_BIT_SET(Global_7668, 9))
				{
					return 0;
				}
			}
			func_42();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_41();
		func_36();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_36()
{
	if (!func_37())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_37()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_40())
	{
		return 0;
	}
	if (func_38(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_38(int iParam0)
{
	return func_39(iParam0, 20);
}

bool func_39(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_40()
{
	return -1;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21125 = 1;
}

void func_42()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	MISC::CLEAR_BIT(&Global_7669, 16);
}

int func_43()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
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

void func_45()
{
	if (func_74(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_46();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_46()
{
	func_47();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_47()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_49(Global_112293.f_2361.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_84(PLAYER::PLAYER_PED_ID());
			if (func_48(iVar0) && (!func_74(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_48(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1379108.f_1048, iParam0);
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

char* func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_55(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_56(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_35(sParam2, iParam3, 0);
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
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

int func_58()
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_21125 == 0)
	{
		if ((iVar0 - Global_22147) > 3000)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == 0)
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
	return 0;
}

float func_59(int* iParam0)
{
	if (func_63(iParam0))
	{
		if (func_61(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_60(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_60(bool bParam0)
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

bool func_61(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_62(int* iParam0)
{
	if (!func_63(iParam0))
	{
		func_77(iParam0);
	}
}

bool func_63(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

bool func_64(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_29();
	}
}

int func_67(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_110936))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_70())
	{
		return 1;
	}
	else
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar0));
		iVar2 = ENTITY::GET_ENTITY_HEALTH(iVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_69(iVar0))
		{
			return 2;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_70()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_71()
{
	if (!func_82(Global_112293.f_19095, 8192))
	{
		if (func_70())
		{
			func_80(&(Global_112293.f_19095), 8192);
			func_73();
		}
	}
	else if (!func_70())
	{
		func_90(&(Global_112293.f_19095), 8192);
		func_72();
	}
}

void func_72()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_73()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

bool func_74(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_75()
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0)
{
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 167) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 169))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 166))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 167) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 167))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 168))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 169))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_77(int* iParam0)
{
	func_78(iParam0, 0f);
}

void func_78(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_60(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_79(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_84(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_57(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_57(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_57(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_57(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_57(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_80(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_83()
{
	int iVar0;
	
	if (func_82(Global_112293.f_19095, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_112293.f_19095.f_1[0 /*2*/] = 0;
			Global_112293.f_19095.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_85(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_86(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_87(int iParam0, int iParam1)
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
	bVar0 = MISC::IS_BIT_SET(Global_112293.f_9083.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_89()
{
	if (func_82(Global_112293.f_19095, 4))
	{
		func_90(&(Global_112293.f_19095), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
	}
	if (func_82(Global_112293.f_19095, 256))
	{
		func_90(&(Global_112293.f_19095), 256);
		func_4(&iLocal_108);
	}
	if (iLocal_98 != 0)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_98);
			iLocal_98 = 0;
		}
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_99) != 0)
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_99);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_105))
	{
		HUD::REMOVE_BLIP(&iLocal_105);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

