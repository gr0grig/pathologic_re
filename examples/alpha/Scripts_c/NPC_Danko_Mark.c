// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		func_3278();
		bool var_44_bool;
		func_2557(var_44_bool);
		if(!var_44_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_2622("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_36_object;
		var_35_bool = var_36_object;
		func_3351(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_2545(var_36_bool, var_37_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_35_string == 492) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_2869();
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(425, 494, 493); //@t
				var_0_object->AddReply(429, 498, 497); //@t
				return 0;
			}
			if(var_35_string == 498) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(431, 501, 499); //@t
				var_0_object->AddReply(432, 494, 500); //@t
				return 0;
			}
			if(var_35_string == 501) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(435, -1, 503); //@t
				var_0_object->AddReply(434, -1, 502); //@t
				return 0;
			}
			if(var_35_string == 494) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(427, 504, 495); //@t
				var_0_object->AddReply(438, -1, 506); //@t
				return 0;
			}
			if(var_35_string == 504) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(437, 501, 505); //@t
				var_0_object->AddReply(439, -1, 508); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_2717(var_107_bool);
			if(var_107_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_36_bool == 6915) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_2719();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_2737();
				object var_68_object = var_1_object;
				func_2762(var_0_object);
			}
			if(var_36_bool == 6916) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_2719();
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_2737();
				object var_100_object = var_1_object;
				func_2762(var_0_object);
			}
			if(var_36_bool == 6218) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_2725();
			}
			if(var_36_bool == 6219) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_2725();
			}
			if(var_36_bool == 6202) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_2731();
			}
			if(var_36_bool == 6203) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_2731();
			}
			if(var_36_bool == 6206) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_2731();
			}
			if(var_36_bool == 6209) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_2731();
			}
			if(var_36_bool == 6210) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_2731();
			}
			if(var_36_bool == 8956) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_2778();
			}
			if(var_36_bool == 9535) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_2784();
			}
			if(var_36_bool == 9536) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_2790();
			}
			if(var_36_bool == 9537) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_2796();
			}
			if(var_36_bool == 9538) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_2802();
			}
			if(var_35_string == 6192) {
				bool var_166_bool = false;
				bool var_167_bool;
				func_2881(var_1_object);
				if(var_167_bool != 0) {
					bool var_175_bool;
					func_2917(var_1_object);
					if(!var_175_bool) //@nz
						var_166_bool = true;
				}
				if(var_166_bool != 0) {
					object var_182_object; object var_183_object;
					var_182_object = var_1_object;
					var_183_object = var_0_object;
					func_2858();
					object var_186_object; object var_187_object;
					var_186_object = var_1_object;
					var_187_object = var_0_object;
					func_2808();
					func_642(var_36_bool, "Neutral");
					var_0_object->SetMessage(5616); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5617, 6905, 6193); //@t
					var_0_object->AddReply(5645, 6906, 6224); //@t
					return 0;
				}
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(8129); //@t
				var_0_object->ClearReplies(); //@t
				bool var_214_bool = false;
				bool var_215_bool;
				func_2893(var_1_object);
				if(var_215_bool != 0) {
					bool var_221_bool;
					func_2929(var_1_object);
					if(var_221_bool != 0)
						var_214_bool = true;
				}
				if(var_214_bool != 0)
					var_0_object->AddReply(8130, 6213, 8953); //@t
				bool var_230_bool = true;
				bool var_231_bool = false;
				bool var_232_bool;
				func_3011(var_232_bool, var_1_object);
				if(var_232_bool != 0) {
					bool var_247_bool;
					func_2905(var_1_object);
					if(var_247_bool != 0)
						var_231_bool = true;
				}
				if(var_231_bool != 1) {
					bool var_253_bool = false;
					bool var_254_bool;
					func_3001(var_254_bool, var_1_object);
					if(var_254_bool != 0) {
						bool var_261_bool;
						func_2905(var_1_object);
						if(var_261_bool != 0)
							var_253_bool = true;
					}
					if(var_253_bool != 1)
						var_230_bool = false;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(8131, 6197, 8954); //@t
				bool var_266_bool = false;
				bool var_267_bool;
				func_3093(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					func_2941(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0)
					var_0_object->AddReply(8133, -1, 8956); //@t
				bool var_282_bool = false;
				bool var_283_bool;
				func_3033(var_1_object);
				if(var_283_bool != 0) {
					bool var_289_bool;
					func_2953(var_1_object);
					if(var_289_bool != 0)
						var_282_bool = true;
				}
				if(var_282_bool != 0)
					var_0_object->AddReply(8135, 8982, 8958); //@t
				bool var_298_bool = false;
				bool var_299_bool;
				func_3045(var_1_object);
				if(var_299_bool != 0) {
					bool var_305_bool;
					func_2965(var_1_object);
					if(var_305_bool != 0)
						var_298_bool = true;
				}
				if(var_298_bool != 0)
					var_0_object->AddReply(8137, 8981, 8960); //@t
				bool var_314_bool = false;
				bool var_315_bool;
				func_3057(var_1_object);
				if(var_315_bool != 0) {
					bool var_321_bool;
					func_2977(var_1_object);
					if(var_321_bool != 0)
						var_314_bool = true;
				}
				if(var_314_bool != 0)
					var_0_object->AddReply(8140, 8980, 8963); //@t
				bool var_330_bool = false;
				bool var_331_bool;
				func_3081(var_1_object);
				if(var_331_bool != 0) {
					bool var_337_bool;
					func_2989(var_1_object);
					if(var_337_bool != 0)
						var_330_bool = true;
				}
				if(var_330_bool != 0)
					var_0_object->AddReply(8151, 8979, 8974); //@t
				var_0_object->AddReply(9147, -1, 10028); //@t
				return 0;
			}
			if(var_35_string == 8979) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(8156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8701, -1, 9538); //@t
				return 0;
			}
			if(var_35_string == 8980) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(8157); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8700, -1, 9537); //@t
				return 0;
			}
			if(var_35_string == 8981) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(8158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8699, -1, 9536); //@t
				return 0;
			}
			if(var_35_string == 8982) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(8159); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8698, -1, 9535); //@t
				return 0;
			}
			if(var_35_string == 6197) {
				bool var_379_bool;
				func_2905(var_1_object);
				if(var_379_bool != 0) {
					func_642(var_36_bool, "Neutral");
					var_0_object->SetMessage(5621); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5622, 6199, 6198); //@t
					var_0_object->AddReply(5635, 6199, 6211); //@t
					return 0;
				}
			}
			if(var_35_string == 6199) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5623); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5624, 6201, 6200); //@t
				var_0_object->AddReply(5631, 6208, 6207); //@t
				return 0;
			}
			if(var_35_string == 6208) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5633, -1, 6209); //@t
				var_0_object->AddReply(5634, -1, 6210); //@t
				return 0;
			}
			if(var_35_string == 6201) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5626, -1, 6202); //@t
				var_0_object->AddReply(5627, -1, 6203); //@t
				var_0_object->AddReply(5628, 6205, 6204); //@t
				return 0;
			}
			if(var_35_string == 6205) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5630, -1, 6206); //@t
				return 0;
			}
			if(var_35_string == 6213) {
				bool var_431_bool;
				func_2893(var_1_object);
				if(var_431_bool != 0) {
					func_642(var_36_bool, "Neutral");
					var_0_object->SetMessage(5636); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5637, 6215, 6214); //@t
					var_0_object->AddReply(5644, 6215, 6222); //@t
					return 0;
				}
			}
			if(var_35_string == 6215) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5639, 6217, 6216); //@t
				var_0_object->AddReply(5643, 6217, 6220); //@t
				return 0;
			}
			if(var_35_string == 6217) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(5640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5641, -1, 6218); //@t
				var_0_object->AddReply(5642, -1, 6219); //@t
				return 0;
			}
			if(var_35_string == 6906) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(6243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6244, 6908, 6907); //@t
				return 0;
			}
			if(var_35_string == 6908) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(6245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6246, 6905, 6909); //@t
				return 0;
			}
			if(var_35_string == 6905) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(6242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6247, 6912, 6911); //@t
				return 0;
			}
			if(var_35_string == 6912) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(6248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6249, 6914, 6913); //@t
				return 0;
			}
			if(var_35_string == 6914) {
				func_642(var_36_bool, "Neutral");
				var_0_object->SetMessage(6250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6251, -1, 6915); //@t
				var_0_object->AddReply(6252, -1, 6916); //@t
				return 0;
			}
			var_3_string = true;
			bool var_499_bool;
			func_2717(var_499_bool);
			if(var_499_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x293";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_35_string == 10431) {
				func_1505(var_36_bool, "Neutral");
				var_0_object->SetMessage(9489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9490, 10433, 10432); //@t
				var_0_object->AddReply(9499, 10433, 10441); //@t
				return 0;
			}
			if(var_35_string == 10433) {
				func_1505(var_36_bool, "Neutral");
				var_0_object->SetMessage(9491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9492, 10435, 10434); //@t
				var_0_object->AddReply(9496, 10439, 10438); //@t
				return 0;
			}
			if(var_35_string == 10439) {
				func_1505(var_36_bool, "Neutral");
				var_0_object->SetMessage(9497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9498, -1, 10440); //@t
				return 0;
			}
			if(var_35_string == 10435) {
				func_1505(var_36_bool, "Neutral");
				var_0_object->SetMessage(9493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9494, -1, 10436); //@t
				var_0_object->AddReply(9495, -1, 10437); //@t
				return 0;
			}
			var_3_string = true;
			bool var_90_bool;
			func_2717(var_90_bool);
			if(var_90_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5f2";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_35_string == 11014) {
				bool var_41_bool;
				func_3069(var_1_object);
				if(var_41_bool != 0) {
					object var_49_object; object var_50_object;
					var_49_object = var_1_object;
					var_50_object = var_0_object;
					func_2875();
					func_1773(var_36_bool, "Neutral");
					var_0_object->SetMessage(9993); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9994, 11016, 11015); //@t
					var_0_object->AddReply(10002, 11016, 11023); //@t
					return 0;
				}
				func_1773(var_36_bool, "Neutral");
				var_0_object->SetMessage(15316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15317, -1, 16555); //@t
				return 0;
			}
			if(var_35_string == 11016) {
				func_1773(var_36_bool, "Neutral");
				var_0_object->SetMessage(9995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9996, -1, 11017); //@t
				var_0_object->AddReply(9997, -1, 11018); //@t
				var_0_object->AddReply(9998, 11020, 11019); //@t
				return 0;
			}
			if(var_35_string == 11020) {
				func_1773(var_36_bool, "Neutral");
				var_0_object->SetMessage(9999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10000, -1, 11021); //@t
				var_0_object->AddReply(10001, -1, 11022); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_2717(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6fe";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_35_string == 12066) {
				func_2023(var_36_bool, "Neutral");
				var_0_object->SetMessage(10917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10918, -1, 12067); //@t
				return 0;
			}
			var_3_string = true;
			bool var_60_bool;
			func_2717(var_60_bool);
			if(var_60_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7f8";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_2640();
			if(var_36_bool == 14570) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_2814();
			}
			if(var_35_string == 14547) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13312); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool;
				func_3021(var_1_object);
				if(var_132_bool != 0)
					var_0_object->AddReply(13314, 14550, 14549); //@t
				var_0_object->AddReply(13313, -1, 14548); //@t
				return 0;
			}
			if(var_35_string == 14550) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13317, 14553, 14552); //@t
				var_0_object->AddReply(13316, 14555, 14551); //@t
				return 0;
			}
			if(var_35_string == 14553) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13319, 14555, 14554); //@t
				return 0;
			}
			if(var_35_string == 14555) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13335, 14567, 14566); //@t
				return 0;
			}
			if(var_35_string == 14567) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13337, 14569, 14568); //@t
				return 0;
			}
			if(var_35_string == 14569) {
				func_2202(var_36_bool, "Neutral");
				var_0_object->SetMessage(13338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13339, -1, 14570); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_2717(var_184_bool);
			if(var_184_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8ab";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int)
	{
		if(1 != 0) {
			func_2640();
			if(var_36_int == 15322) {
				object var_41_object = var_1_object;
				func_2864(var_0_object);
			}
			if(var_35_int == 15321) {
				func_2484(var_36_int, "Neutral");
				var_0_object->SetMessage(14084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14085, -1, 15322); //@t
				return 0;
			}
			var_3_string = true;
			bool var_65_bool;
			func_2717(var_65_bool);
			if(var_65_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9c5";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_2562(bool var_50_bool, object var_51_object)
{
	cvector var_61_cvector;
	var_51_object->GetPosition(var_61_cvector);
	float var_60_float;
	var_51_object->GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_68_float + var_60_float);
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	@GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (var_69_float + var_60_float);
	cvector var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_float = sqrt(var_63_cvector | var_63_cvector);
	var_63_cvector /= var_72_float;
	cvector var_64_cvector = -var_63_cvector;
	cvector var_75_cvector;
	func_2647(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_65_cvector = ((var_63_cvector * 70) + (var_75_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0)
		var_50_bool = false;
	@StopWorld();
	@CameraTransit((var_62_cvector + var_65_cvector), var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_88_float, var_89_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_50_bool = true;
}


// @pe
void func_3081(bool var_331_bool)
{
	int var_333_int;
	func_2657(var_333_int, "KnowKapella");
	if(var_333_int == 1)
		var_331_bool = true;
	var_331_bool = false;
}


void func_3340(void)
{
	int var_231_int;
	func_3295(var_231_int);
	int var_229_int;
	var_231_int = var_229_int;
	@SetVariable(("Performance" + var_229_int), 1);
}


// @pe
void func_3093(bool var_267_bool)
{
	int var_269_int;
	func_2657(var_269_int, "KnowMyth");
	if(var_269_int == 1)
		var_267_bool = true;
	var_267_bool = false;
}


// @pe
void func_3351(object var_36_object)
{
	var_37_bool = GlobalVars[1];
	if(!var_37_bool) { //@nz
		int var_39_int; object var_40_object;
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_145_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_146_bool;
	func_3310(var_146_bool);
	if(var_146_bool != 0) {
		int var_178_int; object var_179_object;
		var_36_object = var_179_object;
		TaskCall(14);
		func_2368(var_180_object, var_178_int, var_179_object);
		TaskReturn();
		int var_223_int;
		func_3295(var_223_int);
		@PlayMovie(("NightMasks" + var_223_int) + ".wmv");
		func_3340();
		return 0;
	}
	bool var_235_bool;
	func_2707(var_235_bool, 1);
	if(var_235_bool != 0) {
		int var_238_int; object var_239_object;
		var_36_object = var_239_object;
		TaskCall(4);
		func_330(var_240_object, var_238_int, var_239_object);
		TaskReturn();
		return 0;
	}
	bool var_442_bool;
	func_2707(var_442_bool, 2);
	if(var_442_bool != 0) {
		int var_444_int; object var_445_object;
		var_36_object = var_445_object;
		TaskCall(6);
		func_1384(var_446_object, var_444_int, var_445_object);
		TaskReturn();
		return 0;
	}
	bool var_491_bool;
	func_2707(var_491_bool, 3);
	if(var_491_bool != 0) {
		int var_493_int; object var_494_object;
		var_36_object = var_494_object;
		TaskCall(8);
		func_1627(var_495_object, var_493_int, var_494_object);
		TaskReturn();
		return 0;
	}
	bool var_555_bool;
	func_2707(var_555_bool, 4);
	if(var_555_bool != 0) {
		int var_557_int; object var_558_object;
		var_36_object = var_558_object;
		TaskCall(10);
		func_1907(var_559_object, var_557_int, var_558_object);
		TaskReturn();
		return 0;
	}
	bool var_601_bool;
	func_2707(var_601_bool, 7);
	if(var_601_bool != 0) {
		int var_603_int; object var_604_object;
		var_36_object = var_604_object;
		TaskCall(12);
		func_2076(var_605_object, var_603_int, var_604_object);
		TaskReturn();
		return 0;
	}
}


void func_2076(object var_0_object, int var_603_int, object var_604_object)
{
	var_0_object = var_604_object;
	bool var_614_bool; object var_615_object;
	var_604_object = var_615_object;
	func_2562(var_614_bool, var_615_object);
	if(!var_614_bool) { //@nz
		var_603_int = -2;
		return 8;
	}
	object var_610_object;
	@CreateDialog(var_610_object);
	int var_617_int;
	func_2713(var_617_int);
	var_610_object->SetNPCName(var_617_int);
	string var_618_string;
	func_2715(var_618_string);
	var_610_object->SetPhoto(var_618_string);
	int var_619_int;
	func_3229(var_619_int);
	var_610_object->SetPlayerName(var_619_int);
	bool var_611_bool;
	@IsOverrideActive(var_611_bool);
	if(var_611_bool != 0) {
		var_603_int = -2;
		return 8;
	}
	@DoDialog(var_610_object);
	object var_621_object; object var_622_object;
	var_604_object = var_621_object;
	var_610_object = var_622_object;
	TaskCall(13);
	func_2139(var_623_object, var_624_object, var_625_string, var_626_bool, var_621_object, var_622_object);
	TaskReturn();
	bool var_613_bool;
	var_610_object->IsDialogEnd(var_613_bool);
	
	for(;;) {
		var_654_bool = !var_613_bool; //@nz
		if(var_654_bool == 0) goto Label_2128;
		@sync();
		var_610_object->IsDialogEnd(var_613_bool);
	}
	
Label_2128:
	object var_655_object;
	var_604_object = var_655_object;
	func_2618();
	@StopDialog(var_610_object);
	var_610_object->GetReturnValue(-1);
	int var_612_int = var_603_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3105(bool var_256_bool)
{
	int var_258_int;
	func_2699(var_258_int);
	if(var_258_int >= 18)
		var_256_bool = true;
	var_256_bool = false;
}


// @pe
void func_2858(void)
{
	@SetVariable("KnowLara", 1);
}


// @pe
void func_3116(bool var_234_bool)
{
	bool var_236_bool = false;
	int var_237_int;
	func_2699(var_237_int);
	if(var_237_int >= 12) {
		int var_244_int;
		func_2699(var_244_int);
		if(var_244_int < 18)
			var_236_bool = true;
	}
	if(var_236_bool != 0) {
		var_234_bool = true;
		return 0;
	}
	var_234_bool = false;
}


// @pe
void func_2864(object var_42_object)
{
	var_42_object->SetReturnValue(1000);
}


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_2562(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_2713(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_2715(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_3229(var_93_int);
	var_46_object->SetPlayerName(var_93_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	object var_102_object; object var_103_object;
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_143_bool = !var_49_bool; //@nz
		if(var_143_bool == 0) goto Label_101;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_101:
	object var_144_object;
	var_40_object = var_144_object;
	func_2618();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2869(void)
{
	@SetVariable("KnowMark", 1);
}


// @pe
void func_2618(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_2875(void)
{
	@SetVariable("ood3Mark1", 1);
}


void func_2622(string var_48_string)
{
	@Trace("playing " + var_48_string);
	float var_51_float;
	float var_52_float;
	@lshGetAnimTimes(var_48_string, var_51_float, var_52_float);
	@lshPlayAnimation(var_51_float, var_52_float);
	@Trace("start: " + var_51_float);
	@Trace("end: " + var_52_float);
}


void func_2368(object var_0_object, int var_178_int, object var_179_object)
{
	var_0_object = var_179_object;
	bool var_189_bool; object var_190_object;
	var_179_object = var_190_object;
	func_2562(var_189_bool, var_190_object);
	if(!var_189_bool) { //@nz
		var_178_int = -2;
		return 8;
	}
	object var_185_object;
	@CreateDialog(var_185_object);
	int var_192_int;
	func_2713(var_192_int);
	var_185_object->SetNPCName(var_192_int);
	string var_193_string;
	func_2715(var_193_string);
	var_185_object->SetPhoto(var_193_string);
	int var_194_int;
	func_3229(var_194_int);
	var_185_object->SetPlayerName(var_194_int);
	bool var_186_bool;
	@IsOverrideActive(var_186_bool);
	if(var_186_bool != 0) {
		var_178_int = -2;
		return 8;
	}
	@DoDialog(var_185_object);
	object var_196_object; object var_197_object;
	var_179_object = var_196_object;
	var_185_object = var_197_object;
	TaskCall(15);
	func_2431(var_198_object, var_199_object, var_200_string, var_201_bool, var_196_object, var_197_object);
	TaskReturn();
	bool var_188_bool;
	var_185_object->IsDialogEnd(var_188_bool);
	
	for(;;) {
		var_220_bool = !var_188_bool; //@nz
		if(var_220_bool == 0) goto Label_2420;
		@sync();
		var_185_object->IsDialogEnd(var_188_bool);
	}
	
Label_2420:
	object var_221_object;
	var_179_object = var_221_object;
	func_2618();
	@StopDialog(var_185_object);
	var_185_object->GetReturnValue(-1);
	int var_187_int = var_178_int;
}
EMIT "Stack[-4] = 0";


void func_3137(object var_81_object)
{
	object var_83_object;
	@GetDiaryRoot(var_83_object);
	if(!var_83_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_81_object = false;
	}
	var_83_object = var_81_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2881(bool var_167_bool)
{
	int var_169_int;
	func_2657(var_169_int, "ood1Mark1");
	if(var_169_int == 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_2557(bool var_44_bool)
{
	bool var_46_bool;
	@IsLoaded(var_46_bool);
	var_46_bool = var_44_bool;
}


void func_330(object var_0_object, int var_238_int, object var_239_object)
{
	var_0_object = var_239_object;
	bool var_249_bool; object var_250_object;
	var_239_object = var_250_object;
	func_2562(var_249_bool, var_250_object);
	if(!var_249_bool) { //@nz
		var_238_int = -2;
		return 8;
	}
	object var_245_object;
	@CreateDialog(var_245_object);
	int var_252_int;
	func_2713(var_252_int);
	var_245_object->SetNPCName(var_252_int);
	string var_253_string;
	func_2715(var_253_string);
	var_245_object->SetPhoto(var_253_string);
	int var_254_int;
	func_3229(var_254_int);
	var_245_object->SetPlayerName(var_254_int);
	bool var_246_bool;
	@IsOverrideActive(var_246_bool);
	if(var_246_bool != 0) {
		var_238_int = -2;
		return 8;
	}
	@DoDialog(var_245_object);
	object var_256_object; object var_257_object;
	var_239_object = var_256_object;
	var_245_object = var_257_object;
	TaskCall(5);
	func_393(var_258_object, var_259_object, var_260_string, var_261_bool, var_256_object, var_257_object);
	TaskReturn();
	bool var_248_bool;
	var_245_object->IsDialogEnd(var_248_bool);
	
	for(;;) {
		var_440_bool = !var_248_bool; //@nz
		if(var_440_bool == 0) goto Label_382;
		@sync();
		var_245_object->IsDialogEnd(var_248_bool);
	}
	
Label_382:
	object var_441_object;
	var_239_object = var_441_object;
	func_2618();
	@StopDialog(var_245_object);
	var_245_object->GetReturnValue(-1);
	int var_247_int = var_238_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2893(bool var_215_bool)
{
	int var_217_int;
	func_2657(var_217_int, "ood1Mark2");
	if(var_217_int == 0) {
		var_215_bool = true;
		return 0;
	}
	var_215_bool = false;
}


void func_3150(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_3137(var_81_object);
	object var_78_object;
	var_81_object = var_78_object;
	object var_79_object;
	var_78_object->Find(var_74_int, var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_74_int);
		var_72_bool = false;
	}
	var_79_object->AddChild(var_73_object);
	@SetVariable("player_diary", 1);
	int var_80_int;
	var_73_object->GetCategory(var_80_int);
	@SetDiarySection(var_80_int);
	var_72_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2640(void)
{
	bool var_38_bool;
	func_2717(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


void func_2647(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_2905(bool var_247_bool)
{
	int var_249_int;
	func_2657(var_249_int, "ood1Mark3");
	if(var_249_int == 0) {
		var_247_bool = true;
		return 0;
	}
	var_247_bool = false;
}


void func_1627(object var_0_object, int var_493_int, object var_494_object)
{
	var_0_object = var_494_object;
	bool var_504_bool; object var_505_object;
	var_494_object = var_505_object;
	func_2562(var_504_bool, var_505_object);
	if(!var_504_bool) { //@nz
		var_493_int = -2;
		return 8;
	}
	object var_500_object;
	@CreateDialog(var_500_object);
	int var_507_int;
	func_2713(var_507_int);
	var_500_object->SetNPCName(var_507_int);
	string var_508_string;
	func_2715(var_508_string);
	var_500_object->SetPhoto(var_508_string);
	int var_509_int;
	func_3229(var_509_int);
	var_500_object->SetPlayerName(var_509_int);
	bool var_501_bool;
	@IsOverrideActive(var_501_bool);
	if(var_501_bool != 0) {
		var_493_int = -2;
		return 8;
	}
	@DoDialog(var_500_object);
	object var_511_object; object var_512_object;
	var_494_object = var_511_object;
	var_500_object = var_512_object;
	TaskCall(9);
	func_1690(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object);
	TaskReturn();
	bool var_503_bool;
	var_500_object->IsDialogEnd(var_503_bool);
	
	for(;;) {
		var_553_bool = !var_503_bool; //@nz
		if(var_553_bool == 0) goto Label_1679;
		@sync();
		var_500_object->IsDialogEnd(var_503_bool);
	}
	
Label_1679:
	object var_554_object;
	var_494_object = var_554_object;
	func_2618();
	@StopDialog(var_500_object);
	var_500_object->GetReturnValue(-1);
	int var_502_int = var_493_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2139(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_621_object, object var_622_object)
{
	var_0_object = var_622_object;
	var_3_object = false;
	if(1 != 0) {
		func_2202(var_622_object, "Neutral");
		var_0_object->SetMessage(13312); //@t
		var_0_object->ClearReplies(); //@t
		bool var_634_bool;
		func_3021(var_621_object);
		if(var_634_bool != 0)
			var_0_object->AddReply(13314, 14550, 14549); //@t
		var_0_object->AddReply(13313, -1, 14548); //@t
		goto Label_2172;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x85f";
	}
Label_2172:
	bool var_646_bool;
	func_2717(var_646_bool);
	if(var_646_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2622(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2201;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2201:
		return 0;

	}
	
}


void func_2657(int var_134_int, string var_135_string)
{
	int var_137_int;
	@GetVariable(var_135_string, var_137_int);
	var_137_int = var_134_int;
}


// @pe
void func_2917(bool var_175_bool)
{
	int var_177_int;
	func_2657(var_177_int, "d1q01");
	if(var_177_int == 0) {
		var_175_bool = true;
		return 0;
	}
	var_175_bool = false;
}


void func_2662(object var_100_object, string var_101_string)
{
	object var_104_object;
	@GetMainOutdoorScene(var_104_object);
	object var_105_object;
	@AddBlankActor(var_105_object, var_104_object, var_101_string, (var_101_string + ".bin"));
	var_105_object = var_100_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1384(object var_0_object, int var_444_int, object var_445_object)
{
	var_0_object = var_445_object;
	bool var_455_bool; object var_456_object;
	var_445_object = var_456_object;
	func_2562(var_455_bool, var_456_object);
	if(!var_455_bool) { //@nz
		var_444_int = -2;
		return 8;
	}
	object var_451_object;
	@CreateDialog(var_451_object);
	int var_458_int;
	func_2713(var_458_int);
	var_451_object->SetNPCName(var_458_int);
	string var_459_string;
	func_2715(var_459_string);
	var_451_object->SetPhoto(var_459_string);
	int var_460_int;
	func_3229(var_460_int);
	var_451_object->SetPlayerName(var_460_int);
	bool var_452_bool;
	@IsOverrideActive(var_452_bool);
	if(var_452_bool != 0) {
		var_444_int = -2;
		return 8;
	}
	@DoDialog(var_451_object);
	object var_462_object; object var_463_object;
	var_445_object = var_462_object;
	var_451_object = var_463_object;
	TaskCall(7);
	func_1447(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object);
	TaskReturn();
	bool var_454_bool;
	var_451_object->IsDialogEnd(var_454_bool);
	
	for(;;) {
		var_489_bool = !var_454_bool; //@nz
		if(var_489_bool == 0) goto Label_1436;
		@sync();
		var_451_object->IsDialogEnd(var_454_bool);
	}
	
Label_1436:
	object var_490_object;
	var_445_object = var_490_object;
	func_2618();
	@StopDialog(var_451_object);
	var_451_object->GetReturnValue(-1);
	int var_453_int = var_444_int;
}
EMIT "Stack[-4] = 0";


void func_3179(object var_47_object)
{
	object var_50_object; object var_51_object;
	@GetMainOutdoorScene(var_50_object);
	if(var_50_object == null) {
		@Trace("Can't find main outdoor scene");
		var_51_object = null;
		var_51_object = var_47_object;
	}
	var_50_object->GetMap(var_51_object);
	var_51_object = var_47_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_102_object;
		var_110_object = var_0_object;
		func_2869();
		func_175(var_103_object, "Neutral");
		var_0_object->SetMessage(424); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(425, 494, 493); //@t
		var_0_object->AddReply(429, 498, 497); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_135_bool;
	func_2717(var_135_bool);
	if(var_135_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2622(var_2_object);
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


void func_2673(bool var_108_bool, string var_109_string, string var_110_string)
{
	object var_112_object;
	@FindActor(var_112_object, var_109_string);
	if(var_112_object == null)
		var_108_bool = false;
	@Trigger(var_112_object, var_110_string);
	var_108_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2929(bool var_221_bool)
{
	int var_223_int;
	func_2657(var_223_int, "d1q01FirstGeorgVisit");
	if(var_223_int == 1)
		var_221_bool = true;
	var_221_bool = false;
}


void func_1907(object var_0_object, int var_557_int, object var_558_object)
{
	var_0_object = var_558_object;
	bool var_568_bool; object var_569_object;
	var_558_object = var_569_object;
	func_2562(var_568_bool, var_569_object);
	if(!var_568_bool) { //@nz
		var_557_int = -2;
		return 8;
	}
	object var_564_object;
	@CreateDialog(var_564_object);
	int var_571_int;
	func_2713(var_571_int);
	var_564_object->SetNPCName(var_571_int);
	string var_572_string;
	func_2715(var_572_string);
	var_564_object->SetPhoto(var_572_string);
	int var_573_int;
	func_3229(var_573_int);
	var_564_object->SetPlayerName(var_573_int);
	bool var_565_bool;
	@IsOverrideActive(var_565_bool);
	if(var_565_bool != 0) {
		var_557_int = -2;
		return 8;
	}
	@DoDialog(var_564_object);
	object var_575_object; object var_576_object;
	var_558_object = var_575_object;
	var_564_object = var_576_object;
	TaskCall(11);
	func_1970(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object);
	TaskReturn();
	bool var_567_bool;
	var_564_object->IsDialogEnd(var_567_bool);
	
	for(;;) {
		var_599_bool = !var_567_bool; //@nz
		if(var_599_bool == 0) goto Label_1959;
		@sync();
		var_564_object->IsDialogEnd(var_567_bool);
	}
	
Label_1959:
	object var_600_object;
	var_558_object = var_600_object;
	func_2618();
	@StopDialog(var_564_object);
	var_564_object->GetReturnValue(-1);
	int var_566_int = var_557_int;
}
EMIT "Stack[-4] = 0";


void func_3196(object var_70_object, string var_71_string, float var_72_float)
{
	object var_80_object;
	@GetMainOutdoorScene(var_80_object);
	if(var_80_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_78_cvector;
	cvector var_79_cvector;
	bool var_81_bool;
	var_80_object->GetLocator(var_71_string, var_81_bool, var_78_cvector, var_79_cvector);
	if(!var_81_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_71_string) + " doesnt exist");
	var_80_object->GetMap(var_70_object);
	if(var_70_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_91_float = GetByIndex(var_78_cvector, 0);
	var_92_float = GetByIndex(var_78_cvector, 2);
	var_70_object->SetMapParams(var_91_float, var_92_float, var_72_float);
}
EMIT "Stack[-2] = 0";


void func_2685(float var_58_float)
{
	float var_60_float;
	@GetGameTime(var_60_float);
	var_60_float = var_58_float;
}


// @pe
void func_2941(bool var_273_bool)
{
	int var_275_int;
	func_2657(var_275_int, "ood1Mark4");
	if(var_275_int == 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


// @pe
void func_2431(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_196_object, object var_197_object)
{
	var_0_object = var_197_object;
	var_1_object = var_196_object;
	var_3_object = false;
	if(1 != 0) {
		func_2484(var_197_object, "Neutral");
		var_0_object->SetMessage(14084); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(14085, -1, 15322); //@t
		goto Label_2454;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x983";
	}
Label_2454:
	bool var_212_bool;
	func_2717(var_212_bool);
	if(var_212_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2622(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2483;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2483:
		return 0;

	}
	
}


// @pe
void func_642(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_2717(var_191_bool);
	if(!var_191_bool) //@nz
		return 0;
	if(var_190_string == var_2_object)
		return 0;
	string var_194_string;
	func_2622(var_194_string);
	var_2_object = var_194_string;
}


void func_2690(int var_165_int)
{
	float var_167_float;
	@GetGameTime(var_167_float);
	var_165_int = 1 + (var_167_float / 24);
}


// @pe
void func_393(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_256_object, object var_257_object)
{
	var_0_object = var_257_object;
	var_1_object = var_256_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_263_bool = false;
		bool var_264_bool;
		func_2881(var_1_object);
		if(var_264_bool != 0) {
			bool var_272_bool;
			func_2917(var_1_object);
			if(!var_272_bool) //@nz
				var_263_bool = true;
		}
		if(var_263_bool != 0) {
			object var_279_object; object var_280_object;
			var_279_object = var_1_object;
			var_280_object = var_0_object;
			func_2858();
			object var_283_object; object var_284_object;
			var_283_object = var_1_object;
			var_284_object = var_0_object;
			func_2808();
			func_642(var_257_object, "Neutral");
			var_0_object->SetMessage(5616); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5617, 6905, 6193); //@t
			var_0_object->AddReply(5645, 6906, 6224); //@t
		} else {
					func_642(var_257_object, "Neutral");
					var_0_object->SetMessage(8129); //@t
					var_0_object->ClearReplies(); //@t
					bool var_309_bool = false;
					bool var_310_bool;
					func_2893(var_1_object);
					if(var_310_bool != 0) {
						bool var_316_bool;
						func_2929(var_1_object);
						if(var_316_bool != 0)
							var_309_bool = true;
					}
					if(var_309_bool != 0)
						var_0_object->AddReply(8130, 6213, 8953); //@t
					bool var_325_bool = true;
					bool var_326_bool = false;
					bool var_327_bool;
					func_3011(var_327_bool, var_1_object);
					if(var_327_bool != 0) {
						bool var_338_bool;
						func_2905(var_1_object);
						if(var_338_bool != 0)
							var_326_bool = true;
					}
					if(var_326_bool != 1) {
						bool var_344_bool = false;
						bool var_345_bool;
						func_3001(var_345_bool, var_1_object);
						if(var_345_bool != 0) {
							bool var_352_bool;
							func_2905(var_1_object);
							if(var_352_bool != 0)
								var_344_bool = true;
						}
						if(var_344_bool != 1)
							var_325_bool = false;
					}
					if(var_325_bool != 0)
						var_0_object->AddReply(8131, 6197, 8954); //@t
					bool var_357_bool = false;
					bool var_358_bool;
					func_3093(var_1_object);
					if(var_358_bool != 0) {
						bool var_364_bool;
						func_2941(var_1_object);
						if(var_364_bool != 0)
							var_357_bool = true;
					}
					if(var_357_bool != 0)
						var_0_object->AddReply(8133, -1, 8956); //@t
					bool var_373_bool = false;
					bool var_374_bool;
					func_3033(var_1_object);
					if(var_374_bool != 0) {
						bool var_380_bool;
						func_2953(var_1_object);
						if(var_380_bool != 0)
							var_373_bool = true;
					}
					if(var_373_bool != 0)
						var_0_object->AddReply(8135, 8982, 8958); //@t
					bool var_389_bool = false;
					bool var_390_bool;
					func_3045(var_1_object);
					if(var_390_bool != 0) {
						bool var_396_bool;
						func_2965(var_1_object);
						if(var_396_bool != 0)
							var_389_bool = true;
					}
					if(var_389_bool != 0)
						var_0_object->AddReply(8137, 8981, 8960); //@t
					bool var_405_bool = false;
					bool var_406_bool;
					func_3057(var_1_object);
					if(var_406_bool != 0) {
						bool var_412_bool;
						func_2977(var_1_object);
						if(var_412_bool != 0)
							var_405_bool = true;
					}
					if(var_405_bool != 0)
						var_0_object->AddReply(8140, 8980, 8963); //@t
					bool var_421_bool = false;
					bool var_422_bool;
					func_3081(var_1_object);
					if(var_422_bool != 0) {
						bool var_428_bool;
						func_2989(var_1_object);
						if(var_428_bool != 0)
							var_421_bool = true;
					}
					if(var_421_bool != 0)
						var_0_object->AddReply(8151, 8979, 8974); //@t
					var_0_object->AddReply(9147, -1, 10028); //@t
		}
	}
	for(;;) {
		bool var_299_bool;
		func_2717(var_299_bool);
		if(var_299_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2622(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_641;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_641:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x18d";


// @pe
void func_2953(bool var_289_bool)
{
	int var_291_int;
	func_2657(var_291_int, "ood1Mark5");
	if(var_291_int == 0) {
		var_289_bool = true;
		return 0;
	}
	var_289_bool = false;
}


void func_2699(int var_237_int)
{
	float var_239_float;
	@GetGameTime(var_239_float);
	int var_240_int;
	var_239_float = var_240_int;
	var_237_int = var_240_int % 24;
}


// @pe
void func_2707(bool var_235_bool, int var_236_int)
{
	int var_237_int;
	func_2690(var_237_int);
	var_235_bool = var_237_int == var_236_int;
}


// @pe
void func_2965(bool var_305_bool)
{
	int var_307_int;
	func_2657(var_307_int, "ood1Mark6");
	if(var_307_int == 0) {
		var_305_bool = true;
		return 0;
	}
	var_305_bool = false;
}


void func_2713(int var_91_int)
{
	var_91_int = 2869;
}


// @pe
void func_1690(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_511_object, object var_512_object)
{
	var_0_object = var_512_object;
	var_1_object = var_511_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_518_bool;
		func_3069(var_1_object);
		if(var_518_bool != 0) {
			object var_524_object; object var_525_object;
			var_524_object = var_1_object;
			var_525_object = var_0_object;
			func_2875();
			func_1773(var_512_object, "Neutral");
			var_0_object->SetMessage(9993); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9994, 11016, 11015); //@t
			var_0_object->AddReply(10002, 11016, 11023); //@t
		} else {
					func_1773(var_512_object, "Neutral");
					var_0_object->SetMessage(15316); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15317, -1, 16555); //@t
		}
	}
	for(;;) {
		bool var_540_bool;
		func_2717(var_540_bool);
		if(var_540_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2622(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1772;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1772:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x69e";


void func_2715(string var_92_string)
{
	var_92_string = "ui/NPC_Mark.png";
}


// @pe
void func_2202(object var_2_object, string var_116_string)
{
	bool var_117_bool;
	func_2717(var_117_bool);
	if(!var_117_bool) //@nz
		return 0;
	if(var_116_string == var_2_object)
		return 0;
	string var_120_string;
	func_2622(var_120_string);
	var_2_object = var_120_string;
}


void func_2717(bool var_38_bool)
{
	var_38_bool = true;
}


void func_3229(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0xcac";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_2719(void)
{
	@SetVariable("ood1Mark1", 1);
}


// @pe
void func_2977(bool var_321_bool)
{
	int var_323_int;
	func_2657(var_323_int, "ood1Mark7");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_2725(void)
{
	@SetVariable("ood1Mark2", 1);
}


// @pe
void func_1447(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_462_object, object var_463_object)
{
	var_0_object = var_463_object;
	var_1_object = var_462_object;
	var_3_object = false;
	if(1 != 0) {
		func_1505(var_463_object, "Neutral");
		var_0_object->SetMessage(9489); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9490, 10433, 10432); //@t
		var_0_object->AddReply(9499, 10433, 10441); //@t
		goto Label_1475;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ab";
	}
Label_1475:
	bool var_481_bool;
	func_2717(var_481_bool);
	if(var_481_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2622(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1504;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1504:
		return 0;

	}
	
}


// @pe
void func_2731(void)
{
	@SetVariable("ood1Mark3", 1);
}


// @pe
void func_2989(bool var_337_bool)
{
	int var_339_int;
	func_2657(var_339_int, "ood1Mark8");
	if(var_339_int == 0) {
		var_337_bool = true;
		return 0;
	}
	var_337_bool = false;
}


void func_3246(void)
{
	@Trace("Adding diary entry");
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 170, 0, 15422);
	bool var_72_bool; object var_73_object;
	var_67_object = var_73_object;
	func_3150(var_72_bool, var_73_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_175(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_2717(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_2622(var_49_string);
	var_2_object = var_49_string;
}


void func_2737(void)
{
	object var_49_object;
	func_3179(var_49_object);
	object var_48_object;
	var_49_object = var_48_object;
	float var_60_float;
	func_2685(var_60_float);
	var_48_object->AddMark("d1q01MarkAboutJulia", "pt_map_julia", 1, 8647, var_60_float);
	float var_67_float;
	func_2685(var_67_float);
	var_48_object->AddMark("d1q01MarkAboutLara", "pt_map_lara", 1, 8646, var_67_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1970(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_575_object, object var_576_object)
{
	var_0_object = var_576_object;
	var_1_object = var_575_object;
	var_3_object = false;
	if(1 != 0) {
		func_2023(var_576_object, "Neutral");
		var_0_object->SetMessage(10917); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(10918, -1, 12067); //@t
		goto Label_1993;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7b6";
	}
Label_1993:
	bool var_591_bool;
	func_2717(var_591_bool);
	if(var_591_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2622(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2022;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2022:
		return 0;

	}
	
}


// @pe
void func_2484(object var_2_object, string var_46_string)
{
	bool var_47_bool;
	func_2717(var_47_bool);
	if(!var_47_bool) //@nz
		return 0;
	if(var_46_string == var_2_object)
		return 0;
	string var_50_string;
	func_2622(var_50_string);
	var_2_object = var_50_string;
}


// @pe
void func_3001(bool var_254_bool, object var_255_object)
{
	object var_257_object;
	var_255_object = var_257_object;
	func_3105(var_257_object);
	bool var_256_bool;
	if(var_256_bool != 0) {
		var_254_bool = true;
		return 0;
	}
	var_254_bool = false;
}


void func_3262(void)
{
	@Trace("Adding diary entry");
	object var_92_object;
	@CreateDiaryEntry(var_92_object, 171, 0, 15423);
	bool var_97_bool; object var_98_object;
	var_92_object = var_98_object;
	func_3150(var_97_bool, var_98_object, 170);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3011(bool var_232_bool, object var_233_object)
{
	object var_235_object;
	var_233_object = var_235_object;
	func_3116(var_235_object);
	bool var_234_bool;
	if(var_234_bool != 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


// @pe
void func_2762(object var_69_object)
{
	object var_73_object;
	func_3179(var_73_object);
	object var_70_object;
	var_73_object = var_70_object;
	func_3196(var_70_object, "pt_map_julia", (float)2);
	object var_93_object;
	func_3179(var_93_object);
	var_69_object->ShowMap(var_93_object);
}


// @pe
void func_3021(bool var_132_bool)
{
	int var_134_int;
	func_2657(var_134_int, "d7q02");
	if(var_134_int == 0) {
		var_132_bool = true;
		return 0;
	}
	var_132_bool = false;
}


void func_3278(void)
{
	var_37_bool = GlobalVars[1];
	GlobalVars[1] = false;
	int var_36_int = 1;
	
	while(var_36_int < 12) {
		@SetVariable(("Performance" + var_36_int), 0);
		var_36_int += 1;
	}
	
}


// @pe
void func_3033(bool var_283_bool)
{
	int var_285_int;
	func_2657(var_285_int, "KnowEva");
	if(var_285_int == 1)
		var_283_bool = true;
	var_283_bool = false;
}


// @pe
void func_2778(void)
{
	@SetVariable("ood1Mark4", 1);
}


void func_3295(int var_162_int)
{
	int var_165_int;
	func_2690(var_165_int);
	int var_164_int;
	var_165_int = var_164_int;
	int var_171_int;
	func_2699(var_171_int);
	if(var_171_int <= 6)
		var_164_int -= 1;
	var_164_int = var_162_int;
}


// @pe
void func_2784(void)
{
	@SetVariable("ood1Mark5", 1);
}


// @pe
void func_1505(object var_2_object, string var_41_string)
{
	bool var_42_bool;
	func_2717(var_42_bool);
	if(!var_42_bool) //@nz
		return 0;
	if(var_41_string == var_2_object)
		return 0;
	string var_45_string;
	func_2622(var_45_string);
	var_2_object = var_45_string;
}


// @pe
void func_3045(bool var_299_bool)
{
	int var_301_int;
	func_2657(var_301_int, "KnowJulia");
	if(var_301_int == 1)
		var_299_bool = true;
	var_299_bool = false;
}


// @pe
void func_2790(void)
{
	@SetVariable("ood1Mark6", 1);
}


// @pe
void func_2023(object var_2_object, string var_41_string)
{
	bool var_42_bool;
	func_2717(var_42_bool);
	if(!var_42_bool) //@nz
		return 0;
	if(var_41_string == var_2_object)
		return 0;
	string var_45_string;
	func_2622(var_45_string);
	var_2_object = var_45_string;
}


// @pe
void func_2796(void)
{
	@SetVariable("ood1Mark7", 1);
}


// @pe
void func_1773(object var_2_object, string var_53_string)
{
	bool var_54_bool;
	func_2717(var_54_bool);
	if(!var_54_bool) //@nz
		return 0;
	if(var_53_string == var_2_object)
		return 0;
	string var_57_string;
	func_2622(var_57_string);
	var_2_object = var_57_string;
}


void func_3310(bool var_146_bool)
{
	int var_149_int; int var_150_int;
	bool var_151_bool = true;
	int var_152_int;
	func_2699(var_152_int);
	var_158_bool = var_152_int >= 23;
	if(var_158_bool != 1) {
		int var_159_int;
		func_2699(var_159_int);
		var_161_bool = var_159_int <= 6;
		if(var_161_bool != 1)
			var_151_bool = false;
	}
	if(var_151_bool != 0) {
		int var_162_int;
		func_3295(var_162_int);
		var_162_int = var_149_int;
		@GetVariable(("Performance" + var_149_int), var_150_int);
		var_146_bool = var_150_int == 0;
	}
	var_146_bool = false;
}


void func_2545(bool var_36_bool, object var_37_object)
{
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	bool var_45_bool;
	@Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
}


// @pe
void func_2802(void)
{
	@SetVariable("ood1Mark8", 1);
}


// @pe
void func_3057(bool var_315_bool)
{
	int var_317_int;
	func_2657(var_317_int, "KnowMaria");
	if(var_317_int == 1)
		var_315_bool = true;
	var_315_bool = false;
}


// @pe
void func_2808(void)
{
	@SetVariable("KnowJulia", 1);
}


// @pe
void func_3069(bool var_41_bool)
{
	int var_43_int;
	func_2657(var_43_int, "ood3Mark1");
	if(var_43_int == 0) {
		var_41_bool = true;
		return 0;
	}
	var_41_bool = false;
}


void func_2814(void)
{
	@SetVariable("d7q02", 1);
	object var_47_object;
	func_3179(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	float var_58_float;
	func_2685(var_58_float);
	var_44_object->AddMark("d7q02MarkGotoCemetery", "pt_d7q02_corpse", 0, 15427, var_58_float);
	float var_65_float;
	func_2685(var_65_float);
	var_44_object->AddMark("d7q02MarkGotoAlexandr", "pt_map_alexandr", 0, 15428, var_65_float);
	func_3246();
	func_3262();
	object var_100_object;
	func_2662(var_100_object, "quest_d7_02");
	bool var_108_bool;
	func_2673(var_108_bool, "quest_d7_02", "place_corpse");
}
EMIT "Stack[-1] = 0";


