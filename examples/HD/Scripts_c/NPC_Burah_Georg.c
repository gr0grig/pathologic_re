// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2160();
			if(var_21_bool == 19190) {
				func_139(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518058, 32643, 19191); //@t
				var_0_object->AddReply(531316, 32643, 32642); //@t
				return 0;
			}
			if(var_21_bool == 32643) {
				func_139(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531318, -1, 32644); //@t
				var_0_object->AddReply(531319, -1, 32645); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2271(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2160();
			if(var_22_cvector == 22664) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2273();
			}
			if(var_22_cvector == 22669) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_2273();
			}
			if(var_22_cvector == 22684) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_2305();
			}
			if(var_22_cvector == 25222) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_2323();
			}
			if(var_22_cvector == 25223) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_2323();
			}
			if(var_22_cvector == 25224) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_2323();
			}
			if(var_22_cvector == 25219) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_2323();
			}
			if(var_22_cvector == 25220) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_2323();
			}
			if(var_22_cvector == 22687) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_2305();
			}
			if(var_22_cvector == 22689) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_2311();
				object var_128_object = var_1_object;
				func_2341(var_0_object);
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_2332();
			}
			if(var_22_cvector == 25228) {
				object var_163_object = var_1_object;
				func_2341(var_0_object);
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_2311();
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_2332();
			}
			if(var_22_cvector == 25229) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_2332();
			}
			if(var_22_cvector == 25231) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_2332();
			}
			if(var_21_bool == 22663) {
				bool var_179_bool;
				func_2351(var_1_object);
				if(var_179_bool != 0) {
					object var_187_object; object var_188_object;
					var_187_object = var_1_object;
					var_188_object = var_0_object;
					func_2299();
					object var_191_object; object var_192_object;
					var_191_object = var_1_object;
					var_192_object = var_0_object;
					func_2317();
					func_443(var_22_cvector, "Neutral");
					var_0_object->SetMessage(521502); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523951, 25235, 25234); //@t
					var_0_object->AddReply(523957, 25241, 25240); //@t
					return 0;
				}
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521505); //@t
				var_0_object->ClearReplies(); //@t
				bool var_221_bool;
				func_2363(var_1_object);
				if(var_221_bool != 0)
					var_0_object->AddReply(521506, 22668, 22667); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_2398(var_1_object);
				if(var_231_bool != 0) {
					bool var_242_bool;
					func_2421(var_1_object);
					if(var_242_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(521523, 25213, 22684); //@t
				bool var_251_bool = false;
				bool var_252_bool;
				func_2375(var_1_object);
				if(var_252_bool != 0) {
					bool var_263_bool;
					func_2421(var_1_object);
					if(var_263_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0)
					var_0_object->AddReply(521526, 22688, 22687); //@t
				var_0_object->AddReply(521509, -1, 22670); //@t
				return 0;
			}
			if(var_21_bool == 22688) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(521527); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521528, -1, 22689); //@t
				var_0_object->AddReply(523942, 25227, 25225); //@t
				var_0_object->AddReply(523943, 25230, 25226); //@t
				return 0;
			}
			if(var_21_bool == 25230) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523948, -1, 25231); //@t
				return 0;
			}
			if(var_21_bool == 25227) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523945, -1, 25228); //@t
				var_0_object->AddReply(523946, -1, 25229); //@t
				return 0;
			}
			if(var_21_bool == 25213) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523931, 22685, 25214); //@t
				var_0_object->AddReply(523932, 25216, 25215); //@t
				return 0;
			}
			if(var_21_bool == 25216) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530662, 22685, 31958); //@t
				return 0;
			}
			if(var_21_bool == 22685) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(521524); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521525, 25221, 22686); //@t
				var_0_object->AddReply(523934, 25218, 25217); //@t
				return 0;
			}
			if(var_21_bool == 25218) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523936, -1, 25219); //@t
				var_0_object->AddReply(523937, -1, 25220); //@t
				return 0;
			}
			if(var_21_bool == 25221) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523938); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523939, -1, 25222); //@t
				var_0_object->AddReply(523940, -1, 25223); //@t
				var_0_object->AddReply(523941, -1, 25224); //@t
				return 0;
			}
			if(var_21_bool == 22668) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523949, 25233, 25232); //@t
				return 0;
			}
			if(var_21_bool == 25233) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521508, -1, 22669); //@t
				return 0;
			}
			if(var_21_bool == 25241) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523959, 25235, 25242); //@t
				return 0;
			}
			if(var_21_bool == 25235) {
				func_443(var_22_cvector, "Anger");
				var_0_object->SetMessage(523952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523953, 25237, 25236); //@t
				var_0_object->AddReply(523960, 25245, 25244); //@t
				return 0;
			}
			if(var_21_bool == 25245) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523962, 25247, 25246); //@t
				return 0;
			}
			if(var_21_bool == 25247) {
				func_443(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523964, 25237, 25248); //@t
				return 0;
			}
			if(var_21_bool == 25237) {
				func_443(var_22_cvector, "Anger");
				var_0_object->SetMessage(523954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523955, 25239, 25238); //@t
				return 0;
			}
			if(var_21_bool == 25239) {
				func_443(var_22_cvector, "Jeer");
				var_0_object->SetMessage(523956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523965, 25250, 25249); //@t
				var_0_object->AddReply(523970, 25261, 25254); //@t
				return 0;
			}
			if(var_21_bool == 25261) {
				func_443(var_22_cvector, "Jeer");
				var_0_object->SetMessage(523974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523975, 25250, 25262); //@t
				return 0;
			}
			if(var_21_bool == 25250) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523967, 25252, 25251); //@t
				return 0;
			}
			if(var_21_bool == 25252) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523971, 25256, 25255); //@t
				var_0_object->AddReply(523973, 25256, 25257); //@t
				return 0;
			}
			if(var_21_bool == 25256) {
				func_443(var_22_cvector, "Grin");
				var_0_object->SetMessage(523972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521503, -1, 22664); //@t
				var_0_object->AddReply(521504, -1, 22665); //@t
				return 0;
			}
			var_3_string = true;
			bool var_447_bool;
			func_2271(var_447_bool);
			if(var_447_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d2";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2160();
			if(var_21_bool == 36906) {
				func_1273(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_21_bool == 36953) {
				func_1273(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_21_bool == 36957) {
				func_1273(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_2271(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x510";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2160();
			if(var_21_int == 42563) {
				func_1527(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2271(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x60e";
	
	}

}


maintask task_8
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1598(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1663();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1884(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1632(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1612(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_2167(var_67_object);
					var_67_object = var_66_object;
					func_2034(var_65_bool, var_66_object);
				}
			} else {
				func_1627(var_21_int);
				func_1654();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1845();
		func_1663();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1663();
		func_2114("Neutral");
		func_1654();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1654();
		else
			func_2114("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1845();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1875(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2560(var_39_object);
			func_2114("Neutral");
			func_1663();
			func_1654();
		}
	}

}


// @pe
void func_2560(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_268_bool;
	func_2233(var_268_bool, 8);
	if(var_268_bool != 0) {
		int var_271_int; object var_272_object;
		var_39_object = var_272_object;
		TaskCall(2);
		func_226(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	bool var_395_bool = false;
	bool var_396_bool;
	func_2233(var_396_bool, 12);
	if(var_396_bool != 0) {
		var_398_bool = GlobalVars[2];
		if(!var_398_bool) //@nz
			var_395_bool = true;
	}
	if(var_395_bool != 0) {
		int var_400_int; object var_401_object;
		var_39_object = var_401_object;
		TaskCall(4);
		func_1129(var_402_object, var_400_int, var_401_object);
		TaskReturn();
		var_459_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_460_int; object var_461_object;
	var_39_object = var_461_object;
	TaskCall(6);
	func_1388(var_462_object, var_460_int, var_461_object);
	TaskReturn();
}


// @pe
void func_2305(void)
{
	@SetVariable("oob8Georg2", 1);
}


void func_0(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_1889(var_53_bool, var_54_object, 70.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_101_int;
	func_2265(var_101_int);
	var_49_object->SetNPCName(var_101_int);
	int var_102_int;
	func_2263(var_102_int);
	var_49_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_2267(var_103_string);
	var_49_object->SetPhoto(var_103_string);
	string var_104_string;
	func_2269(var_104_string);
	var_49_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_2543(var_105_int);
	var_49_object->SetPlayerName(var_105_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	bool var_114_bool; object var_115_object;
	object var_116_object;
	func_2167(var_116_object);
	var_116_object = var_115_object;
	func_1976(var_114_bool, var_115_object);
	object var_209_object; object var_210_object;
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_258_bool = !var_52_bool; //@nz
		if(var_258_bool == 0) goto Label_70;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_70:
	object var_259_object;
	var_43_object = var_259_object;
	func_1958();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2311(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2317(void)
{
	@SetVariable("b8GeorgVisit", 1);
}


// @pe
void func_2323(void)
{
	@SetVariable("b8q03", 1000);
	func_2459();
}


void func_2071(bool var_156_bool, object var_157_object)
{
	bool var_165_bool; int var_166_int; string var_167_string;
	int var_169_int;
	func_2224(var_169_int);
	string var_163_string = ("d" + var_169_int) + "m";
	int var_164_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_157_object->HasProperty((var_163_string + (var_164_int + 1)), var_165_bool);
			if(!var_165_bool) { //@nz
			} else {
				var_164_int += 1;
			}
		}
		if(!var_164_int) { //@nz
			var_156_bool = false;
			return 10;
		}
		var_166_int = 0;
		if(var_164_int > 1)
			@irand(var_166_int, var_164_int);
		var_157_object->GetProperty((var_163_string + (var_166_int + 1)), var_167_string);
		bool var_188_bool; string var_189_string;
		var_167_string = var_189_string;
		func_2145(var_188_bool, var_189_string);
		var_188_bool = var_156_bool;
		return 10;

	}
}


// @pe
void func_2332(void)
{
	@SetVariable("b8q03", 1000);
	func_2472();
}


// @pe
void func_2341(object var_128_object)
{
	@Trace("money3000 is given");
	object var_131_object;
	var_128_object = var_131_object;
	func_2200(var_131_object, 3000);
}


// @pe
void func_2351(bool var_302_bool)
{
	int var_304_int;
	func_2183(var_304_int, "oob8Georg1");
	if(var_304_int == 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


// @pe
void func_307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_295_object, object var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_302_bool;
		func_2351(var_1_object);
		if(var_302_bool != 0) {
			object var_310_object; object var_311_object;
			var_310_object = var_1_object;
			var_311_object = var_0_object;
			func_2299();
			object var_314_object; object var_315_object;
			var_314_object = var_1_object;
			var_315_object = var_0_object;
			func_2317();
			func_443(var_296_object, "Neutral");
			var_0_object->SetMessage(521502); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523951, 25235, 25234); //@t
			var_0_object->AddReply(523957, 25241, 25240); //@t
		} else {
					func_443(var_296_object, "Neutral");
					var_0_object->SetMessage(521505); //@t
					var_0_object->ClearReplies(); //@t
					bool var_343_bool;
					func_2363(var_1_object);
					if(var_343_bool != 0)
						var_0_object->AddReply(521506, 22668, 22667); //@t
					bool var_352_bool = false;
					bool var_353_bool;
					func_2398(var_1_object);
					if(var_353_bool != 0) {
						bool var_364_bool;
						func_2421(var_1_object);
						if(var_364_bool != 0)
							var_352_bool = true;
					}
					if(var_352_bool != 0)
						var_0_object->AddReply(521523, 25213, 22684); //@t
					bool var_373_bool = false;
					bool var_374_bool;
					func_2375(var_1_object);
					if(var_374_bool != 0) {
						bool var_385_bool;
						func_2421(var_1_object);
						if(var_385_bool != 0)
							var_373_bool = true;
					}
					if(var_373_bool != 0)
						var_0_object->AddReply(521526, 22688, 22687); //@t
					var_0_object->AddReply(521509, -1, 22670); //@t
		}
	}
	for(;;) {
		bool var_333_bool;
		func_2271(var_333_bool);
		if(var_333_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2114(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_442;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_442:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x137";


void func_1843(bool var_60_bool)
{
	var_60_bool = true;
}


void func_1845(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1850(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_2363(bool var_343_bool)
{
	int var_345_int;
	func_2183(var_345_int, "b8q03");
	if(var_345_int == 0) {
		var_343_bool = true;
		return 0;
	}
	var_343_bool = false;
}


void func_1598(object var_0_object)
{
	bool var_22_bool;
	func_1884(var_22_bool);
	if(!var_22_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1774();
	}
}
EMIT "Return(); Pop(0)";


void func_2114(string var_242_string)
{
	bool var_246_bool; float var_247_float; float var_248_float;
	@lshHasAnimation(var_246_bool, var_242_string);
	if(var_246_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		@lshPlayAnimation(var_247_float, var_248_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


void func_1858(object var_135_object, string var_136_string, int var_137_int)
{
	int var_139_int;
	var_135_object->GetProperty(var_136_string, var_139_int);
	var_135_object->SetProperty(var_136_string, (var_139_int + var_137_int));
}


// @pe
void func_2375(bool var_374_bool)
{
	bool var_376_bool = false;
	int var_377_int;
	func_2183(var_377_int, "b8q03");
	if(var_377_int == 3) {
		int var_381_int;
		func_2183(var_381_int, "b8q03MladVladIsVictim");
		if(var_381_int != 0)
			var_376_bool = true;
	}
	if(var_376_bool != 0) {
		var_374_bool = true;
		return 0;
	}
	var_374_bool = false;
}


void func_1865(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_1612(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1875(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_209_object, object var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_210_object, "Neutral");
		var_0_object->SetMessage(518057); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518058, 32643, 19191); //@t
		var_0_object->AddReply(531316, 32643, 32642); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_240_bool;
	func_2271(var_240_bool);
	if(var_240_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2114(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_2130(string var_220_string, bool var_221_bool)
{
	bool var_227_bool; float var_228_float; float var_229_float;
	@lshHasAnimation(var_227_bool, var_220_string);
	if(var_227_bool != 0) {
		@lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		@lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_220_string);
	}
	
}


void func_1875(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1865(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1627(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1884(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


// @pe
void func_2398(bool var_353_bool)
{
	bool var_355_bool = false;
	int var_356_int;
	func_2183(var_356_int, "b8q03");
	if(var_356_int == 3) {
		int var_360_int;
		func_2183(var_360_int, "b8q03MladVladIsVictim");
		if(var_360_int == 0)
			var_355_bool = true;
	}
	if(var_355_bool != 0) {
		var_353_bool = true;
		return 0;
	}
	var_353_bool = false;
}


void func_1632(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1850(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1889(bool var_53_bool, object var_54_object, float var_55_float)
{
	cvector var_66_cvector; bool var_73_bool;
	var_54_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_54_object->GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_78_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_78_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_2173(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * var_55_float) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_53_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector, true);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	bool var_96_bool;
	func_2271(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_1952;
		@LookAsyncCamera("head");
	}
Label_1952:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


void func_2145(bool var_148_bool, string var_149_string)
{
	bool var_151_bool;
	bool var_152_bool;
	func_2271(var_152_bool);
	if(var_152_bool != 0) {
		@lshHasSpeech(var_151_bool, var_149_string);
		if(var_151_bool != 0) {
			@lshPlaySpeech(var_149_string);
			var_148_bool = true;
		}
	}
	var_148_bool = false;
}


void func_1129(object var_0_object, int var_400_int, object var_401_object)
{
	var_0_object = var_401_object;
	bool var_411_bool; object var_412_object;
	var_401_object = var_412_object;
	func_1889(var_411_bool, var_412_object, 70.0);
	if(!var_411_bool) { //@nz
		var_400_int = -2;
		return 8;
	}
	object var_407_object;
	@CreateDialog(var_407_object);
	int var_415_int;
	func_2265(var_415_int);
	var_407_object->SetNPCName(var_415_int);
	int var_416_int;
	func_2263(var_416_int);
	var_407_object->SetNPCDescription(var_416_int);
	string var_417_string;
	func_2267(var_417_string);
	var_407_object->SetPhoto(var_417_string);
	string var_418_string;
	func_2269(var_418_string);
	var_407_object->SetPhoto2(var_418_string);
	int var_419_int;
	func_2543(var_419_int);
	var_407_object->SetPlayerName(var_419_int);
	bool var_408_bool;
	@IsOverrideActive(var_408_bool);
	if(var_408_bool != 0) {
		var_400_int = -2;
		return 8;
	}
	@DoDialog(var_407_object);
	bool var_421_bool; object var_422_object;
	object var_423_object;
	func_2167(var_423_object);
	var_423_object = var_422_object;
	func_1976(var_421_bool, var_422_object);
	object var_424_object; object var_425_object;
	var_401_object = var_424_object;
	var_407_object = var_425_object;
	TaskCall(5);
	func_1210(var_426_object, var_427_object, var_428_string, var_429_bool, var_424_object, var_425_object);
	TaskReturn();
	bool var_410_bool;
	var_407_object->IsDialogEnd(var_410_bool);
	
	for(;;) {
		var_457_bool = !var_410_bool; //@nz
		if(var_457_bool == 0) goto Label_1199;
		@sync();
		var_407_object->IsDialogEnd(var_410_bool);
	}
	
Label_1199:
	object var_458_object;
	var_401_object = var_458_object;
	func_1958();
	@StopDialog(var_407_object);
	var_407_object->GetReturnValue(-1);
	int var_409_int = var_400_int;
}
EMIT "Stack[-4] = 0";


void func_1388(object var_0_object, int var_460_int, object var_461_object)
{
	var_0_object = var_461_object;
	bool var_471_bool; object var_472_object;
	var_461_object = var_472_object;
	func_1889(var_471_bool, var_472_object, 70.0);
	if(!var_471_bool) { //@nz
		var_460_int = -2;
		return 8;
	}
	object var_467_object;
	@CreateDialog(var_467_object);
	int var_475_int;
	func_2265(var_475_int);
	var_467_object->SetNPCName(var_475_int);
	int var_476_int;
	func_2263(var_476_int);
	var_467_object->SetNPCDescription(var_476_int);
	string var_477_string;
	func_2267(var_477_string);
	var_467_object->SetPhoto(var_477_string);
	string var_478_string;
	func_2269(var_478_string);
	var_467_object->SetPhoto2(var_478_string);
	int var_479_int;
	func_2543(var_479_int);
	var_467_object->SetPlayerName(var_479_int);
	bool var_468_bool;
	@IsOverrideActive(var_468_bool);
	if(var_468_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	@DoDialog(var_467_object);
	bool var_481_bool; object var_482_object;
	object var_483_object;
	func_2167(var_483_object);
	var_483_object = var_482_object;
	func_1976(var_481_bool, var_482_object);
	object var_484_object; object var_485_object;
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(7);
	func_1469(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	bool var_470_bool;
	var_467_object->IsDialogEnd(var_470_bool);
	
	for(;;) {
		var_514_bool = !var_470_bool; //@nz
		if(var_514_bool == 0) goto Label_1458;
		@sync();
		var_467_object->IsDialogEnd(var_470_bool);
	}
	
Label_1458:
	object var_515_object;
	var_461_object = var_515_object;
	func_1958();
	@StopDialog(var_467_object);
	var_467_object->GetReturnValue(-1);
	int var_469_int = var_460_int;
}
EMIT "Stack[-4] = 0";


void func_2160(void)
{
	bool var_24_bool;
	func_2271(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2421(bool var_364_bool)
{
	int var_366_int;
	func_2183(var_366_int, "oob8Georg2");
	if(var_366_int == 0) {
		var_364_bool = true;
		return 0;
	}
	var_364_bool = false;
}


void func_1654(void)
{
	float var_519_float;
	@rand(var_519_float, 8, 16);
	@SetTimer(10, var_519_float);
}


void func_2167(object var_116_object)
{
	object var_118_object;
	@self(var_118_object);
	var_118_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_2173(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


void func_1663(void)
{
	@KillTimer(10);
}


void func_2433(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 575, 2, 530655);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2498(var_52_bool, var_53_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2183(int var_304_int, string var_305_string)
{
	int var_307_int;
	@GetVariable(var_305_string, var_307_int);
	var_307_int = var_304_int;
}


// @pe
void func_139(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_2271(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_2130(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


void func_2188(int var_144_int, int var_145_int)
{
	object var_147_object;
	@CreateIntVector(var_147_object);
	var_147_object->add(var_144_int);
	var_147_object->add(var_145_int);
	@SendWorldWndMessage(3, var_147_object);
}
EMIT "Stack[-1] = 0";


void func_2446(void)
{
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 576, 2, 530656);
	bool var_75_bool; object var_76_object;
	var_71_object = var_76_object;
	func_2498(var_75_bool, var_76_object, 575);
}
EMIT "Stack[-1] = 0";


void func_2200(object var_131_object, int var_132_int)
{
	int var_134_int;
	object var_135_object;
	var_131_object = var_135_object;
	int var_137_int;
	func_1858(var_135_object, "money", var_137_int);
	if(var_137_int > 0) {
		@GetInvItemByName(var_134_int, "Money");
		int var_144_int; int var_145_int;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_2188(var_144_int, var_145_int);
	}
}


void func_2459(void)
{
	object var_95_object;
	@CreateDiaryEntry(var_95_object, 580, 2, 530660);
	bool var_99_bool; object var_100_object;
	var_95_object = var_100_object;
	func_2498(var_99_bool, var_100_object, 575);
}
EMIT "Stack[-1] = 0";


void func_1958(void)
{
	bool var_261_bool;
	@CameraSwitchToNormal(true);
	bool var_263_bool;
	func_2271(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_261_bool, "head");
		if(var_261_bool == 0) goto Label_1975;
		@UnlookAsync("head");
	}
Label_1975:
	
}


void func_2472(void)
{
	object var_154_object;
	@CreateDiaryEntry(var_154_object, 581, 2, 530661);
	bool var_158_bool; object var_159_object;
	var_154_object = var_159_object;
	func_2498(var_158_bool, var_159_object, 575);
}
EMIT "Stack[-1] = 0";


void func_2219(float var_44_float)
{
	float var_46_float;
	@GetGameTime(var_46_float);
	var_46_float = var_44_float;
}


void func_2224(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	var_169_int = 1 + (var_171_float / 24);
}


void func_2485(object var_61_object)
{
	object var_63_object;
	@GetDiaryRoot(var_63_object);
	if(!var_63_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_61_object = false;
	}
	var_63_object = var_61_object;
}
EMIT "Stack[-1] = 0";


void func_1976(bool var_114_bool, object var_115_object)
{
	int var_121_int; int var_122_int;
	@GetVariable("voice_common", var_121_int);
	if(var_121_int != 0) {
		bool var_125_bool; object var_126_object;
		var_115_object = var_126_object;
		func_2034(var_125_bool, var_126_object);
		if(!var_125_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_115_object = var_157_object;
			func_2071(var_156_bool, var_157_object);
			if(!var_156_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@irand(var_122_int, 2);
		if(var_122_int != 0)
			@SetVariable("voice_common", ((var_121_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_201_bool; object var_202_object;
		var_115_object = var_202_object;
		func_2071(var_201_bool, var_202_object);
		if(!var_201_bool) { //@nz
			bool var_204_bool; object var_205_object;
			var_115_object = var_205_object;
			func_2034(var_204_bool, var_205_object);
			if(!var_204_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2032;
	
Label_2032:
	var_114_bool = true;
	
}


// @pe
void func_2233(bool var_268_bool, int var_269_int)
{
	int var_270_int;
	func_2224(var_270_int);
	var_268_bool = var_270_int == var_269_int;
}


// @pe
void func_1210(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_424_object, object var_425_object)
{
	var_0_object = var_425_object;
	var_1_object = var_424_object;
	var_3_string = false;
	if(1 != 0) {
		func_1273(var_425_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1243;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4be";
	}
Label_1243:
	bool var_449_bool;
	func_2271(var_449_bool);
	if(var_449_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2114(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1272;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1272:
		return 0;

	}
	
}


// @pe
void func_443(object var_2_object, string var_318_string)
{
	bool var_319_bool;
	func_2271(var_319_bool);
	if(!var_319_bool) //@nz
		return 0;
	if(var_318_string == var_2_object)
		return 0;
	string var_322_string; bool var_323_bool;
	var_318_string = var_322_string;
	if(var_318_string == "")
		var_323_bool = false;
	else
		var_323_bool = true;
	func_2130(var_322_string, var_323_bool);
	var_2_object = var_318_string;
	
}


// @pe
void func_1469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_484_object, object var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if(1 != 0) {
		func_1527(var_485_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1497;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5c1";
	}
Label_1497:
	bool var_506_bool;
	func_2271(var_506_bool);
	if(var_506_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2114(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1526;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1526:
		return 0;

	}
	
}


void func_2239(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_2498(bool var_52_bool, object var_53_object, int var_54_int)
{
	object var_61_object;
	func_2485(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	object var_59_object;
	var_58_object->Find(var_54_int, var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_54_int);
		var_52_bool = false;
	}
	var_59_object->AddChild(var_53_object);
	@SendWorldWndMessage(7);
	int var_60_int;
	var_53_object->GetCategory(var_60_int);
	@SetDiarySection(var_60_int);
	var_52_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2246(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_2239(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_2263(int var_102_int)
{
	var_102_int = 515534;
}


void func_2265(int var_101_int)
{
	var_101_int = 502859;
}


void func_2267(string var_103_string)
{
	var_103_string = "ui/NPC_Georg.png";
}


void func_2269(string var_104_string)
{
	var_104_string = "ui/NPC_Georg_b.png";
}


void func_2526(object var_33_object)
{
	object var_36_object; object var_37_object;
	@GetMainOutdoorScene(var_36_object);
	if(var_36_object == null) {
		@Trace("Can't find main outdoor scene");
		var_37_object = null;
		var_37_object = var_33_object;
	}
	var_36_object->GetMap(var_37_object);
	var_37_object = var_33_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2271(bool var_96_bool)
{
	var_96_bool = true;
}


void func_2273(void)
{
	@SetVariable("b8q03", 1);
	object var_33_object;
	func_2526(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	float var_44_float;
	func_2219(var_44_float);
	var_30_object->AddMark("b8q03GeorgGotoKaterina", "pt_map_katerina", 0, 530663, var_44_float);
	func_2433();
	func_2446();
}
EMIT "Stack[-1] = 0";


void func_226(object var_0_object, int var_271_int, object var_272_object)
{
	var_0_object = var_272_object;
	bool var_282_bool; object var_283_object;
	var_272_object = var_283_object;
	func_1889(var_282_bool, var_283_object, 70.0);
	if(!var_282_bool) { //@nz
		var_271_int = -2;
		return 8;
	}
	object var_278_object;
	@CreateDialog(var_278_object);
	int var_286_int;
	func_2265(var_286_int);
	var_278_object->SetNPCName(var_286_int);
	int var_287_int;
	func_2263(var_287_int);
	var_278_object->SetNPCDescription(var_287_int);
	string var_288_string;
	func_2267(var_288_string);
	var_278_object->SetPhoto(var_288_string);
	string var_289_string;
	func_2269(var_289_string);
	var_278_object->SetPhoto2(var_289_string);
	int var_290_int;
	func_2543(var_290_int);
	var_278_object->SetPlayerName(var_290_int);
	bool var_279_bool;
	@IsOverrideActive(var_279_bool);
	if(var_279_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	@DoDialog(var_278_object);
	bool var_292_bool; object var_293_object;
	object var_294_object;
	func_2167(var_294_object);
	var_294_object = var_293_object;
	func_1976(var_292_bool, var_293_object);
	object var_295_object; object var_296_object;
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(3);
	func_307(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	bool var_281_bool;
	var_278_object->IsDialogEnd(var_281_bool);
	
	for(;;) {
		var_393_bool = !var_281_bool; //@nz
		if(var_393_bool == 0) goto Label_296;
		@sync();
		var_278_object->IsDialogEnd(var_281_bool);
	}
	
Label_296:
	object var_394_object;
	var_272_object = var_394_object;
	func_1958();
	@StopDialog(var_278_object);
	var_278_object->GetReturnValue(-1);
	int var_280_int = var_271_int;
}
EMIT "Stack[-4] = 0";


void func_1774(void)
{
	bool var_34_bool; int var_35_int; int var_36_int; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1884(var_38_bool);
	if(!var_38_bool) //@nz
		return 12;
	int var_40_int;
	func_2246(var_40_int);
	int var_32_int;
	var_40_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_33_int < 5) {
			bool var_56_bool;
			func_1884(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			if(!var_32_int) { //@nz
				@Sleep(3, var_34_bool);
				if(!var_34_bool) { //@nz
				} else {
			} else {
			@irand(var_35_int, var_32_int);
			@irand(var_36_int, 5);
			if(var_36_int != 0)
				var_35_int = 0;
			string var_67_string; int var_68_int;
			var_35_int = var_68_int;
			func_2239(var_67_string, var_68_int);
			@PlayAnimation("all", var_67_string);
			@WaitForAnimEnd(var_37_bool);
			var_69_bool = !var_37_bool; //@nz
			if(var_69_bool == 0) goto Label_1829;
			goto Label_1840;
			}
				Label_1829:
					bool var_60_bool;
					func_1843(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_1835;
			}
		}
	Label_1840:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1835:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


void func_2543(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x9fe";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


void func_2034(bool var_125_bool, object var_126_object)
{
	string var_132_string; bool var_134_bool; int var_135_int; string var_136_string;
	var_132_string = "c";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_148_bool; string var_149_string;
		var_136_string = var_149_string;
		func_2145(var_148_bool, var_149_string);
		var_148_bool = var_125_bool;
		return 10;

	}
}


// @pe
void func_1527(object var_2_object, string var_491_string)
{
	bool var_492_bool;
	func_2271(var_492_bool);
	if(!var_492_bool) //@nz
		return 0;
	if(var_491_string == var_2_object)
		return 0;
	string var_495_string; bool var_496_bool;
	var_491_string = var_495_string;
	if(var_491_string == "")
		var_496_bool = false;
	else
		var_496_bool = true;
	func_2130(var_495_string, var_496_bool);
	var_2_object = var_491_string;
	
}


// @pe
void func_1273(object var_2_object, string var_431_string)
{
	bool var_432_bool;
	func_2271(var_432_bool);
	if(!var_432_bool) //@nz
		return 0;
	if(var_431_string == var_2_object)
		return 0;
	string var_435_string; bool var_436_bool;
	var_431_string = var_435_string;
	if(var_431_string == "")
		var_436_bool = false;
	else
		var_436_bool = true;
	func_2130(var_435_string, var_436_bool);
	var_2_object = var_431_string;
	
}


// @pe
void func_2299(void)
{
	@SetVariable("oob8Georg1", 1);
}


