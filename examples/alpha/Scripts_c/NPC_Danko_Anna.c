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
		func_6991();
		bool var_36_bool;
		func_5458(var_36_bool);
		if(!var_36_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_5523("Neutral");
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
		func_6995(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_5446(var_36_bool, var_37_object);
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
			func_5541();
			if(var_35_string == 260) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6123();
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(222, 263, 261); //@t
				var_0_object->AddReply(223, 266, 262); //@t
				return 0;
			}
			if(var_35_string == 266) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(244, 268, 284); //@t
				var_0_object->AddReply(245, -1, 286); //@t
				return 0;
			}
			if(var_35_string == 263) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(228, 268, 267); //@t
				var_0_object->AddReply(225, 265, 264); //@t
				return 0;
			}
			if(var_35_string == 265) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(243, 268, 282); //@t
				return 0;
			}
			if(var_35_string == 268) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(234, 274, 273); //@t
				var_0_object->AddReply(230, 270, 269); //@t
				return 0;
			}
			if(var_35_string == 270) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(233, -1, 272); //@t
				return 0;
			}
			if(var_35_string == 274) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(236, 280, 275); //@t
				var_0_object->AddReply(237, 277, 276); //@t
				return 0;
			}
			if(var_35_string == 277) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(239, -1, 278); //@t
				var_0_object->AddReply(240, -1, 279); //@t
				return 0;
			}
			if(var_35_string == 280) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(242, -1, 281); //@t
				return 0;
			}
			var_3_string = true;
			bool var_138_bool;
			func_5645(var_138_bool);
			if(var_138_bool != 0)
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
			func_5541();
			if(var_36_bool == 4268) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6064();
			}
			if(var_36_bool == 4269) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_6064();
			}
			if(var_36_bool == 4266) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_6064();
			}
			if(var_36_bool == 13914) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_6070();
			}
			if(var_36_bool == 13920) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_6076();
				object var_118_object = var_1_object;
				func_6129(var_0_object);
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_6143();
			}
			if(var_36_bool == 14992) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_6149();
			}
			if(var_35_string == 13912) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(12719); //@t
				var_0_object->ClearReplies(); //@t
				bool var_174_bool = false;
				bool var_175_bool;
				func_6554(var_1_object);
				if(var_175_bool != 0) {
					bool var_181_bool;
					func_6518(var_1_object);
					if(var_181_bool != 0)
						var_174_bool = true;
				}
				if(var_174_bool != 0)
					var_0_object->AddReply(12720, 4261, 13913); //@t
				bool var_190_bool = false;
				bool var_191_bool;
				func_6530(var_1_object);
				if(var_191_bool != 0) {
					bool var_197_bool;
					func_6566(var_1_object);
					if(var_197_bool != 0)
						var_190_bool = true;
				}
				if(var_190_bool != 0)
					var_0_object->AddReply(12721, 13915, 13914); //@t
				bool var_206_bool = false;
				bool var_207_bool = false;
				bool var_208_bool = false;
				bool var_209_bool;
				func_6614(var_1_object);
				if(var_209_bool != 0) {
					bool var_215_bool;
					func_6638(var_1_object);
					if(!var_215_bool) //@nz
						var_208_bool = true;
				}
				if(var_208_bool != 0) {
					bool var_222_bool;
					func_6650(var_1_object);
					if(!var_222_bool) //@nz
						var_207_bool = true;
				}
				if(var_207_bool != 0) {
					bool var_229_bool;
					func_6662(var_1_object);
					if(var_229_bool != 0)
						var_206_bool = true;
				}
				if(var_206_bool != 0)
					var_0_object->AddReply(13747, 14993, 14992); //@t
				var_0_object->AddReply(12728, -1, 13921); //@t
				return 0;
			}
			if(var_35_string == 14993) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(13748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13749, -1, 14994); //@t
				return 0;
			}
			if(var_35_string == 13915) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(12722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12723, 13917, 13916); //@t
				return 0;
			}
			if(var_35_string == 13917) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(12724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12725, 13919, 13918); //@t
				return 0;
			}
			if(var_35_string == 13919) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(12726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12727, -1, 13920); //@t
				return 0;
			}
			if(var_35_string == 4261) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(3913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3914, -1, 4262); //@t
				var_0_object->AddReply(3915, 4264, 4263); //@t
				return 0;
			}
			if(var_35_string == 4264) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(3916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3917, 4267, 4265); //@t
				var_0_object->AddReply(3918, -1, 4266); //@t
				return 0;
			}
			if(var_35_string == 4267) {
				func_600(var_36_bool, "Neutral");
				var_0_object->SetMessage(3919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3920, -1, 4268); //@t
				var_0_object->AddReply(3921, -1, 4269); //@t
				return 0;
			}
			var_3_string = true;
			bool var_299_bool;
			func_5645(var_299_bool);
			if(var_299_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x269";
	
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
			func_5541();
			if(var_36_bool == 5450) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6015();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5753();
				object var_63_object = var_1_object;
				func_5769(var_0_object);
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5785();
			}
			if(var_36_bool == 5453) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_6015();
			}
			if(var_36_bool == 5454) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_6015();
			}
			if(var_36_bool == 5481) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_6021();
			}
			if(var_36_bool == 5482) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_6021();
			}
			if(var_36_bool == 5483) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_6021();
			}
			if(var_36_bool == 5488) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_6052();
				object var_146_object = var_1_object;
				func_5653(var_0_object);
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_5664();
			}
			if(var_36_bool == 5494) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_6052();
				object var_163_object = var_1_object;
				func_5653(var_0_object);
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_5664();
			}
			if(var_36_bool == 5501) {
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_6052();
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_5664();
				object var_173_object = var_1_object;
				func_5653(var_0_object);
			}
			if(var_36_bool == 9529) {
				object var_177_object; object var_178_object;
				var_177_object = var_1_object;
				var_178_object = var_0_object;
				func_5785();
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_5753();
				object var_181_object = var_1_object;
				func_5769(var_0_object);
			}
			if(var_36_bool == 5526) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_6058();
			}
			if(var_36_bool == 5539) {
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_6111();
			}
			if(var_36_bool == 5542) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_6111();
			}
			if(var_36_bool == 5540) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_6111();
			}
			if(var_36_bool == 5541) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_6111();
			}
			if(var_36_bool == 5508) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_6117();
			}
			if(var_36_bool == 5509) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_6117();
			}
			if(var_36_bool == 5512) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_6117();
			}
			if(var_36_bool == 5520) {
				object var_223_object; object var_224_object;
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_6117();
			}
			if(var_36_bool == 5517) {
				object var_227_object; object var_228_object;
				var_227_object = var_1_object;
				var_228_object = var_0_object;
				func_6117();
			}
			if(var_36_bool == 7687) {
				object var_231_object; object var_232_object;
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				func_5682();
			}
			if(var_36_bool == 7696) {
				object var_237_object; object var_238_object;
				var_237_object = var_1_object;
				var_238_object = var_0_object;
				func_5688();
			}
			if(var_36_bool == 7702) {
				object var_243_object; object var_244_object;
				var_243_object = var_1_object;
				var_244_object = var_0_object;
				func_5694();
			}
			if(var_36_bool == 7708) {
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_5700();
			}
			if(var_35_string == 5427) {
				bool var_255_bool = false;
				bool var_256_bool;
				func_6506(var_1_object);
				if(var_256_bool != 0) {
					bool var_264_bool;
					func_6230(var_1_object);
					if(var_264_bool != 0)
						var_255_bool = true;
				}
				if(var_255_bool != 0) {
					func_1282(var_36_bool, "Neutral");
					var_0_object->SetMessage(4938); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4949, 5439, 5438); //@t
					var_0_object->AddReply(4978, 5439, 5475); //@t
					var_0_object->AddReply(4979, 5439, 5477); //@t
					return 0;
				}
				bool var_295_bool;
				func_6362(var_1_object);
				if(var_295_bool != 0) {
					func_1282(var_36_bool, "Neutral");
					var_0_object->SetMessage(4940); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4981, 5480, 5479); //@t
					var_0_object->AddReply(4985, -1, 5483); //@t
					return 0;
				}
				bool var_309_bool = false;
				bool var_310_bool;
				func_6542(var_1_object);
				if(var_310_bool != 0) {
					bool var_316_bool;
					func_6218(var_1_object);
					if(var_316_bool != 0)
						var_309_bool = true;
				}
				if(var_309_bool != 0) {
					func_1282(var_36_bool, "Neutral");
					var_0_object->SetMessage(4943); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4987, 5486, 5485); //@t
					var_0_object->AddReply(4991, 5490, 5489); //@t
					var_0_object->AddReply(4998, 5498, 5497); //@t
					return 0;
				}
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6582); //@t
				var_0_object->ClearReplies(); //@t
				bool var_335_bool;
				func_6230(var_1_object);
				if(var_335_bool != 0)
					var_0_object->AddReply(8690, 9528, 9527); //@t
				bool var_340_bool = false;
				bool var_341_bool;
				func_6578(var_1_object);
				if(var_341_bool != 0) {
					bool var_347_bool;
					func_6242(var_1_object);
					if(var_347_bool != 0)
						var_340_bool = true;
				}
				if(var_340_bool != 0)
					var_0_object->AddReply(6583, 5521, 7252); //@t
				bool var_356_bool = false;
				bool var_357_bool;
				func_6674(var_1_object);
				if(var_357_bool != 0) {
					bool var_363_bool;
					func_6590(var_1_object);
					if(var_363_bool != 0)
						var_356_bool = true;
				}
				if(var_356_bool != 0)
					var_0_object->AddReply(6590, 5533, 7259); //@t
				bool var_372_bool;
				func_6602(var_1_object);
				if(var_372_bool != 0)
					var_0_object->AddReply(6586, 5503, 7255); //@t
				bool var_381_bool = false;
				bool var_382_bool;
				func_6746(var_1_object);
				if(var_382_bool != 0) {
					bool var_388_bool;
					func_6254(var_1_object);
					if(var_388_bool != 0)
						var_381_bool = true;
				}
				if(var_381_bool != 0)
					var_0_object->AddReply(6592, 7679, 7261); //@t
				bool var_397_bool = false;
				bool var_398_bool;
				func_6626(var_1_object);
				if(var_398_bool != 0) {
					bool var_404_bool;
					func_6266(var_1_object);
					if(var_404_bool != 0)
						var_397_bool = true;
				}
				if(var_397_bool != 0)
					var_0_object->AddReply(6595, 7689, 7264); //@t
				bool var_413_bool = false;
				bool var_414_bool;
				func_6758(var_1_object);
				if(var_414_bool != 0) {
					bool var_420_bool;
					func_6278(var_1_object);
					if(var_420_bool != 0)
						var_413_bool = true;
				}
				if(var_413_bool != 0)
					var_0_object->AddReply(6602, 7697, 7271); //@t
				bool var_429_bool = false;
				bool var_430_bool;
				func_6686(var_1_object);
				if(var_430_bool != 0) {
					bool var_436_bool;
					func_6290(var_1_object);
					if(var_436_bool != 0)
						var_429_bool = true;
				}
				if(var_429_bool != 0)
					var_0_object->AddReply(6605, 7703, 7274); //@t
				var_0_object->AddReply(7538, -1, 8320); //@t
				return 0;
			}
			if(var_35_string == 7703) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6996, 7705, 7704); //@t
				return 0;
			}
			if(var_35_string == 7705) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6998, 7707, 7706); //@t
				return 0;
			}
			if(var_35_string == 7707) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7000, -1, 7708); //@t
				return 0;
			}
			if(var_35_string == 7697) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6990, 7699, 7698); //@t
				return 0;
			}
			if(var_35_string == 7699) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6992, 7701, 7700); //@t
				return 0;
			}
			if(var_35_string == 7701) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6994, -1, 7702); //@t
				return 0;
			}
			if(var_35_string == 7689) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6982, 7691, 7690); //@t
				return 0;
			}
			if(var_35_string == 7691) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6984, 7693, 7692); //@t
				return 0;
			}
			if(var_35_string == 7693) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6986, 7695, 7694); //@t
				return 0;
			}
			if(var_35_string == 7695) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6988, -1, 7696); //@t
				return 0;
			}
			if(var_35_string == 7679) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6973, 7681, 7680); //@t
				return 0;
			}
			if(var_35_string == 7681) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6975, 7684, 7682); //@t
				var_0_object->AddReply(6976, 7684, 7683); //@t
				return 0;
			}
			if(var_35_string == 7684) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6977); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6978, 7686, 7685); //@t
				return 0;
			}
			if(var_35_string == 7686) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(6979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6980, -1, 7687); //@t
				return 0;
			}
			if(var_35_string == 5503) {
				object var_551_object; object var_552_object;
				var_551_object = var_1_object;
				var_552_object = var_0_object;
				func_5747();
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5005, 5505, 5504); //@t
				var_0_object->AddReply(5015, 5515, 5514); //@t
				return 0;
			}
			if(var_35_string == 5515) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5016); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5017, 5519, 5516); //@t
				var_0_object->AddReply(5018, -1, 5517); //@t
				return 0;
			}
			if(var_35_string == 5519) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5020, -1, 5520); //@t
				return 0;
			}
			if(var_35_string == 5505) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5006); //@t
				var_0_object->ClearReplies(); //@t
				bool var_584_bool;
				func_6482(var_1_object);
				if(!var_584_bool) //@nz
					var_0_object->AddReply(5007, 5507, 5506); //@t
				var_0_object->AddReply(5011, 5511, 5510); //@t
				return 0;
			}
			if(var_35_string == 5511) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5013, -1, 5512); //@t
				return 0;
			}
			if(var_35_string == 5507) {
				object var_606_object; object var_607_object;
				var_606_object = var_1_object;
				var_607_object = var_0_object;
				func_5997();
				object var_610_object; object var_611_object;
				var_610_object = var_1_object;
				var_611_object = var_0_object;
				func_6003();
				object var_614_object; object var_615_object;
				var_614_object = var_1_object;
				var_615_object = var_0_object;
				func_6009();
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5009, -1, 5508); //@t
				var_0_object->AddReply(5010, -1, 5509); //@t
				return 0;
			}
			if(var_35_string == 5533) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5031); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5032, 5535, 5534); //@t
				var_0_object->AddReply(5039, -1, 5541); //@t
				return 0;
			}
			if(var_35_string == 5535) {
				object var_638_object; object var_639_object;
				var_638_object = var_1_object;
				var_639_object = var_0_object;
				func_5794();
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5034, 5537, 5536); //@t
				var_0_object->AddReply(5038, -1, 5540); //@t
				return 0;
			}
			if(var_35_string == 5537) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5037, -1, 5539); //@t
				var_0_object->AddReply(5040, -1, 5542); //@t
				return 0;
			}
			if(var_35_string == 5521) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5022, 5523, 5522); //@t
				var_0_object->AddReply(5027, 5528, 5527); //@t
				var_0_object->AddReply(5030, 5528, 5531); //@t
				return 0;
			}
			if(var_35_string == 5528) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5029, 5525, 5529); //@t
				var_0_object->AddReply(5041, 5544, 5543); //@t
				return 0;
			}
			if(var_35_string == 5544) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5043, 5525, 5545); //@t
				return 0;
			}
			if(var_35_string == 5523) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5024, 5525, 5524); //@t
				return 0;
			}
			if(var_35_string == 5525) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5026, -1, 5526); //@t
				return 0;
			}
			if(var_35_string == 9528) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(8691); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8692, -1, 9529); //@t
				return 0;
			}
			if(var_35_string == 5498) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5000, 5500, 5499); //@t
				return 0;
			}
			if(var_35_string == 5500) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(5001); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5002, -1, 5501); //@t
				return 0;
			}
			if(var_35_string == 5490) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4993, 5492, 5491); //@t
				var_0_object->AddReply(4997, 5492, 5495); //@t
				return 0;
			}
			if(var_35_string == 5492) {
				func_1282(var_36_bool, "Crying");
				var_0_object->SetMessage(4994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4996, -1, 5494); //@t
				return 0;
			}
			if(var_35_string == 5486) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4990, -1, 5488); //@t
				return 0;
			}
			if(var_35_string == 5480) {
				object var_751_object; object var_752_object;
				var_751_object = var_1_object;
				var_752_object = var_0_object;
				func_6155();
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4983, -1, 5481); //@t
				var_0_object->AddReply(4984, -1, 5482); //@t
				return 0;
			}
			if(var_35_string == 5439) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4951, 5441, 5440); //@t
				var_0_object->AddReply(4976, 5441, 5471); //@t
				var_0_object->AddReply(4977, 5441, 5473); //@t
				return 0;
			}
			if(var_35_string == 5441) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4953, 5443, 5442); //@t
				var_0_object->AddReply(4972, 5466, 5465); //@t
				return 0;
			}
			if(var_35_string == 5466) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4974, 5445, 5467); //@t
				var_0_object->AddReply(4975, 5445, 5469); //@t
				return 0;
			}
			if(var_35_string == 5443) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4955, 5445, 5444); //@t
				var_0_object->AddReply(4968, 5460, 5459); //@t
				return 0;
			}
			if(var_35_string == 5460) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4970, 5445, 5461); //@t
				var_0_object->AddReply(4971, 5445, 5463); //@t
				return 0;
			}
			if(var_35_string == 5445) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4957, 5447, 5446); //@t
				var_0_object->AddReply(4967, 5447, 5457); //@t
				return 0;
			}
			if(var_35_string == 5447) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4959, 5449, 5448); //@t
				var_0_object->AddReply(4966, 5449, 5455); //@t
				return 0;
			}
			if(var_35_string == 5449) {
				object var_838_object; object var_839_object;
				var_838_object = var_1_object;
				var_839_object = var_0_object;
				func_6155();
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4961, -1, 5450); //@t
				var_0_object->AddReply(4962, 5452, 5451); //@t
				return 0;
			}
			if(var_35_string == 5452) {
				func_1282(var_36_bool, "Neutral");
				var_0_object->SetMessage(4963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4964, -1, 5453); //@t
				var_0_object->AddReply(4965, -1, 5454); //@t
				return 0;
			}
			var_3_string = true;
			bool var_858_bool;
			func_5645(var_858_bool);
			if(var_858_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x513";
	
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
			func_5541();
			if(var_36_bool == 7333) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5706();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5724();
				object var_90_object = var_1_object;
				func_5828(var_0_object);
			}
			if(var_36_bool == 7336) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_5706();
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_5724();
				object var_122_object = var_1_object;
				func_5828(var_0_object);
			}
			if(var_36_bool == 7337) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5706();
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_5724();
				object var_130_object = var_1_object;
				func_5828(var_0_object);
			}
			if(var_36_bool == 7976) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_5712();
			}
			if(var_36_bool == 7981) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_5712();
			}
			if(var_36_bool == 7969) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_5712();
			}
			if(var_35_string == 7293) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6624); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool = false;
				bool var_165_bool;
				func_6302(var_1_object);
				if(var_165_bool != 0) {
					bool var_173_bool;
					func_6350(var_1_object);
					if(var_173_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_object->AddReply(7217, 7952, 7953); //@t
				bool var_182_bool;
				func_6314(var_1_object);
				if(var_182_bool != 0)
					var_0_object->AddReply(6949, 7656, 7655); //@t
				var_0_object->AddReply(6626, -1, 7295); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xb8d";
			EMIT "Pop(1)";
			EMIT "Push((int) 9272)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9273)";
			EMIT "Push((int) 10180)";
			EMIT "Push((int) 10179)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9280)";
			EMIT "Push((int) 10180)";
			EMIT "Push((int) 10186)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xb8d";
			EMIT "Pop(1)";
			EMIT "Push((int) 9281)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9282)";
			EMIT "Push((int) 10190)";
			EMIT "Push((int) 10189)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9292)";
			EMIT "Push((int) 10190)";
			EMIT "Push((int) 10199)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9293)";
			EMIT "Push((int) 10190)";
			EMIT "Push((int) 10201)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_35_string == 10190) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(9283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9284, 10192, 10191); //@t
				var_0_object->AddReply(9288, 10196, 10195); //@t
				return 0;
			}
			if(var_35_string == 10196) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(9289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9290, -1, 10197); //@t
				var_0_object->AddReply(9291, -1, 10198); //@t
				return 0;
			}
			if(var_35_string == 10192) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(9285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9286, -1, 10193); //@t
				var_0_object->AddReply(9287, -1, 10194); //@t
				return 0;
			}
			if(var_35_string == 10180) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(9274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9275, 10182, 10181); //@t
				var_0_object->AddReply(9279, -1, 10185); //@t
				return 0;
			}
			if(var_35_string == 10182) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(9276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9277, -1, 10183); //@t
				var_0_object->AddReply(9278, -1, 10184); //@t
				return 0;
			}
			if(var_35_string == 7656) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6951, 7957, 7657); //@t
				return 0;
			}
			if(var_35_string == 7957) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7221, 7962, 7958); //@t
				var_0_object->AddReply(7222, 7960, 7959); //@t
				return 0;
			}
			if(var_35_string == 7960) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7224, 10153, 7961); //@t
				return 0;
			}
			if(var_35_string == 7962) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7226, 7965, 7964); //@t
				bool var_275_bool;
				func_6338(var_1_object);
				if(var_275_bool != 0)
					var_0_object->AddReply(7228, 7967, 7966); //@t
				return 0;
			}
			if(var_35_string == 7967) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7230, 10155, 7968); //@t
				var_0_object->AddReply(7231, -1, 7969); //@t
				return 0;
			}
			if(var_35_string == 7965) {
				object var_296_object; object var_297_object;
				var_296_object = var_1_object;
				var_297_object = var_0_object;
				func_6161();
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7232, 7973, 7970); //@t
				bool var_305_bool;
				func_6698(var_1_object);
				if(!var_305_bool) //@nz
					var_0_object->AddReply(7233, 7972, 7971); //@t
				bool var_315_bool;
				func_6338(var_1_object);
				if(var_315_bool != 0)
					var_0_object->AddReply(7236, 7975, 7974); //@t
				return 0;
			}
			if(var_35_string == 7975) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7240, 10157, 7979); //@t
				var_0_object->AddReply(7241, -1, 7981); //@t
				return 0;
			}
			if(var_35_string == 7972) {
				object var_332_object; object var_333_object;
				var_332_object = var_1_object;
				var_333_object = var_0_object;
				func_5718();
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7239, 10157, 7977); //@t
				return 0;
			}
			if(var_35_string == 7973) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7238, -1, 7976); //@t
				return 0;
			}
			if(var_35_string == 7952) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6651, 7326, 7325); //@t
				var_0_object->AddReply(6672, 7954, 7352); //@t
				return 0;
			}
			if(var_35_string == 7954) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(7218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7219, 7326, 7955); //@t
				return 0;
			}
			if(var_35_string == 7326) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6653, 7328, 7327); //@t
				var_0_object->AddReply(6668, 7347, 7346); //@t
				return 0;
			}
			if(var_35_string == 7347) {
				object var_377_object; object var_378_object;
				var_377_object = var_1_object;
				var_378_object = var_0_object;
				func_5676();
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6669); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6670, 7332, 7348); //@t
				var_0_object->AddReply(6671, 7328, 7350); //@t
				return 0;
			}
			if(var_35_string == 7328) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6655, 7330, 7329); //@t
				var_0_object->AddReply(6666, 7332, 7342); //@t
				var_0_object->AddReply(6667, 7332, 7344); //@t
				return 0;
			}
			if(var_35_string == 7330) {
				object var_404_object; object var_405_object;
				var_404_object = var_1_object;
				var_405_object = var_0_object;
				func_5676();
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6657, 7332, 7331); //@t
				var_0_object->AddReply(6664, 7332, 7338); //@t
				var_0_object->AddReply(6665, 7332, 7340); //@t
				return 0;
			}
			if(var_35_string == 7332) {
				object var_419_object; object var_420_object;
				var_419_object = var_1_object;
				var_420_object = var_0_object;
				func_5647();
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6659, -1, 7333); //@t
				bool var_428_bool;
				func_6326(var_1_object);
				if(!var_428_bool) //@nz
					var_0_object->AddReply(6660, 7335, 7334); //@t
				var_0_object->AddReply(6663, -1, 7337); //@t
				return 0;
			}
			if(var_35_string == 7335) {
				func_2957(var_36_bool, "Neutral");
				var_0_object->SetMessage(6661); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6662, -1, 7336); //@t
				return 0;
			}
			var_3_string = true;
			bool var_448_bool;
			func_5645(var_448_bool);
			if(var_448_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9e";
	
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
			func_5541();
			if(var_36_bool == 11262) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5816();
			}
			if(var_36_bool == 11349) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5816();
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_5822();
				object var_53_object = var_1_object;
				func_5800(var_0_object);
			}
			if(var_36_bool == 11345) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_5816();
			}
			if(var_36_bool == 10775) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_6167();
			}
			if(var_36_bool == 11237) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_6173();
			}
			if(var_35_string == 10774) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(9781); //@t
				var_0_object->ClearReplies(); //@t
				bool var_119_bool = false;
				bool var_120_bool;
				func_6374(var_1_object);
				if(var_120_bool != 0) {
					bool var_128_bool;
					func_6386(var_1_object);
					if(var_128_bool != 0)
						var_119_bool = true;
				}
				if(var_119_bool != 0)
					var_0_object->AddReply(10216, 11263, 11262); //@t
				bool var_137_bool;
				func_6710(var_1_object);
				if(var_137_bool != 0)
					var_0_object->AddReply(9782, 10764, 10775); //@t
				bool var_146_bool;
				func_6722(var_1_object);
				if(var_146_bool != 0)
					var_0_object->AddReply(10191, 11238, 11237); //@t
				var_0_object->AddReply(15312, -1, 16550); //@t
				return 0;
			}
			if(var_35_string == 11238) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10295, 11351, 11350); //@t
				return 0;
			}
			if(var_35_string == 11351) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10297, 11353, 11352); //@t
				var_0_object->AddReply(10299, 11353, 11354); //@t
				return 0;
			}
			if(var_35_string == 11353) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10300, -1, 11356); //@t
				var_0_object->AddReply(10301, -1, 11357); //@t
				return 0;
			}
			if(var_35_string == 10764) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(9773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9774, 10766, 10765); //@t
				var_0_object->AddReply(9778, 10766, 10769); //@t
				var_0_object->AddReply(9779, 10766, 10771); //@t
				var_0_object->AddReply(9780, -1, 10773); //@t
				return 0;
			}
			if(var_35_string == 10766) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(9775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9776, -1, 10767); //@t
				var_0_object->AddReply(9777, -1, 10768); //@t
				return 0;
			}
			if(var_35_string == 11263) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10287, 11343, 11342); //@t
				return 0;
			}
			if(var_35_string == 11343) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10289, 11346, 11344); //@t
				var_0_object->AddReply(10290, -1, 11345); //@t
				return 0;
			}
			if(var_35_string == 11346) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10292, 11348, 11347); //@t
				return 0;
			}
			if(var_35_string == 11348) {
				func_3860(var_36_bool, "Neutral");
				var_0_object->SetMessage(10293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10294, -1, 11349); //@t
				return 0;
			}
			var_3_string = true;
			bool var_242_bool;
			func_5645(var_242_bool);
			if(var_242_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf25";
	
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
			func_5541();
			if(var_36_bool == 12557) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5844();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5850();
				object var_49_object = var_1_object;
				func_5856(var_0_object);
				object var_115_object = var_1_object;
				func_6179(var_0_object);
				object var_134_object = var_1_object;
				func_6201(var_0_object);
				object var_140_object = var_1_object;
				func_6190(var_0_object);
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_5670();
			}
			if(var_36_bool == 12559) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_5844();
			}
			if(var_36_bool == 12681) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_5850();
				object var_158_object = var_1_object;
				func_5856(var_0_object);
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_5670();
				object var_162_object = var_1_object;
				func_6179(var_0_object);
				object var_164_object = var_1_object;
				func_6190(var_0_object);
				object var_166_object = var_1_object;
				func_6201(var_0_object);
			}
			if(var_36_bool == 13068) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_5924();
			}
			if(var_35_string == 12541) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11344); //@t
				var_0_object->ClearReplies(); //@t
				bool var_192_bool = false;
				bool var_193_bool;
				func_6398(var_1_object);
				if(var_193_bool != 0) {
					bool var_199_bool;
					func_6410(var_1_object);
					if(var_199_bool != 0)
						var_192_bool = true;
				}
				if(var_192_bool != 0)
					var_0_object->AddReply(11346, 12544, 12543); //@t
				bool var_208_bool = false;
				bool var_209_bool;
				func_6410(var_1_object);
				if(var_209_bool != 0) {
					bool var_211_bool;
					func_6422(var_1_object);
					if(!var_211_bool) //@nz
						var_208_bool = true;
				}
				if(var_208_bool != 0)
					var_0_object->AddReply(11473, 12680, 12679); //@t
				bool var_221_bool = false;
				bool var_222_bool;
				func_6446(var_1_object);
				if(var_222_bool != 0) {
					bool var_228_bool;
					func_6434(var_1_object);
					if(var_228_bool != 0)
						var_221_bool = true;
				}
				if(var_221_bool != 0)
					var_0_object->AddReply(11853, 13067, 13066); //@t
				var_0_object->AddReply(11345, -1, 12542); //@t
				return 0;
			}
			if(var_35_string == 13067) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11855, -1, 13068); //@t
				return 0;
			}
			if(var_35_string == 12680) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11475, -1, 12681); //@t
				return 0;
			}
			if(var_35_string == 12544) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11348, 12550, 12545); //@t
				var_0_object->AddReply(11367, 12566, 12565); //@t
				return 0;
			}
			if(var_35_string == 12566) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11369, 12614, 12567); //@t
				var_0_object->AddReply(11419, 12554, 12616); //@t
				return 0;
			}
			if(var_35_string == 12614) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11417); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_35_string == 12550) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11354, 12552, 12551); //@t
				var_0_object->AddReply(11365, 12556, 12562); //@t
				return 0;
			}
			if(var_35_string == 12552) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11356, 12554, 12553); //@t
				return 0;
			}
			if(var_35_string == 12554) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11358, 12556, 12555); //@t
				var_0_object->AddReply(11421, 12620, 12619); //@t
				return 0;
			}
			if(var_35_string == 12620) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11423, 12624, 12621); //@t
				var_0_object->AddReply(11424, 12556, 12622); //@t
				return 0;
			}
			if(var_35_string == 12624) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11426, 12626, 12625); //@t
				return 0;
			}
			if(var_35_string == 12626) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11428, 12556, 12627); //@t
				return 0;
			}
			if(var_35_string == 12556) {
				func_4373(var_36_bool, "Neutral");
				var_0_object->SetMessage(11359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11360, -1, 12557); //@t
				var_0_object->AddReply(11362, -1, 12559); //@t
				return 0;
			}
			var_3_string = true;
			bool var_339_bool;
			func_5645(var_339_bool);
			if(var_339_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1126";
	
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
			func_5541();
			if(var_36_int == 13112) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5930();
			}
			if(var_36_int == 13122) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_5974();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_6027();
			}
			if(var_36_int == 13123) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_6212();
			}
			if(var_35_int == 13085) {
				bool var_161_bool;
				func_6458(var_1_object);
				if(var_161_bool != 0) {
					func_4977(var_36_int, "Neutral");
					var_0_object->SetMessage(11872); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11873, 13087, 13086); //@t
					return 0;
				}
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11897); //@t
				var_0_object->ClearReplies(); //@t
				bool var_188_bool;
				func_6470(var_1_object);
				if(var_188_bool != 0)
					var_0_object->AddReply(11898, 13115, 13114); //@t
				bool var_197_bool = false;
				bool var_198_bool;
				func_6494(var_1_object);
				if(var_198_bool != 0) {
					bool var_204_bool;
					func_6734(var_1_object);
					if(var_204_bool != 0)
						var_197_bool = true;
				}
				if(var_197_bool != 0)
					var_0_object->AddReply(11907, 13124, 13123); //@t
				var_0_object->AddReply(11915, -1, 13131); //@t
				return 0;
			}
			if(var_35_int == 13124) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11909, 13126, 13125); //@t
				return 0;
			}
			if(var_35_int == 13126) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11911, 13128, 13127); //@t
				return 0;
			}
			if(var_35_int == 13128) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11913, -1, 13129); //@t
				var_0_object->AddReply(11914, -1, 13130); //@t
				return 0;
			}
			if(var_35_int == 13115) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11900, 13117, 13116); //@t
				return 0;
			}
			if(var_35_int == 13117) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11902, 13119, 13118); //@t
				return 0;
			}
			if(var_35_int == 13119) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11904, 13121, 13120); //@t
				return 0;
			}
			if(var_35_int == 13121) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11906, -1, 13122); //@t
				return 0;
			}
			if(var_35_int == 13087) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11875, 13089, 13088); //@t
				return 0;
			}
			if(var_35_int == 13089) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11877, 13091, 13090); //@t
				return 0;
			}
			if(var_35_int == 13091) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11878); //@t
				var_0_object->ClearReplies(); //@t
				bool var_286_bool;
				func_6338(var_1_object);
				if(var_286_bool != 0)
					var_0_object->AddReply(11879, 13093, 13092); //@t
				var_0_object->AddReply(11888, 13093, 13101); //@t
				return 0;
			}
			if(var_35_int == 13093) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11881, 13095, 13094); //@t
				return 0;
			}
			if(var_35_int == 13095) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11883, 13097, 13096); //@t
				var_0_object->AddReply(11889, 13103, 13102); //@t
				return 0;
			}
			if(var_35_int == 13103) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11891, 13097, 13104); //@t
				return 0;
			}
			if(var_35_int == 13097) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11885, 13099, 13098); //@t
				return 0;
			}
			if(var_35_int == 13099) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11887, 13110, 13100); //@t
				var_0_object->AddReply(11892, 13108, 13107); //@t
				return 0;
			}
			if(var_35_int == 13108) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11894, 13110, 13109); //@t
				return 0;
			}
			if(var_35_int == 13110) {
				func_4977(var_36_int, "Neutral");
				var_0_object->SetMessage(11895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11896, -1, 13112); //@t
				return 0;
			}
			var_3_string = true;
			bool var_353_bool;
			func_5645(var_353_bool);
			if(var_353_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1382";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_5632(bool var_806_bool)
{
	func_5523("No");
	bool var_808_bool;
	@lshWaitForAnimEnd(var_808_bool);
	var_808_bool = var_806_bool;
}


// @pe
void func_6149(void)
{
	@SetVariable("ood6Anna3", 1);
}


// @pe
void func_6662(bool var_229_bool)
{
	int var_231_int;
	func_5558(var_231_int, "ood6Anna3");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_5641(int var_91_int)
{
	var_91_int = 2856;
}


void func_5643(string var_92_string)
{
	var_92_string = "ui/NPC_Anna.png";
}


// @pe
void func_6155(void)
{
	@SetVariable("KnowLaska", 1);
}


void func_5645(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_5647(void)
{
	@SetVariable("KnowKapella", 1);
}


// @pe
void func_6161(void)
{
	@SetVariable("KnowMishka", 1);
}


// @pe
void func_6674(bool var_357_bool)
{
	int var_359_int;
	func_5558(var_359_int, "KnowJulia");
	if(var_359_int == 1)
		var_357_bool = true;
	var_357_bool = false;
}


// @pe
void func_5653(object var_146_object)
{
	@Trace("money100 is given");
	object var_149_object;
	var_146_object = var_149_object;
	func_5439(var_149_object, "money", 100);
}


// @pe
void func_6167(void)
{
	@SetVariable("ood3Anna2", 1);
}


// @pe
void func_6173(void)
{
	@SetVariable("ood3Anna3", 1);
}


// @pe
void func_6686(bool var_430_bool)
{
	int var_432_int;
	func_5558(var_432_int, "KnowLaska");
	if(var_432_int == 1)
		var_430_bool = true;
	var_430_bool = false;
}


// @pe
void func_5664(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_6179(object var_115_object)
{
	@Trace("beta_pills is given");
	object var_118_object;
	var_115_object = var_118_object;
	func_5587(var_118_object, "beta_pills", 1);
}


// @pe
void func_5670(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_6698(bool var_305_bool)
{
	int var_307_int;
	func_5558(var_307_int, "KnowMishka");
	if(var_307_int == 1)
		var_305_bool = true;
	var_305_bool = false;
}


// @pe
void func_5676(void)
{
	@SetVariable("KnowShabnak", 1);
}


// @pe
void func_6190(object var_140_object)
{
	@Trace("gamma_pills is given");
	object var_143_object;
	var_140_object = var_143_object;
	func_5587(var_143_object, "gamma_pills", 1);
}


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_5463(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_5641(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_5643(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_6862(var_93_int);
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
	func_5519();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5682(void)
{
	@SetVariable("ood1Anna7", 1);
}


// @pe
void func_6710(bool var_137_bool)
{
	int var_139_int;
	func_5558(var_139_int, "ood3Anna2");
	if(var_139_int == 0) {
		var_137_bool = true;
		return 0;
	}
	var_137_bool = false;
}


// @pe
void func_5688(void)
{
	@SetVariable("ood1Anna8", 1);
}


// @pe
void func_6201(object var_134_object)
{
	@Trace("delta_pills is given");
	object var_137_object;
	var_134_object = var_137_object;
	func_5587(var_137_object, "delta_pills", 1);
}


// @pe
void func_5694(void)
{
	@SetVariable("ood1Anna9", 1);
}


// @pe
void func_6722(bool var_146_bool)
{
	int var_148_int;
	func_5558(var_148_int, "ood3Anna3");
	if(var_148_int == 0) {
		var_146_bool = true;
		return 0;
	}
	var_146_bool = false;
}


// @pe
void func_5700(void)
{
	@SetVariable("ood1Anna10", 1);
}


// @pe
void func_6212(void)
{
	@SetVariable("ood5Anna1", 1);
}


// @pe
void func_6218(bool var_316_bool)
{
	int var_318_int;
	func_5558(var_318_int, "d1q02");
	if(var_318_int == 1000)
		var_316_bool = true;
	var_316_bool = false;
}


// @pe
void func_5706(void)
{
	@SetVariable("ood2Anna1", 1);
}


// @pe
void func_6734(bool var_204_bool)
{
	int var_206_int;
	func_5558(var_206_int, "ood5Anna1");
	if(var_206_int == 0) {
		var_204_bool = true;
		return 0;
	}
	var_204_bool = false;
}


// @pe
void func_5712(void)
{
	@SetVariable("ood2Anna2", 1);
}


// @pe
void func_6230(bool var_264_bool)
{
	int var_266_int;
	func_5558(var_266_int, "d1q02");
	if(var_266_int == 1)
		var_264_bool = true;
	var_264_bool = false;
}


// @pe
void func_5718(void)
{
	@SetVariable("KnowPochka", 1);
}


// @pe
void func_600(object var_2_object, string var_158_string)
{
	bool var_159_bool;
	func_5645(var_159_bool);
	if(!var_159_bool) //@nz
		return 0;
	if(var_158_string == var_2_object)
		return 0;
	string var_162_string;
	func_5523(var_162_string);
	var_2_object = var_162_string;
}


// @pe
void func_6746(bool var_382_bool)
{
	int var_384_int;
	func_5558(var_384_int, "KnowOspina");
	if(var_384_int == 1)
		var_382_bool = true;
	var_382_bool = false;
}


void func_5724(void)
{
	@SetVariable("d2q01", 2);
	object var_51_object;
	func_6812(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_5612(var_62_float);
	var_48_object->AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", 1, 11388, var_62_float);
	func_6895();
}
EMIT "Stack[-1] = 0";


// @pe
void func_6242(bool var_347_bool)
{
	int var_349_int;
	func_5558(var_349_int, "d1q01FirstGeorgVisit");
	if(var_349_int == 1)
		var_347_bool = true;
	var_347_bool = false;
}


// @pe
void func_6758(bool var_414_bool)
{
	int var_416_int;
	func_5558(var_416_int, "KnowStamatins");
	if(var_416_int == 1)
		var_414_bool = true;
	var_414_bool = false;
}


void func_4199(object var_0_object, int var_525_int, object var_526_object)
{
	var_0_object = var_526_object;
	bool var_536_bool; object var_537_object;
	var_526_object = var_537_object;
	func_5463(var_536_bool, var_537_object);
	if(!var_536_bool) { //@nz
		var_525_int = -2;
		return 8;
	}
	object var_532_object;
	@CreateDialog(var_532_object);
	int var_539_int;
	func_5641(var_539_int);
	var_532_object->SetNPCName(var_539_int);
	string var_540_string;
	func_5643(var_540_string);
	var_532_object->SetPhoto(var_540_string);
	int var_541_int;
	func_6862(var_541_int);
	var_532_object->SetPlayerName(var_541_int);
	bool var_533_bool;
	@IsOverrideActive(var_533_bool);
	if(var_533_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	@DoDialog(var_532_object);
	object var_543_object; object var_544_object;
	var_526_object = var_543_object;
	var_532_object = var_544_object;
	TaskCall(13);
	func_4262(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object);
	TaskReturn();
	bool var_535_bool;
	var_532_object->IsDialogEnd(var_535_bool);
	
	for(;;) {
		var_612_bool = !var_535_bool; //@nz
		if(var_612_bool == 0) goto Label_4251;
		@sync();
		var_532_object->IsDialogEnd(var_535_bool);
	}
	
Label_4251:
	object var_613_object;
	var_526_object = var_613_object;
	func_5519();
	@StopDialog(var_532_object);
	var_532_object->GetReturnValue(-1);
	int var_534_int = var_525_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6254(bool var_388_bool)
{
	int var_390_int;
	func_5558(var_390_int, "ood1Anna7");
	if(var_390_int == 0) {
		var_388_bool = true;
		return 0;
	}
	var_388_bool = false;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_102_object;
		var_110_object = var_0_object;
		func_6123();
		func_175(var_103_object, "Neutral");
		var_0_object->SetMessage(221); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(222, 263, 261); //@t
		var_0_object->AddReply(223, 266, 262); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_135_bool;
	func_5645(var_135_bool);
	if(var_135_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
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


void func_6770(object var_81_object)
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
void func_5747(void)
{
	@SetVariable("KnowZemlja", 1);
}


void func_3705(object var_0_object, int var_445_int, object var_446_object)
{
	var_0_object = var_446_object;
	bool var_456_bool; object var_457_object;
	var_446_object = var_457_object;
	func_5463(var_456_bool, var_457_object);
	if(!var_456_bool) { //@nz
		var_445_int = -2;
		return 8;
	}
	object var_452_object;
	@CreateDialog(var_452_object);
	int var_459_int;
	func_5641(var_459_int);
	var_452_object->SetNPCName(var_459_int);
	string var_460_string;
	func_5643(var_460_string);
	var_452_object->SetPhoto(var_460_string);
	int var_461_int;
	func_6862(var_461_int);
	var_452_object->SetPlayerName(var_461_int);
	bool var_453_bool;
	@IsOverrideActive(var_453_bool);
	if(var_453_bool != 0) {
		var_445_int = -2;
		return 8;
	}
	@DoDialog(var_452_object);
	object var_463_object; object var_464_object;
	var_446_object = var_463_object;
	var_452_object = var_464_object;
	TaskCall(11);
	func_3768(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object);
	TaskReturn();
	bool var_455_bool;
	var_452_object->IsDialogEnd(var_455_bool);
	
	for(;;) {
		var_521_bool = !var_455_bool; //@nz
		if(var_521_bool == 0) goto Label_3757;
		@sync();
		var_452_object->IsDialogEnd(var_455_bool);
	}
	
Label_3757:
	object var_522_object;
	var_446_object = var_522_object;
	func_5519();
	@StopDialog(var_452_object);
	var_452_object->GetReturnValue(-1);
	int var_454_int = var_445_int;
}
EMIT "Stack[-4] = 0";


void func_5753(void)
{
	object var_49_object;
	func_6812(var_49_object);
	object var_48_object;
	var_49_object = var_48_object;
	float var_60_float;
	func_5612(var_60_float);
	var_48_object->AddMark("d1q02AnnaGotoLaska", "pt_map_laska", 0, 8635, var_60_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6266(bool var_404_bool)
{
	int var_406_int;
	func_5558(var_406_int, "ood1Anna8");
	if(var_406_int == 0) {
		var_404_bool = true;
		return 0;
	}
	var_404_bool = false;
}


void func_6783(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_6770(var_81_object);
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


// @pe
void func_6278(bool var_420_bool)
{
	int var_422_int;
	func_5558(var_422_int, "ood1Anna9");
	if(var_422_int == 0) {
		var_420_bool = true;
		return 0;
	}
	var_420_bool = false;
}


// @pe
void func_5769(object var_64_object)
{
	object var_68_object;
	func_6812(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	func_6829(var_65_object, "pt_map_laska", (float)2);
	object var_88_object;
	func_6812(var_88_object);
	var_64_object->ShowMap(var_88_object);
}


// @pe
void func_6290(bool var_436_bool)
{
	int var_438_int;
	func_5558(var_438_int, "ood1Anna10");
	if(var_438_int == 0) {
		var_436_bool = true;
		return 0;
	}
	var_436_bool = false;
}


// @pe
void func_5785(void)
{
	@SetVariable("d1q02", 2);
	func_6879();
}


void func_6812(object var_47_object)
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
void func_6302(bool var_165_bool)
{
	int var_167_int;
	func_5558(var_167_int, "ood2Anna1");
	if(var_167_int == 0) {
		var_165_bool = true;
		return 0;
	}
	var_165_bool = false;
}


// @pe
void func_5794(void)
{
	@SetVariable("KnowNevod", 1);
}


// @pe
void func_4262(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_543_object, object var_544_object)
{
	var_0_object = var_544_object;
	var_1_object = var_543_object;
	var_3_object = false;
	if(1 != 0) {
		func_4373(var_544_object, "Neutral");
		var_0_object->SetMessage(11344); //@t
		var_0_object->ClearReplies(); //@t
		bool var_556_bool = false;
		bool var_557_bool;
		func_6398(var_1_object);
		if(var_557_bool != 0) {
			bool var_563_bool;
			func_6410(var_1_object);
			if(var_563_bool != 0)
				var_556_bool = true;
		}
		if(var_556_bool != 0)
			var_0_object->AddReply(11346, 12544, 12543); //@t
		bool var_572_bool = false;
		bool var_573_bool;
		func_6410(var_1_object);
		if(var_573_bool != 0) {
			bool var_575_bool;
			func_6422(var_1_object);
			if(!var_575_bool) //@nz
				var_572_bool = true;
		}
		if(var_572_bool != 0)
			var_0_object->AddReply(11473, 12680, 12679); //@t
		bool var_585_bool = false;
		bool var_586_bool;
		func_6446(var_1_object);
		if(var_586_bool != 0) {
			bool var_592_bool;
			func_6434(var_1_object);
			if(var_592_bool != 0)
				var_585_bool = true;
		}
		if(var_585_bool != 0)
			var_0_object->AddReply(11853, 13067, 13066); //@t
		var_0_object->AddReply(11345, -1, 12542); //@t
		goto Label_4343;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10aa";
	}
Label_4343:
	bool var_604_bool;
	func_5645(var_604_bool);
	if(var_604_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4372;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4372:
		return 0;

	}
	
}


// @pe
void func_5800(object var_54_object)
{
	object var_58_object;
	func_6812(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	func_6829(var_55_object, "pt_map_bigvlad", (float)2);
	object var_84_object;
	func_6812(var_84_object);
	var_54_object->ShowMap(var_84_object);
}


// @pe
void func_6314(bool var_182_bool)
{
	int var_184_int;
	func_5558(var_184_int, "ood2Anna2");
	if(var_184_int == 0) {
		var_182_bool = true;
		return 0;
	}
	var_182_bool = false;
}


void func_6829(object var_91_object, string var_92_string, float var_93_float)
{
	object var_101_object;
	@GetMainOutdoorScene(var_101_object);
	if(var_101_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_99_cvector;
	cvector var_100_cvector;
	bool var_102_bool;
	var_101_object->GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector);
	if(!var_102_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_92_string) + " doesnt exist");
	var_101_object->GetMap(var_91_object);
	if(var_91_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_112_float = GetByIndex(var_99_cvector, 0);
	var_113_float = GetByIndex(var_99_cvector, 2);
	var_91_object->SetMapParams(var_112_float, var_113_float, var_93_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_175(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_5645(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_5523(var_49_string);
	var_2_object = var_49_string;
}


// @pe
void func_6650(bool var_222_bool)
{
	int var_224_int;
	func_5558(var_224_int, "d6q01");
	if(var_224_int == -1)
		var_222_bool = true;
	var_222_bool = false;
}


// @pe
void func_6326(bool var_428_bool)
{
	int var_430_int;
	func_5558(var_430_int, "KnowSgustok");
	if(var_430_int == 1)
		var_428_bool = true;
	var_428_bool = false;
}


// @pe
void func_3768(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_463_object, object var_464_object)
{
	var_0_object = var_464_object;
	var_1_object = var_463_object;
	var_3_object = false;
	if(1 != 0) {
		func_3860(var_464_object, "Neutral");
		var_0_object->SetMessage(9781); //@t
		var_0_object->ClearReplies(); //@t
		bool var_476_bool = false;
		bool var_477_bool;
		func_6374(var_1_object);
		if(var_477_bool != 0) {
			bool var_483_bool;
			func_6386(var_1_object);
			if(var_483_bool != 0)
				var_476_bool = true;
		}
		if(var_476_bool != 0)
			var_0_object->AddReply(10216, 11263, 11262); //@t
		bool var_492_bool;
		func_6710(var_1_object);
		if(var_492_bool != 0)
			var_0_object->AddReply(9782, 10764, 10775); //@t
		bool var_501_bool;
		func_6722(var_1_object);
		if(var_501_bool != 0)
			var_0_object->AddReply(10191, 11238, 11237); //@t
		var_0_object->AddReply(15312, -1, 16550); //@t
		goto Label_3830;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xebc";
	}
Label_3830:
	bool var_513_bool;
	func_5645(var_513_bool);
	if(var_513_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3859;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3859:
		return 0;

	}
	
}


// @pe
void func_5816(void)
{
	@SetVariable("ood3Anna1", 1);
}


// @pe
void func_5822(void)
{
	@SetVariable("d3q02", 6);
}


// @pe
void func_6338(bool var_286_bool)
{
	int var_288_int;
	func_5558(var_288_int, "KnowDiamAce");
	if(var_288_int == 1)
		var_286_bool = true;
	var_286_bool = false;
}


// @pe
void func_5828(object var_91_object)
{
	object var_95_object;
	func_6812(var_95_object);
	object var_92_object;
	var_95_object = var_92_object;
	func_6829(var_92_object, "pt_map_kapella", (float)2);
	object var_115_object;
	func_6812(var_115_object);
	var_91_object->ShowMap(var_115_object);
}


void func_4812(object var_0_object, int var_616_int, object var_617_object)
{
	var_0_object = var_617_object;
	bool var_627_bool; object var_628_object;
	var_617_object = var_628_object;
	func_5463(var_627_bool, var_628_object);
	if(!var_627_bool) { //@nz
		var_616_int = -2;
		return 8;
	}
	object var_623_object;
	@CreateDialog(var_623_object);
	int var_630_int;
	func_5641(var_630_int);
	var_623_object->SetNPCName(var_630_int);
	string var_631_string;
	func_5643(var_631_string);
	var_623_object->SetPhoto(var_631_string);
	int var_632_int;
	func_6862(var_632_int);
	var_623_object->SetPlayerName(var_632_int);
	bool var_624_bool;
	@IsOverrideActive(var_624_bool);
	if(var_624_bool != 0) {
		var_616_int = -2;
		return 8;
	}
	@DoDialog(var_623_object);
	object var_634_object; object var_635_object;
	var_617_object = var_634_object;
	var_623_object = var_635_object;
	TaskCall(15);
	func_4875(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object);
	TaskReturn();
	bool var_626_bool;
	var_623_object->IsDialogEnd(var_626_bool);
	
	for(;;) {
		var_694_bool = !var_626_bool; //@nz
		if(var_694_bool == 0) goto Label_4864;
		@sync();
		var_623_object->IsDialogEnd(var_626_bool);
	}
	
Label_4864:
	object var_695_object;
	var_617_object = var_695_object;
	func_5519();
	@StopDialog(var_623_object);
	var_623_object->GetReturnValue(-1);
	int var_625_int = var_616_int;
}
EMIT "Stack[-4] = 0";


void func_6862(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x1add";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_6350(bool var_173_bool)
{
	int var_175_int;
	func_5558(var_175_int, "d2q01");
	if(var_175_int == 1)
		var_173_bool = true;
	var_173_bool = false;
}


void func_2767(object var_0_object, int var_374_int, object var_375_object)
{
	var_0_object = var_375_object;
	bool var_385_bool; object var_386_object;
	var_375_object = var_386_object;
	func_5463(var_385_bool, var_386_object);
	if(!var_385_bool) { //@nz
		var_374_int = -2;
		return 8;
	}
	object var_381_object;
	@CreateDialog(var_381_object);
	int var_388_int;
	func_5641(var_388_int);
	var_381_object->SetNPCName(var_388_int);
	string var_389_string;
	func_5643(var_389_string);
	var_381_object->SetPhoto(var_389_string);
	int var_390_int;
	func_6862(var_390_int);
	var_381_object->SetPlayerName(var_390_int);
	bool var_382_bool;
	@IsOverrideActive(var_382_bool);
	if(var_382_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	@DoDialog(var_381_object);
	object var_392_object; object var_393_object;
	var_375_object = var_392_object;
	var_381_object = var_393_object;
	TaskCall(9);
	func_2830(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object);
	TaskReturn();
	bool var_384_bool;
	var_381_object->IsDialogEnd(var_384_bool);
	
	for(;;) {
		var_441_bool = !var_384_bool; //@nz
		if(var_441_bool == 0) goto Label_2819;
		@sync();
		var_381_object->IsDialogEnd(var_384_bool);
	}
	
Label_2819:
	object var_442_object;
	var_375_object = var_442_object;
	func_5519();
	@StopDialog(var_381_object);
	var_381_object->GetReturnValue(-1);
	int var_383_int = var_374_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5844(void)
{
	@SetVariable("ood4Anna1", 1);
}


// @pe
void func_6362(bool var_295_bool)
{
	int var_297_int;
	func_5558(var_297_int, "d1q02");
	if(var_297_int == 2)
		var_295_bool = true;
	var_295_bool = false;
}


// @pe
void func_5850(void)
{
	@SetVariable("d4q02AnnaGivesMedcine", 1);
}


void func_6879(void)
{
	@Trace("Adding diary entry");
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 35, 2, 12117);
	bool var_99_bool; object var_100_object;
	var_94_object = var_100_object;
	func_6783(var_99_bool, var_100_object, 7);
}
EMIT "Stack[-1] = 0";


void func_5856(object var_50_object)
{
	object var_52_object;
	bool var_53_bool = false;
	bool var_54_bool = false;
	int var_55_int;
	func_5558(var_55_int, "d4q02AnnaGivesMedcine");
	if(var_55_int == 1) {
		int var_61_int;
		func_5558(var_61_int, "d4q02JuliaGivesMedcine");
		if(var_61_int == 1)
			var_54_bool = true;
	}
	if(var_54_bool != 0) {
		int var_65_int;
		func_5558(var_65_int, "d4q02LaraGivesMedcine");
		if(var_65_int == 1)
			var_53_bool = true;
	}
	if(var_53_bool != 0) {
		@SetVariable("d4q02", 2);
		object var_71_object;
		func_6812(var_71_object);
		var_71_object = var_52_object;
		float var_82_float;
		func_5612(var_82_float);
		var_52_object->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, var_82_float);
		bool var_85_bool;
		func_5600(var_85_bool, "quest_d4_02", "birdmask");
		object var_91_object;
		object var_94_object;
		func_6812(var_94_object);
		var_94_object = var_91_object;
		func_6829(var_91_object, "pt_d4q02_birdmask", (float)2);
		object var_114_object;
		func_6812(var_114_object);
		var_50_object->ShowMap(var_114_object);
		var_52_object = null;
	}
}


// @pe
void func_6374(bool var_120_bool)
{
	int var_122_int;
	func_5558(var_122_int, "ood3Anna1");
	if(var_122_int == 0) {
		var_120_bool = true;
		return 0;
	}
	var_120_bool = false;
}


void func_6895(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 51, 1, 12133);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_6783(var_71_bool, var_72_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6386(bool var_128_bool)
{
	int var_130_int;
	func_5558(var_130_int, "d3q02");
	if(var_130_int == 5)
		var_128_bool = true;
	var_128_bool = false;
}


// @pe
void func_6398(bool var_193_bool)
{
	int var_195_int;
	func_5558(var_195_int, "ood4Anna1");
	if(var_195_int == 0) {
		var_193_bool = true;
		return 0;
	}
	var_193_bool = false;
}


void func_6911(void)
{
	@Trace("Adding diary entry");
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 148, 2, 15354);
	bool var_72_bool; object var_73_object;
	var_67_object = var_73_object;
	func_6783(var_72_bool, var_73_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1282(object var_2_object, string var_270_string)
{
	bool var_271_bool;
	func_5645(var_271_bool);
	if(!var_271_bool) //@nz
		return 0;
	if(var_270_string == var_2_object)
		return 0;
	string var_274_string;
	func_5523(var_274_string);
	var_2_object = var_274_string;
}


// @pe
void func_6410(bool var_199_bool)
{
	int var_201_int;
	func_5558(var_201_int, "d4q02");
	if(var_201_int == 1)
		var_199_bool = true;
	var_199_bool = false;
}


// @pe
void func_4875(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_634_object, object var_635_object)
{
	var_0_object = var_635_object;
	var_1_object = var_634_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_641_bool;
		func_6458(var_1_object);
		if(var_641_bool != 0) {
			func_4977(var_635_object, "Neutral");
			var_0_object->SetMessage(11872); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11873, 13087, 13086); //@t
		} else {
					func_4977(var_635_object, "Neutral");
					var_0_object->SetMessage(11897); //@t
					var_0_object->ClearReplies(); //@t
					bool var_666_bool;
					func_6470(var_1_object);
					if(var_666_bool != 0)
						var_0_object->AddReply(11898, 13115, 13114); //@t
					bool var_675_bool = false;
					bool var_676_bool;
					func_6494(var_1_object);
					if(var_676_bool != 0) {
						bool var_682_bool;
						func_6734(var_1_object);
						if(var_682_bool != 0)
							var_675_bool = true;
					}
					if(var_675_bool != 0)
						var_0_object->AddReply(11907, 13124, 13123); //@t
					var_0_object->AddReply(11915, -1, 13131); //@t
		}
	}
	for(;;) {
		bool var_656_bool;
		func_5645(var_656_bool);
		if(var_656_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5523(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4976;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4976:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x130f";


// @pe
void func_2830(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_392_object, object var_393_object)
{
	var_0_object = var_393_object;
	var_1_object = var_392_object;
	var_3_object = false;
	if(1 != 0) {
		func_2957(var_393_object, "Neutral");
		var_0_object->SetMessage(6624); //@t
		var_0_object->ClearReplies(); //@t
		bool var_405_bool = false;
		bool var_406_bool;
		func_6302(var_1_object);
		if(var_406_bool != 0) {
			bool var_412_bool;
			func_6350(var_1_object);
			if(var_412_bool != 0)
				var_405_bool = true;
		}
		if(var_405_bool != 0)
			var_0_object->AddReply(7217, 7952, 7953); //@t
		bool var_421_bool;
		func_6314(var_1_object);
		if(var_421_bool != 0)
			var_0_object->AddReply(6949, 7656, 7655); //@t
		var_0_object->AddReply(6626, -1, 7295); //@t
		goto Label_2927;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xb8d";
	EMIT "Pop(1)";
	EMIT "Push((int) 9272)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9273)";
	EMIT "Push((int) 10180)";
	EMIT "Push((int) 10179)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9280)";
	EMIT "Push((int) 10180)";
	EMIT "Push((int) 10186)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xb6f";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xb8d";
	EMIT "Pop(1)";
	EMIT "Push((int) 9281)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9282)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10189)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9292)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10199)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9293)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10201)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xb6f";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb12";
	}
Label_2927:
	bool var_433_bool;
	func_5645(var_433_bool);
	if(var_433_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2956;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2956:
		return 0;

	}
	
}


void func_6927(void)
{
	@Trace("Adding diary entry");
	object var_92_object;
	@CreateDiaryEntry(var_92_object, 149, 2, 15355);
	bool var_97_bool; object var_98_object;
	var_92_object = var_98_object;
	func_6783(var_97_bool, var_98_object, 148);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3860(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_5645(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string;
	func_5523(var_107_string);
	var_2_object = var_107_string;
}


// @pe
void func_4373(object var_2_object, string var_176_string)
{
	bool var_177_bool;
	func_5645(var_177_bool);
	if(!var_177_bool) //@nz
		return 0;
	if(var_176_string == var_2_object)
		return 0;
	string var_180_string;
	func_5523(var_180_string);
	var_2_object = var_180_string;
}


// @pe
void func_6422(bool var_211_bool)
{
	int var_213_int;
	func_5558(var_213_int, "d4q02AnnaGivesMedcine");
	if(var_213_int == 1)
		var_211_bool = true;
	var_211_bool = false;
}


void func_6943(void)
{
	@Trace("Adding diary entry");
	object var_129_object;
	@CreateDiaryEntry(var_129_object, 151, 2, 15357);
	bool var_134_bool; object var_135_object;
	var_129_object = var_135_object;
	func_6783(var_134_bool, var_135_object, 148);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6434(bool var_228_bool)
{
	int var_230_int;
	func_5558(var_230_int, "d4q02");
	if(var_230_int == 1000)
		var_228_bool = true;
	var_228_bool = false;
}


// @pe
void func_5924(void)
{
	@SetVariable("ood4Anna2", 1);
}


void func_5930(void)
{
	@SetVariable("d5q02", 1);
	object var_47_object;
	func_6812(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	float var_58_float;
	func_5612(var_58_float);
	var_44_object->AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", 0, 15360, var_58_float);
	float var_65_float;
	func_5612(var_65_float);
	var_44_object->AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", 0, 15361, var_65_float);
	func_6911();
	func_6927();
	object var_100_object;
	func_5563(var_100_object, "quest_d5_02");
	bool var_108_bool;
	func_5600(var_108_bool, "quest_d5_02", "place_gorbun");
}
EMIT "Stack[-1] = 0";


// @pe
void func_6446(bool var_222_bool)
{
	int var_224_int;
	func_5558(var_224_int, "ood4Anna2");
	if(var_224_int == 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


void func_6959(void)
{
	@Trace("Adding diary entry");
	object var_121_object;
	@CreateDiaryEntry(var_121_object, 159, 1, 15392);
	bool var_126_bool; object var_127_object;
	var_121_object = var_127_object;
	func_6783(var_126_bool, var_127_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6458(bool var_161_bool)
{
	int var_163_int;
	func_5558(var_163_int, "d5q02");
	if(var_163_int == 0) {
		var_161_bool = true;
		return 0;
	}
	var_161_bool = false;
}


void func_5439(object var_149_object, string var_150_string, int var_151_int)
{
	int var_153_int;
	var_149_object->GetProperty(var_150_string, var_153_int);
	var_149_object->SetProperty(var_150_string, (var_153_int + var_151_int));
}


void func_6975(void)
{
	@Trace("Adding diary entry");
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 116, 1, 13739);
	bool var_93_bool; object var_94_object;
	var_88_object = var_94_object;
	func_6783(var_93_bool, var_94_object, 111);
}
EMIT "Stack[-1] = 0";


void func_5446(bool var_36_bool, object var_37_object)
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
void func_6470(bool var_188_bool)
{
	int var_190_int;
	func_5558(var_190_int, "d5q02");
	if(var_190_int == 2)
		var_188_bool = true;
	var_188_bool = false;
}


void func_6991(void)
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_5458(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_6995(object var_36_object)
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
	func_5626(var_146_bool, 1);
	if(var_146_bool != 0) {
		int var_154_int; object var_155_object;
		var_36_object = var_155_object;
		TaskCall(6);
		func_929(var_156_object, var_154_int, var_155_object);
		TaskReturn();
		return 0;
	}
	bool var_372_bool;
	func_5626(var_372_bool, 2);
	if(var_372_bool != 0) {
		int var_374_int; object var_375_object;
		var_36_object = var_375_object;
		TaskCall(8);
		func_2767(var_376_object, var_374_int, var_375_object);
		TaskReturn();
		return 0;
	}
	bool var_443_bool;
	func_5626(var_443_bool, 3);
	if(var_443_bool != 0) {
		int var_445_int; object var_446_object;
		var_36_object = var_446_object;
		TaskCall(10);
		func_3705(var_447_object, var_445_int, var_446_object);
		TaskReturn();
		return 0;
	}
	bool var_523_bool;
	func_5626(var_523_bool, 4);
	if(var_523_bool != 0) {
		int var_525_int; object var_526_object;
		var_36_object = var_526_object;
		TaskCall(12);
		func_4199(var_527_object, var_525_int, var_526_object);
		TaskReturn();
		return 0;
	}
	bool var_614_bool;
	func_5626(var_614_bool, 5);
	if(var_614_bool != 0) {
		int var_616_int; object var_617_object;
		var_36_object = var_617_object;
		TaskCall(14);
		func_4812(var_618_object, var_616_int, var_617_object);
		TaskReturn();
		return 0;
	}
	bool var_696_bool;
	func_5626(var_696_bool, 6);
	if(var_696_bool != 0) {
		int var_698_int; object var_699_object;
		var_36_object = var_699_object;
		TaskCall(4);
		func_407(var_700_object, var_698_int, var_699_object);
		TaskReturn();
		return 0;
	}
	bool var_806_bool;
	func_5632(var_806_bool);
}


// @pe
void func_6482(bool var_584_bool)
{
	int var_586_int;
	func_5558(var_586_int, "KnowMistresses");
	if(var_586_int == 1)
		var_584_bool = true;
	var_584_bool = false;
}


void func_5974(void)
{
	@SetVariable("d5q02", 3);
	object var_122_object;
	func_6812(var_122_object);
	object var_119_object;
	var_122_object = var_119_object;
	float var_127_float;
	func_5612(var_127_float);
	var_119_object->AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", 0, 15363, var_127_float);
	func_6943();
}
EMIT "Stack[-1] = 0";


void func_5463(bool var_50_bool, object var_51_object)
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
	func_5548(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
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
void func_6494(bool var_198_bool)
{
	int var_200_int;
	func_5558(var_200_int, "d5q02KnowNudeIsDead");
	if(var_200_int == 1)
		var_198_bool = true;
	var_198_bool = false;
}


// @pe
void func_6506(bool var_256_bool)
{
	int var_258_int;
	func_5558(var_258_int, "ood1Anna1");
	if(var_258_int == 0) {
		var_256_bool = true;
		return 0;
	}
	var_256_bool = false;
}


// @pe
void func_5997(void)
{
	@SetVariable("KnowMistresses", 1);
}


// @pe
void func_4977(object var_2_object, string var_167_string)
{
	bool var_168_bool;
	func_5645(var_168_bool);
	if(!var_168_bool) //@nz
		return 0;
	if(var_167_string == var_2_object)
		return 0;
	string var_171_string;
	func_5523(var_171_string);
	var_2_object = var_171_string;
}


// @pe
void func_6003(void)
{
	@SetVariable("KnowNina", 1);
}


// @pe
void func_6518(bool var_181_bool)
{
	int var_183_int;
	func_5558(var_183_int, "d6q01");
	if(var_183_int == 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


// @pe
void func_6009(void)
{
	@SetVariable("KnowViktoria", 1);
}


// @pe
void func_6015(void)
{
	@SetVariable("ood1Anna1", 1);
}


// @pe
void func_6530(bool var_191_bool)
{
	int var_193_int;
	func_5558(var_193_int, "d6q01");
	if(var_193_int == 1)
		var_191_bool = true;
	var_191_bool = false;
}


// @pe
void func_6021(void)
{
	@SetVariable("ood1Anna2", 1);
}


// @pe
void func_6027(void)
{
	bool var_139_bool = false;
	int var_140_int;
	func_5558(var_140_int, "d5q01");
	if(var_140_int < 7) {
		int var_146_int;
		func_5558(var_146_int, "d5q01");
		if(var_146_int != -1)
			var_139_bool = true;
	}
	if(var_139_bool != 0) {
		bool var_150_bool;
		func_5600(var_150_bool, "quest_d5_02", "place_girl");
	}
}


// @pe
void func_2957(object var_2_object, string var_148_string)
{
	bool var_149_bool;
	func_5645(var_149_bool);
	if(!var_149_bool) //@nz
		return 0;
	if(var_148_string == var_2_object)
		return 0;
	string var_152_string;
	func_5523(var_152_string);
	var_2_object = var_152_string;
}


// @pe
void func_6542(bool var_310_bool)
{
	int var_312_int;
	func_5558(var_312_int, "ood1Anna3");
	if(var_312_int == 0) {
		var_310_bool = true;
		return 0;
	}
	var_310_bool = false;
}


// @pe
void func_5519(void)
{
	@CameraSwitchToNormal();
}


void func_5523(string var_40_string)
{
	@Trace("playing " + var_40_string);
	float var_43_float;
	float var_44_float;
	@lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float);
	@Trace("start: " + var_43_float);
	@Trace("end: " + var_44_float);
}


void func_407(object var_0_object, int var_698_int, object var_699_object)
{
	var_0_object = var_699_object;
	bool var_709_bool; object var_710_object;
	var_699_object = var_710_object;
	func_5463(var_709_bool, var_710_object);
	if(!var_709_bool) { //@nz
		var_698_int = -2;
		return 8;
	}
	object var_705_object;
	@CreateDialog(var_705_object);
	int var_712_int;
	func_5641(var_712_int);
	var_705_object->SetNPCName(var_712_int);
	string var_713_string;
	func_5643(var_713_string);
	var_705_object->SetPhoto(var_713_string);
	int var_714_int;
	func_6862(var_714_int);
	var_705_object->SetPlayerName(var_714_int);
	bool var_706_bool;
	@IsOverrideActive(var_706_bool);
	if(var_706_bool != 0) {
		var_698_int = -2;
		return 8;
	}
	@DoDialog(var_705_object);
	object var_716_object; object var_717_object;
	var_699_object = var_716_object;
	var_705_object = var_717_object;
	TaskCall(5);
	func_470(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object);
	TaskReturn();
	bool var_708_bool;
	var_705_object->IsDialogEnd(var_708_bool);
	
	for(;;) {
		var_804_bool = !var_708_bool; //@nz
		if(var_804_bool == 0) goto Label_459;
		@sync();
		var_705_object->IsDialogEnd(var_708_bool);
	}
	
Label_459:
	object var_805_object;
	var_699_object = var_805_object;
	func_5519();
	@StopDialog(var_705_object);
	var_705_object->GetReturnValue(-1);
	int var_707_int = var_698_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6554(bool var_175_bool)
{
	int var_177_int;
	func_5558(var_177_int, "ood6Anna1");
	if(var_177_int == 0) {
		var_175_bool = true;
		return 0;
	}
	var_175_bool = false;
}


void func_929(object var_0_object, int var_154_int, object var_155_object)
{
	var_0_object = var_155_object;
	bool var_165_bool; object var_166_object;
	var_155_object = var_166_object;
	func_5463(var_165_bool, var_166_object);
	if(!var_165_bool) { //@nz
		var_154_int = -2;
		return 8;
	}
	object var_161_object;
	@CreateDialog(var_161_object);
	int var_168_int;
	func_5641(var_168_int);
	var_161_object->SetNPCName(var_168_int);
	string var_169_string;
	func_5643(var_169_string);
	var_161_object->SetPhoto(var_169_string);
	int var_170_int;
	func_6862(var_170_int);
	var_161_object->SetPlayerName(var_170_int);
	bool var_162_bool;
	@IsOverrideActive(var_162_bool);
	if(var_162_bool != 0) {
		var_154_int = -2;
		return 8;
	}
	@DoDialog(var_161_object);
	object var_172_object; object var_173_object;
	var_155_object = var_172_object;
	var_161_object = var_173_object;
	TaskCall(7);
	func_992(var_174_object, var_175_object, var_176_string, var_177_bool, var_172_object, var_173_object);
	TaskReturn();
	bool var_164_bool;
	var_161_object->IsDialogEnd(var_164_bool);
	
	for(;;) {
		var_370_bool = !var_164_bool; //@nz
		if(var_370_bool == 0) goto Label_981;
		@sync();
		var_161_object->IsDialogEnd(var_164_bool);
	}
	
Label_981:
	object var_371_object;
	var_155_object = var_371_object;
	func_5519();
	@StopDialog(var_161_object);
	var_161_object->GetReturnValue(-1);
	int var_163_int = var_154_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6052(void)
{
	@SetVariable("ood1Anna3", 1);
}


void func_5541(void)
{
	bool var_38_bool;
	func_5645(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6566(bool var_197_bool)
{
	int var_199_int;
	func_5558(var_199_int, "ood6Anna2");
	if(var_199_int == 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


// @pe
void func_6058(void)
{
	@SetVariable("ood1Anna4", 1);
}


void func_5548(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_6064(void)
{
	@SetVariable("ood6Anna1", 1);
}


// @pe
void func_6578(bool var_341_bool)
{
	int var_343_int;
	func_5558(var_343_int, "ood1Anna4");
	if(var_343_int == 0) {
		var_341_bool = true;
		return 0;
	}
	var_341_bool = false;
}


// @pe
void func_6070(void)
{
	@SetVariable("ood6Anna2", 1);
}


void func_5558(int var_140_int, string var_141_string)
{
	int var_143_int;
	@GetVariable(var_141_string, var_143_int);
	var_143_int = var_140_int;
}


void func_5563(object var_100_object, string var_101_string)
{
	object var_104_object;
	@GetMainOutdoorScene(var_104_object);
	object var_105_object;
	@AddBlankActor(var_105_object, var_104_object, var_101_string, (var_101_string + ".bin"));
	var_105_object = var_100_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6076(void)
{
	object var_64_object;
	int var_65_int;
	func_5558(var_65_int, "d6q01KnowKillerIsKlara");
	if(var_65_int == 0) {
		@SetVariable("d6q01KnowKillerIsKlara", 1);
		object var_73_object;
		func_6812(var_73_object);
		var_73_object = var_64_object;
		float var_84_float;
		func_5612(var_84_float);
		var_64_object->AddMark("d6q01KillerIsKlara", "pt_map_alexandr", 1, 15396, var_84_float);
		func_6975();
		bool var_112_bool;
		func_5600(var_112_bool, "quest_d6_01", "saburov_klara");
		var_64_object = null;
	}
}


// @pe
void func_6590(bool var_363_bool)
{
	int var_365_int;
	func_5558(var_365_int, "ood1Anna5");
	if(var_365_int == 0) {
		var_363_bool = true;
		return 0;
	}
	var_363_bool = false;
}


void func_5574(object var_123_object, object var_124_object, int var_125_int)
{
	int var_129_int;
	var_124_object->GetItemID(var_129_int);
	int var_130_int;
	@GetInvItemProperty(var_130_int, var_129_int, "Category");
	bool var_131_bool;
	var_123_object->AddItem(var_131_bool, var_124_object, var_130_int, var_125_int);
	if(!var_131_bool) //@nz
		var_123_object->DropItems(var_124_object, var_125_int);
}


// @pe
void func_6602(bool var_372_bool)
{
	int var_374_int;
	func_5558(var_374_int, "ood1Anna6");
	if(var_374_int == 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


void func_5587(object var_118_object, string var_119_string, int var_120_int)
{
	object var_122_object;
	@CreateInvItem(var_122_object);
	var_122_object->SetItemName(var_119_string);
	object var_123_object; object var_124_object; int var_125_int;
	var_118_object = var_123_object;
	var_122_object = var_124_object;
	var_120_int = var_125_int;
	func_5574(var_123_object, var_124_object, var_125_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_470(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_716_object, object var_717_object)
{
	var_0_object = var_717_object;
	var_1_object = var_716_object;
	var_3_object = false;
	if(1 != 0) {
		func_600(var_717_object, "Neutral");
		var_0_object->SetMessage(12719); //@t
		var_0_object->ClearReplies(); //@t
		bool var_729_bool = false;
		bool var_730_bool;
		func_6554(var_1_object);
		if(var_730_bool != 0) {
			bool var_736_bool;
			func_6518(var_1_object);
			if(var_736_bool != 0)
				var_729_bool = true;
		}
		if(var_729_bool != 0)
			var_0_object->AddReply(12720, 4261, 13913); //@t
		bool var_745_bool = false;
		bool var_746_bool;
		func_6530(var_1_object);
		if(var_746_bool != 0) {
			bool var_752_bool;
			func_6566(var_1_object);
			if(var_752_bool != 0)
				var_745_bool = true;
		}
		if(var_745_bool != 0)
			var_0_object->AddReply(12721, 13915, 13914); //@t
		bool var_761_bool = false;
		bool var_762_bool = false;
		bool var_763_bool = false;
		bool var_764_bool;
		func_6614(var_1_object);
		if(var_764_bool != 0) {
			bool var_770_bool;
			func_6638(var_1_object);
			if(!var_770_bool) //@nz
				var_763_bool = true;
		}
		if(var_763_bool != 0) {
			bool var_777_bool;
			func_6650(var_1_object);
			if(!var_777_bool) //@nz
				var_762_bool = true;
		}
		if(var_762_bool != 0) {
			bool var_784_bool;
			func_6662(var_1_object);
			if(var_784_bool != 0)
				var_761_bool = true;
		}
		if(var_761_bool != 0)
			var_0_object->AddReply(13747, 14993, 14992); //@t
		var_0_object->AddReply(12728, -1, 13921); //@t
		goto Label_570;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1da";
	}
Label_570:
	bool var_796_bool;
	func_5645(var_796_bool);
	if(var_796_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_599;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_599:
		return 0;

	}
	
}


// @pe
void func_6614(bool var_209_bool)
{
	int var_211_int;
	func_5558(var_211_int, "microscope_d6q01_anna_blood");
	if(var_211_int != 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


// @pe
void func_6111(void)
{
	@SetVariable("ood1Anna5", 1);
}


// @pe
void func_992(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_172_object, object var_173_object)
{
	var_0_object = var_173_object;
	var_1_object = var_172_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_179_bool = false;
		bool var_180_bool;
		func_6506(var_1_object);
		if(var_180_bool != 0) {
			bool var_188_bool;
			func_6230(var_1_object);
			if(var_188_bool != 0)
				var_179_bool = true;
		}
		if(var_179_bool != 0) {
			func_1282(var_173_object, "Neutral");
			var_0_object->SetMessage(4938); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(4949, 5439, 5438); //@t
			var_0_object->AddReply(4978, 5439, 5475); //@t
			var_0_object->AddReply(4979, 5439, 5477); //@t
		} else {
					bool var_217_bool;
					func_6362(var_1_object);
					if(var_217_bool == 0) goto Label_1062;
					func_1282(var_173_object, "Neutral");
					var_0_object->SetMessage(4940); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4981, 5480, 5479); //@t
					var_0_object->AddReply(4985, -1, 5483); //@t
		}
	}
Label_1252:
	for(;;) {
		bool var_209_bool;
		func_5645(var_209_bool);
		if(var_209_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5523(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1281;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1281:
			return 0;

		}

	}
	
Label_1062:
	bool var_231_bool = false;
	bool var_232_bool;
	func_6542(var_1_object);
	if(var_232_bool != 0) {
		bool var_238_bool;
		func_6218(var_1_object);
		if(var_238_bool != 0)
			var_231_bool = true;
	}
	if(var_231_bool != 0) {
		func_1282(var_173_object, "Neutral");
		var_0_object->SetMessage(4943); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(4987, 5486, 5485); //@t
		var_0_object->AddReply(4991, 5490, 5489); //@t
		var_0_object->AddReply(4998, 5498, 5497); //@t
		goto Label_1252;
	}
	func_1282(var_173_object, "Neutral");
	var_0_object->SetMessage(6582); //@t
	var_0_object->ClearReplies(); //@t
	bool var_257_bool;
	func_6230(var_1_object);
	if(var_257_bool != 0)
		var_0_object->AddReply(8690, 9528, 9527); //@t
	bool var_262_bool = false;
	bool var_263_bool;
	func_6578(var_1_object);
	if(var_263_bool != 0) {
		bool var_269_bool;
		func_6242(var_1_object);
		if(var_269_bool != 0)
			var_262_bool = true;
	}
	if(var_262_bool != 0)
		var_0_object->AddReply(6583, 5521, 7252); //@t
	bool var_278_bool = false;
	bool var_279_bool;
	func_6674(var_1_object);
	if(var_279_bool != 0) {
		bool var_285_bool;
		func_6590(var_1_object);
		if(var_285_bool != 0)
			var_278_bool = true;
	}
	if(var_278_bool != 0)
		var_0_object->AddReply(6590, 5533, 7259); //@t
	bool var_294_bool;
	func_6602(var_1_object);
	if(var_294_bool != 0)
		var_0_object->AddReply(6586, 5503, 7255); //@t
	bool var_303_bool = false;
	bool var_304_bool;
	func_6746(var_1_object);
	if(var_304_bool != 0) {
		bool var_310_bool;
		func_6254(var_1_object);
		if(var_310_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0)
		var_0_object->AddReply(6592, 7679, 7261); //@t
	bool var_319_bool = false;
	bool var_320_bool;
	func_6626(var_1_object);
	if(var_320_bool != 0) {
		bool var_326_bool;
		func_6266(var_1_object);
		if(var_326_bool != 0)
			var_319_bool = true;
	}
	if(var_319_bool != 0)
		var_0_object->AddReply(6595, 7689, 7264); //@t
	bool var_335_bool = false;
	bool var_336_bool;
	func_6758(var_1_object);
	if(var_336_bool != 0) {
		bool var_342_bool;
		func_6278(var_1_object);
		if(var_342_bool != 0)
			var_335_bool = true;
	}
	if(var_335_bool != 0)
		var_0_object->AddReply(6602, 7697, 7271); //@t
	bool var_351_bool = false;
	bool var_352_bool;
	func_6686(var_1_object);
	if(var_352_bool != 0) {
		bool var_358_bool;
		func_6290(var_1_object);
		if(var_358_bool != 0)
			var_351_bool = true;
	}
	if(var_351_bool != 0)
		var_0_object->AddReply(6605, 7703, 7274); //@t
	var_0_object->AddReply(7538, -1, 8320); //@t
	goto Label_1252;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e4";


void func_5600(bool var_108_bool, string var_109_string, string var_110_string)
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
void func_6626(bool var_398_bool)
{
	int var_400_int;
	func_5558(var_400_int, "KnowAlexandr");
	if(var_400_int == 1)
		var_398_bool = true;
	var_398_bool = false;
}


// @pe
void func_6117(void)
{
	@SetVariable("ood1Anna6", 1);
}


// @pe
void func_6123(void)
{
	@SetVariable("KnowAnna", 1);
}


void func_5612(float var_58_float)
{
	float var_60_float;
	@GetGameTime(var_60_float);
	var_60_float = var_58_float;
}


// @pe
void func_6638(bool var_215_bool)
{
	int var_217_int;
	func_5558(var_217_int, "d6q01");
	if(var_217_int == 1000)
		var_215_bool = true;
	var_215_bool = false;
}


// @pe
void func_6129(object var_118_object)
{
	func_6959();
	@Trace("anna blood is given");
	object var_130_object;
	var_118_object = var_130_object;
	func_5587(var_130_object, "d6q01_anna_blood", 1);
}


void func_5617(int var_148_int)
{
	float var_150_float;
	@GetGameTime(var_150_float);
	var_148_int = 1 + (var_150_float / 24);
}


// @pe
void func_5626(bool var_146_bool, int var_147_int)
{
	int var_148_int;
	func_5617(var_148_int);
	var_146_bool = var_148_int == var_147_int;
}


// @pe
void func_6143(void)
{
	@TriggerWorld("playsound", "giveitem");
}


