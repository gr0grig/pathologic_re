// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2159();
			if(var_21_bool == 36906) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_21_bool == 36953) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_21_bool == 36957) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_2270(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2159();
			if(var_21_bool == 19190) {
				func_411(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518058, 32643, 19191); //@t
				var_0_object->AddReply(531316, 32643, 32642); //@t
				return 0;
			}
			if(var_21_bool == 32643) {
				func_411(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531318, -1, 32644); //@t
				var_0_object->AddReply(531319, -1, 32645); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2270(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b2";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2159();
			if(var_22_cvector == 22664) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_2272();
			}
			if(var_22_cvector == 22669) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_2272();
			}
			if(var_22_cvector == 22684) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_2304();
			}
			if(var_22_cvector == 25222) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_2322();
			}
			if(var_22_cvector == 25223) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_2322();
			}
			if(var_22_cvector == 25224) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_2322();
			}
			if(var_22_cvector == 25219) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_2322();
			}
			if(var_22_cvector == 25220) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_2322();
			}
			if(var_22_cvector == 22687) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_2304();
			}
			if(var_22_cvector == 22689) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_2310();
				object var_128_object = var_1_object;
				func_2340(var_0_object);
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_2331();
			}
			if(var_22_cvector == 25228) {
				object var_163_object = var_1_object;
				func_2340(var_0_object);
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_2310();
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_2331();
			}
			if(var_22_cvector == 25229) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_2331();
			}
			if(var_22_cvector == 25231) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_2331();
			}
			if(var_21_bool == 22663) {
				bool var_179_bool;
				func_2350(var_1_object);
				if(var_179_bool != 0) {
					object var_187_object; object var_188_object;
					var_187_object = var_1_object;
					var_188_object = var_0_object;
					func_2298();
					object var_191_object; object var_192_object;
					var_191_object = var_1_object;
					var_192_object = var_0_object;
					func_2316();
					func_715(var_22_cvector, "Neutral");
					var_0_object->SetMessage(521502); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523951, 25235, 25234); //@t
					var_0_object->AddReply(523957, 25241, 25240); //@t
					return 0;
				}
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521505); //@t
				var_0_object->ClearReplies(); //@t
				bool var_216_bool;
				func_2362(var_1_object);
				if(var_216_bool != 0)
					var_0_object->AddReply(521506, 22668, 22667); //@t
				bool var_225_bool = false;
				bool var_226_bool;
				func_2397(var_1_object);
				if(var_226_bool != 0) {
					bool var_237_bool;
					func_2420(var_1_object);
					if(var_237_bool != 0)
						var_225_bool = true;
				}
				if(var_225_bool != 0)
					var_0_object->AddReply(521523, 25213, 22684); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_2374(var_1_object);
				if(var_247_bool != 0) {
					bool var_258_bool;
					func_2420(var_1_object);
					if(var_258_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(521526, 22688, 22687); //@t
				var_0_object->AddReply(521509, -1, 22670); //@t
				return 0;
			}
			if(var_21_bool == 22688) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521527); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521528, -1, 22689); //@t
				var_0_object->AddReply(523942, 25227, 25225); //@t
				var_0_object->AddReply(523943, 25230, 25226); //@t
				return 0;
			}
			if(var_21_bool == 25230) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523948, -1, 25231); //@t
				return 0;
			}
			if(var_21_bool == 25227) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523945, -1, 25228); //@t
				var_0_object->AddReply(523946, -1, 25229); //@t
				return 0;
			}
			if(var_21_bool == 25213) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523931, 22685, 25214); //@t
				var_0_object->AddReply(523932, 25216, 25215); //@t
				return 0;
			}
			if(var_21_bool == 25216) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530662, 22685, 31958); //@t
				return 0;
			}
			if(var_21_bool == 22685) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521524); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521525, 25221, 22686); //@t
				var_0_object->AddReply(523934, 25218, 25217); //@t
				return 0;
			}
			if(var_21_bool == 25218) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523936, -1, 25219); //@t
				var_0_object->AddReply(523937, -1, 25220); //@t
				return 0;
			}
			if(var_21_bool == 25221) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523938); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523939, -1, 25222); //@t
				var_0_object->AddReply(523940, -1, 25223); //@t
				var_0_object->AddReply(523941, -1, 25224); //@t
				return 0;
			}
			if(var_21_bool == 22668) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(521507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523949, 25233, 25232); //@t
				return 0;
			}
			if(var_21_bool == 25233) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521508, -1, 22669); //@t
				return 0;
			}
			if(var_21_bool == 25241) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523959, 25235, 25242); //@t
				return 0;
			}
			if(var_21_bool == 25235) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523953, 25237, 25236); //@t
				var_0_object->AddReply(523960, 25245, 25244); //@t
				return 0;
			}
			if(var_21_bool == 25245) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523962, 25247, 25246); //@t
				return 0;
			}
			if(var_21_bool == 25247) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523964, 25237, 25248); //@t
				return 0;
			}
			if(var_21_bool == 25237) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523955, 25239, 25238); //@t
				return 0;
			}
			if(var_21_bool == 25239) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523965, 25250, 25249); //@t
				var_0_object->AddReply(523970, 25261, 25254); //@t
				return 0;
			}
			if(var_21_bool == 25261) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523975, 25250, 25262); //@t
				return 0;
			}
			if(var_21_bool == 25250) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523967, 25252, 25251); //@t
				return 0;
			}
			if(var_21_bool == 25252) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523971, 25256, 25255); //@t
				var_0_object->AddReply(523973, 25256, 25257); //@t
				return 0;
			}
			if(var_21_bool == 25256) {
				func_715(var_22_cvector, "Neutral");
				var_0_object->SetMessage(523972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521503, -1, 22664); //@t
				var_0_object->AddReply(521504, -1, 22665); //@t
				return 0;
			}
			var_3_string = true;
			bool var_442_bool;
			func_2270(var_442_bool);
			if(var_442_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2e2";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_2159();
			if(var_21_int == 42563) {
				func_1540(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_2270(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x61b";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1611(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1682();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1903(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1651(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1631(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_2166(var_67_object);
					var_67_object = var_66_object;
					func_2051(var_65_bool, var_66_object);
				}
			} else {
				func_1646(var_21_int);
				func_1673();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1864();
		func_1682();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1682();
		func_2131("Neutral");
		func_1673();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1673();
		else
			func_2131("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1864();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1894(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2559(var_39_object);
			func_2131("Neutral");
			func_1682();
			func_1673();
		}
	}

}


// @pe
void func_2304(void)
{
	@SetVariable("oob8Georg2", 1);
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1903(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


void func_1793(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1903(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_2245(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1903(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_2238(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1848;
			goto Label_1859;
			}
				Label_1848:
					bool var_74_bool;
					func_1862(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1854;
			}
		}
	Label_1859:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1854:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_2051(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_2144(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


// @pe
void func_1540(object var_2_object, string var_479_string)
{
	bool var_480_bool;
	func_2270(var_480_bool);
	if(!var_480_bool) //@nz
		return 0;
	if(var_479_string == var_2_object)
		return 0;
	string var_483_string; bool var_484_bool;
	var_479_string = var_483_string;
	if(var_479_string == "")
		var_484_bool = false;
	else
		var_484_bool = true;
	func_2138(var_483_string, var_484_bool);
	var_2_object = var_479_string;
	
}


// @pe
void func_2310(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2316(void)
{
	@SetVariable("b8GeorgVisit", 1);
}


void func_13(object var_0_object, int var_388_int, object var_389_object)
{
	var_0_object = var_389_object;
	bool var_399_bool; object var_400_object;
	object var_401_object;
	func_2166(var_401_object);
	var_401_object = var_400_object;
	func_1993(var_399_bool, var_400_object);
	bool var_402_bool; object var_403_object;
	var_389_object = var_403_object;
	func_1908(var_402_bool, var_403_object, 70.0);
	if(!var_402_bool) { //@nz
		var_388_int = -2;
		return 8;
	}
	object var_395_object;
	@CreateDialog(var_395_object);
	int var_406_int;
	func_2264(var_406_int);
	var_395_object->SetNPCName(var_406_int);
	int var_407_int;
	func_2262(var_407_int);
	var_395_object->SetNPCDescription(var_407_int);
	string var_408_string;
	func_2266(var_408_string);
	var_395_object->SetPhoto(var_408_string);
	string var_409_string;
	func_2268(var_409_string);
	var_395_object->SetPhoto2(var_409_string);
	int var_410_int;
	func_2542(var_410_int);
	var_395_object->SetPlayerName(var_410_int);
	bool var_396_bool;
	@IsOverrideActive(var_396_bool);
	if(var_396_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	@DoDialog(var_395_object);
	object var_412_object; object var_413_object;
	var_389_object = var_412_object;
	var_395_object = var_413_object;
	TaskCall(2);
	func_94(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	bool var_398_bool;
	var_395_object->IsDialogEnd(var_398_bool);
	
	for(;;) {
		var_445_bool = !var_398_bool; //@nz
		if(var_445_bool == 0) goto Label_83;
		@sync();
		var_395_object->IsDialogEnd(var_398_bool);
	}
	
Label_83:
	object var_446_object;
	var_389_object = var_446_object;
	func_1976();
	@StopDialog(var_395_object);
	var_395_object->GetReturnValue(-1);
	int var_397_int = var_388_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_2166(var_55_object);
	var_55_object = var_54_object;
	func_1993(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1908(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_2264(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_2262(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_2266(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_2268(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_2542(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(4);
	func_353(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_247_bool = !var_52_bool; //@nz
		if(var_247_bool == 0) goto Label_342;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_342:
	object var_248_object;
	var_43_object = var_248_object;
	func_1976();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2322(void)
{
	@SetVariable("b8q03", 1000);
	func_2458();
}


// @pe
void func_2331(void)
{
	@SetVariable("b8q03", 1000);
	func_2471();
}


// @pe
void func_2340(object var_128_object)
{
	@Trace("money3000 is given");
	object var_131_object;
	var_128_object = var_131_object;
	func_2199(var_131_object, 3000);
}


void func_2088(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_2223(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_2144(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


// @pe
void func_2350(bool var_290_bool)
{
	int var_292_int;
	func_2182(var_292_int, "oob8Georg1");
	if(var_292_int == 0) {
		var_290_bool = true;
		return 0;
	}
	var_290_bool = false;
}


// @pe
void func_2362(bool var_331_bool)
{
	int var_333_int;
	func_2182(var_333_int, "b8q03");
	if(var_333_int == 0) {
		var_331_bool = true;
		return 0;
	}
	var_331_bool = false;
}


// @pe
void func_579(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_283_object, object var_284_object)
{
	var_0_object = var_284_object;
	var_1_object = var_283_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_290_bool;
		func_2350(var_1_object);
		if(var_290_bool != 0) {
			object var_298_object; object var_299_object;
			var_298_object = var_1_object;
			var_299_object = var_0_object;
			func_2298();
			object var_302_object; object var_303_object;
			var_302_object = var_1_object;
			var_303_object = var_0_object;
			func_2316();
			func_715(var_284_object, "Neutral");
			var_0_object->SetMessage(521502); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523951, 25235, 25234); //@t
			var_0_object->AddReply(523957, 25241, 25240); //@t
		} else {
					func_715(var_284_object, "Neutral");
					var_0_object->SetMessage(521505); //@t
					var_0_object->ClearReplies(); //@t
					bool var_331_bool;
					func_2362(var_1_object);
					if(var_331_bool != 0)
						var_0_object->AddReply(521506, 22668, 22667); //@t
					bool var_340_bool = false;
					bool var_341_bool;
					func_2397(var_1_object);
					if(var_341_bool != 0) {
						bool var_352_bool;
						func_2420(var_1_object);
						if(var_352_bool != 0)
							var_340_bool = true;
					}
					if(var_340_bool != 0)
						var_0_object->AddReply(521523, 25213, 22684); //@t
					bool var_361_bool = false;
					bool var_362_bool;
					func_2374(var_1_object);
					if(var_362_bool != 0) {
						bool var_373_bool;
						func_2420(var_1_object);
						if(var_373_bool != 0)
							var_361_bool = true;
					}
					if(var_361_bool != 0)
						var_0_object->AddReply(521526, 22688, 22687); //@t
					var_0_object->AddReply(521509, -1, 22670); //@t
		}
	}
	for(;;) {
		bool var_321_bool;
		func_2270(var_321_bool);
		if(var_321_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2131(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_714;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_714:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x247";


// @pe
void func_2374(bool var_362_bool)
{
	bool var_364_bool = false;
	int var_365_int;
	func_2182(var_365_int, "b8q03");
	if(var_365_int == 3) {
		int var_369_int;
		func_2182(var_369_int, "b8q03MladVladIsVictim");
		if(var_369_int != 0)
			var_364_bool = true;
	}
	if(var_364_bool != 0) {
		var_362_bool = true;
		return 0;
	}
	var_362_bool = false;
}


void func_1862(bool var_74_bool)
{
	var_74_bool = true;
}


void func_1864(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1611(object var_0_object)
{
	bool var_22_bool;
	func_1903(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1739();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1793();
	}
}
EMIT "Return(); Pop(0)";


void func_1869(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_2131(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


void func_1877(object var_135_object, string var_136_string, int var_137_int)
{
	int var_139_int;
	var_135_object->GetProperty(var_136_string, var_139_int);
	var_135_object->SetProperty(var_136_string, (var_139_int + var_137_int));
}


void func_2138(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1884(bool var_29_bool, cvector var_30_cvector)
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


// @pe
void func_2397(bool var_341_bool)
{
	bool var_343_bool = false;
	int var_344_int;
	func_2182(var_344_int, "b8q03");
	if(var_344_int == 3) {
		int var_348_int;
		func_2182(var_348_int, "b8q03MladVladIsVictim");
		if(var_348_int == 0)
			var_343_bool = true;
	}
	if(var_343_bool != 0) {
		var_341_bool = true;
		return 0;
	}
	var_341_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_412_object, object var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_413_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_437_bool;
	func_2270(var_437_bool);
	if(var_437_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2131(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_1631(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1894(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_2144(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_2270(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_209_object, "Neutral");
		var_0_object->SetMessage(518057); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518058, 32643, 19191); //@t
		var_0_object->AddReply(531316, 32643, 32642); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_234_bool;
	func_2270(var_234_bool);
	if(var_234_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2131(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_410;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_410:
		return 0;

	}
	
}


void func_1894(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1884(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1646(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1903(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_2159(void)
{
	bool var_24_bool;
	func_2270(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1651(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1869(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1908(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_2172(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_2270(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1970;
		@LookAsyncCamera("head");
	}
Label_1970:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


// @pe
void func_2420(bool var_352_bool)
{
	int var_354_int;
	func_2182(var_354_int, "oob8Georg2");
	if(var_354_int == 0) {
		var_352_bool = true;
		return 0;
	}
	var_352_bool = false;
}


void func_2166(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1401(object var_0_object, int var_448_int, object var_449_object)
{
	var_0_object = var_449_object;
	bool var_459_bool; object var_460_object;
	object var_461_object;
	func_2166(var_461_object);
	var_461_object = var_460_object;
	func_1993(var_459_bool, var_460_object);
	bool var_462_bool; object var_463_object;
	var_449_object = var_463_object;
	func_1908(var_462_bool, var_463_object, 70.0);
	if(!var_462_bool) { //@nz
		var_448_int = -2;
		return 8;
	}
	object var_455_object;
	@CreateDialog(var_455_object);
	int var_466_int;
	func_2264(var_466_int);
	var_455_object->SetNPCName(var_466_int);
	int var_467_int;
	func_2262(var_467_int);
	var_455_object->SetNPCDescription(var_467_int);
	string var_468_string;
	func_2266(var_468_string);
	var_455_object->SetPhoto(var_468_string);
	string var_469_string;
	func_2268(var_469_string);
	var_455_object->SetPhoto2(var_469_string);
	int var_470_int;
	func_2542(var_470_int);
	var_455_object->SetPlayerName(var_470_int);
	bool var_456_bool;
	@IsOverrideActive(var_456_bool);
	if(var_456_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	@DoDialog(var_455_object);
	object var_472_object; object var_473_object;
	var_449_object = var_472_object;
	var_455_object = var_473_object;
	TaskCall(8);
	func_1482(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object);
	TaskReturn();
	bool var_458_bool;
	var_455_object->IsDialogEnd(var_458_bool);
	
	for(;;) {
		var_502_bool = !var_458_bool; //@nz
		if(var_502_bool == 0) goto Label_1471;
		@sync();
		var_455_object->IsDialogEnd(var_458_bool);
	}
	
Label_1471:
	object var_503_object;
	var_449_object = var_503_object;
	func_1976();
	@StopDialog(var_455_object);
	var_455_object->GetReturnValue(-1);
	int var_457_int = var_448_int;
}
EMIT "Stack[-4] = 0";


void func_2172(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_2432(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 575, 2, 530655);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2497(var_52_bool, var_53_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2182(int var_292_int, string var_293_string)
{
	int var_295_int;
	@GetVariable(var_293_string, var_295_int);
	var_295_int = var_292_int;
}


void func_1673(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


void func_2187(int var_144_int, int var_145_int)
{
	object var_147_object;
	@CreateIntVector(var_147_object);
	var_147_object->add(var_144_int);
	var_147_object->add(var_145_int);
	@SendWorldWndMessage(3, var_147_object);
}
EMIT "Stack[-1] = 0";


void func_2445(void)
{
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 576, 2, 530656);
	bool var_75_bool; object var_76_object;
	var_71_object = var_76_object;
	func_2497(var_75_bool, var_76_object, 575);
}
EMIT "Stack[-1] = 0";


void func_1682(void)
{
	@KillTimer(10);
}


void func_2199(object var_131_object, int var_132_int)
{
	int var_134_int;
	object var_135_object;
	var_131_object = var_135_object;
	int var_137_int;
	func_1877(var_135_object, "money", var_137_int);
	if(var_137_int > 0) {
		@GetInvItemByName(var_134_int, "Money");
		int var_144_int; int var_145_int;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_2187(var_144_int, var_145_int);
	}
}


void func_2458(void)
{
	object var_95_object;
	@CreateDiaryEntry(var_95_object, 580, 2, 530660);
	bool var_99_bool; object var_100_object;
	var_95_object = var_100_object;
	func_2497(var_99_bool, var_100_object, 575);
}
EMIT "Stack[-1] = 0";


// @pe
void func_411(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_2270(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_2138(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


// @pe
void func_157(object var_2_object, string var_419_string)
{
	bool var_420_bool;
	func_2270(var_420_bool);
	if(!var_420_bool) //@nz
		return 0;
	if(var_419_string == var_2_object)
		return 0;
	string var_423_string; bool var_424_bool;
	var_419_string = var_423_string;
	if(var_419_string == "")
		var_424_bool = false;
	else
		var_424_bool = true;
	func_2138(var_423_string, var_424_bool);
	var_2_object = var_419_string;
	
}


void func_2471(void)
{
	object var_154_object;
	@CreateDiaryEntry(var_154_object, 581, 2, 530661);
	bool var_158_bool; object var_159_object;
	var_154_object = var_159_object;
	func_2497(var_158_bool, var_159_object, 575);
}
EMIT "Stack[-1] = 0";


void func_2218(float var_44_float)
{
	float var_46_float;
	@GetGameTime(var_46_float);
	var_46_float = var_44_float;
}


void func_2223(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_2484(object var_61_object)
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


void func_1976(void)
{
	bool var_250_bool;
	@CameraSwitchToNormal();
	bool var_251_bool;
	func_2270(var_251_bool);
	if(var_251_bool != 0) {
	} else {
		@HasAnimationTrack(var_250_bool, "head");
		if(var_250_bool == 0) goto Label_1992;
		@UnlookAsync("head");
	}
Label_1992:
	
}


// @pe
void func_2232(bool var_256_bool, int var_257_int)
{
	int var_258_int;
	func_2223(var_258_int);
	var_256_bool = var_258_int == var_257_int;
}


void func_2238(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_2497(bool var_52_bool, object var_53_object, int var_54_int)
{
	object var_61_object;
	func_2484(var_61_object);
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


void func_2245(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_2238(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1993(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_2051(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_2088(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_2088(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_2051(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2049;
	
Label_2049:
	var_53_bool = true;
	
}


// @pe
void func_1482(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_472_object, object var_473_object)
{
	var_0_object = var_473_object;
	var_1_object = var_472_object;
	var_3_string = false;
	if(1 != 0) {
		func_1540(var_473_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1510;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ce";
	}
Label_1510:
	bool var_494_bool;
	func_2270(var_494_bool);
	if(var_494_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2131(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1539;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1539:
		return 0;

	}
	
}


// @pe
void func_715(object var_2_object, string var_306_string)
{
	bool var_307_bool;
	func_2270(var_307_bool);
	if(!var_307_bool) //@nz
		return 0;
	if(var_306_string == var_2_object)
		return 0;
	string var_310_string; bool var_311_bool;
	var_306_string = var_310_string;
	if(var_306_string == "")
		var_311_bool = false;
	else
		var_311_bool = true;
	func_2138(var_310_string, var_311_bool);
	var_2_object = var_306_string;
	
}


void func_2262(int var_196_int)
{
	var_196_int = 515534;
}


void func_2264(int var_195_int)
{
	var_195_int = 502859;
}


void func_2266(string var_197_string)
{
	var_197_string = "ui/NPC_Georg.png";
}


void func_2268(string var_198_string)
{
	var_198_string = "ui/NPC_Georg_b.png";
}


void func_2525(object var_33_object)
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


void func_2270(bool var_91_bool)
{
	var_91_bool = true;
}


void func_2272(void)
{
	@SetVariable("b8q03", 1);
	object var_33_object;
	func_2525(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	float var_44_float;
	func_2218(var_44_float);
	var_30_object->AddMark("b8q03GeorgGotoKaterina", "pt_map_katerina", 0, 530663, var_44_float);
	func_2432();
	func_2445();
}
EMIT "Stack[-1] = 0";


void func_2542(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x9fd";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_498(object var_0_object, int var_259_int, object var_260_object)
{
	var_0_object = var_260_object;
	bool var_270_bool; object var_271_object;
	object var_272_object;
	func_2166(var_272_object);
	var_272_object = var_271_object;
	func_1993(var_270_bool, var_271_object);
	bool var_273_bool; object var_274_object;
	var_260_object = var_274_object;
	func_1908(var_273_bool, var_274_object, 70.0);
	if(!var_273_bool) { //@nz
		var_259_int = -2;
		return 8;
	}
	object var_266_object;
	@CreateDialog(var_266_object);
	int var_277_int;
	func_2264(var_277_int);
	var_266_object->SetNPCName(var_277_int);
	int var_278_int;
	func_2262(var_278_int);
	var_266_object->SetNPCDescription(var_278_int);
	string var_279_string;
	func_2266(var_279_string);
	var_266_object->SetPhoto(var_279_string);
	string var_280_string;
	func_2268(var_280_string);
	var_266_object->SetPhoto2(var_280_string);
	int var_281_int;
	func_2542(var_281_int);
	var_266_object->SetPlayerName(var_281_int);
	bool var_267_bool;
	@IsOverrideActive(var_267_bool);
	if(var_267_bool != 0) {
		var_259_int = -2;
		return 8;
	}
	@DoDialog(var_266_object);
	object var_283_object; object var_284_object;
	var_260_object = var_283_object;
	var_266_object = var_284_object;
	TaskCall(6);
	func_579(var_285_object, var_286_object, var_287_string, var_288_bool, var_283_object, var_284_object);
	TaskReturn();
	bool var_269_bool;
	var_266_object->IsDialogEnd(var_269_bool);
	
	for(;;) {
		var_381_bool = !var_269_bool; //@nz
		if(var_381_bool == 0) goto Label_568;
		@sync();
		var_266_object->IsDialogEnd(var_269_bool);
	}
	
Label_568:
	object var_382_object;
	var_260_object = var_382_object;
	func_1976();
	@StopDialog(var_266_object);
	var_266_object->GetReturnValue(-1);
	int var_268_int = var_259_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2298(void)
{
	@SetVariable("oob8Georg1", 1);
}


// @pe
void func_2559(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(3);
		func_272(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_255_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_256_bool;
	func_2232(var_256_bool, 8);
	if(var_256_bool != 0) {
		int var_259_int; object var_260_object;
		var_39_object = var_260_object;
		TaskCall(5);
		func_498(var_261_object, var_259_int, var_260_object);
		TaskReturn();
		return 0;
	}
	bool var_383_bool = false;
	bool var_384_bool;
	func_2232(var_384_bool, 12);
	if(var_384_bool != 0) {
		var_386_bool = GlobalVars[2];
		if(!var_386_bool) //@nz
			var_383_bool = true;
	}
	if(var_383_bool != 0) {
		int var_388_int; object var_389_object;
		var_39_object = var_389_object;
		TaskCall(1);
		func_13(var_390_object, var_388_int, var_389_object);
		TaskReturn();
		var_447_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_448_int; object var_449_object;
	var_39_object = var_449_object;
	TaskCall(7);
	func_1401(var_450_object, var_448_int, var_449_object);
	TaskReturn();
}


