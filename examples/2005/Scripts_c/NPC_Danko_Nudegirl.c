// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(1 != 0) {
			func_1270();
			if(var_17_bool == 34719) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_1381();
				object var_87_object = var_1_object;
				func_1422(var_0_object);
			}
			if(var_17_bool == 37504) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_1381();
				object var_117_object = var_1_object;
				func_1422(var_0_object);
			}
			if(var_17_bool == 37503) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_1381();
				object var_123_object = var_1_object;
				func_1422(var_0_object);
			}
			if(var_16_object == 34716) {
				bool var_127_bool;
				func_1438(var_1_object);
				if(var_127_bool != 0) {
					object var_135_object; object var_136_object;
					var_135_object = var_1_object;
					var_136_object = var_0_object;
					func_1375();
					func_201(var_17_bool, "Neutral");
					var_0_object->SetMessage(533196); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535791, 37488, 37477); //@t
					var_0_object->AddReply(535798, 37488, 37485); //@t
					return 0;
				}
				bool var_158_bool = false;
				bool var_159_bool;
				func_1450(var_1_object);
				if(var_159_bool != 0) {
					bool var_165_bool;
					func_1462(var_1_object);
					if(var_165_bool != 0)
						var_158_bool = true;
				}
				if(var_158_bool != 0) {
					object var_171_object; object var_172_object;
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_1416();
					func_201(var_17_bool, "Neutral");
					var_0_object->SetMessage(533221); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533222, 37473, 34742); //@t
					var_0_object->AddReply(535790, -1, 37476); //@t
					return 0;
				}
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(533200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533201, -1, 34721); //@t
				var_0_object->AddReply(535786, -1, 37472); //@t
				return 0;
			}
			if(var_16_object == 37473) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535788, -1, 37474); //@t
				var_0_object->AddReply(535789, -1, 37475); //@t
				return 0;
			}
			if(var_16_object == 37488) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535800, 37491, 37490); //@t
				return 0;
			}
			if(var_16_object == 37491) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535802, 37493, 37492); //@t
				var_0_object->AddReply(535806, 37498, 37497); //@t
				return 0;
			}
			if(var_16_object == 37498) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535808, 37500, 37499); //@t
				return 0;
			}
			if(var_16_object == 37500) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535810, 37493, 37501); //@t
				var_0_object->AddReply(535811, -1, 37503); //@t
				return 0;
			}
			if(var_16_object == 37493) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535804, 37495, 37494); //@t
				var_0_object->AddReply(535812, -1, 37504); //@t
				return 0;
			}
			if(var_16_object == 37495) {
				func_201(var_17_bool, "Neutral");
				var_0_object->SetMessage(535805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533199, -1, 34719); //@t
				return 0;
			}
			var_3_string = true;
			bool var_252_bool;
			func_1373(var_252_bool);
			if(var_252_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe0";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(1 != 0) {
			func_1270();
			if(var_16_object == 42557) {
				func_658(var_17_bool, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1373(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a9";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_751((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_895(var_15_bool, var_16_object);
		bool var_20_bool;
		func_1335(var_20_bool, 7);
		if(var_20_bool != 0) {
			int var_28_int; object var_29_object;
			var_16_object = var_29_object;
			TaskCall(0);
			func_0(var_30_object, var_28_int, var_29_object);
			TaskReturn();
			return 0;
		}
		int var_191_int; object var_192_object;
		var_16_object = var_192_object;
		TaskCall(2);
		func_519(var_193_object, var_191_int, var_192_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, string var_16_string)
	{
		if(var_16_string == "cleanup")
			func_776(var_16_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_895(var_14_object, var_15_bool);
		bool var_19_bool = false;
		if(var_5_object != 0) {
			bool var_21_bool;
			func_828(var_21_bool);
			if(var_21_bool != 0)
				var_19_bool = true;
		}
		if(var_19_bool != 0) {
			object var_22_object;
			func_1277(var_22_object);
			@RemoveActor(var_22_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int == 10) {
			bool var_19_bool;
			func_857(var_14_object, var_15_bool, var_16_int, var_19_bool);
			if(var_19_bool != 0) {
				if(!var_2_object) { //@nz
					func_1244(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_28_int, object var_29_object)
{
	var_0_object = var_29_object;
	bool var_39_bool; object var_40_object;
	var_29_object = var_40_object;
	func_1008(var_39_bool, var_40_object, 70.0);
	if(!var_39_bool) { //@nz
		var_28_int = -2;
		return 8;
	}
	object var_35_object;
	@CreateDialog(var_35_object);
	int var_86_int;
	func_1367(var_86_int);
	var_35_object->SetNPCName(var_86_int);
	int var_87_int;
	func_1365(var_87_int);
	var_35_object->SetNPCDescription(var_87_int);
	string var_88_string;
	func_1369(var_88_string);
	var_35_object->SetPhoto(var_88_string);
	string var_89_string;
	func_1371(var_89_string);
	var_35_object->SetPhoto2(var_89_string);
	int var_90_int;
	func_1591(var_90_int);
	var_35_object->SetPlayerName(var_90_int);
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0) {
		var_28_int = -2;
		return 8;
	}
	@DoDialog(var_35_object);
	object var_99_object; object var_100_object;
	var_29_object = var_99_object;
	var_35_object = var_100_object;
	TaskCall(1);
	func_74(var_101_object, var_102_object, var_103_string, var_104_bool, var_99_object, var_100_object);
	TaskReturn();
	bool var_38_bool;
	var_35_object->IsDialogEnd(var_38_bool);
	
	for(;;) {
		var_183_bool = !var_38_bool; //@nz
		if(var_183_bool == 0) goto Label_63;
		@sync();
		var_35_object->IsDialogEnd(var_38_bool);
	}
	
Label_63:
	object var_184_object;
	var_29_object = var_184_object;
	func_1076();
	@StopDialog(var_35_object);
	var_35_object->GetReturnValue(-1);
	int var_37_int = var_28_int;
}
EMIT "Stack[-4] = 0";


void func_1283(cvector var_66_cvector, cvector var_67_cvector)
{
	float var_70_float = sqrt(var_67_cvector | var_67_cvector);
	if(var_70_float < 0.000001)
		var_66_cvector = [0.0, 0.0, 0.0];
	var_66_cvector = var_67_cvector / var_70_float;
}


void func_1541(object var_28_object)
{
	object var_31_object; object var_32_object;
	@GetMainOutdoorScene(var_31_object);
	if(var_31_object == null) {
		@Trace("Can't find main outdoor scene");
		var_32_object = null;
		var_32_object = var_28_object;
	}
	var_31_object->GetMap(var_32_object);
	var_32_object = var_28_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_519(object var_0_object, int var_191_int, object var_192_object)
{
	var_0_object = var_192_object;
	bool var_202_bool; object var_203_object;
	object var_204_object;
	func_1277(var_204_object);
	var_204_object = var_203_object;
	func_1093(var_202_bool, var_203_object);
	bool var_292_bool; object var_293_object;
	var_192_object = var_293_object;
	func_1008(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_191_int = -2;
		return 8;
	}
	object var_198_object;
	@CreateDialog(var_198_object);
	int var_296_int;
	func_1367(var_296_int);
	var_198_object->SetNPCName(var_296_int);
	int var_297_int;
	func_1365(var_297_int);
	var_198_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_1369(var_298_string);
	var_198_object->SetPhoto(var_298_string);
	string var_299_string;
	func_1371(var_299_string);
	var_198_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_1591(var_300_int);
	var_198_object->SetPlayerName(var_300_int);
	bool var_199_bool;
	@IsOverrideActive(var_199_bool);
	if(var_199_bool != 0) {
		var_191_int = -2;
		return 8;
	}
	@DoDialog(var_198_object);
	object var_302_object; object var_303_object;
	var_192_object = var_302_object;
	var_198_object = var_303_object;
	TaskCall(3);
	func_600(var_304_object, var_305_object, var_306_string, var_307_bool, var_302_object, var_303_object);
	TaskReturn();
	bool var_201_bool;
	var_198_object->IsDialogEnd(var_201_bool);
	
	for(;;) {
		var_332_bool = !var_201_bool; //@nz
		if(var_332_bool == 0) goto Label_589;
		@sync();
		var_198_object->IsDialogEnd(var_201_bool);
	}
	
Label_589:
	object var_333_object;
	var_192_object = var_333_object;
	func_1076();
	@StopDialog(var_198_object);
	var_198_object->GetReturnValue(-1);
	int var_200_int = var_191_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1416(void)
{
	@SetVariable("ood7Nudegirl2", 1);
}


void func_776(object var_5_object)
{
	var_5_object = true;
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	bool var_21_bool = false;
	if(!var_20_bool) { //@nz
		bool var_23_bool;
		func_828(var_23_bool);
		if(var_23_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		object var_24_object;
		func_1277(var_24_object);
		@RemoveActor(var_24_object);
	}
}


void func_909(void)
{
	int var_43_int; int var_44_int; bool var_45_bool; float var_46_float; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_1003(var_48_bool);
	if(!var_48_bool) //@nz
		return 14;
	int var_50_int;
	func_1348(var_50_int);
	int var_41_int;
	var_50_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_42_int < 5) {
			bool var_66_bool;
			func_1003(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			@irand(var_43_int, 3);
			if(var_43_int == 0) {
				if(var_41_int == 0) goto Label_956;
				@irand(var_44_int, var_41_int);
				string var_72_string; int var_73_int;
				var_44_int = var_73_int;
				func_1341(var_72_string, var_73_int);
				@PlayAnimation("all", var_72_string);
				@WaitForAnimEnd(var_45_bool);
				if(!var_45_bool) { //@nz
				} else {
			} else {
			if(var_43_int == 1) {
				@rand(var_46_float, 4);
				@Sleep((var_46_float + 1), var_47_bool);
				if(!var_47_bool) { //@nz
					goto Label_985;
				}
			} else if(var_42_int != 0) {
				goto Label_985;
			}
			}
					bool var_75_bool;
					func_988(var_75_bool);
					var_76_bool = !var_75_bool; //@nz
					if(var_76_bool == 0) goto Label_980;
			}
		}
	Label_985:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_980:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


// @pe
void func_1422(object var_88_object)
{
	object var_92_object;
	func_1541(var_92_object);
	object var_89_object;
	var_92_object = var_89_object;
	func_1558(var_89_object, "pt_map_andrei", (float)2);
	object var_112_object;
	func_1541(var_112_object);
	var_88_object->ShowMap(var_112_object);
}


void func_1293(int var_108_int, string var_109_string)
{
	int var_111_int;
	@GetVariable(var_109_string, var_111_int);
	var_111_int = var_108_int;
}


// @pe
void func_658(object var_2_object, string var_309_string)
{
	bool var_310_bool;
	func_1373(var_310_bool);
	if(!var_310_bool) //@nz
		return 0;
	if(var_309_string == var_2_object)
		return 0;
	string var_313_string; bool var_314_bool;
	var_309_string = var_313_string;
	if(var_309_string == "")
		var_314_bool = false;
	else
		var_314_bool = true;
	func_1238(var_313_string, var_314_bool);
	var_2_object = var_309_string;
	
}


void func_1298(object var_73_object, string var_74_string)
{
	object var_77_object;
	@GetMainOutdoorScene(var_77_object);
	object var_78_object;
	@AddBlankActor(var_78_object, var_77_object, var_74_string, (var_74_string + ".bin"));
	var_78_object = var_73_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1558(object var_89_object, string var_90_string, float var_91_float)
{
	object var_99_object;
	@GetMainOutdoorScene(var_99_object);
	if(var_99_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_97_cvector;
	cvector var_98_cvector;
	bool var_100_bool;
	var_99_object->GetLocator(var_90_string, var_100_bool, var_97_cvector, var_98_cvector);
	if(!var_100_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_90_string) + " doesnt exist");
	var_99_object->GetMap(var_89_object);
	if(var_89_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_110_float = GetByIndex(var_97_cvector, 0);
	var_111_float = GetByIndex(var_97_cvector, 2);
	var_89_object->SetMapParams(var_110_float, var_111_float, var_91_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_895(object var_2_object, string var_3_string)
{
	func_990();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1309(bool var_81_bool, string var_82_string, string var_83_string)
{
	object var_85_object;
	@FindActor(var_85_object, var_82_string);
	if(var_85_object == null)
		var_81_bool = false;
	@Trigger(var_85_object, var_83_string);
	var_81_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1438(bool var_106_bool)
{
	int var_108_int;
	func_1293(var_108_int, "ood7Nudegirl1");
	if(var_108_int == 0) {
		var_106_bool = true;
		return 0;
	}
	var_106_bool = false;
}


void func_1188(bool var_244_bool, object var_245_object)
{
	bool var_253_bool; int var_254_int; string var_255_string;
	int var_257_int;
	func_1326(var_257_int);
	string var_251_string = ("d" + var_257_int) + "m";
	int var_252_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_245_object->HasProperty((var_251_string + (var_252_int + 1)), var_253_bool);
			if(!var_253_bool) { //@nz
			} else {
				var_252_int += 1;
			}
		}
		if(!var_252_int) { //@nz
			var_244_bool = false;
			return 10;
		}
		var_254_int = 0;
		if(var_252_int > 1)
			@irand(var_254_int, var_252_int);
		var_245_object->GetProperty((var_251_string + (var_254_int + 1)), var_255_string);
		bool var_271_bool; string var_272_string;
		var_255_string = var_272_string;
		func_1255(var_271_bool, var_272_string);
		var_271_bool = var_244_bool;
		return 10;

	}
}


void func_1321(float var_39_float)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	var_41_float = var_39_float;
}


// @pe
void func_1450(bool var_151_bool)
{
	int var_153_int;
	func_1293(var_153_int, "d7q04");
	if(var_153_int == 1000)
		var_151_bool = true;
	var_151_bool = false;
}


void func_1326(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_1076(void)
{
	bool var_186_bool;
	@CameraSwitchToNormal();
	bool var_187_bool;
	func_1373(var_187_bool);
	if(var_187_bool != 0) {
	} else {
		@HasAnimationTrack(var_186_bool, "head");
		if(var_186_bool == 0) goto Label_1092;
		@UnlookAsync("head");
	}
Label_1092:
	
}


// @pe
void func_1462(bool var_157_bool)
{
	int var_159_int;
	func_1293(var_159_int, "ood7Nudegirl2");
	if(var_159_int == 0) {
		var_157_bool = true;
		return 0;
	}
	var_157_bool = false;
}


void func_1591(int var_90_int)
{
	int var_92_int;
	@GetVariable("branch", var_92_int);
	if(var_92_int == 0) {
		var_90_int = 1;
		return 2;
	EMIT "GOTO 0x646";
	}
	if(var_92_int == 1) {
		var_90_int = 2;
		return 2;
	}
	var_90_int = 3;
}


// @pe
void func_1335(bool var_20_bool, int var_21_int)
{
	int var_22_int;
	func_1326(var_22_int);
	var_20_bool = var_22_int == var_21_int;
}


void func_828(bool var_21_bool)
{
	var_21_bool = true;
}


void func_1341(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_830(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_27_float, float var_28_float)
{
	bool var_29_bool;
	func_1003(var_29_bool);
	if(!var_29_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_27_float;
	var_1_object = var_28_float;
	@SetTimer(10, 1.0);
	func_909();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1474(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 637, 2, 533223);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_1513(var_47_bool, var_48_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1348(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_1341(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_1093(bool var_202_bool, object var_203_object)
{
	int var_209_int; int var_210_int;
	@GetVariable("voice_common", var_209_int);
	if(var_209_int != 0) {
		bool var_213_bool; object var_214_object;
		var_203_object = var_214_object;
		func_1151(var_213_bool, var_214_object);
		if(!var_213_bool) { //@nz
			bool var_244_bool; object var_245_object;
			var_203_object = var_245_object;
			func_1188(var_244_bool, var_245_object);
			if(!var_244_bool) { //@nz
				var_202_bool = false;
				return 4;
			}
		}
		@irand(var_210_int, 2);
		if(var_210_int != 0)
			@SetVariable("voice_common", ((var_209_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_284_bool; object var_285_object;
		var_203_object = var_285_object;
		func_1188(var_284_bool, var_285_object);
		if(!var_284_bool) { //@nz
			bool var_287_bool; object var_288_object;
			var_203_object = var_288_object;
			func_1151(var_287_bool, var_288_object);
			if(!var_287_bool) { //@nz
				var_202_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1149;
	
Label_1149:
	var_202_bool = true;
	
}


// @pe
void func_201(object var_2_object, string var_118_string)
{
	bool var_119_bool;
	func_1373(var_119_bool);
	if(!var_119_bool) //@nz
		return 0;
	if(var_118_string == var_2_object)
		return 0;
	string var_122_string; bool var_123_bool;
	var_118_string = var_122_string;
	if(var_118_string == "")
		var_123_bool = false;
	else
		var_123_bool = true;
	func_1238(var_122_string, var_123_bool);
	var_2_object = var_118_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_99_object, object var_100_object)
{
	var_0_object = var_100_object;
	var_1_object = var_99_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_106_bool;
		func_1438(var_1_object);
		if(var_106_bool != 0) {
			object var_114_object; object var_115_object;
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_1375();
			func_201(var_100_object, "Neutral");
			var_0_object->SetMessage(533196); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(535791, 37488, 37477); //@t
			var_0_object->AddReply(535798, 37488, 37485); //@t
		} else {
					bool var_150_bool = false;
					bool var_151_bool;
					func_1450(var_1_object);
					if(var_151_bool != 0) {
						bool var_157_bool;
						func_1462(var_1_object);
						if(var_157_bool != 0)
							var_150_bool = true;
					}
					if(var_150_bool == 0) goto Label_149;
					object var_163_object; object var_164_object;
					var_163_object = var_1_object;
					var_164_object = var_0_object;
					func_1416();
					func_201(var_100_object, "Neutral");
					var_0_object->SetMessage(533221); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533222, 37473, 34742); //@t
					var_0_object->AddReply(535790, -1, 37476); //@t
		}
	}
Label_171:
	for(;;) {
		bool var_137_bool;
		func_1373(var_137_bool);
		if(var_137_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1231(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_200;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_200:
			return 0;

		}

	}
	
Label_149:
	func_201(var_100_object, "Neutral");
	var_0_object->SetMessage(533200); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(533201, -1, 34721); //@t
	var_0_object->AddReply(535786, -1, 37472); //@t
	goto Label_171;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1231(string var_139_string)
{
	float var_142_float; float var_143_float;
	@lshGetAnimTimes(var_139_string, var_142_float, var_143_float);
	@lshPlayAnimation(var_142_float, var_143_float, false);
}


void func_1487(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 638, 2, 533224);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_1513(var_70_bool, var_71_object, 637);
}
EMIT "Stack[-1] = 0";


void func_1365(int var_87_int)
{
	var_87_int = 533305;
}


void func_1238(string var_122_string, bool var_123_bool)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_122_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, var_123_bool);
}


void func_1367(int var_86_int)
{
	var_86_int = 533304;
}


// @pe
void func_600(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_302_object, object var_303_object)
{
	var_0_object = var_303_object;
	var_1_object = var_302_object;
	var_3_string = false;
	if(1 != 0) {
		func_658(var_303_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_628;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x25c";
	}
Label_628:
	bool var_324_bool;
	func_1373(var_324_bool);
	if(var_324_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1231(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_657;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_657:
		return 0;

	}
	
}


void func_1369(string var_88_string)
{
	var_88_string = "ui/NPC_Citizen1.png";
}


void func_857(object var_0_object, object var_1_object, bool var_4_bool, bool var_19_bool)
{
	if(var_4_bool == null)
		var_19_bool = false;
	float var_23_float;
	func_995(var_23_float, var_4_bool);
	float var_21_float = sqrt(var_23_float);
	if(var_2_object != 0)
		var_21_float -= var_1_object;
	var_19_bool = var_21_float < var_0_object;
}


void func_1371(string var_89_string)
{
	var_89_string = "ui/NPC_Citizen1_b.png";
}


void func_1244(object var_33_object)
{
	float var_36_float;
	var_33_object->GetEyesHeight(var_36_float);
	cvector var_37_cvector = [0.0, 0.0, 0.0];
	var_38_float = GetByIndex(var_37_cvector, 1);
	var_36_float = var_38_float;
	SetByIndex(var_37_cvector, 1) = var_38_float;
	@LookAsync(var_33_object, "head", var_37_cvector);
}


void func_1373(bool var_81_bool)
{
	var_81_bool = false;
}


void func_990(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1375(void)
{
	@SetVariable("ood7Nudegirl1", 1);
}


void func_988(bool var_75_bool)
{
	var_75_bool = true;
}


void func_1500(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_995(float var_23_float, object var_24_object)
{
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector;
	var_24_object->GetPosition(var_29_cvector);
	var_23_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


void func_1381(void)
{
	@SetVariable("d7q04", 1);
	object var_28_object;
	func_1541(var_28_object);
	object var_25_object;
	var_28_object = var_25_object;
	float var_39_float;
	func_1321(var_39_float);
	var_25_object->AddMark("d7q04NudeGotoAndrei", "pt_map_andrei", 0, 515352, var_39_float);
	func_1474();
	func_1487();
	object var_73_object;
	func_1298(var_73_object, "quest_d7_04");
	bool var_81_bool;
	func_1309(var_81_bool, "quest_d7_04", "init_kabak");
}
EMIT "Stack[-1] = 0";


void func_1255(bool var_236_bool, string var_237_string)
{
	bool var_239_bool;
	bool var_240_bool;
	func_1373(var_240_bool);
	if(var_240_bool != 0) {
		@lshHasSpeech(var_239_bool, var_237_string);
		if(var_239_bool != 0) {
			@lshPlaySpeech(var_237_string);
			var_236_bool = true;
		}
	}
	var_236_bool = false;
}


void func_1513(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_1500(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1003(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_751(float var_16_float, float var_17_float)
{
	
Label_752:
	for(;;) {
		bool var_20_bool;
		func_1003(var_20_bool);
		var_23_bool = !var_20_bool; //@nz
		if(var_23_bool == 0) goto Label_760;
		@Hold();
	}
	
Label_760:
	float var_19_float;
	@rand(var_19_float, 3);
	@Sleep(var_19_float + 3);
	float var_27_float; float var_28_float;
	float var_18_float;
	func_830(var_15_bool, var_27_float, var_28_float, var_18_float, var_19_float, var_27_float, var_28_float);
	@sync();
	goto Label_752;
}
EMIT "Return(); Pop(2)";


void func_1008(bool var_39_bool, object var_40_object, float var_41_float)
{
	cvector var_52_cvector; bool var_59_bool;
	var_40_object->GetPosition(var_52_cvector);
	float var_51_float;
	var_40_object->GetEyesHeight(var_51_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_60_float + var_51_float);
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	@GetEyesHeight(var_51_float);
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (var_61_float + var_51_float);
	cvector var_54_cvector = var_52_cvector - var_53_cvector;
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (float)0;
	var_64_float = sqrt(var_54_cvector | var_54_cvector);
	var_54_cvector /= var_64_float;
	cvector var_55_cvector = -var_54_cvector;
	cvector var_66_cvector;
	func_1283(var_66_cvector, (var_55_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_56_cvector = ((var_54_cvector * var_41_float) + (var_66_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_58_bool;
	@IsOverrideActive(var_58_bool);
	if(var_58_bool != 0)
		var_39_bool = false;
	@StopWorld();
	@CameraTransit((var_53_cvector + var_56_cvector), var_55_cvector);
	var_79_float = GetByIndex(var_56_cvector, 0);
	var_80_float = GetByIndex(var_56_cvector, 2);
	@Rotate(var_79_float, var_80_float);
	bool var_81_bool;
	func_1373(var_81_bool);
	if(var_81_bool != 0) {
	} else {
		@HasAnimationTrack(var_59_bool, "head");
		if(var_59_bool == 0) goto Label_1070;
		@LookAsyncCamera("head");
	}
Label_1070:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_39_bool = true;
	
}


void func_1270(void)
{
	bool var_19_bool;
	func_1373(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1277(object var_22_object)
{
	object var_24_object;
	@self(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


void func_1151(bool var_213_bool, object var_214_object)
{
	string var_220_string; bool var_222_bool; int var_223_int; string var_224_string;
	var_220_string = "c";
	int var_221_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_214_object->HasProperty((var_220_string + (var_221_int + 1)), var_222_bool);
			if(!var_222_bool) { //@nz
			} else {
				var_221_int += 1;
			}
		}
		if(!var_221_int) { //@nz
			var_213_bool = false;
			return 10;
		}
		var_223_int = 0;
		if(var_221_int > 1)
			@irand(var_223_int, var_221_int);
		var_214_object->GetProperty((var_220_string + (var_223_int + 1)), var_224_string);
		bool var_236_bool; string var_237_string;
		var_224_string = var_237_string;
		func_1255(var_236_bool, var_237_string);
		var_236_bool = var_213_bool;
		return 10;

	}
}


