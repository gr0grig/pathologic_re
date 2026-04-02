// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		func_3287();
		bool var_26_bool;
		func_2518(var_26_bool);
		if(!var_26_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_2583("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool)
	{
		object var_26_object;
		var_25_bool = var_26_object;
		func_3291(var_26_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool)
	{
		object var_27_object;
		var_25_bool = var_27_object;
		bool var_26_bool;
		func_2506(var_26_bool, var_27_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_2601();
			if(var_25_string == 429) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_2845();
				func_175(var_26_bool, "Neutral");
				var_0_object->SetMessage(370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(371, 432, 430); //@t
				var_0_object->AddReply(372, 437, 431); //@t
				return 0;
			}
			if(var_25_string == 437) {
				func_175(var_26_bool, "Neutral");
				var_0_object->SetMessage(377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(378, 432, 438); //@t
				return 0;
			}
			if(var_25_string == 432) {
				func_175(var_26_bool, "Neutral");
				var_0_object->SetMessage(373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(374, 435, 433); //@t
				var_0_object->AddReply(375, 435, 434); //@t
				return 0;
			}
			if(var_25_string == 435) {
				func_175(var_26_bool, "Neutral");
				var_0_object->SetMessage(376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(381, -1, 442); //@t
				var_0_object->AddReply(379, -1, 440); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_2702(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc0";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_2601();
			if(var_26_bool == 5562) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_2851();
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_2704();
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_2759();
				object var_95_object = var_1_object;
				func_2738(var_0_object);
			}
			if(var_26_bool == 5563) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_2851();
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_2704();
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_2759();
				object var_122_object = var_1_object;
				func_2738(var_0_object);
			}
			if(var_26_bool == 5564) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_2851();
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_2704();
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_2759();
				object var_132_object = var_1_object;
				func_2738(var_0_object);
			}
			if(var_26_bool == 5591) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_2851();
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_2704();
			}
			if(var_26_bool == 5617) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_2863();
			}
			if(var_26_bool == 5613) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_2863();
			}
			if(var_26_bool == 5597) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_2869();
			}
			if(var_26_bool == 5598) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_2869();
			}
			if(var_26_bool == 5599) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_2869();
			}
			if(var_26_bool == 5606) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_2869();
			}
			if(var_26_bool == 9530) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_2765();
			}
			if(var_26_bool == 9531) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_2771();
			}
			if(var_26_bool == 9532) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_2777();
			}
			if(var_26_bool == 9533) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_2783();
			}
			if(var_25_string == 5553) {
				bool var_194_bool = false;
				bool var_195_bool;
				func_3073(var_1_object);
				if(var_195_bool != 0) {
					bool var_203_bool;
					func_2887(var_1_object);
					if(var_203_bool != 0)
						var_194_bool = true;
				}
				if(var_194_bool != 0) {
					func_620(var_26_bool, "Neutral");
					var_0_object->SetMessage(5050); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5051, 5555, 5554); //@t
					var_0_object->AddReply(5073, 5582, 5581); //@t
					return 0;
				}
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(8066); //@t
				var_0_object->ClearReplies(); //@t
				bool var_233_bool = true;
				bool var_234_bool = false;
				bool var_235_bool = false;
				bool var_236_bool;
				func_2957(var_236_bool, var_1_object);
				if(var_236_bool != 0) {
					bool var_251_bool;
					func_3085(var_1_object);
					if(var_251_bool != 0)
						var_235_bool = true;
				}
				if(var_235_bool != 0) {
					bool var_257_bool;
					func_2875(var_1_object);
					if(var_257_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 1) {
					bool var_263_bool = false;
					bool var_264_bool = false;
					bool var_265_bool;
					func_2967(var_265_bool, var_1_object);
					if(var_265_bool != 0) {
						bool var_276_bool;
						func_3085(var_1_object);
						if(var_276_bool != 0)
							var_264_bool = true;
					}
					if(var_264_bool != 0) {
						bool var_278_bool;
						func_2875(var_1_object);
						if(var_278_bool != 0)
							var_263_bool = true;
					}
					if(var_263_bool != 1)
						var_233_bool = false;
				}
				if(var_233_bool != 0)
					var_0_object->AddReply(8067, 5607, 8890); //@t
				bool var_283_bool = true;
				bool var_284_bool = false;
				bool var_285_bool;
				func_2967(var_285_bool, var_1_object);
				if(var_285_bool != 0) {
					bool var_287_bool;
					func_3097(var_1_object);
					if(var_287_bool != 0)
						var_284_bool = true;
				}
				if(var_284_bool != 1) {
					bool var_293_bool = false;
					bool var_294_bool;
					func_2947(var_294_bool, var_1_object);
					if(var_294_bool != 0) {
						bool var_301_bool;
						func_3097(var_1_object);
						if(var_301_bool != 0)
							var_293_bool = true;
					}
					if(var_293_bool != 1)
						var_283_bool = false;
				}
				if(var_283_bool != 0)
					var_0_object->AddReply(8068, 5592, 8891); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_3061(var_1_object);
				if(var_307_bool != 0) {
					bool var_313_bool;
					func_2899(var_1_object);
					if(var_313_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(8076, 8916, 8899); //@t
				bool var_322_bool = false;
				bool var_323_bool;
				func_3025(var_1_object);
				if(var_323_bool != 0) {
					bool var_329_bool;
					func_2911(var_1_object);
					if(var_329_bool != 0)
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(8077, 8917, 8900); //@t
				bool var_338_bool = false;
				bool var_339_bool;
				func_3013(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_2923(var_1_object);
					if(var_345_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(8078, 8918, 8901); //@t
				bool var_354_bool = false;
				bool var_355_bool;
				func_3037(var_1_object);
				if(var_355_bool != 0) {
					bool var_361_bool;
					func_2935(var_1_object);
					if(var_361_bool != 0)
						var_354_bool = true;
				}
				if(var_354_bool != 0)
					var_0_object->AddReply(8090, 8919, 8913); //@t
				var_0_object->AddReply(8697, -1, 9534); //@t
				return 0;
			}
			if(var_25_string == 8919) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(8096); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8696, -1, 9533); //@t
				return 0;
			}
			if(var_25_string == 8918) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(8095); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8695, -1, 9532); //@t
				return 0;
			}
			if(var_25_string == 8917) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(8094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8694, -1, 9531); //@t
				return 0;
			}
			if(var_25_string == 8916) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(8093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8693, -1, 9530); //@t
				return 0;
			}
			if(var_25_string == 5592) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5083, 5594, 5593); //@t
				var_0_object->AddReply(5091, 5603, 5602); //@t
				return 0;
			}
			if(var_25_string == 5603) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5093, 5596, 5604); //@t
				var_0_object->AddReply(5094, -1, 5606); //@t
				return 0;
			}
			if(var_25_string == 5594) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5085, 5596, 5595); //@t
				var_0_object->AddReply(5090, 5596, 5600); //@t
				return 0;
			}
			if(var_25_string == 5596) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5087, -1, 5597); //@t
				var_0_object->AddReply(5088, -1, 5598); //@t
				var_0_object->AddReply(5089, -1, 5599); //@t
				return 0;
			}
			if(var_25_string == 5607) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5095); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5096, 5609, 5608); //@t
				var_0_object->AddReply(5102, 5609, 5614); //@t
				return 0;
			}
			if(var_25_string == 5609) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5098, 5616, 5610); //@t
				var_0_object->AddReply(5099, 5612, 5611); //@t
				return 0;
			}
			if(var_25_string == 5612) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5101, -1, 5613); //@t
				return 0;
			}
			if(var_25_string == 5616) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5103); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5104, -1, 5617); //@t
				return 0;
			}
			if(var_25_string == 5582) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5075, 5584, 5583); //@t
				var_0_object->AddReply(5078, 5588, 5587); //@t
				return 0;
			}
			if(var_25_string == 5588) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5080, 5557, 5589); //@t
				var_0_object->AddReply(5081, -1, 5591); //@t
				return 0;
			}
			if(var_25_string == 5584) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5077, 5555, 5585); //@t
				return 0;
			}
			if(var_25_string == 5555) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5052); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5053, 5557, 5556); //@t
				var_0_object->AddReply(5069, 5576, 5575); //@t
				return 0;
			}
			if(var_25_string == 5576) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5071, 5557, 5577); //@t
				var_0_object->AddReply(5072, 5557, 5579); //@t
				return 0;
			}
			if(var_25_string == 5557) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5054); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5055, 5559, 5558); //@t
				return 0;
			}
			if(var_25_string == 5559) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5057, 5561, 5560); //@t
				var_0_object->AddReply(5062, 5566, 5565); //@t
				return 0;
			}
			if(var_25_string == 5566) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5064, 5561, 5567); //@t
				var_0_object->AddReply(5065, 5570, 5569); //@t
				return 0;
			}
			if(var_25_string == 5570) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5067, 5561, 5571); //@t
				return 0;
			}
			if(var_25_string == 5561) {
				func_620(var_26_bool, "Neutral");
				var_0_object->SetMessage(5058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5059, -1, 5562); //@t
				var_0_object->AddReply(5060, -1, 5563); //@t
				var_0_object->AddReply(5061, -1, 5564); //@t
				return 0;
			}
			var_3_string = true;
			bool var_572_bool;
			func_2702(var_572_bool);
			if(var_572_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x27d";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_2601();
			if(var_25_string == 10415) {
				func_1629(var_26_bool, "Neutral");
				var_0_object->SetMessage(9473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9474, 10417, 10416); //@t
				var_0_object->AddReply(9487, -1, 10429); //@t
				return 0;
			}
			if(var_25_string == 10417) {
				func_1629(var_26_bool, "Neutral");
				var_0_object->SetMessage(9475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9476, 10419, 10418); //@t
				var_0_object->AddReply(9481, 10424, 10423); //@t
				return 0;
			}
			if(var_25_string == 10424) {
				func_1629(var_26_bool, "Neutral");
				var_0_object->SetMessage(9482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9483, 10426, 10425); //@t
				return 0;
			}
			if(var_25_string == 10426) {
				func_1629(var_26_bool, "Neutral");
				var_0_object->SetMessage(9484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9485, -1, 10427); //@t
				var_0_object->AddReply(9486, -1, 10428); //@t
				return 0;
			}
			if(var_25_string == 10419) {
				func_1629(var_26_bool, "Neutral");
				var_0_object->SetMessage(9477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9478, -1, 10420); //@t
				var_0_object->AddReply(9479, -1, 10421); //@t
				var_0_object->AddReply(9480, -1, 10422); //@t
				return 0;
			}
			var_3_string = true;
			bool var_93_bool;
			func_2702(var_93_bool);
			if(var_93_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x66e";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_2601();
			if(var_26_bool == 10976) {
				object var_31_object = var_1_object;
				func_2789(var_0_object);
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_2759();
			}
			if(var_25_string == 10968) {
				bool var_56_bool;
				func_3049(var_1_object);
				if(var_56_bool != 0) {
					object var_64_object; object var_65_object;
					var_64_object = var_1_object;
					var_65_object = var_0_object;
					func_2857();
					func_1925(var_26_bool, "Neutral");
					var_0_object->SetMessage(9951); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9952, 10970, 10969); //@t
					var_0_object->AddReply(9961, 10970, 10978); //@t
					return 0;
				}
				func_1925(var_26_bool, "Neutral");
				var_0_object->SetMessage(15314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15315, -1, 16553); //@t
				return 0;
			}
			if(var_25_string == 10970) {
				func_1925(var_26_bool, "Neutral");
				var_0_object->SetMessage(9953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9954, -1, 10971); //@t
				var_0_object->AddReply(9955, 10973, 10972); //@t
				return 0;
			}
			if(var_25_string == 10973) {
				func_1925(var_26_bool, "Neutral");
				var_0_object->SetMessage(9956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9957, 10975, 10974); //@t
				return 0;
			}
			if(var_25_string == 10975) {
				func_1925(var_26_bool, "Neutral");
				var_0_object->SetMessage(9958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9959, -1, 10976); //@t
				var_0_object->AddReply(9960, -1, 10977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_122_bool;
			func_2702(var_122_bool);
			if(var_122_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x796";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int)
	{
		if(1 != 0) {
			func_2601();
			if(var_26_int == 14233) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_2800();
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_2834();
			}
			if(var_26_int == 14234) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_2800();
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_2834();
			}
			if(var_26_int == 14027) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_2800();
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_2806();
			}
			if(var_26_int == 14026) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_2800();
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_2806();
			}
			if(var_25_int == 14015) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(12815); //@t
				var_0_object->ClearReplies(); //@t
				bool var_127_bool = false;
				bool var_128_bool;
				func_2989(var_1_object);
				if(var_128_bool != 0) {
					bool var_136_bool;
					func_3001(var_1_object);
					if(var_136_bool != 0)
						var_127_bool = true;
				}
				if(var_127_bool != 0)
					var_0_object->AddReply(12816, 14017, 14016); //@t
				var_0_object->AddReply(12828, -1, 14028); //@t
				return 0;
			}
			if(var_25_int == 14017) {
				bool var_150_bool;
				func_2977(var_1_object);
				if(!var_150_bool) { //@nz
					func_2220(var_26_int, "Neutral");
					var_0_object->SetMessage(12817); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13022, 14230, 14229); //@t
					return 0;
				}
				bool var_162_bool;
				func_2977(var_1_object);
				if(var_162_bool != 0) {
					func_2220(var_26_int, "Neutral");
					var_0_object->SetMessage(13021); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12818, 14019, 14018); //@t
					return 0;
				}
			}
			if(var_25_int == 14019) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(12819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12820, 14021, 14020); //@t
				return 0;
			}
			if(var_25_int == 14021) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(12821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12822, 14023, 14022); //@t
				return 0;
			}
			if(var_25_int == 14023) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(12823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12824, 14025, 14024); //@t
				var_0_object->AddReply(12826, -1, 14026); //@t
				return 0;
			}
			if(var_25_int == 14025) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(12825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12827, -1, 14027); //@t
				return 0;
			}
			if(var_25_int == 14230) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(13023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13024, 14232, 14231); //@t
				var_0_object->AddReply(13027, -1, 14234); //@t
				return 0;
			}
			if(var_25_int == 14232) {
				func_2220(var_26_int, "Neutral");
				var_0_object->SetMessage(13025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13026, -1, 14233); //@t
				return 0;
			}
			var_3_string = true;
			bool var_217_bool;
			func_2702(var_217_bool);
			if(var_217_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8bd";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_3073(bool var_195_bool)
{
	int var_197_int;
	func_2618(var_197_int, "ood1Laska1");
	if(var_197_int == 0) {
		var_195_bool = true;
		return 0;
	}
	var_195_bool = false;
}


// @pe
void func_3085(bool var_251_bool)
{
	int var_253_int;
	func_2618(var_253_int, "ood1Laska2");
	if(var_253_int == 0) {
		var_251_bool = true;
		return 0;
	}
	var_251_bool = false;
}


// @pe
void func_2834(void)
{
	@SetVariable("d6q01", 4);
	bool var_39_bool;
	func_2649(var_39_bool, "quest_d6_01", "eva_klara");
}


// @pe
void func_2579(void)
{
	@CameraSwitchToNormal();
}


void func_2583(string var_30_string)
{
	@Trace("playing " + var_30_string);
	float var_33_float;
	float var_34_float;
	@lshGetAnimTimes(var_30_string, var_33_float, var_34_float);
	@lshPlayAnimation(var_33_float, var_34_float);
	@Trace("start: " + var_33_float);
	@Trace("end: " + var_34_float);
}


// @pe
void func_3097(bool var_287_bool)
{
	int var_289_int;
	func_2618(var_289_int, "ood1Laska3");
	if(var_289_int == 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


// @pe
void func_2845(void)
{
	@SetVariable("KnowLaska", 1);
}


// @pe
void func_1571(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_368_object, object var_369_object)
{
	var_0_object = var_369_object;
	var_1_object = var_368_object;
	var_3_object = false;
	if(1 != 0) {
		func_1629(var_369_object, "Neutral");
		var_0_object->SetMessage(9473); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9474, 10417, 10416); //@t
		var_0_object->AddReply(9487, -1, 10429); //@t
		goto Label_1599;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x627";
	}
Label_1599:
	bool var_387_bool;
	func_2702(var_387_bool);
	if(var_387_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2583(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1628;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1628:
		return 0;

	}
	
}


// @pe
void func_2851(void)
{
	@SetVariable("ood1Laska1", 1);
}


// @pe
void func_3109(bool var_296_bool)
{
	int var_298_int;
	func_2675(var_298_int);
	if(var_298_int >= 18)
		var_296_bool = true;
	var_296_bool = false;
}


void func_2085(object var_0_object, int var_463_int, object var_464_object)
{
	var_0_object = var_464_object;
	bool var_474_bool; object var_475_object;
	var_464_object = var_475_object;
	func_2523(var_474_bool, var_475_object);
	if(!var_474_bool) { //@nz
		var_463_int = -2;
		return 8;
	}
	object var_470_object;
	@CreateDialog(var_470_object);
	int var_477_int;
	func_2698(var_477_int);
	var_470_object->SetNPCName(var_477_int);
	string var_478_string;
	func_2700(var_478_string);
	var_470_object->SetPhoto(var_478_string);
	int var_479_int;
	func_3238(var_479_int);
	var_470_object->SetPlayerName(var_479_int);
	bool var_471_bool;
	@IsOverrideActive(var_471_bool);
	if(var_471_bool != 0) {
		var_463_int = -2;
		return 8;
	}
	@DoDialog(var_470_object);
	object var_481_object; object var_482_object;
	var_464_object = var_481_object;
	var_470_object = var_482_object;
	TaskCall(11);
	func_2148(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object);
	TaskReturn();
	bool var_473_bool;
	var_470_object->IsDialogEnd(var_473_bool);
	
	for(;;) {
		var_521_bool = !var_473_bool; //@nz
		if(var_521_bool == 0) goto Label_2137;
		@sync();
		var_470_object->IsDialogEnd(var_473_bool);
	}
	
Label_2137:
	object var_522_object;
	var_464_object = var_522_object;
	func_2579();
	@StopDialog(var_470_object);
	var_470_object->GetReturnValue(-1);
	int var_472_int = var_463_int;
}
EMIT "Stack[-4] = 0";


void func_2601(void)
{
	bool var_28_bool;
	func_2702(var_28_bool);
	if(var_28_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2857(void)
{
	@SetVariable("ood3Laska1", 1);
}


void func_302(object var_0_object, int var_144_int, object var_145_object)
{
	var_0_object = var_145_object;
	bool var_155_bool; object var_156_object;
	var_145_object = var_156_object;
	func_2523(var_155_bool, var_156_object);
	if(!var_155_bool) { //@nz
		var_144_int = -2;
		return 8;
	}
	object var_151_object;
	@CreateDialog(var_151_object);
	int var_158_int;
	func_2698(var_158_int);
	var_151_object->SetNPCName(var_158_int);
	string var_159_string;
	func_2700(var_159_string);
	var_151_object->SetPhoto(var_159_string);
	int var_160_int;
	func_3238(var_160_int);
	var_151_object->SetPlayerName(var_160_int);
	bool var_152_bool;
	@IsOverrideActive(var_152_bool);
	if(var_152_bool != 0) {
		var_144_int = -2;
		return 8;
	}
	@DoDialog(var_151_object);
	object var_162_object; object var_163_object;
	var_145_object = var_162_object;
	var_151_object = var_163_object;
	TaskCall(5);
	func_365(var_164_object, var_165_object, var_166_string, var_167_bool, var_162_object, var_163_object);
	TaskReturn();
	bool var_154_bool;
	var_151_object->IsDialogEnd(var_154_bool);
	
	for(;;) {
		var_346_bool = !var_154_bool; //@nz
		if(var_346_bool == 0) goto Label_354;
		@sync();
		var_151_object->IsDialogEnd(var_154_bool);
	}
	
Label_354:
	object var_347_object;
	var_145_object = var_347_object;
	func_2579();
	@StopDialog(var_151_object);
	var_151_object->GetReturnValue(-1);
	int var_153_int = var_144_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2863(void)
{
	@SetVariable("ood1Laska2", 1);
}


void func_2608(cvector var_65_cvector, cvector var_66_cvector)
{
	float var_69_float = sqrt(var_66_cvector | var_66_cvector);
	if(var_69_float < 0.000001)
		var_65_cvector = [0.0, 0.0, 0.0];
	var_65_cvector = var_66_cvector / var_69_float;
}


// @pe
void func_3120(bool var_238_bool)
{
	bool var_240_bool = false;
	int var_241_int;
	func_2675(var_241_int);
	if(var_241_int >= 0) {
		int var_248_int;
		func_2675(var_248_int);
		if(var_248_int < 6)
			var_240_bool = true;
	}
	if(var_240_bool != 0) {
		var_238_bool = true;
		return 0;
	}
	var_238_bool = false;
}


void func_49(object var_0_object, int var_29_int, object var_30_object)
{
	var_0_object = var_30_object;
	bool var_40_bool; object var_41_object;
	var_30_object = var_41_object;
	func_2523(var_40_bool, var_41_object);
	if(!var_40_bool) { //@nz
		var_29_int = -2;
		return 8;
	}
	object var_36_object;
	@CreateDialog(var_36_object);
	int var_81_int;
	func_2698(var_81_int);
	var_36_object->SetNPCName(var_81_int);
	string var_82_string;
	func_2700(var_82_string);
	var_36_object->SetPhoto(var_82_string);
	int var_83_int;
	func_3238(var_83_int);
	var_36_object->SetPlayerName(var_83_int);
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0) {
		var_29_int = -2;
		return 8;
	}
	@DoDialog(var_36_object);
	object var_92_object; object var_93_object;
	var_30_object = var_92_object;
	var_36_object = var_93_object;
	TaskCall(3);
	func_112(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	bool var_39_bool;
	var_36_object->IsDialogEnd(var_39_bool);
	
	for(;;) {
		var_133_bool = !var_39_bool; //@nz
		if(var_133_bool == 0) goto Label_101;
		@sync();
		var_36_object->IsDialogEnd(var_39_bool);
	}
	
Label_101:
	object var_134_object;
	var_30_object = var_134_object;
	func_2579();
	@StopDialog(var_36_object);
	var_36_object->GetReturnValue(-1);
	int var_38_int = var_29_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1842(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_417_object, object var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_424_bool;
		func_3049(var_1_object);
		if(var_424_bool != 0) {
			object var_430_object; object var_431_object;
			var_430_object = var_1_object;
			var_431_object = var_0_object;
			func_2857();
			func_1925(var_418_object, "Neutral");
			var_0_object->SetMessage(9951); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9952, 10970, 10969); //@t
			var_0_object->AddReply(9961, 10970, 10978); //@t
		} else {
					func_1925(var_418_object, "Neutral");
					var_0_object->SetMessage(15314); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15315, -1, 16553); //@t
		}
	}
	for(;;) {
		bool var_446_bool;
		func_2702(var_446_bool);
		if(var_446_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2583(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1924;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1924:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x736";


// @pe
void func_2869(void)
{
	@SetVariable("ood1Laska3", 1);
}


void func_2618(int var_130_int, string var_131_string)
{
	int var_133_int;
	@GetVariable(var_131_string, var_133_int);
	var_133_int = var_130_int;
}


// @pe
void func_2875(bool var_257_bool)
{
	int var_259_int;
	func_2618(var_259_int, "d1q01FirstGeorgVisit");
	if(var_259_int == 1)
		var_257_bool = true;
	var_257_bool = false;
}


void func_2623(object var_39_object, object var_40_object, int var_41_int)
{
	int var_45_int;
	var_40_object->GetItemID(var_45_int);
	int var_46_int;
	@GetInvItemProperty(var_46_int, var_45_int, "Category");
	bool var_47_bool;
	var_39_object->AddItem(var_47_bool, var_40_object, var_46_int, var_41_int);
	if(!var_47_bool) //@nz
		var_39_object->DropItems(var_40_object, var_41_int);
}


// @pe
void func_3141(bool var_267_bool)
{
	bool var_269_bool = false;
	int var_270_int;
	func_2675(var_270_int);
	if(var_270_int >= 12) {
		int var_273_int;
		func_2675(var_273_int);
		if(var_273_int < 18)
			var_269_bool = true;
	}
	if(var_269_bool != 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


// @pe
void func_2887(bool var_203_bool)
{
	int var_205_int;
	func_2618(var_205_int, "d1q02");
	if(var_205_int == 2)
		var_203_bool = true;
	var_203_bool = false;
}


void func_2636(object var_34_object, string var_35_string, int var_36_int)
{
	object var_38_object;
	@CreateInvItem(var_38_object);
	var_38_object->SetItemName(var_35_string);
	object var_39_object; object var_40_object; int var_41_int;
	var_34_object = var_39_object;
	var_38_object = var_40_object;
	var_36_int = var_41_int;
	func_2623(var_39_object, var_40_object, var_41_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2899(bool var_313_bool)
{
	int var_315_int;
	func_2618(var_315_int, "ood1Laska4");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


void func_2649(bool var_39_bool, string var_40_string, string var_41_string)
{
	object var_43_object;
	@FindActor(var_43_object, var_40_string);
	if(var_43_object == null)
		var_39_bool = false;
	@Trigger(var_43_object, var_41_string);
	var_39_bool = true;
}
EMIT "Stack[-1] = 0";


void func_3162(object var_90_object)
{
	object var_92_object;
	@GetDiaryRoot(var_92_object);
	if(!var_92_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_90_object = false;
	}
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1629(object var_2_object, string var_31_string)
{
	bool var_32_bool;
	func_2702(var_32_bool);
	if(!var_32_bool) //@nz
		return 0;
	if(var_31_string == var_2_object)
		return 0;
	string var_35_string;
	func_2583(var_35_string);
	var_2_object = var_35_string;
}


// @pe
void func_2911(bool var_329_bool)
{
	int var_331_int;
	func_2618(var_331_int, "ood1Laska5");
	if(var_331_int == 0) {
		var_329_bool = true;
		return 0;
	}
	var_329_bool = false;
}


// @pe
void func_2148(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_481_object, object var_482_object)
{
	var_0_object = var_482_object;
	var_1_object = var_481_object;
	var_3_object = false;
	if(1 != 0) {
		func_2220(var_482_object, "Neutral");
		var_0_object->SetMessage(12815); //@t
		var_0_object->ClearReplies(); //@t
		bool var_494_bool = false;
		bool var_495_bool;
		func_2989(var_1_object);
		if(var_495_bool != 0) {
			bool var_501_bool;
			func_3001(var_1_object);
			if(var_501_bool != 0)
				var_494_bool = true;
		}
		if(var_494_bool != 0)
			var_0_object->AddReply(12816, 14017, 14016); //@t
		var_0_object->AddReply(12828, -1, 14028); //@t
		goto Label_2190;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x868";
	}
Label_2190:
	bool var_513_bool;
	func_2702(var_513_bool);
	if(var_513_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2583(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2219;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2219:
		return 0;

	}
	
}


void func_2661(float var_72_float)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_74_float = var_72_float;
}


void func_3175(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_3162(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	object var_88_object;
	var_87_object->Find(var_83_int, var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_83_int);
		var_81_bool = false;
	}
	var_88_object->AddChild(var_82_object);
	@SetVariable("player_diary", 1);
	int var_89_int;
	var_82_object->GetCategory(var_89_int);
	@SetDiarySection(var_89_int);
	var_81_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2666(int var_138_int)
{
	float var_140_float;
	@GetGameTime(var_140_float);
	var_138_int = 1 + (var_140_float / 24);
}


// @pe
void func_2923(bool var_345_bool)
{
	int var_347_int;
	func_2618(var_347_int, "ood1Laska6");
	if(var_347_int == 0) {
		var_345_bool = true;
		return 0;
	}
	var_345_bool = false;
}


// @pe
void func_620(object var_2_object, string var_209_string)
{
	bool var_210_bool;
	func_2702(var_210_bool);
	if(!var_210_bool) //@nz
		return 0;
	if(var_209_string == var_2_object)
		return 0;
	string var_213_string;
	func_2583(var_213_string);
	var_2_object = var_213_string;
}


// @pe
void func_365(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_162_object, object var_163_object)
{
	var_0_object = var_163_object;
	var_1_object = var_162_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_169_bool = false;
		bool var_170_bool;
		func_3073(var_1_object);
		if(var_170_bool != 0) {
			bool var_178_bool;
			func_2887(var_1_object);
			if(var_178_bool != 0)
				var_169_bool = true;
		}
		if(var_169_bool != 0) {
			func_620(var_163_object, "Neutral");
			var_0_object->SetMessage(5050); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5051, 5555, 5554); //@t
			var_0_object->AddReply(5073, 5582, 5581); //@t
		} else {
					func_620(var_163_object, "Neutral");
					var_0_object->SetMessage(8066); //@t
					var_0_object->ClearReplies(); //@t
					bool var_206_bool = true;
					bool var_207_bool = false;
					bool var_208_bool = false;
					bool var_209_bool;
					func_2957(var_209_bool, var_1_object);
					if(var_209_bool != 0) {
						bool var_224_bool;
						func_3085(var_1_object);
						if(var_224_bool != 0)
							var_208_bool = true;
					}
					if(var_208_bool != 0) {
						bool var_230_bool;
						func_2875(var_1_object);
						if(var_230_bool != 0)
							var_207_bool = true;
					}
					if(var_207_bool != 1) {
						bool var_236_bool = false;
						bool var_237_bool = false;
						bool var_238_bool;
						func_2967(var_238_bool, var_1_object);
						if(var_238_bool != 0) {
							bool var_249_bool;
							func_3085(var_1_object);
							if(var_249_bool != 0)
								var_237_bool = true;
						}
						if(var_237_bool != 0) {
							bool var_251_bool;
							func_2875(var_1_object);
							if(var_251_bool != 0)
								var_236_bool = true;
						}
						if(var_236_bool != 1)
							var_206_bool = false;
					}
					if(var_206_bool != 0)
						var_0_object->AddReply(8067, 5607, 8890); //@t
					bool var_256_bool = true;
					bool var_257_bool = false;
					bool var_258_bool;
					func_2967(var_258_bool, var_1_object);
					if(var_258_bool != 0) {
						bool var_260_bool;
						func_3097(var_1_object);
						if(var_260_bool != 0)
							var_257_bool = true;
					}
					if(var_257_bool != 1) {
						bool var_266_bool = false;
						bool var_267_bool;
						func_2947(var_267_bool, var_1_object);
						if(var_267_bool != 0) {
							bool var_274_bool;
							func_3097(var_1_object);
							if(var_274_bool != 0)
								var_266_bool = true;
						}
						if(var_266_bool != 1)
							var_256_bool = false;
					}
					if(var_256_bool != 0)
						var_0_object->AddReply(8068, 5592, 8891); //@t
					bool var_279_bool = false;
					bool var_280_bool;
					func_3061(var_1_object);
					if(var_280_bool != 0) {
						bool var_286_bool;
						func_2899(var_1_object);
						if(var_286_bool != 0)
							var_279_bool = true;
					}
					if(var_279_bool != 0)
						var_0_object->AddReply(8076, 8916, 8899); //@t
					bool var_295_bool = false;
					bool var_296_bool;
					func_3025(var_1_object);
					if(var_296_bool != 0) {
						bool var_302_bool;
						func_2911(var_1_object);
						if(var_302_bool != 0)
							var_295_bool = true;
					}
					if(var_295_bool != 0)
						var_0_object->AddReply(8077, 8917, 8900); //@t
					bool var_311_bool = false;
					bool var_312_bool;
					func_3013(var_1_object);
					if(var_312_bool != 0) {
						bool var_318_bool;
						func_2923(var_1_object);
						if(var_318_bool != 0)
							var_311_bool = true;
					}
					if(var_311_bool != 0)
						var_0_object->AddReply(8078, 8918, 8901); //@t
					bool var_327_bool = false;
					bool var_328_bool;
					func_3037(var_1_object);
					if(var_328_bool != 0) {
						bool var_334_bool;
						func_2935(var_1_object);
						if(var_334_bool != 0)
							var_327_bool = true;
					}
					if(var_327_bool != 0)
						var_0_object->AddReply(8090, 8919, 8913); //@t
					var_0_object->AddReply(8697, -1, 9534); //@t
		}
	}
	for(;;) {
		bool var_196_bool;
		func_2702(var_196_bool);
		if(var_196_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2583(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_619;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_619:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x171";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_92_object, object var_93_object)
{
	var_0_object = var_93_object;
	var_3_object = false;
	if(1 != 0) {
		object var_99_object; object var_100_object;
		var_99_object = var_92_object;
		var_100_object = var_0_object;
		func_2845();
		func_175(var_93_object, "Neutral");
		var_0_object->SetMessage(370); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(371, 432, 430); //@t
		var_0_object->AddReply(372, 437, 431); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_125_bool;
	func_2702(var_125_bool);
	if(var_125_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2583(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_174;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_174:
		return 0;

	}
	
}


void func_2675(int var_241_int)
{
	float var_243_float;
	@GetGameTime(var_243_float);
	int var_244_int;
	var_243_float = var_244_int;
	var_241_int = var_244_int % 24;
}


// @pe
void func_2935(bool var_361_bool)
{
	int var_363_int;
	func_2618(var_363_int, "ood1Laska7");
	if(var_363_int == 0) {
		var_361_bool = true;
		return 0;
	}
	var_361_bool = false;
}


// @pe
void func_2683(bool var_136_bool, int var_137_int)
{
	int var_138_int;
	func_2666(var_138_int);
	var_136_bool = var_138_int == var_137_int;
}


void func_2689(bool var_523_bool)
{
	func_2583("No");
	bool var_525_bool;
	@lshWaitForAnimEnd(var_525_bool);
	var_525_bool = var_523_bool;
}


// @pe
void func_2947(bool var_294_bool, object var_295_object)
{
	object var_297_object;
	var_295_object = var_297_object;
	func_3109(var_297_object);
	bool var_296_bool;
	if(var_296_bool != 0) {
		var_294_bool = true;
		return 0;
	}
	var_294_bool = false;
}


void func_3204(bool var_77_bool, int var_78_int)
{
	object var_83_object;
	func_3162(var_83_object);
	object var_81_object;
	var_83_object = var_81_object;
	object var_82_object;
	var_81_object->Find(var_78_int, var_82_object);
	if(!var_82_object) //@nz
		var_77_bool = false;
	var_82_object->Remove();
	var_77_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1925(object var_2_object, string var_68_string)
{
	bool var_69_bool;
	func_2702(var_69_bool);
	if(!var_69_bool) //@nz
		return 0;
	if(var_68_string == var_2_object)
		return 0;
	string var_72_string;
	func_2583(var_72_string);
	var_2_object = var_72_string;
}


void func_2698(int var_81_int)
{
	var_81_int = 2867;
}


void func_2700(string var_82_string)
{
	var_82_string = "ui/NPC_Laska.png";
}


// @pe
void func_2957(bool var_236_bool, object var_237_object)
{
	object var_239_object;
	var_237_object = var_239_object;
	func_3120(var_239_object);
	bool var_238_bool;
	if(var_238_bool != 0) {
		var_236_bool = true;
		return 0;
	}
	var_236_bool = false;
}


void func_2702(bool var_28_bool)
{
	var_28_bool = true;
}


void func_2704(void)
{
	object var_41_object;
	func_3221(var_41_object);
	object var_39_object;
	var_41_object = var_39_object;
	object var_40_object;
	var_39_object->FindMark(var_40_object, "d1q02AnnaGotoLaska");
	if(var_40_object != 0)
		var_40_object->Remove();
	var_39_object->FindMark(var_40_object, "d1q02ViktorGotoAnna");
	if(var_40_object != 0)
		var_40_object->Remove();
	func_3255();
	bool var_77_bool;
	func_3204(var_77_bool, 35);
	bool var_85_bool;
	func_2649(var_85_bool, "quest_d1_02", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3221(object var_61_object)
{
	object var_64_object; object var_65_object;
	@GetMainOutdoorScene(var_64_object);
	if(var_64_object == null) {
		@Trace("Can't find main outdoor scene");
		var_65_object = null;
		var_65_object = var_61_object;
	}
	var_64_object->GetMap(var_65_object);
	var_65_object = var_61_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2967(bool var_265_bool, object var_266_object)
{
	object var_268_object;
	var_266_object = var_268_object;
	func_3141(var_268_object);
	bool var_267_bool;
	if(var_267_bool != 0) {
		var_265_bool = true;
		return 0;
	}
	var_265_bool = false;
}


// @pe
void func_2977(bool var_150_bool)
{
	int var_152_int;
	func_2618(var_152_int, "d6q03AlbinosKilled");
	if(var_152_int == 1)
		var_150_bool = true;
	var_150_bool = false;
}


void func_3238(int var_83_int)
{
	int var_85_int;
	@GetVariable("player", var_85_int);
	if(var_85_int == 0) {
		var_83_int = 200001;
		return 2;
	EMIT "GOTO 0xcb5";
	}
	if(var_85_int == 1) {
		var_83_int = 200002;
		return 2;
	}
	var_83_int = 200003;
}


// @pe
void func_2220(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_2702(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string;
	func_2583(var_115_string);
	var_2_object = var_115_string;
}


// @pe
void func_2989(bool var_128_bool)
{
	int var_130_int;
	func_2618(var_130_int, "d6q01");
	if(var_130_int == 2)
		var_128_bool = true;
	var_128_bool = false;
}


// @pe
void func_175(object var_2_object, string var_35_string)
{
	bool var_36_bool;
	func_2702(var_36_bool);
	if(!var_36_bool) //@nz
		return 0;
	if(var_35_string == var_2_object)
		return 0;
	string var_39_string;
	func_2583(var_39_string);
	var_2_object = var_39_string;
}


void func_2738(object var_95_object)
{
	@Trace("lockpick1time is given");
	object var_98_object;
	@CreateInvItem(var_98_object);
	var_98_object->SetItemName("lockpick");
	var_98_object->SetProperty("uses", 1);
	object var_103_object; object var_104_object;
	var_95_object = var_103_object;
	var_98_object = var_104_object;
	func_2623(var_103_object, var_104_object, 1);
}
EMIT "Stack[-1] = 0";


void func_3255(void)
{
	@Trace("Adding diary entry");
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 36, 2, 12118);
	bool var_58_bool; object var_59_object;
	var_53_object = var_59_object;
	func_3175(var_58_bool, var_59_object, 7);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3001(bool var_136_bool)
{
	int var_138_int;
	func_2618(var_138_int, "ood6Laska1");
	if(var_138_int == 0) {
		var_136_bool = true;
		return 0;
	}
	var_136_bool = false;
}


// @pe
void func_3013(bool var_339_bool)
{
	int var_341_int;
	func_2618(var_341_int, "KnowKaterina");
	if(var_341_int == 1)
		var_339_bool = true;
	var_339_bool = false;
}


// @pe
void func_2759(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_3271(void)
{
	@Trace("Adding diary entry");
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 117, 1, 13740);
	bool var_81_bool; object var_82_object;
	var_76_object = var_82_object;
	func_3175(var_81_bool, var_82_object, 111);
}
EMIT "Stack[-1] = 0";


void func_2506(bool var_26_bool, object var_27_object)
{
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector = var_32_cvector - var_33_cvector;
	var_36_float = GetByIndex(var_34_cvector, 0);
	var_37_float = GetByIndex(var_34_cvector, 2);
	bool var_35_bool;
	@Rotate(var_36_float, var_37_float, var_35_bool);
	var_35_bool = var_26_bool;
}


// @pe
void func_2765(void)
{
	@SetVariable("ood1Laska4", 1);
}


// @pe
void func_3025(bool var_323_bool)
{
	int var_325_int;
	func_2618(var_325_int, "KnowMaria");
	if(var_325_int == 1)
		var_323_bool = true;
	var_323_bool = false;
}


// @pe
void func_2771(void)
{
	@SetVariable("ood1Laska5", 1);
}


void func_2518(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_3287(void)
{
	var_25_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_2777(void)
{
	@SetVariable("ood1Laska6", 1);
}


// @pe
void func_3291(object var_26_object)
{
	var_27_bool = GlobalVars[1];
	if(!var_27_bool) { //@nz
		int var_29_int; object var_30_object;
		var_26_object = var_30_object;
		TaskCall(2);
		func_49(var_31_object, var_29_int, var_30_object);
		TaskReturn();
		var_135_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_136_bool;
	func_2683(var_136_bool, 1);
	if(var_136_bool != 0) {
		int var_144_int; object var_145_object;
		var_26_object = var_145_object;
		TaskCall(4);
		func_302(var_146_object, var_144_int, var_145_object);
		TaskReturn();
		return 0;
	}
	bool var_348_bool;
	func_2683(var_348_bool, 2);
	if(var_348_bool != 0) {
		int var_350_int; object var_351_object;
		var_26_object = var_351_object;
		TaskCall(6);
		func_1508(var_352_object, var_350_int, var_351_object);
		TaskReturn();
		return 0;
	}
	bool var_397_bool;
	func_2683(var_397_bool, 3);
	if(var_397_bool != 0) {
		int var_399_int; object var_400_object;
		var_26_object = var_400_object;
		TaskCall(8);
		func_1779(var_401_object, var_399_int, var_400_object);
		TaskReturn();
		return 0;
	}
	bool var_461_bool;
	func_2683(var_461_bool, 6);
	if(var_461_bool != 0) {
		int var_463_int; object var_464_object;
		var_26_object = var_464_object;
		TaskCall(10);
		func_2085(var_465_object, var_463_int, var_464_object);
		TaskReturn();
		return 0;
	}
	bool var_523_bool;
	func_2689(var_523_bool);
}


void func_2523(bool var_40_bool, object var_41_object)
{
	cvector var_51_cvector;
	var_41_object->GetPosition(var_51_cvector);
	float var_50_float;
	var_41_object->GetEyesHeight(var_50_float);
	var_58_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_58_float + var_50_float);
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	@GetEyesHeight(var_50_float);
	var_59_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_59_float + var_50_float);
	cvector var_53_cvector = var_51_cvector - var_52_cvector;
	var_60_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (float)0;
	var_62_float = sqrt(var_53_cvector | var_53_cvector);
	var_53_cvector /= var_62_float;
	cvector var_54_cvector = -var_53_cvector;
	cvector var_65_cvector;
	func_2608(var_65_cvector, (var_54_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_55_cvector = ((var_53_cvector * 70) + (var_65_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0)
		var_40_bool = false;
	@StopWorld();
	@CameraTransit((var_52_cvector + var_55_cvector), var_54_cvector);
	var_78_float = GetByIndex(var_55_cvector, 0);
	var_79_float = GetByIndex(var_55_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_40_bool = true;
}


// @pe
void func_3037(bool var_355_bool)
{
	int var_357_int;
	func_2618(var_357_int, "KnowMishka");
	if(var_357_int == 1)
		var_355_bool = true;
	var_355_bool = false;
}


// @pe
void func_2783(void)
{
	@SetVariable("ood1Laska7", 1);
}


void func_1508(object var_0_object, int var_350_int, object var_351_object)
{
	var_0_object = var_351_object;
	bool var_361_bool; object var_362_object;
	var_351_object = var_362_object;
	func_2523(var_361_bool, var_362_object);
	if(!var_361_bool) { //@nz
		var_350_int = -2;
		return 8;
	}
	object var_357_object;
	@CreateDialog(var_357_object);
	int var_364_int;
	func_2698(var_364_int);
	var_357_object->SetNPCName(var_364_int);
	string var_365_string;
	func_2700(var_365_string);
	var_357_object->SetPhoto(var_365_string);
	int var_366_int;
	func_3238(var_366_int);
	var_357_object->SetPlayerName(var_366_int);
	bool var_358_bool;
	@IsOverrideActive(var_358_bool);
	if(var_358_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	@DoDialog(var_357_object);
	object var_368_object; object var_369_object;
	var_351_object = var_368_object;
	var_357_object = var_369_object;
	TaskCall(7);
	func_1571(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	bool var_360_bool;
	var_357_object->IsDialogEnd(var_360_bool);
	
	for(;;) {
		var_395_bool = !var_360_bool; //@nz
		if(var_395_bool == 0) goto Label_1560;
		@sync();
		var_357_object->IsDialogEnd(var_360_bool);
	}
	
Label_1560:
	object var_396_object;
	var_351_object = var_396_object;
	func_2579();
	@StopDialog(var_357_object);
	var_357_object->GetReturnValue(-1);
	int var_359_int = var_350_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2789(object var_31_object)
{
	@Trace("powder is given");
	object var_34_object;
	var_31_object = var_34_object;
	func_2636(var_34_object, "powder", 1);
}


// @pe
void func_3049(bool var_56_bool)
{
	int var_58_int;
	func_2618(var_58_int, "ood3Laska1");
	if(var_58_int == 0) {
		var_56_bool = true;
		return 0;
	}
	var_56_bool = false;
}


// @pe
void func_2800(void)
{
	@SetVariable("ood6Laska1", 1);
}


void func_1779(object var_0_object, int var_399_int, object var_400_object)
{
	var_0_object = var_400_object;
	bool var_410_bool; object var_411_object;
	var_400_object = var_411_object;
	func_2523(var_410_bool, var_411_object);
	if(!var_410_bool) { //@nz
		var_399_int = -2;
		return 8;
	}
	object var_406_object;
	@CreateDialog(var_406_object);
	int var_413_int;
	func_2698(var_413_int);
	var_406_object->SetNPCName(var_413_int);
	string var_414_string;
	func_2700(var_414_string);
	var_406_object->SetPhoto(var_414_string);
	int var_415_int;
	func_3238(var_415_int);
	var_406_object->SetPlayerName(var_415_int);
	bool var_407_bool;
	@IsOverrideActive(var_407_bool);
	if(var_407_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	@DoDialog(var_406_object);
	object var_417_object; object var_418_object;
	var_400_object = var_417_object;
	var_406_object = var_418_object;
	TaskCall(9);
	func_1842(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	bool var_409_bool;
	var_406_object->IsDialogEnd(var_409_bool);
	
	for(;;) {
		var_459_bool = !var_409_bool; //@nz
		if(var_459_bool == 0) goto Label_1831;
		@sync();
		var_406_object->IsDialogEnd(var_409_bool);
	}
	
Label_1831:
	object var_460_object;
	var_400_object = var_460_object;
	func_2579();
	@StopDialog(var_406_object);
	var_406_object->GetReturnValue(-1);
	int var_408_int = var_399_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3061(bool var_307_bool)
{
	int var_309_int;
	func_2618(var_309_int, "KnowOspina");
	if(var_309_int == 1)
		var_307_bool = true;
	var_307_bool = false;
}


void func_2806(void)
{
	@SetVariable("d6q01", 3);
	object var_61_object;
	func_3221(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	float var_72_float;
	func_2661(var_72_float);
	var_58_object->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 15400, var_72_float);
	func_3271();
	bool var_100_bool;
	func_2649(var_100_bool, "quest_d6_01", "albinos_klara");
}
EMIT "Stack[-1] = 0";


