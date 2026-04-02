// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 35093) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6114();
				object var_87_object = var_1_object;
				func_6126(var_0_object);
			}
			if(var_47_cvector == 35101) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_6114();
			}
			if(var_47_cvector == 35098) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_6137();
				object var_129_object = var_1_object;
				func_6097(var_0_object);
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_6003();
			}
			if(var_46_bool == 35090) {
				bool var_141_bool = false;
				bool var_142_bool;
				func_6667(var_1_object);
				if(!var_142_bool) { //@nz
					bool var_151_bool;
					func_6679(var_1_object);
					if(var_151_bool != 0)
						var_141_bool = true;
				}
				if(var_141_bool != 0) {
					object var_157_object; object var_158_object;
					var_157_object = var_1_object;
					var_158_object = var_0_object;
					func_6108();
					object var_161_object; object var_162_object;
					var_161_object = var_1_object;
					var_162_object = var_0_object;
					func_6152();
					func_237(var_47_cvector, "Neutral");
					var_0_object->SetMessage(533560); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(536195, 37969, 37968); //@t
					bool var_181_bool;
					func_6655(var_1_object);
					if(var_181_bool != 0)
						var_0_object->AddReply(536202, 37976, 37975); //@t
					return 0;
				}
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_6152();
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533564); //@t
				var_0_object->ClearReplies(); //@t
				bool var_194_bool = false;
				bool var_195_bool;
				func_6691(var_1_object);
				if(var_195_bool != 0) {
					bool var_201_bool;
					func_6667(var_1_object);
					if(!var_201_bool) //@nz
						var_194_bool = true;
				}
				if(var_194_bool != 0)
					var_0_object->AddReply(533569, 35100, 35099); //@t
				bool var_207_bool;
				func_6703(var_1_object);
				if(var_207_bool != 0)
					var_0_object->AddReply(533565, 35096, 35095); //@t
				var_0_object->AddReply(533572, -1, 35102); //@t
				var_0_object->AddReply(536201, -1, 37974); //@t
				return 0;
			}
			if(var_46_bool == 35096) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533568, -1, 35098); //@t
				return 0;
			}
			if(var_46_bool == 35100) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533570); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533571, -1, 35101); //@t
				return 0;
			}
			if(var_46_bool == 37969) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536197, 37971, 37970); //@t
				var_0_object->AddReply(536245, 37971, 38021); //@t
				return 0;
			}
			if(var_46_bool == 37971) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536199, 37973, 37972); //@t
				var_0_object->AddReply(536246, 38025, 38023); //@t
				return 0;
			}
			if(var_46_bool == 38025) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536249, 37973, 38027); //@t
				return 0;
			}
			if(var_46_bool == 37973) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536244, 35092, 38020); //@t
				var_0_object->AddReply(536247, 37976, 38024); //@t
				return 0;
			}
			if(var_46_bool == 37976) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536250, 35092, 38029); //@t
				var_0_object->AddReply(536251, 38033, 38031); //@t
				return 0;
			}
			if(var_46_bool == 38033) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536253, 35092, 38034); //@t
				bool var_290_bool;
				func_6655(var_1_object);
				if(!var_290_bool) //@nz
					var_0_object->AddReply(536254, -1, 38036); //@t
				return 0;
			}
			if(var_46_bool == 35092) {
				func_237(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533563, -1, 35093); //@t
				var_0_object->AddReply(533567, -1, 35097); //@t
				return 0;
			}
			var_3_string = true;
			bool var_306_bool;
			func_5965(var_306_bool);
			if(var_306_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x104";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_46_bool == 36971) {
				func_767(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_46_bool == 36973) {
				func_767(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_46_bool == 36975) {
				func_767(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_94_bool;
			func_5965(var_94_bool);
			if(var_94_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x316";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_46_bool == 260) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6501();
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(500221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532814, 34298, 34291); //@t
				var_0_object->AddReply(532815, 34294, 34292); //@t
				return 0;
			}
			if(var_46_bool == 34294) {
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532818, 34302, 34295); //@t
				var_0_object->AddReply(532819, 34297, 34296); //@t
				return 0;
			}
			if(var_46_bool == 34297) {
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532827, 34293, 34307); //@t
				var_0_object->AddReply(532828, -1, 34308); //@t
				return 0;
			}
			if(var_46_bool == 34298) {
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532822, 34302, 34299); //@t
				var_0_object->AddReply(532823, 34302, 34300); //@t
				var_0_object->AddReply(532824, 34302, 34301); //@t
				return 0;
			}
			if(var_46_bool == 34302) {
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532826, 34293, 34306); //@t
				var_0_object->AddReply(532829, -1, 34310); //@t
				return 0;
			}
			if(var_46_bool == 34293) {
				func_1026(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532831, -1, 34312); //@t
				var_0_object->AddReply(532832, -1, 34313); //@t
				var_0_object->AddReply(532830, -1, 34311); //@t
				return 0;
			}
			var_3_string = true;
			bool var_131_bool;
			func_5965(var_131_bool);
			if(var_131_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x419";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 4268) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6454();
			}
			if(var_47_cvector == 4269) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_6454();
			}
			if(var_47_cvector == 4266) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6454();
			}
			if(var_47_cvector == 13914) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_6460();
			}
			if(var_47_cvector == 13920) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_6466();
				object var_127_object = var_1_object;
				func_6507(var_0_object);
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_6521();
			}
			if(var_47_cvector == 40699) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_6466();
				object var_167_object = var_1_object;
				func_6507(var_0_object);
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_6521();
			}
			if(var_47_cvector == 40698) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_object;
				func_6466();
			}
			if(var_47_cvector == 14992) {
				object var_177_object; object var_178_object;
				var_177_object = var_1_object;
				var_178_object = var_0_object;
				func_6527();
			}
			if(var_47_cvector == 40682) {
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_object;
				func_6158();
			}
			if(var_47_cvector == 40686) {
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_6158();
			}
			if(var_46_bool == 13912) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512719); //@t
				var_0_object->ClearReplies(); //@t
				bool var_212_bool = false;
				bool var_213_bool;
				func_6931(var_1_object);
				if(var_213_bool != 0) {
					bool var_219_bool;
					func_6895(var_1_object);
					if(var_219_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0)
					var_0_object->AddReply(512720, 4261, 13913); //@t
				bool var_228_bool = false;
				bool var_229_bool;
				func_6907(var_1_object);
				if(var_229_bool != 0) {
					bool var_235_bool;
					func_6943(var_1_object);
					if(var_235_bool != 0)
						var_228_bool = true;
				}
				if(var_228_bool != 0)
					var_0_object->AddReply(512721, 13915, 13914); //@t
				bool var_244_bool = false;
				bool var_245_bool = false;
				bool var_246_bool = false;
				bool var_247_bool;
				func_6967(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_6979(var_1_object);
					if(!var_253_bool) //@nz
						var_246_bool = true;
				}
				if(var_246_bool != 0) {
					bool var_260_bool;
					func_6991(var_1_object);
					if(!var_260_bool) //@nz
						var_245_bool = true;
				}
				if(var_245_bool != 0) {
					bool var_267_bool;
					func_7003(var_1_object);
					if(var_267_bool != 0)
						var_244_bool = true;
				}
				if(var_244_bool != 0)
					var_0_object->AddReply(513747, 14993, 14992); //@t
				var_0_object->AddReply(512728, -1, 13921); //@t
				return 0;
			}
			if(var_46_bool == 14993) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538767, 40684, 40683); //@t
				var_0_object->AddReply(513749, 40684, 14994); //@t
				return 0;
			}
			if(var_46_bool == 40684) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538766, -1, 40682); //@t
				var_0_object->AddReply(538769, -1, 40686); //@t
				return 0;
			}
			if(var_46_bool == 13915) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512723, 13917, 13916); //@t
				var_0_object->AddReply(538770, 40688, 40687); //@t
				return 0;
			}
			if(var_46_bool == 40688) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538772, -1, 40689); //@t
				return 0;
			}
			if(var_46_bool == 13917) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512725, 13919, 13918); //@t
				var_0_object->AddReply(538776, 40695, 40694); //@t
				return 0;
			}
			if(var_46_bool == 40695) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538778, 13919, 40696); //@t
				var_0_object->AddReply(538779, -1, 40698); //@t
				return 0;
			}
			if(var_46_bool == 13919) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538773, 40691, 40690); //@t
				var_0_object->AddReply(538775, 40691, 40692); //@t
				return 0;
			}
			if(var_46_bool == 40691) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512727, -1, 13920); //@t
				var_0_object->AddReply(538780, -1, 40699); //@t
				return 0;
			}
			if(var_46_bool == 4261) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503914, -1, 4262); //@t
				var_0_object->AddReply(503915, 4264, 4263); //@t
				return 0;
			}
			if(var_46_bool == 4264) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503917, 4267, 4265); //@t
				var_0_object->AddReply(503918, -1, 4266); //@t
				return 0;
			}
			if(var_46_bool == 4267) {
				func_1431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503920, -1, 4268); //@t
				var_0_object->AddReply(503921, -1, 4269); //@t
				return 0;
			}
			var_3_string = true;
			bool var_386_bool;
			func_5965(var_386_bool);
			if(var_386_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5ae";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 5450) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6208();
				object var_101_object = var_1_object;
				func_6192(var_0_object);
			}
			if(var_47_cvector == 5451) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_5967();
			}
			if(var_47_cvector == 5488) {
				object var_143_object = var_1_object;
				func_5993(var_0_object);
				object var_164_object = var_1_object;
				func_6074(var_0_object);
				object var_185_object = var_1_object;
				func_6063(var_0_object);
				object var_191_object = var_1_object;
				func_6009(var_0_object);
				object var_197_object = var_1_object;
				func_6052(var_0_object);
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_object;
				func_6003();
			}
			if(var_47_cvector == 9529) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_6208();
				object var_211_object = var_1_object;
				func_6192(var_0_object);
			}
			if(var_47_cvector == 7252) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_6442();
			}
			if(var_47_cvector == 33353) {
				object var_221_object; object var_222_object;
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_6448();
			}
			if(var_47_cvector == 33355) {
				object var_227_object; object var_228_object;
				var_227_object = var_1_object;
				var_228_object = var_0_object;
				func_6036();
				object var_237_object = var_1_object;
				func_6020(var_0_object);
			}
			if(var_46_bool == 5427) {
				bool var_246_bool = false;
				bool var_247_bool;
				func_6871(var_1_object);
				if(var_247_bool != 0) {
					bool var_255_bool;
					func_6619(var_1_object);
					if(var_255_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0) {
					object var_261_object; object var_262_object;
					var_261_object = var_1_object;
					var_262_object = var_0_object;
					func_6405();
					func_2224(var_47_cvector, "Neutral");
					var_0_object->SetMessage(504938); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504949, 5439, 5438); //@t
					var_0_object->AddReply(504978, 5439, 5475); //@t
					var_0_object->AddReply(504979, 5439, 5477); //@t
					return 0;
				}
				bool var_287_bool;
				func_6763(var_1_object);
				if(var_287_bool != 0) {
					func_2224(var_47_cvector, "Neutral");
					var_0_object->SetMessage(504940); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504981, 5480, 5479); //@t
					var_0_object->AddReply(504985, -1, 5483); //@t
					return 0;
				}
				bool var_301_bool = false;
				bool var_302_bool;
				func_6607(var_1_object);
				if(var_302_bool != 0) {
					bool var_308_bool;
					func_6883(var_1_object);
					if(var_308_bool != 0)
						var_301_bool = true;
				}
				if(var_301_bool != 0) {
					object var_314_object; object var_315_object;
					var_314_object = var_1_object;
					var_315_object = var_0_object;
					func_6411();
					func_2224(var_47_cvector, "Neutral");
					var_0_object->SetMessage(504943); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504987, 5486, 5485); //@t
					var_0_object->AddReply(533010, 34515, 34514); //@t
					return 0;
				}
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506582); //@t
				var_0_object->ClearReplies(); //@t
				bool var_328_bool;
				func_6619(var_1_object);
				if(var_328_bool != 0)
					var_0_object->AddReply(508690, 9528, 9527); //@t
				bool var_333_bool = false;
				bool var_334_bool = false;
				bool var_335_bool;
				func_6919(var_1_object);
				if(var_335_bool != 0) {
					bool var_341_bool;
					func_6631(var_1_object);
					if(var_341_bool != 0)
						var_334_bool = true;
				}
				if(var_334_bool != 0) {
					bool var_347_bool;
					func_6595(var_1_object);
					if(!var_347_bool) //@nz
						var_333_bool = true;
				}
				if(var_333_bool != 0)
					var_0_object->AddReply(506583, 5521, 7252); //@t
				bool var_357_bool = false;
				bool var_358_bool = false;
				bool var_359_bool;
				func_6643(var_1_object);
				if(var_359_bool != 0) {
					bool var_365_bool;
					func_6607(var_1_object);
					if(var_365_bool != 0)
						var_358_bool = true;
				}
				if(var_358_bool != 0) {
					bool var_367_bool;
					func_6955(var_1_object);
					if(var_367_bool != 0)
						var_357_bool = true;
				}
				if(var_357_bool != 0)
					var_0_object->AddReply(531949, 33354, 33353); //@t
				var_0_object->AddReply(507538, -1, 8320); //@t
				return 0;
			}
			if(var_46_bool == 33354) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532946, 34437, 34435); //@t
				var_0_object->AddReply(532947, 34439, 34436); //@t
				return 0;
			}
			if(var_46_bool == 34439) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532952, 34441, 34442); //@t
				var_0_object->AddReply(532953, 34445, 34443); //@t
				return 0;
			}
			if(var_46_bool == 34437) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532950, 34441, 34440); //@t
				var_0_object->AddReply(532954, 34445, 34444); //@t
				return 0;
			}
			if(var_46_bool == 34445) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532956, -1, 34447); //@t
				var_0_object->AddReply(532957, -1, 34448); //@t
				return 0;
			}
			if(var_46_bool == 34441) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532958, 34452, 34450); //@t
				var_0_object->AddReply(532959, -1, 34451); //@t
				return 0;
			}
			if(var_46_bool == 34452) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531951, -1, 33355); //@t
				return 0;
			}
			if(var_46_bool == 5521) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(505021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505022, 5523, 5522); //@t
				return 0;
			}
			if(var_46_bool == 5523) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(505023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505024, 5498, 5524); //@t
				var_0_object->AddReply(533032, 5498, 34541); //@t
				return 0;
			}
			if(var_46_bool == 5498) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505000, 5500, 5499); //@t
				return 0;
			}
			if(var_46_bool == 5500) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(505001); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525224, 5525, 26591); //@t
				return 0;
			}
			if(var_46_bool == 5525) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(505025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505026, -1, 5526); //@t
				return 0;
			}
			if(var_46_bool == 9528) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(508691); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508692, -1, 9529); //@t
				return 0;
			}
			if(var_46_bool == 34515) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533011); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533012, -1, 34516); //@t
				return 0;
			}
			if(var_46_bool == 5486) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504990, -1, 5488); //@t
				return 0;
			}
			if(var_46_bool == 5480) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504983, -1, 5481); //@t
				return 0;
			}
			if(var_46_bool == 5439) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504951, 5441, 5440); //@t
				var_0_object->AddReply(504977, 5441, 5473); //@t
				return 0;
			}
			if(var_46_bool == 5441) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504953, 5443, 5442); //@t
				var_0_object->AddReply(504972, 5466, 5465); //@t
				return 0;
			}
			if(var_46_bool == 5466) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504974, 5445, 5467); //@t
				var_0_object->AddReply(504975, 5445, 5469); //@t
				return 0;
			}
			if(var_46_bool == 5443) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504955, 5445, 5444); //@t
				var_0_object->AddReply(504968, 5460, 5459); //@t
				return 0;
			}
			if(var_46_bool == 5460) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504970, 5445, 5461); //@t
				var_0_object->AddReply(504971, 5445, 5463); //@t
				return 0;
			}
			if(var_46_bool == 5445) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504957, 5447, 5446); //@t
				var_0_object->AddReply(504967, 5447, 5457); //@t
				return 0;
			}
			if(var_46_bool == 5447) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504959, 5449, 5448); //@t
				var_0_object->AddReply(504966, 34511, 5455); //@t
				return 0;
			}
			if(var_46_bool == 34511) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533009, 5449, 34512); //@t
				return 0;
			}
			if(var_46_bool == 5449) {
				func_2224(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504961, -1, 5450); //@t
				var_0_object->AddReply(504962, -1, 5451); //@t
				return 0;
			}
			var_3_string = true;
			bool var_589_bool;
			func_5965(var_589_bool);
			if(var_589_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8c7";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 7333) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6163();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_6169();
				object var_99_object = var_1_object;
				func_6236(var_0_object);
			}
			if(var_47_cvector == 7336) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_6163();
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_6169();
				object var_131_object = var_1_object;
				func_6236(var_0_object);
			}
			if(var_47_cvector == 7337) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_6163();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_6169();
				object var_139_object = var_1_object;
				func_6236(var_0_object);
			}
			if(var_46_bool == 7293) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506624); //@t
				var_0_object->ClearReplies(); //@t
				bool var_156_bool = false;
				bool var_157_bool;
				func_6727(var_1_object);
				if(var_157_bool != 0) {
					bool var_165_bool;
					func_6751(var_1_object);
					if(var_165_bool != 0)
						var_156_bool = true;
				}
				if(var_156_bool != 0)
					var_0_object->AddReply(507217, 7952, 7953); //@t
				var_0_object->AddReply(506626, -1, 7295); //@t
				return 0;
			}
			if(var_46_bool == 7952) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506651, 7326, 7325); //@t
				var_0_object->AddReply(506672, 7954, 7352); //@t
				return 0;
			}
			if(var_46_bool == 7954) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507219, 7326, 7955); //@t
				return 0;
			}
			if(var_46_bool == 7326) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506653, 7328, 7327); //@t
				var_0_object->AddReply(506668, 7347, 7346); //@t
				return 0;
			}
			if(var_46_bool == 7347) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_6091();
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506669); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506670, 7332, 7348); //@t
				var_0_object->AddReply(506671, 7328, 7350); //@t
				return 0;
			}
			if(var_46_bool == 7328) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506655, 7330, 7329); //@t
				var_0_object->AddReply(506666, 7332, 7342); //@t
				var_0_object->AddReply(506667, 7332, 7344); //@t
				return 0;
			}
			if(var_46_bool == 7330) {
				object var_233_object; object var_234_object;
				var_233_object = var_1_object;
				var_234_object = var_0_object;
				func_6091();
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506657, 7332, 7331); //@t
				var_0_object->AddReply(506664, 7332, 7338); //@t
				var_0_object->AddReply(506665, 7332, 7340); //@t
				return 0;
			}
			if(var_46_bool == 7332) {
				object var_248_object; object var_249_object;
				var_248_object = var_1_object;
				var_249_object = var_0_object;
				func_5976();
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506659, -1, 7333); //@t
				bool var_257_bool;
				func_6739(var_1_object);
				if(!var_257_bool) //@nz
					var_0_object->AddReply(506660, 7335, 7334); //@t
				var_0_object->AddReply(506663, -1, 7337); //@t
				return 0;
			}
			if(var_46_bool == 7335) {
				func_3209(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506661); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506662, -1, 7336); //@t
				return 0;
			}
			var_3_string = true;
			bool var_277_bool;
			func_5965(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xca0";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 12543) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6252();
			}
			if(var_47_cvector == 12557) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_6252();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_6258();
				object var_64_object = var_1_object;
				func_6264(var_0_object);
				object var_130_object = var_1_object;
				func_6533(var_0_object);
				object var_154_object = var_1_object;
				func_6555(var_0_object);
				object var_160_object = var_1_object;
				func_6544(var_0_object);
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_6003();
			}
			if(var_47_cvector == 12681) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_6258();
				object var_174_object = var_1_object;
				func_6264(var_0_object);
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_6003();
				object var_178_object = var_1_object;
				func_6533(var_0_object);
				object var_180_object = var_1_object;
				func_6544(var_0_object);
				object var_182_object = var_1_object;
				func_6555(var_0_object);
			}
			if(var_47_cvector == 13068) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_6332();
				object var_190_object = var_1_object;
				func_6052(var_0_object);
				object var_196_object = var_1_object;
				func_5982(var_0_object);
			}
			if(var_46_bool == 12541) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511344); //@t
				var_0_object->ClearReplies(); //@t
				bool var_217_bool = false;
				bool var_218_bool;
				func_6775(var_1_object);
				if(var_218_bool != 0) {
					bool var_224_bool;
					func_6787(var_1_object);
					if(var_224_bool != 0)
						var_217_bool = true;
				}
				if(var_217_bool != 0)
					var_0_object->AddReply(511346, 12544, 12543); //@t
				bool var_233_bool = false;
				bool var_234_bool;
				func_6787(var_1_object);
				if(var_234_bool != 0) {
					bool var_236_bool;
					func_6799(var_1_object);
					if(!var_236_bool) //@nz
						var_233_bool = true;
				}
				if(var_233_bool != 0)
					var_0_object->AddReply(511473, 12680, 12679); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_6823(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_6811(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(511853, 13067, 13066); //@t
				var_0_object->AddReply(511345, -1, 12542); //@t
				return 0;
			}
			if(var_46_bool == 13067) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511855, -1, 13068); //@t
				return 0;
			}
			if(var_46_bool == 12680) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511475, -1, 12681); //@t
				return 0;
			}
			if(var_46_bool == 12544) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511348, 12550, 12545); //@t
				var_0_object->AddReply(511367, 12566, 12565); //@t
				return 0;
			}
			if(var_46_bool == 12566) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511369, 12614, 12567); //@t
				var_0_object->AddReply(511419, 12554, 12616); //@t
				return 0;
			}
			if(var_46_bool == 12614) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520959, 12556, 22175); //@t
				var_0_object->AddReply(520960, -1, 22176); //@t
				return 0;
			}
			if(var_46_bool == 12550) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511354, 12552, 12551); //@t
				var_0_object->AddReply(511365, 12556, 12562); //@t
				return 0;
			}
			if(var_46_bool == 12552) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511356, 12554, 12553); //@t
				return 0;
			}
			if(var_46_bool == 12554) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511358, 12556, 12555); //@t
				var_0_object->AddReply(511421, 12620, 12619); //@t
				return 0;
			}
			if(var_46_bool == 12620) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511423, 12624, 12621); //@t
				var_0_object->AddReply(511424, 12556, 12622); //@t
				return 0;
			}
			if(var_46_bool == 12624) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511426, 12626, 12625); //@t
				return 0;
			}
			if(var_46_bool == 12626) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511428, 12556, 12627); //@t
				return 0;
			}
			if(var_46_bool == 12556) {
				func_3743(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511360, -1, 12557); //@t
				var_0_object->AddReply(511362, -1, 12559); //@t
				return 0;
			}
			var_3_string = true;
			bool var_370_bool;
			func_5965(var_370_bool);
			if(var_370_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xeb6";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_47_cvector == 13112) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6338();
				object var_122_object = var_1_object;
				func_6572(var_0_object);
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_6588();
			}
			if(var_47_cvector == 13122) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_6382();
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_6417();
			}
			if(var_47_cvector == 13123) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6566();
			}
			if(var_46_bool == 13085) {
				bool var_206_bool = false;
				bool var_207_bool;
				func_6835(var_1_object);
				if(var_207_bool != 0) {
					bool var_213_bool;
					func_6715(var_1_object);
					if(var_213_bool != 0)
						var_206_bool = true;
				}
				if(var_206_bool != 0) {
					object var_219_object; object var_220_object;
					var_219_object = var_1_object;
					var_220_object = var_0_object;
					func_6085();
					object var_223_object; object var_224_object;
					var_223_object = var_1_object;
					var_224_object = var_0_object;
					func_6146();
					func_4415(var_47_cvector, "Neutral");
					var_0_object->SetMessage(511872); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511873, 13087, 13086); //@t
					var_0_object->AddReply(515663, 16703, 16702); //@t
					return 0;
				}
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511897); //@t
				var_0_object->ClearReplies(); //@t
				bool var_248_bool;
				func_6847(var_1_object);
				if(var_248_bool != 0)
					var_0_object->AddReply(511898, 13115, 13114); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_6859(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_7015(var_1_object);
					if(var_264_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(511907, 13124, 13123); //@t
				var_0_object->AddReply(511915, -1, 13131); //@t
				return 0;
			}
			if(var_46_bool == 13124) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511909, 13126, 13125); //@t
				var_0_object->AddReply(515675, 16719, 16718); //@t
				return 0;
			}
			if(var_46_bool == 16719) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515677, 13126, 16720); //@t
				return 0;
			}
			if(var_46_bool == 13126) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511911, 13128, 13127); //@t
				var_0_object->AddReply(515678, -1, 16722); //@t
				return 0;
			}
			if(var_46_bool == 13128) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511913, -1, 13129); //@t
				var_0_object->AddReply(511914, -1, 13130); //@t
				var_0_object->AddReply(515679, -1, 16723); //@t
				return 0;
			}
			if(var_46_bool == 13115) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511900, 13117, 13116); //@t
				return 0;
			}
			if(var_46_bool == 13117) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511902, 13119, 13118); //@t
				var_0_object->AddReply(515672, 16715, 16714); //@t
				return 0;
			}
			if(var_46_bool == 16715) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515673); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515674, 13119, 16716); //@t
				return 0;
			}
			if(var_46_bool == 13119) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511904, 13121, 13120); //@t
				return 0;
			}
			if(var_46_bool == 13121) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511906, -1, 13122); //@t
				return 0;
			}
			if(var_46_bool == 16703) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515665, 13087, 16704); //@t
				return 0;
			}
			if(var_46_bool == 13087) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511875, 13089, 13088); //@t
				var_0_object->AddReply(515666, 13089, 16706); //@t
				return 0;
			}
			if(var_46_bool == 13089) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511877, 13091, 13090); //@t
				var_0_object->AddReply(515667, -1, 16708); //@t
				return 0;
			}
			if(var_46_bool == 13091) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511878); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511879, 13093, 13092); //@t
				var_0_object->AddReply(511888, 13093, 13101); //@t
				return 0;
			}
			if(var_46_bool == 13093) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515669, 16713, 16711); //@t
				var_0_object->AddReply(515670, -1, 16712); //@t
				return 0;
			}
			if(var_46_bool == 16713) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515671); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511881, 13095, 13094); //@t
				var_0_object->AddReply(515668, 13095, 16709); //@t
				return 0;
			}
			if(var_46_bool == 13095) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511883, 13097, 13096); //@t
				var_0_object->AddReply(511889, 13103, 13102); //@t
				return 0;
			}
			if(var_46_bool == 13103) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511891, 13099, 13104); //@t
				return 0;
			}
			if(var_46_bool == 13097) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511885, 13099, 13098); //@t
				return 0;
			}
			if(var_46_bool == 13099) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511887, 13110, 13100); //@t
				var_0_object->AddReply(511892, 13108, 13107); //@t
				return 0;
			}
			if(var_46_bool == 13108) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511894, 13110, 13109); //@t
				return 0;
			}
			if(var_46_bool == 13110) {
				func_4415(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511896, -1, 13112); //@t
				return 0;
			}
			var_3_string = true;
			bool var_459_bool;
			func_5965(var_459_bool);
			if(var_459_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1156";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5782();
			if(var_46_int == 42557) {
				func_5163(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_5965(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1442";
	
	}

}


maintask task_19
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		var_46_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_5234(var_45_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, int var_46_int)
	{
		if(var_46_int == 10) {
			func_5305();
			bool var_50_bool = false;
			bool var_51_bool;
			func_5526(var_51_bool);
			if(var_51_bool != 0) {
				bool var_54_bool;
				func_5274(var_54_bool);
				if(var_54_bool != 0)
					var_50_bool = true;
			}
			if(var_50_bool != 0) {
				bool var_71_bool;
				func_5254(var_71_bool);
				if(var_71_bool != 0) {
					bool var_90_bool; object var_91_object;
					object var_92_object;
					func_5789(var_92_object);
					var_92_object = var_91_object;
					func_5674(var_90_bool, var_91_object);
				}
			} else {
				func_5269(var_46_int);
				func_5296();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		func_5487();
		func_5305();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
		{
		@StopGroup0();
		func_5305();
		func_5754("Neutral");
		func_5296();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, bool var_46_bool)
	{
		if(var_46_bool != 0)
			func_5296();
		else
			func_5754("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, object var_46_object)
	{
		bool var_48_bool;
		@IsOverrideActive(var_48_bool);
		if(!var_48_bool) { //@nz
			disable OnUse;
			func_5487();
			bool var_50_bool; object var_51_object;
			var_46_object = var_51_object;
			func_5517(var_50_bool, var_51_object);
			enable OnUse;
			object var_64_object;
			var_46_object = var_64_object;
			func_7291(var_64_object);
			func_5754("Neutral");
			func_5305();
			func_5296();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_51_bool;
	func_5526(var_51_bool);
	if(!var_51_bool) goto Label_0; //@nz
}


// @pe
void func_1026(object var_2_object, string var_244_string)
{
	bool var_245_bool;
	func_5965(var_245_bool);
	if(!var_245_bool) //@nz
		return 0;
	if(var_244_string == var_2_object)
		return 0;
	string var_248_string; bool var_249_bool;
	var_244_string = var_248_string;
	if(var_244_string == "")
		var_249_bool = false;
	else
		var_249_bool = true;
	func_5761(var_248_string, var_249_bool);
	var_2_object = var_244_string;
	
}


// @pe
void func_6146(void)
{
	@SetVariable("ood5Anna2", 1);
}


void func_7170(void)
{
	object var_122_object;
	@CreateDiaryEntry(var_122_object, 665, 2, 533583);
	bool var_126_bool; object var_127_object;
	var_122_object = var_127_object;
	func_7196(var_126_bool, var_127_object, 662);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6152(void)
{
	@SetVariable("d9AnnaVisit", 1);
}


// @pe
void func_6667(bool var_892_bool)
{
	int var_894_int;
	func_5805(var_894_int, "d9q03");
	if(var_894_int == 1000)
		var_892_bool = true;
	var_892_bool = false;
}


void func_13(object var_0_object, int var_860_int, object var_861_object)
{
	var_0_object = var_861_object;
	bool var_871_bool; object var_872_object;
	object var_873_object;
	func_5789(var_873_object);
	var_873_object = var_872_object;
	func_5616(var_871_bool, var_872_object);
	bool var_874_bool; object var_875_object;
	var_861_object = var_875_object;
	func_5531(var_874_bool, var_875_object, 70.0);
	if(!var_874_bool) { //@nz
		var_860_int = -2;
		return 8;
	}
	object var_867_object;
	@CreateDialog(var_867_object);
	int var_878_int;
	func_5959(var_878_int);
	var_867_object->SetNPCName(var_878_int);
	int var_879_int;
	func_5957(var_879_int);
	var_867_object->SetNPCDescription(var_879_int);
	string var_880_string;
	func_5961(var_880_string);
	var_867_object->SetPhoto(var_880_string);
	string var_881_string;
	func_5963(var_881_string);
	var_867_object->SetPhoto2(var_881_string);
	int var_882_int;
	func_7274(var_882_int);
	var_867_object->SetPlayerName(var_882_int);
	bool var_868_bool;
	@IsOverrideActive(var_868_bool);
	if(var_868_bool != 0) {
		var_860_int = -2;
		return 8;
	}
	@DoDialog(var_867_object);
	object var_884_object; object var_885_object;
	var_861_object = var_884_object;
	var_867_object = var_885_object;
	TaskCall(2);
	func_94(var_886_object, var_887_object, var_888_string, var_889_bool, var_884_object, var_885_object);
	TaskReturn();
	bool var_870_bool;
	var_867_object->IsDialogEnd(var_870_bool);
	
	for(;;) {
		var_974_bool = !var_870_bool; //@nz
		if(var_974_bool == 0) goto Label_83;
		@sync();
		var_867_object->IsDialogEnd(var_870_bool);
	}
	
Label_83:
	object var_975_object;
	var_861_object = var_975_object;
	func_5599();
	@StopDialog(var_867_object);
	var_867_object->GetReturnValue(-1);
	int var_869_int = var_860_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6158(void)
{
	func_7105();
}


void func_7183(object var_91_object)
{
	object var_93_object;
	@GetDiaryRoot(var_93_object);
	if(!var_93_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_91_object = false;
	}
	var_93_object = var_91_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6163(void)
{
	@SetVariable("ood2Anna1", 1);
}


// @pe
void func_6679(bool var_899_bool)
{
	int var_901_int;
	func_5805(var_901_int, "ood9Anna1");
	if(var_901_int == 0) {
		var_899_bool = true;
		return 0;
	}
	var_899_bool = false;
}


void func_6169(void)
{
	@SetVariable("d2q01", 2);
	object var_62_object;
	func_7224(var_62_object);
	object var_59_object;
	var_62_object = var_59_object;
	float var_73_float;
	func_5913(var_73_float);
	var_59_object->AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", 1, 511388, var_73_float);
	func_7053();
}
EMIT "Stack[-1] = 0";


void func_7196(bool var_82_bool, object var_83_object, int var_84_int)
{
	object var_91_object;
	func_7183(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	object var_89_object;
	var_88_object->Find(var_84_int, var_89_object);
	if(!var_89_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_84_int);
		var_82_bool = false;
	}
	var_89_object->AddChild(var_83_object);
	@SendWorldWndMessage(7);
	int var_90_int;
	var_83_object->GetCategory(var_90_int);
	@SetDiarySection(var_90_int);
	var_82_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6691(bool var_947_bool)
{
	int var_949_int;
	func_5805(var_949_int, "d9q04");
	if(var_949_int == 0) {
		var_947_bool = true;
		return 0;
	}
	var_947_bool = false;
}


void func_5674(bool var_89_bool, object var_90_object)
{
	string var_96_string; bool var_98_bool; int var_99_int; string var_100_string;
	var_96_string = "c";
	int var_97_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_90_object->HasProperty((var_96_string + (var_97_int + 1)), var_98_bool);
			if(!var_98_bool) { //@nz
			} else {
				var_97_int += 1;
			}
		}
		if(!var_97_int) { //@nz
			var_89_bool = false;
			return 10;
		}
		var_99_int = 0;
		if(var_97_int > 1)
			@irand(var_99_int, var_97_int);
		var_90_object->GetProperty((var_96_string + (var_99_int + 1)), var_100_string);
		bool var_112_bool; string var_113_string;
		var_100_string = var_113_string;
		func_5767(var_112_bool, var_113_string);
		var_112_bool = var_89_bool;
		return 10;

	}
}


// @pe
void func_5163(object var_2_object, string var_1068_string)
{
	bool var_1069_bool;
	func_5965(var_1069_bool);
	if(!var_1069_bool) //@nz
		return 0;
	if(var_1068_string == var_2_object)
		return 0;
	string var_1072_string; bool var_1073_bool;
	var_1068_string = var_1072_string;
	if(var_1068_string == "")
		var_1073_bool = false;
	else
		var_1073_bool = true;
	func_5761(var_1072_string, var_1073_bool);
	var_2_object = var_1068_string;
	
}


// @pe
void func_6703(bool var_959_bool)
{
	int var_961_int;
	func_5805(var_961_int, "d9q04");
	if(var_961_int == 2)
		var_959_bool = true;
	var_959_bool = false;
}


// @pe
void func_6192(object var_102_object)
{
	object var_106_object;
	func_7224(var_106_object);
	object var_103_object;
	var_106_object = var_103_object;
	func_7241(var_103_object, "pt_map_laska", (float)2);
	object var_126_object;
	func_7224(var_126_object);
	var_102_object->ShowMap(var_126_object);
}


// @pe
void func_3632(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_556_object, object var_557_object)
{
	var_0_object = var_557_object;
	var_1_object = var_556_object;
	var_3_string = false;
	if(1 != 0) {
		func_3743(var_557_object, "Neutral");
		var_0_object->SetMessage(511344); //@t
		var_0_object->ClearReplies(); //@t
		bool var_572_bool = false;
		bool var_573_bool;
		func_6775(var_1_object);
		if(var_573_bool != 0) {
			bool var_579_bool;
			func_6787(var_1_object);
			if(var_579_bool != 0)
				var_572_bool = true;
		}
		if(var_572_bool != 0)
			var_0_object->AddReply(511346, 12544, 12543); //@t
		bool var_588_bool = false;
		bool var_589_bool;
		func_6787(var_1_object);
		if(var_589_bool != 0) {
			bool var_591_bool;
			func_6799(var_1_object);
			if(!var_591_bool) //@nz
				var_588_bool = true;
		}
		if(var_588_bool != 0)
			var_0_object->AddReply(511473, 12680, 12679); //@t
		bool var_601_bool = false;
		bool var_602_bool;
		func_6823(var_1_object);
		if(var_602_bool != 0) {
			bool var_608_bool;
			func_6811(var_1_object);
			if(var_608_bool != 0)
				var_601_bool = true;
		}
		if(var_601_bool != 0)
			var_0_object->AddReply(511853, 13067, 13066); //@t
		var_0_object->AddReply(511345, -1, 12542); //@t
		goto Label_3713;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe34";
	}
Label_3713:
	bool var_620_bool;
	func_5965(var_620_bool);
	if(var_620_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3742;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3742:
		return 0;

	}
	
}


void func_7224(object var_58_object)
{
	object var_61_object; object var_62_object;
	@GetMainOutdoorScene(var_61_object);
	if(var_61_object == null) {
		@Trace("Can't find main outdoor scene");
		var_62_object = null;
		var_62_object = var_58_object;
	}
	var_61_object->GetMap(var_62_object);
	var_62_object = var_58_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6715(bool var_670_bool)
{
	int var_672_int;
	func_5805(var_672_int, "ood5Anna2");
	if(var_672_int == 0) {
		var_670_bool = true;
		return 0;
	}
	var_670_bool = false;
}


void func_6208(void)
{
	@SetVariable("d1q02", 2);
	object var_58_object;
	func_7224(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_5913(var_69_float);
	var_55_object->AddMark("d1q02AnnaGotoLaska", "pt_map_laska", 0, 508635, var_69_float);
	func_7027();
	bool var_95_bool;
	func_5901(var_95_bool, "quest_d1_02", "init_storojka");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3137(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_485_object, object var_486_object)
{
	var_0_object = var_486_object;
	var_1_object = var_485_object;
	var_3_string = false;
	if(1 != 0) {
		func_3209(var_486_object, "Neutral");
		var_0_object->SetMessage(506624); //@t
		var_0_object->ClearReplies(); //@t
		bool var_501_bool = false;
		bool var_502_bool;
		func_6727(var_1_object);
		if(var_502_bool != 0) {
			bool var_508_bool;
			func_6751(var_1_object);
			if(var_508_bool != 0)
				var_501_bool = true;
		}
		if(var_501_bool != 0)
			var_0_object->AddReply(507217, 7952, 7953); //@t
		var_0_object->AddReply(506626, -1, 7295); //@t
		goto Label_3179;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc45";
	}
Label_3179:
	bool var_520_bool;
	func_5965(var_520_bool);
	if(var_520_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3208;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3208:
		return 0;

	}
	
}


// @pe
void func_6727(bool var_502_bool)
{
	int var_504_int;
	func_5805(var_504_int, "ood2Anna1");
	if(var_504_int == 0) {
		var_502_bool = true;
		return 0;
	}
	var_502_bool = false;
}


void func_7241(object var_124_object, string var_125_string, float var_126_float)
{
	object var_134_object;
	@GetMainOutdoorScene(var_134_object);
	if(var_134_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_132_cvector;
	cvector var_133_cvector;
	bool var_135_bool;
	var_134_object->GetLocator(var_125_string, var_135_bool, var_132_cvector, var_133_cvector);
	if(!var_135_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_125_string) + " doesnt exist");
	var_134_object->GetMap(var_124_object);
	if(var_124_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_145_float = GetByIndex(var_132_cvector, 0);
	var_146_float = GetByIndex(var_132_cvector, 2);
	var_124_object->SetMapParams(var_145_float, var_146_float, var_126_float);
}
EMIT "Stack[-2] = 0";


void func_5711(bool var_120_bool, object var_121_object)
{
	bool var_129_bool; int var_130_int; string var_131_string;
	int var_133_int;
	func_5918(var_133_int);
	string var_127_string = ("d" + var_133_int) + "m";
	int var_128_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_121_object->HasProperty((var_127_string + (var_128_int + 1)), var_129_bool);
			if(!var_129_bool) { //@nz
			} else {
				var_128_int += 1;
			}
		}
		if(!var_128_int) { //@nz
			var_120_bool = false;
			return 10;
		}
		var_130_int = 0;
		if(var_128_int > 1)
			@irand(var_130_int, var_128_int);
		var_121_object->GetProperty((var_127_string + (var_130_int + 1)), var_131_string);
		bool var_152_bool; string var_153_string;
		var_131_string = var_153_string;
		func_5767(var_152_bool, var_153_string);
		var_152_bool = var_120_bool;
		return 10;

	}
}


// @pe
void func_6739(bool var_257_bool)
{
	int var_259_int;
	func_5805(var_259_int, "KnowSgustok");
	if(var_259_int == 1)
		var_257_bool = true;
	var_257_bool = false;
}


// @pe
void func_6236(object var_100_object)
{
	object var_104_object;
	func_7224(var_104_object);
	object var_101_object;
	var_104_object = var_101_object;
	func_7241(var_101_object, "pt_map_kapella", (float)2);
	object var_124_object;
	func_7224(var_124_object);
	var_100_object->ShowMap(var_124_object);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_884_object, object var_885_object)
{
	var_0_object = var_885_object;
	var_1_object = var_884_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_891_bool = false;
		bool var_892_bool;
		func_6667(var_1_object);
		if(!var_892_bool) { //@nz
			bool var_899_bool;
			func_6679(var_1_object);
			if(var_899_bool != 0)
				var_891_bool = true;
		}
		if(var_891_bool != 0) {
			object var_905_object; object var_906_object;
			var_905_object = var_1_object;
			var_906_object = var_0_object;
			func_6108();
			object var_909_object; object var_910_object;
			var_909_object = var_1_object;
			var_910_object = var_0_object;
			func_6152();
			func_237(var_885_object, "Neutral");
			var_0_object->SetMessage(533560); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(536195, 37969, 37968); //@t
			bool var_925_bool;
			func_6655(var_1_object);
			if(var_925_bool != 0)
				var_0_object->AddReply(536202, 37976, 37975); //@t
		} else {
					object var_942_object; object var_943_object;
					var_942_object = var_1_object;
					var_943_object = var_0_object;
					func_6152();
					func_237(var_885_object, "Neutral");
					var_0_object->SetMessage(533564); //@t
					var_0_object->ClearReplies(); //@t
					bool var_946_bool = false;
					bool var_947_bool;
					func_6691(var_1_object);
					if(var_947_bool != 0) {
						bool var_953_bool;
						func_6667(var_1_object);
						if(!var_953_bool) //@nz
							var_946_bool = true;
					}
					if(var_946_bool != 0)
						var_0_object->AddReply(533569, 35100, 35099); //@t
					bool var_959_bool;
					func_6703(var_1_object);
					if(var_959_bool != 0)
						var_0_object->AddReply(533565, 35096, 35095); //@t
					var_0_object->AddReply(533572, -1, 35102); //@t
					var_0_object->AddReply(536201, -1, 37974); //@t
		}
	}
	for(;;) {
		bool var_934_bool;
		func_5965(var_934_bool);
		if(var_934_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_236;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_236:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_6751(bool var_508_bool)
{
	int var_510_int;
	func_5805(var_510_int, "d2q01");
	if(var_510_int == 1)
		var_508_bool = true;
	var_508_bool = false;
}


void func_7274(int var_224_int)
{
	int var_226_int;
	@GetVariable("branch", var_226_int);
	if(var_226_int == 0) {
		var_224_int = 1;
		return 2;
	EMIT "GOTO 0x1c79";
	}
	if(var_226_int == 1) {
		var_224_int = 2;
		return 2;
	}
	var_224_int = 3;
}


// @pe
void func_6763(bool var_364_bool)
{
	int var_366_int;
	func_5805(var_366_int, "d1q02");
	if(var_366_int == 2)
		var_364_bool = true;
	var_364_bool = false;
}


// @pe
void func_6252(void)
{
	@SetVariable("ood4Anna1", 1);
}


void func_623(object var_0_object, int var_978_int, object var_979_object)
{
	var_0_object = var_979_object;
	bool var_989_bool; object var_990_object;
	object var_991_object;
	func_5789(var_991_object);
	var_991_object = var_990_object;
	func_5616(var_989_bool, var_990_object);
	bool var_992_bool; object var_993_object;
	var_979_object = var_993_object;
	func_5531(var_992_bool, var_993_object, 70.0);
	if(!var_992_bool) { //@nz
		var_978_int = -2;
		return 8;
	}
	object var_985_object;
	@CreateDialog(var_985_object);
	int var_996_int;
	func_5959(var_996_int);
	var_985_object->SetNPCName(var_996_int);
	int var_997_int;
	func_5957(var_997_int);
	var_985_object->SetNPCDescription(var_997_int);
	string var_998_string;
	func_5961(var_998_string);
	var_985_object->SetPhoto(var_998_string);
	string var_999_string;
	func_5963(var_999_string);
	var_985_object->SetPhoto2(var_999_string);
	int var_1000_int;
	func_7274(var_1000_int);
	var_985_object->SetPlayerName(var_1000_int);
	bool var_986_bool;
	@IsOverrideActive(var_986_bool);
	if(var_986_bool != 0) {
		var_978_int = -2;
		return 8;
	}
	@DoDialog(var_985_object);
	object var_1002_object; object var_1003_object;
	var_979_object = var_1002_object;
	var_985_object = var_1003_object;
	TaskCall(4);
	func_704(var_1004_object, var_1005_object, var_1006_string, var_1007_bool, var_1002_object, var_1003_object);
	TaskReturn();
	bool var_988_bool;
	var_985_object->IsDialogEnd(var_988_bool);
	
	for(;;) {
		var_1035_bool = !var_988_bool; //@nz
		if(var_1035_bool == 0) goto Label_693;
		@sync();
		var_985_object->IsDialogEnd(var_988_bool);
	}
	
Label_693:
	object var_1036_object;
	var_979_object = var_1036_object;
	func_5599();
	@StopDialog(var_985_object);
	var_985_object->GetReturnValue(-1);
	int var_987_int = var_978_int;
}
EMIT "Stack[-4] = 0";


void func_4208(object var_0_object, int var_632_int, object var_633_object)
{
	var_0_object = var_633_object;
	bool var_643_bool; object var_644_object;
	object var_645_object;
	func_5789(var_645_object);
	var_645_object = var_644_object;
	func_5616(var_643_bool, var_644_object);
	bool var_646_bool; object var_647_object;
	var_633_object = var_647_object;
	func_5531(var_646_bool, var_647_object, 70.0);
	if(!var_646_bool) { //@nz
		var_632_int = -2;
		return 8;
	}
	object var_639_object;
	@CreateDialog(var_639_object);
	int var_650_int;
	func_5959(var_650_int);
	var_639_object->SetNPCName(var_650_int);
	int var_651_int;
	func_5957(var_651_int);
	var_639_object->SetNPCDescription(var_651_int);
	string var_652_string;
	func_5961(var_652_string);
	var_639_object->SetPhoto(var_652_string);
	string var_653_string;
	func_5963(var_653_string);
	var_639_object->SetPhoto2(var_653_string);
	int var_654_int;
	func_7274(var_654_int);
	var_639_object->SetPlayerName(var_654_int);
	bool var_640_bool;
	@IsOverrideActive(var_640_bool);
	if(var_640_bool != 0) {
		var_632_int = -2;
		return 8;
	}
	@DoDialog(var_639_object);
	object var_656_object; object var_657_object;
	var_633_object = var_656_object;
	var_639_object = var_657_object;
	TaskCall(16);
	func_4289(var_658_object, var_659_object, var_660_string, var_661_bool, var_656_object, var_657_object);
	TaskReturn();
	bool var_642_bool;
	var_639_object->IsDialogEnd(var_642_bool);
	
	for(;;) {
		var_737_bool = !var_642_bool; //@nz
		if(var_737_bool == 0) goto Label_4278;
		@sync();
		var_639_object->IsDialogEnd(var_642_bool);
	}
	
Label_4278:
	object var_738_object;
	var_633_object = var_738_object;
	func_5599();
	@StopDialog(var_639_object);
	var_639_object->GetReturnValue(-1);
	int var_641_int = var_632_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6258(void)
{
	@SetVariable("d4q02AnnaGivesMedcine", 1);
}


void func_5234(object var_0_object)
{
	bool var_47_bool;
	func_5526(var_47_bool);
	if(!var_47_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_5362();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_5416();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6775(bool var_573_bool)
{
	int var_575_int;
	func_5805(var_575_int, "ood4Anna1");
	if(var_575_int == 0) {
		var_573_bool = true;
		return 0;
	}
	var_573_bool = false;
}


void func_6264(object var_65_object)
{
	object var_67_object;
	bool var_68_bool = false;
	bool var_69_bool = false;
	int var_70_int;
	func_5805(var_70_int, "d4q02AnnaGivesMedcine");
	if(var_70_int == 1) {
		int var_76_int;
		func_5805(var_76_int, "d4q02JuliaGivesMedcine");
		if(var_76_int == 1)
			var_69_bool = true;
	}
	if(var_69_bool != 0) {
		int var_80_int;
		func_5805(var_80_int, "d4q02LaraGivesMedcine");
		if(var_80_int == 1)
			var_68_bool = true;
	}
	if(var_68_bool != 0) {
		@SetVariable("d4q02", 2);
		object var_86_object;
		func_7224(var_86_object);
		var_86_object = var_67_object;
		float var_97_float;
		func_5913(var_97_float);
		var_67_object->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 511842, var_97_float);
		bool var_100_bool;
		func_5901(var_100_bool, "quest_d4_02", "birdmask");
		object var_106_object;
		object var_109_object;
		func_7224(var_109_object);
		var_109_object = var_106_object;
		func_7241(var_106_object, "pt_d4q02_birdmask", (float)2);
		object var_129_object;
		func_7224(var_129_object);
		var_65_object->ShowMap(var_129_object);
		var_67_object = null;
	}
}


void func_5754(string var_54_string)
{
	float var_57_float; float var_58_float;
	@lshGetAnimTimes(var_54_string, var_57_float, var_58_float);
	@lshPlayAnimation(var_57_float, var_58_float, false);
}


// @pe
void func_7291(object var_64_object)
{
	var_65_bool = GlobalVars[1];
	if(!var_65_bool) { //@nz
		int var_67_int; object var_68_object;
		var_64_object = var_68_object;
		TaskCall(5);
		func_882(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_284_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_285_bool;
	func_5927(var_285_bool, 1);
	if(var_285_bool != 0) {
		int var_288_int; object var_289_object;
		var_64_object = var_289_object;
		TaskCall(9);
		func_1915(var_290_object, var_288_int, var_289_object);
		TaskReturn();
		var_458_bool = GlobalVars[1];
		GlobalVars[1] = true;
		return 0;
	}
	bool var_459_bool;
	func_5927(var_459_bool, 2);
	if(var_459_bool != 0) {
		int var_461_int; object var_462_object;
		var_64_object = var_462_object;
		TaskCall(11);
		func_3056(var_463_object, var_461_int, var_462_object);
		TaskReturn();
		return 0;
	}
	bool var_530_bool;
	func_5927(var_530_bool, 4);
	if(var_530_bool != 0) {
		int var_532_int; object var_533_object;
		var_64_object = var_533_object;
		TaskCall(13);
		func_3551(var_534_object, var_532_int, var_533_object);
		TaskReturn();
		return 0;
	}
	bool var_630_bool;
	func_5927(var_630_bool, 5);
	if(var_630_bool != 0) {
		int var_632_int; object var_633_object;
		var_64_object = var_633_object;
		TaskCall(15);
		func_4208(var_634_object, var_632_int, var_633_object);
		TaskReturn();
		return 0;
	}
	bool var_739_bool;
	func_5927(var_739_bool, 6);
	if(var_739_bool != 0) {
		int var_741_int; object var_742_object;
		var_64_object = var_742_object;
		TaskCall(7);
		func_1220(var_743_object, var_741_int, var_742_object);
		TaskReturn();
		return 0;
	}
	bool var_858_bool;
	func_5927(var_858_bool, 9);
	if(var_858_bool != 0) {
		int var_860_int; object var_861_object;
		var_64_object = var_861_object;
		TaskCall(1);
		func_13(var_862_object, var_860_int, var_861_object);
		TaskReturn();
		return 0;
	}
	bool var_976_bool;
	func_5927(var_976_bool, 12);
	if(var_976_bool != 0) {
		int var_978_int; object var_979_object;
		var_64_object = var_979_object;
		TaskCall(3);
		func_623(var_980_object, var_978_int, var_979_object);
		TaskReturn();
		return 0;
	}
	int var_1037_int; object var_1038_object;
	var_64_object = var_1038_object;
	TaskCall(17);
	func_5024(var_1039_object, var_1037_int, var_1038_object);
	TaskReturn();
}


void func_5761(string var_248_string, bool var_249_bool)
{
	float var_254_float; float var_255_float;
	@lshGetAnimTimes(var_248_string, var_254_float, var_255_float);
	@lshPlayAnimation(var_254_float, var_255_float, var_249_bool);
}


// @pe
void func_6787(bool var_579_bool)
{
	int var_581_int;
	func_5805(var_581_int, "d4q02");
	if(var_581_int == 1)
		var_579_bool = true;
	var_579_bool = false;
}


void func_5254(bool var_71_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) //@nz
		var_71_bool = false;
	bool var_76_bool; object var_77_object;
	var_73_object = var_77_object;
	func_5517(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
}
EMIT "Stack[-1] = 0";


void func_5767(bool var_112_bool, string var_113_string)
{
	bool var_115_bool;
	bool var_116_bool;
	func_5965(var_116_bool);
	if(var_116_bool != 0) {
		@lshHasSpeech(var_115_bool, var_113_string);
		if(var_115_bool != 0) {
			@lshPlaySpeech(var_113_string);
			var_112_bool = true;
		}
	}
	var_112_bool = false;
}


// @pe
void func_3209(object var_2_object, string var_492_string)
{
	bool var_493_bool;
	func_5965(var_493_bool);
	if(!var_493_bool) //@nz
		return 0;
	if(var_492_string == var_2_object)
		return 0;
	string var_496_string; bool var_497_bool;
	var_492_string = var_496_string;
	if(var_492_string == "")
		var_497_bool = false;
	else
		var_497_bool = true;
	func_5761(var_496_string, var_497_bool);
	var_2_object = var_492_string;
	
}


// @pe
void func_6799(bool var_591_bool)
{
	int var_593_int;
	func_5805(var_593_int, "d4q02AnnaGivesMedcine");
	if(var_593_int == 1)
		var_591_bool = true;
	var_591_bool = false;
}


void func_5269(object var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_123_float, var_124_float);
}


void func_5782(void)
{
	bool var_49_bool;
	func_5965(var_49_bool);
	if(var_49_bool != 0)
		@lshStopSpeech();
}


void func_5274(bool var_54_bool)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	if(!var_57_object) { //@nz
		var_54_bool = false;
		return 4;
	}
	float var_61_float; object var_62_object;
	func_5492(var_61_float, var_62_object);
	if(var_61_float > 90000.0) {
		var_54_bool = false;
		return 4;
	}
	bool var_58_bool;
	@CanSee(var_58_bool, var_62_object);
	var_58_bool = var_54_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_6811(bool var_608_bool)
{
	int var_610_int;
	func_5805(var_610_int, "d4q02");
	if(var_610_int == 1000)
		var_608_bool = true;
	var_608_bool = false;
}


void func_5789(object var_80_object)
{
	object var_82_object;
	@self(var_82_object);
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3743(object var_2_object, string var_563_string)
{
	bool var_564_bool;
	func_5965(var_564_bool);
	if(!var_564_bool) //@nz
		return 0;
	if(var_563_string == var_2_object)
		return 0;
	string var_567_string; bool var_568_bool;
	var_563_string = var_567_string;
	if(var_563_string == "")
		var_568_bool = false;
	else
		var_568_bool = true;
	func_5761(var_567_string, var_568_bool);
	var_2_object = var_563_string;
	
}


void func_5795(cvector var_200_cvector, cvector var_201_cvector)
{
	float var_204_float = sqrt(var_201_cvector | var_201_cvector);
	if(var_204_float < 0.000001)
		var_200_cvector = [0.0, 0.0, 0.0];
	var_200_cvector = var_201_cvector / var_204_float;
}


// @pe
void func_6823(bool var_602_bool)
{
	int var_604_int;
	func_5805(var_604_int, "ood4Anna2");
	if(var_604_int == 0) {
		var_602_bool = true;
		return 0;
	}
	var_602_bool = false;
}


void func_5805(int var_322_int, string var_323_string)
{
	int var_325_int;
	@GetVariable(var_323_string, var_325_int);
	var_325_int = var_322_int;
}


// @pe
void func_2224(object var_2_object, string var_338_string)
{
	bool var_339_bool;
	func_5965(var_339_bool);
	if(!var_339_bool) //@nz
		return 0;
	if(var_338_string == var_2_object)
		return 0;
	string var_342_string; bool var_343_bool;
	var_338_string = var_342_string;
	if(var_338_string == "")
		var_343_bool = false;
	else
		var_343_bool = true;
	func_5761(var_342_string, var_343_bool);
	var_2_object = var_338_string;
	
}


void func_5296(void)
{
	float var_61_float;
	@rand(var_61_float, 8, 16);
	@SetTimer(10, var_61_float);
}


void func_5810(object var_108_object, string var_109_string)
{
	object var_112_object;
	@GetMainOutdoorScene(var_112_object);
	object var_113_object;
	@AddBlankActor(var_113_object, var_112_object, var_109_string, (var_109_string + ".bin"));
	var_113_object = var_108_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6835(bool var_664_bool)
{
	int var_666_int;
	func_5805(var_666_int, "d5q02");
	if(var_666_int == 0) {
		var_664_bool = true;
		return 0;
	}
	var_664_bool = false;
}


void func_5305(void)
{
	@KillTimer(10);
}


// @pe
void func_6332(void)
{
	@SetVariable("ood4Anna2", 1);
}


void func_5821(string var_150_string, bool var_151_bool)
{
	object var_153_object;
	@FindActor(var_153_object, var_150_string);
	if(!var_153_object) //@nz
		@Trace(("Door " + var_150_string) + " not found");
	else
		var_153_object->SetProperty("locked", var_151_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_6847(bool var_709_bool)
{
	int var_711_int;
	func_5805(var_711_int, "d5q02");
	if(var_711_int == 2)
		var_709_bool = true;
	var_709_bool = false;
}


// @pe
void func_704(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1002_object, object var_1003_object)
{
	var_0_object = var_1003_object;
	var_1_object = var_1002_object;
	var_3_string = false;
	if(1 != 0) {
		func_767(var_1003_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_737;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c4";
	}
Label_737:
	bool var_1027_bool;
	func_5965(var_1027_bool);
	if(var_1027_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_766;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_766:
		return 0;

	}
	
}


// @pe
void func_4289(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_656_object, object var_657_object)
{
	var_0_object = var_657_object;
	var_1_object = var_656_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_663_bool = false;
		bool var_664_bool;
		func_6835(var_1_object);
		if(var_664_bool != 0) {
			bool var_670_bool;
			func_6715(var_1_object);
			if(var_670_bool != 0)
				var_663_bool = true;
		}
		if(var_663_bool != 0) {
			object var_676_object; object var_677_object;
			var_676_object = var_1_object;
			var_677_object = var_0_object;
			func_6085();
			object var_680_object; object var_681_object;
			var_680_object = var_1_object;
			var_681_object = var_0_object;
			func_6146();
			func_4415(var_657_object, "Neutral");
			var_0_object->SetMessage(511872); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511873, 13087, 13086); //@t
			var_0_object->AddReply(515663, 16703, 16702); //@t
		} else {
					func_4415(var_657_object, "Neutral");
					var_0_object->SetMessage(511897); //@t
					var_0_object->ClearReplies(); //@t
					bool var_709_bool;
					func_6847(var_1_object);
					if(var_709_bool != 0)
						var_0_object->AddReply(511898, 13115, 13114); //@t
					bool var_718_bool = false;
					bool var_719_bool;
					func_6859(var_1_object);
					if(var_719_bool != 0) {
						bool var_725_bool;
						func_7015(var_1_object);
						if(var_725_bool != 0)
							var_718_bool = true;
					}
					if(var_718_bool != 0)
						var_0_object->AddReply(511907, 13124, 13123); //@t
					var_0_object->AddReply(511915, -1, 13131); //@t
		}
	}
	for(;;) {
		bool var_699_bool;
		func_5965(var_699_bool);
		if(var_699_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4414;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4414:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x10c5";


void func_6338(void)
{
	@SetVariable("d5q02", 1);
	object var_58_object;
	func_7224(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_5913(var_69_float);
	var_55_object->AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", 0, 515360, var_69_float);
	float var_76_float;
	func_5913(var_76_float);
	var_55_object->AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", 0, 515361, var_76_float);
	func_7066();
	func_7079();
	object var_108_object;
	func_5810(var_108_object, "quest_d5_02");
	bool var_116_bool;
	func_5901(var_116_bool, "quest_d5_02", "place_gorbun");
}
EMIT "Stack[-1] = 0";


void func_1220(object var_0_object, int var_741_int, object var_742_object)
{
	var_0_object = var_742_object;
	bool var_752_bool; object var_753_object;
	object var_754_object;
	func_5789(var_754_object);
	var_754_object = var_753_object;
	func_5616(var_752_bool, var_753_object);
	bool var_755_bool; object var_756_object;
	var_742_object = var_756_object;
	func_5531(var_755_bool, var_756_object, 70.0);
	if(!var_755_bool) { //@nz
		var_741_int = -2;
		return 8;
	}
	object var_748_object;
	@CreateDialog(var_748_object);
	int var_759_int;
	func_5959(var_759_int);
	var_748_object->SetNPCName(var_759_int);
	int var_760_int;
	func_5957(var_760_int);
	var_748_object->SetNPCDescription(var_760_int);
	string var_761_string;
	func_5961(var_761_string);
	var_748_object->SetPhoto(var_761_string);
	string var_762_string;
	func_5963(var_762_string);
	var_748_object->SetPhoto2(var_762_string);
	int var_763_int;
	func_7274(var_763_int);
	var_748_object->SetPlayerName(var_763_int);
	bool var_749_bool;
	@IsOverrideActive(var_749_bool);
	if(var_749_bool != 0) {
		var_741_int = -2;
		return 8;
	}
	@DoDialog(var_748_object);
	object var_765_object; object var_766_object;
	var_742_object = var_765_object;
	var_748_object = var_766_object;
	TaskCall(8);
	func_1301(var_767_object, var_768_object, var_769_string, var_770_bool, var_765_object, var_766_object);
	TaskReturn();
	bool var_751_bool;
	var_748_object->IsDialogEnd(var_751_bool);
	
	for(;;) {
		var_856_bool = !var_751_bool; //@nz
		if(var_856_bool == 0) goto Label_1290;
		@sync();
		var_748_object->IsDialogEnd(var_751_bool);
	}
	
Label_1290:
	object var_857_object;
	var_742_object = var_857_object;
	func_5599();
	@StopDialog(var_748_object);
	var_748_object->GetReturnValue(-1);
	int var_750_int = var_741_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6859(bool var_719_bool)
{
	int var_721_int;
	func_5805(var_721_int, "d5q02KnowNudeIsDead");
	if(var_721_int == 1)
		var_719_bool = true;
	var_719_bool = false;
}


void func_5838(int var_149_int, int var_150_int)
{
	object var_152_object;
	@CreateIntVector(var_152_object);
	var_152_object->add(var_149_int);
	var_152_object->add(var_150_int);
	@SendWorldWndMessage(3, var_152_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6871(bool var_320_bool)
{
	int var_322_int;
	func_5805(var_322_int, "ood1Anna1");
	if(var_322_int == 0) {
		var_320_bool = true;
		return 0;
	}
	var_320_bool = false;
}


void func_5850(object var_146_object, int var_147_int)
{
	int var_149_int;
	object var_150_object;
	var_146_object = var_150_object;
	int var_152_int;
	func_5500(var_150_object, "money", var_152_int);
	if(var_152_int > 0) {
		@GetInvItemByName(var_149_int, "Money");
		int var_159_int; int var_160_int;
		var_149_int = var_159_int;
		var_147_int = var_160_int;
		func_5838(var_159_int, var_160_int);
	}
}


// @pe
void func_6883(bool var_385_bool)
{
	int var_387_int;
	func_5805(var_387_int, "ood1Anna2");
	if(var_387_int == 0) {
		var_385_bool = true;
		return 0;
	}
	var_385_bool = false;
}


// @pe
void func_237(object var_2_object, string var_913_string)
{
	bool var_914_bool;
	func_5965(var_914_bool);
	if(!var_914_bool) //@nz
		return 0;
	if(var_913_string == var_2_object)
		return 0;
	string var_917_string; bool var_918_bool;
	var_913_string = var_917_string;
	if(var_913_string == "")
		var_918_bool = false;
	else
		var_918_bool = true;
	func_5761(var_917_string, var_918_bool);
	var_2_object = var_913_string;
	
}


void func_6382(void)
{
	@SetVariable("d5q02", 3);
	object var_168_object;
	func_7224(var_168_object);
	object var_165_object;
	var_168_object = var_165_object;
	float var_173_float;
	func_5913(var_173_float);
	var_165_object->AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", 0, 515363, var_173_float);
	func_7092();
}
EMIT "Stack[-1] = 0";


// @pe
void func_6895(bool var_788_bool)
{
	int var_790_int;
	func_5805(var_790_int, "d6q01");
	if(var_790_int == 0) {
		var_788_bool = true;
		return 0;
	}
	var_788_bool = false;
}


void func_5869(object var_138_object, object var_139_object, int var_140_int)
{
	int var_144_int;
	var_139_object->GetItemID(var_144_int);
	int var_145_int;
	@GetInvItemProperty(var_145_int, var_144_int, "Category");
	bool var_146_bool;
	var_138_object->AddItem(var_146_bool, var_139_object, var_145_int, var_140_int);
	if(!var_146_bool) { //@nz
		var_138_object->DropItems(var_139_object, var_140_int);
	} else {
		int var_149_int; int var_150_int;
		var_144_int = var_149_int;
		var_140_int = var_150_int;
		func_5838(var_149_int, var_150_int);
	}
	
}


// @pe
void func_6907(bool var_798_bool)
{
	int var_800_int;
	func_5805(var_800_int, "d6q01");
	if(var_800_int == 1)
		var_798_bool = true;
	var_798_bool = false;
}


// @pe
void func_767(object var_2_object, string var_1009_string)
{
	bool var_1010_bool;
	func_5965(var_1010_bool);
	if(!var_1010_bool) //@nz
		return 0;
	if(var_1009_string == var_2_object)
		return 0;
	string var_1013_string; bool var_1014_bool;
	var_1009_string = var_1013_string;
	if(var_1009_string == "")
		var_1014_bool = false;
	else
		var_1014_bool = true;
	func_5761(var_1013_string, var_1014_bool);
	var_2_object = var_1009_string;
	
}


void func_5888(object var_133_object, string var_134_string, int var_135_int)
{
	object var_137_object;
	@CreateInvItem(var_137_object);
	var_137_object->SetItemName(var_134_string);
	object var_138_object; object var_139_object; int var_140_int;
	var_133_object = var_138_object;
	var_137_object = var_139_object;
	var_135_int = var_140_int;
	func_5869(var_138_object, var_139_object, var_140_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6405(void)
{
	@SetVariable("ood1Anna1", 1);
}


// @pe
void func_6919(bool var_412_bool)
{
	int var_414_int;
	func_5805(var_414_int, "ood1Anna3");
	if(var_414_int == 0) {
		var_412_bool = true;
		return 0;
	}
	var_412_bool = false;
}


// @pe
void func_6411(void)
{
	@SetVariable("ood1Anna2", 1);
}


void func_5901(bool var_116_bool, string var_117_string, string var_118_string)
{
	object var_120_object;
	@FindActor(var_120_object, var_117_string);
	if(var_120_object == null)
		var_116_bool = false;
	@Trigger(var_120_object, var_118_string);
	var_116_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6417(void)
{
	bool var_184_bool = false;
	int var_185_int;
	func_5805(var_185_int, "d5q01");
	if(var_185_int < 7) {
		int var_191_int;
		func_5805(var_191_int, "d5q01");
		if(var_191_int != -1)
			var_184_bool = true;
	}
	if(var_184_bool != 0) {
		bool var_195_bool;
		func_5901(var_195_bool, "quest_d5_02", "place_girl");
	}
}


// @pe
void func_6931(bool var_782_bool)
{
	int var_784_int;
	func_5805(var_784_int, "ood6Anna1");
	if(var_784_int == 0) {
		var_782_bool = true;
		return 0;
	}
	var_782_bool = false;
}


// @pe
void func_1301(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_765_object, object var_766_object)
{
	var_0_object = var_766_object;
	var_1_object = var_765_object;
	var_3_string = false;
	if(1 != 0) {
		func_1431(var_766_object, "Neutral");
		var_0_object->SetMessage(512719); //@t
		var_0_object->ClearReplies(); //@t
		bool var_781_bool = false;
		bool var_782_bool;
		func_6931(var_1_object);
		if(var_782_bool != 0) {
			bool var_788_bool;
			func_6895(var_1_object);
			if(var_788_bool != 0)
				var_781_bool = true;
		}
		if(var_781_bool != 0)
			var_0_object->AddReply(512720, 4261, 13913); //@t
		bool var_797_bool = false;
		bool var_798_bool;
		func_6907(var_1_object);
		if(var_798_bool != 0) {
			bool var_804_bool;
			func_6943(var_1_object);
			if(var_804_bool != 0)
				var_797_bool = true;
		}
		if(var_797_bool != 0)
			var_0_object->AddReply(512721, 13915, 13914); //@t
		bool var_813_bool = false;
		bool var_814_bool = false;
		bool var_815_bool = false;
		bool var_816_bool;
		func_6967(var_1_object);
		if(var_816_bool != 0) {
			bool var_822_bool;
			func_6979(var_1_object);
			if(!var_822_bool) //@nz
				var_815_bool = true;
		}
		if(var_815_bool != 0) {
			bool var_829_bool;
			func_6991(var_1_object);
			if(!var_829_bool) //@nz
				var_814_bool = true;
		}
		if(var_814_bool != 0) {
			bool var_836_bool;
			func_7003(var_1_object);
			if(var_836_bool != 0)
				var_813_bool = true;
		}
		if(var_813_bool != 0)
			var_0_object->AddReply(513747, 14993, 14992); //@t
		var_0_object->AddReply(512728, -1, 13921); //@t
		goto Label_1401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x519";
	}
Label_1401:
	bool var_848_bool;
	func_5965(var_848_bool);
	if(var_848_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1430;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1430:
		return 0;

	}
	
}


void func_5913(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


void func_5918(int var_133_int)
{
	float var_135_float;
	@GetGameTime(var_135_float);
	var_133_int = 1 + (var_135_float / 24);
}


// @pe
void func_6943(bool var_804_bool)
{
	int var_806_int;
	func_5805(var_806_int, "ood6Anna2");
	if(var_806_int == 0) {
		var_804_bool = true;
		return 0;
	}
	var_804_bool = false;
}


// @pe
void func_5927(bool var_285_bool, int var_286_int)
{
	int var_287_int;
	func_5918(var_287_int);
	var_285_bool = var_287_int == var_286_int;
}


void func_5416(void)
{
	bool var_73_bool; int var_74_int; int var_75_int; bool var_76_bool;
	@WaitForAnimEnd();
	bool var_77_bool;
	func_5526(var_77_bool);
	if(!var_77_bool) //@nz
		return 12;
	int var_79_int;
	func_5940(var_79_int);
	int var_71_int;
	var_79_int = var_71_int;
	int var_72_int = 0;
	
	for(;;) {
		bool var_92_bool = false;
		if(var_72_int < 5) {
			bool var_95_bool;
			func_5526(var_95_bool);
			if(var_95_bool != 0)
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			if(!var_71_int) { //@nz
				@Sleep(3, var_73_bool);
				if(!var_73_bool) { //@nz
				} else {
			} else {
			@irand(var_74_int, var_71_int);
			@irand(var_75_int, 5);
			if(var_75_int != 0)
				var_74_int = 0;
			string var_106_string; int var_107_int;
			var_74_int = var_107_int;
			func_5933(var_106_string, var_107_int);
			@PlayAnimation("all", var_106_string);
			@WaitForAnimEnd(var_76_bool);
			var_108_bool = !var_76_bool; //@nz
			if(var_108_bool == 0) goto Label_5471;
			goto Label_5482;
			}
				Label_5471:
					bool var_99_bool;
					func_5485(var_99_bool);
					var_100_bool = !var_99_bool; //@nz
					if(var_100_bool == 0) goto Label_5477;
			}
		}
	Label_5482:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5477:
		@ResetAAS();
		var_72_int += 1;
	}
	
}


// @pe
void func_6442(void)
{
	@SetVariable("ood1Anna3", 1);
}


// @pe
void func_6955(bool var_444_bool)
{
	int var_446_int;
	func_5805(var_446_int, "ood1Anna4");
	if(var_446_int == 0) {
		var_444_bool = true;
		return 0;
	}
	var_444_bool = false;
}


void func_5933(string var_85_string, int var_86_int)
{
	string var_88_string = "idle";
	if(var_86_int != 0)
		var_88_string += var_86_int;
	var_88_string = var_85_string;
}


// @pe
void func_6448(void)
{
	@SetVariable("ood1Anna4", 1);
}


void func_5940(int var_79_int)
{
	int var_82_int; bool var_83_bool;
	var_82_int = 0;
	
	for(;;) {
		string var_85_string; int var_86_int;
		var_82_int = var_86_int;
		func_5933(var_85_string, var_86_int);
		@HasAnimation(var_83_bool, "all", var_85_string);
		if(!var_83_bool) //@nz
			break;
		var_82_int += 1;
	}
	var_82_int = var_79_int;
}


// @pe
void func_6454(void)
{
	@SetVariable("ood6Anna1", 1);
}


// @pe
void func_6967(bool var_816_bool)
{
	int var_818_int;
	func_5805(var_818_int, "microscope_d6q01_anna_blood");
	if(var_818_int != 0) {
		var_816_bool = true;
		return 0;
	}
	var_816_bool = false;
}


// @pe
void func_6460(void)
{
	@SetVariable("ood6Anna2", 1);
}


// @pe
void func_4415(object var_2_object, string var_684_string)
{
	bool var_685_bool;
	func_5965(var_685_bool);
	if(!var_685_bool) //@nz
		return 0;
	if(var_684_string == var_2_object)
		return 0;
	string var_688_string; bool var_689_bool;
	var_684_string = var_688_string;
	if(var_684_string == "")
		var_689_bool = false;
	else
		var_689_bool = true;
	func_5761(var_688_string, var_689_bool);
	var_2_object = var_684_string;
	
}


void func_6466(void)
{
	object var_75_object;
	int var_76_int;
	func_5805(var_76_int, "d6q01KnowKillerIsKlara");
	if(var_76_int == 0) {
		@SetVariable("d6q01KnowKillerIsKlara", 1);
		object var_84_object;
		func_7224(var_84_object);
		var_84_object = var_75_object;
		float var_95_float;
		func_5913(var_95_float);
		var_75_object->AddMark("d6q01KillerIsKlara", "pt_map_alexandr", 1, 515396, var_95_float);
		func_7131();
		bool var_121_bool;
		func_5901(var_121_bool, "quest_d6_01", "saburov_klara");
		var_75_object = null;
	}
}


// @pe
void func_6979(bool var_822_bool)
{
	int var_824_int;
	func_5805(var_824_int, "d6q01");
	if(var_824_int == 1000)
		var_822_bool = true;
	var_822_bool = false;
}


void func_5957(int var_221_int)
{
	var_221_int = 515530;
}


void func_5959(int var_220_int)
{
	var_220_int = 502856;
}


void func_5961(string var_222_string)
{
	var_222_string = "ui/NPC_Anna.png";
}


void func_5963(string var_223_string)
{
	var_223_string = "ui/NPC_Anna_b.png";
}


void func_5965(bool var_116_bool)
{
	var_116_bool = true;
}


// @pe
void func_6991(bool var_829_bool)
{
	int var_831_int;
	func_5805(var_831_int, "d6q01");
	if(var_831_int == -1)
		var_829_bool = true;
	var_829_bool = false;
}


// @pe
void func_5967(void)
{
	@SetVariable("d1q02", 3);
	func_7040();
}


// @pe
void func_5976(void)
{
	@SetVariable("KnowKapella", 1);
}


// @pe
void func_7003(bool var_836_bool)
{
	int var_838_int;
	func_5805(var_838_int, "ood6Anna3");
	if(var_838_int == 0) {
		var_836_bool = true;
		return 0;
	}
	var_836_bool = false;
}


// @pe
void func_5982(object var_196_object)
{
	@Trace("beta_pills 5 is given");
	object var_199_object;
	var_196_object = var_199_object;
	func_5888(var_199_object, "beta_pills", 5);
}


// @pe
void func_6501(void)
{
	@SetVariable("KnowAnna", 1);
}


// @pe
void func_7015(bool var_725_bool)
{
	int var_727_int;
	func_5805(var_727_int, "ood5Anna1");
	if(var_727_int == 0) {
		var_725_bool = true;
		return 0;
	}
	var_725_bool = false;
}


// @pe
void func_5993(object var_143_object)
{
	@Trace("money1000 is given");
	object var_146_object;
	var_143_object = var_146_object;
	func_5850(var_146_object, 1000);
}


// @pe
void func_6507(object var_127_object)
{
	func_7118();
	@Trace("anna blood is given");
	object var_138_object;
	var_127_object = var_138_object;
	func_5888(var_138_object, "d6q01_anna_blood", 1);
}


void func_5485(bool var_99_bool)
{
	var_99_bool = true;
}


void func_5487(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_882(object var_0_object, int var_67_int, object var_68_object)
{
	var_0_object = var_68_object;
	bool var_78_bool; object var_79_object;
	object var_80_object;
	func_5789(var_80_object);
	var_80_object = var_79_object;
	func_5616(var_78_bool, var_79_object);
	bool var_173_bool; object var_174_object;
	var_68_object = var_174_object;
	func_5531(var_173_bool, var_174_object, 70.0);
	if(!var_173_bool) { //@nz
		var_67_int = -2;
		return 8;
	}
	object var_74_object;
	@CreateDialog(var_74_object);
	int var_220_int;
	func_5959(var_220_int);
	var_74_object->SetNPCName(var_220_int);
	int var_221_int;
	func_5957(var_221_int);
	var_74_object->SetNPCDescription(var_221_int);
	string var_222_string;
	func_5961(var_222_string);
	var_74_object->SetPhoto(var_222_string);
	string var_223_string;
	func_5963(var_223_string);
	var_74_object->SetPhoto2(var_223_string);
	int var_224_int;
	func_7274(var_224_int);
	var_74_object->SetPlayerName(var_224_int);
	bool var_75_bool;
	@IsOverrideActive(var_75_bool);
	if(var_75_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	@DoDialog(var_74_object);
	object var_233_object; object var_234_object;
	var_68_object = var_233_object;
	var_74_object = var_234_object;
	TaskCall(6);
	func_963(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object);
	TaskReturn();
	bool var_77_bool;
	var_74_object->IsDialogEnd(var_77_bool);
	
	for(;;) {
		var_276_bool = !var_77_bool; //@nz
		if(var_276_bool == 0) goto Label_952;
		@sync();
		var_74_object->IsDialogEnd(var_77_bool);
	}
	
Label_952:
	object var_277_object;
	var_68_object = var_277_object;
	func_5599();
	@StopDialog(var_74_object);
	var_74_object->GetReturnValue(-1);
	int var_76_int = var_67_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6003(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_5492(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


void func_7027(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 35, 2, 512117);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_7196(var_77_bool, var_78_object, 7);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6009(object var_191_object)
{
	@Trace("gold_ring is given");
	object var_194_object;
	var_191_object = var_194_object;
	func_5888(var_194_object, "gold_ring", 1);
}


// @pe
void func_6521(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1915(object var_0_object, int var_288_int, object var_289_object)
{
	var_0_object = var_289_object;
	bool var_299_bool; object var_300_object;
	object var_301_object;
	func_5789(var_301_object);
	var_301_object = var_300_object;
	func_5616(var_299_bool, var_300_object);
	bool var_302_bool; object var_303_object;
	var_289_object = var_303_object;
	func_5531(var_302_bool, var_303_object, 70.0);
	if(!var_302_bool) { //@nz
		var_288_int = -2;
		return 8;
	}
	object var_295_object;
	@CreateDialog(var_295_object);
	int var_306_int;
	func_5959(var_306_int);
	var_295_object->SetNPCName(var_306_int);
	int var_307_int;
	func_5957(var_307_int);
	var_295_object->SetNPCDescription(var_307_int);
	string var_308_string;
	func_5961(var_308_string);
	var_295_object->SetPhoto(var_308_string);
	string var_309_string;
	func_5963(var_309_string);
	var_295_object->SetPhoto2(var_309_string);
	int var_310_int;
	func_7274(var_310_int);
	var_295_object->SetPlayerName(var_310_int);
	bool var_296_bool;
	@IsOverrideActive(var_296_bool);
	if(var_296_bool != 0) {
		var_288_int = -2;
		return 8;
	}
	@DoDialog(var_295_object);
	object var_312_object; object var_313_object;
	var_289_object = var_312_object;
	var_295_object = var_313_object;
	TaskCall(10);
	func_1996(var_314_object, var_315_object, var_316_string, var_317_bool, var_312_object, var_313_object);
	TaskReturn();
	bool var_298_bool;
	var_295_object->IsDialogEnd(var_298_bool);
	
	for(;;) {
		var_456_bool = !var_298_bool; //@nz
		if(var_456_bool == 0) goto Label_1985;
		@sync();
		var_295_object->IsDialogEnd(var_298_bool);
	}
	
Label_1985:
	object var_457_object;
	var_289_object = var_457_object;
	func_5599();
	@StopDialog(var_295_object);
	var_295_object->GetReturnValue(-1);
	int var_297_int = var_288_int;
}
EMIT "Stack[-4] = 0";


void func_5500(object var_150_object, string var_151_string, int var_152_int)
{
	int var_154_int;
	var_150_object->GetProperty(var_151_string, var_154_int);
	var_150_object->SetProperty(var_151_string, (var_154_int + var_152_int));
}


// @pe
void func_6527(void)
{
	@SetVariable("ood6Anna3", 1);
}


void func_7040(void)
{
	object var_134_object;
	@CreateDiaryEntry(var_134_object, 274, 2, 521236);
	bool var_138_bool; object var_139_object;
	var_134_object = var_139_object;
	func_7196(var_138_bool, var_139_object, 7);
}
EMIT "Stack[-1] = 0";


void func_5507(bool var_54_bool, cvector var_55_cvector)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	bool var_61_bool;
	@Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
}


// @pe
void func_6020(object var_238_object)
{
	object var_242_object;
	func_7224(var_242_object);
	object var_239_object;
	var_242_object = var_239_object;
	func_7241(var_239_object, "pt_map_station", (float)2);
	object var_243_object;
	func_7224(var_243_object);
	var_238_object->ShowMap(var_243_object);
}


// @pe
void func_6533(object var_130_object)
{
	@Trace("beta_pills is given");
	object var_133_object;
	var_130_object = var_133_object;
	func_5888(var_133_object, "beta_pills", 1);
}


void func_5517(bool var_50_bool, object var_51_object)
{
	cvector var_53_cvector;
	var_51_object->GetPosition(var_53_cvector);
	bool var_54_bool; cvector var_55_cvector;
	var_53_cvector = var_55_cvector;
	func_5507(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
}


void func_7053(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 51, 1, 512133);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_7196(var_81_bool, var_82_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6544(object var_160_object)
{
	@Trace("gamma_pills is given");
	object var_163_object;
	var_160_object = var_163_object;
	func_5888(var_163_object, "gamma_pills", 1);
}


void func_6036(void)
{
	object var_231_object;
	func_7224(var_231_object);
	object var_230_object;
	var_231_object = var_230_object;
	float var_236_float;
	func_5913(var_236_float);
	var_230_object->AddMark("d1q01AnnaMapMarkMladVlad", "pt_map_station", 3, 508689, var_236_float);
}
EMIT "Stack[-1] = 0";


void func_5526(bool var_47_bool)
{
	bool var_49_bool;
	@IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
}


// @pe
void func_1431(object var_2_object, string var_772_string)
{
	bool var_773_bool;
	func_5965(var_773_bool);
	if(!var_773_bool) //@nz
		return 0;
	if(var_772_string == var_2_object)
		return 0;
	string var_776_string; bool var_777_bool;
	var_772_string = var_776_string;
	if(var_772_string == "")
		var_777_bool = false;
	else
		var_777_bool = true;
	func_5761(var_776_string, var_777_bool);
	var_2_object = var_772_string;
	
}


void func_7066(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 148, 2, 515354);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7196(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5531(bool var_173_bool, object var_174_object, float var_175_float)
{
	cvector var_186_cvector; bool var_193_bool;
	var_174_object->GetPosition(var_186_cvector);
	float var_185_float;
	var_174_object->GetEyesHeight(var_185_float);
	var_194_float = GetByIndex(var_186_cvector, 1);
	SetByIndex(var_186_cvector, 1) = (var_194_float + var_185_float);
	cvector var_187_cvector;
	@GetPosition(var_187_cvector);
	@GetEyesHeight(var_185_float);
	var_195_float = GetByIndex(var_187_cvector, 1);
	SetByIndex(var_187_cvector, 1) = (var_195_float + var_185_float);
	cvector var_188_cvector = var_186_cvector - var_187_cvector;
	var_196_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (float)0;
	var_198_float = sqrt(var_188_cvector | var_188_cvector);
	var_188_cvector /= var_198_float;
	cvector var_189_cvector = -var_188_cvector;
	cvector var_200_cvector;
	func_5795(var_200_cvector, (var_189_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_190_cvector = ((var_188_cvector * var_175_float) + (var_200_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_192_bool;
	@IsOverrideActive(var_192_bool);
	if(var_192_bool != 0)
		var_173_bool = false;
	@StopWorld();
	@CameraTransit((var_187_cvector + var_190_cvector), var_189_cvector);
	var_213_float = GetByIndex(var_190_cvector, 0);
	var_214_float = GetByIndex(var_190_cvector, 2);
	@Rotate(var_213_float, var_214_float);
	bool var_215_bool;
	func_5965(var_215_bool);
	if(var_215_bool != 0) {
	} else {
		@HasAnimationTrack(var_193_bool, "head");
		if(var_193_bool == 0) goto Label_5593;
		@LookAsyncCamera("head");
	}
Label_5593:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_173_bool = true;
	
}


// @pe
void func_6555(object var_154_object)
{
	@Trace("delta_pills is given");
	object var_157_object;
	var_154_object = var_157_object;
	func_5888(var_157_object, "delta_pills", 1);
}


void func_5024(object var_0_object, int var_1037_int, object var_1038_object)
{
	var_0_object = var_1038_object;
	bool var_1048_bool; object var_1049_object;
	object var_1050_object;
	func_5789(var_1050_object);
	var_1050_object = var_1049_object;
	func_5616(var_1048_bool, var_1049_object);
	bool var_1051_bool; object var_1052_object;
	var_1038_object = var_1052_object;
	func_5531(var_1051_bool, var_1052_object, 70.0);
	if(!var_1051_bool) { //@nz
		var_1037_int = -2;
		return 8;
	}
	object var_1044_object;
	@CreateDialog(var_1044_object);
	int var_1055_int;
	func_5959(var_1055_int);
	var_1044_object->SetNPCName(var_1055_int);
	int var_1056_int;
	func_5957(var_1056_int);
	var_1044_object->SetNPCDescription(var_1056_int);
	string var_1057_string;
	func_5961(var_1057_string);
	var_1044_object->SetPhoto(var_1057_string);
	string var_1058_string;
	func_5963(var_1058_string);
	var_1044_object->SetPhoto2(var_1058_string);
	int var_1059_int;
	func_7274(var_1059_int);
	var_1044_object->SetPlayerName(var_1059_int);
	bool var_1045_bool;
	@IsOverrideActive(var_1045_bool);
	if(var_1045_bool != 0) {
		var_1037_int = -2;
		return 8;
	}
	@DoDialog(var_1044_object);
	object var_1061_object; object var_1062_object;
	var_1038_object = var_1061_object;
	var_1044_object = var_1062_object;
	TaskCall(18);
	func_5105(var_1063_object, var_1064_object, var_1065_string, var_1066_bool, var_1061_object, var_1062_object);
	TaskReturn();
	bool var_1047_bool;
	var_1044_object->IsDialogEnd(var_1047_bool);
	
	for(;;) {
		var_1091_bool = !var_1047_bool; //@nz
		if(var_1091_bool == 0) goto Label_5094;
		@sync();
		var_1044_object->IsDialogEnd(var_1047_bool);
	}
	
Label_5094:
	object var_1092_object;
	var_1038_object = var_1092_object;
	func_5599();
	@StopDialog(var_1044_object);
	var_1044_object->GetReturnValue(-1);
	int var_1046_int = var_1037_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6052(object var_190_object)
{
	@Trace("silver_ring is given");
	object var_193_object;
	var_190_object = var_193_object;
	func_5888(var_193_object, "silver_ring", 1);
}


// @pe
void func_6566(void)
{
	@SetVariable("ood5Anna1", 1);
}


void func_7079(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 149, 2, 515355);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7196(var_105_bool, var_106_object, 148);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6572(object var_123_object)
{
	object var_127_object;
	func_7224(var_127_object);
	object var_124_object;
	var_127_object = var_124_object;
	func_7241(var_124_object, "pt_map_gorbun", (float)2);
	object var_147_object;
	func_7224(var_147_object);
	var_123_object->ShowMap(var_147_object);
}


// @pe
void func_6063(object var_185_object)
{
	@Trace("bracelet is given");
	object var_188_object;
	var_185_object = var_188_object;
	func_5888(var_188_object, "bracelet", 1);
}


void func_7092(void)
{
	object var_175_object;
	@CreateDiaryEntry(var_175_object, 151, 2, 515357);
	bool var_179_bool; object var_180_object;
	var_175_object = var_180_object;
	func_7196(var_179_bool, var_180_object, 148);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6074(object var_164_object)
{
	@Trace("beads is given");
	object var_167_object;
	var_164_object = var_167_object;
	func_5888(var_167_object, "beads", 1);
}


// @pe
void func_6588(void)
{
	func_5821("lc_House6_05@door1", false);
}


void func_7105(void)
{
	object var_186_object;
	@CreateDiaryEntry(var_186_object, 722, 1, 538786);
	bool var_190_bool; object var_191_object;
	var_186_object = var_191_object;
	func_7196(var_190_bool, var_191_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_963(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_233_object, object var_234_object)
{
	var_0_object = var_234_object;
	var_3_string = false;
	if(1 != 0) {
		object var_240_object; object var_241_object;
		var_240_object = var_233_object;
		var_241_object = var_0_object;
		func_6501();
		func_1026(var_234_object, "Neutral");
		var_0_object->SetMessage(500221); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(532814, 34298, 34291); //@t
		var_0_object->AddReply(532815, 34294, 34292); //@t
		goto Label_996;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3c7";
	}
Label_996:
	bool var_263_bool;
	func_5965(var_263_bool);
	if(var_263_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1025;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1025:
		return 0;

	}
	
}


// @pe
void func_6595(bool var_424_bool)
{
	int var_426_int;
	func_5805(var_426_int, "d1q01");
	if(var_426_int == 1000)
		var_424_bool = true;
	var_424_bool = false;
}


// @pe
void func_6085(void)
{
	@SetVariable("d5AnnaVisit", 1);
}


// @pe
void func_6091(void)
{
	@SetVariable("KnowShabnak", 1);
}


// @pe
void func_1996(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_312_object, object var_313_object)
{
	var_0_object = var_313_object;
	var_1_object = var_312_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_319_bool = false;
		bool var_320_bool;
		func_6871(var_1_object);
		if(var_320_bool != 0) {
			bool var_328_bool;
			func_6619(var_1_object);
			if(var_328_bool != 0)
				var_319_bool = true;
		}
		if(var_319_bool != 0) {
			object var_334_object; object var_335_object;
			var_334_object = var_1_object;
			var_335_object = var_0_object;
			func_6405();
			func_2224(var_313_object, "Neutral");
			var_0_object->SetMessage(504938); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(504949, 5439, 5438); //@t
			var_0_object->AddReply(504978, 5439, 5475); //@t
			var_0_object->AddReply(504979, 5439, 5477); //@t
		} else {
					bool var_364_bool;
					func_6763(var_1_object);
					if(var_364_bool == 0) goto Label_2071;
					func_2224(var_313_object, "Neutral");
					var_0_object->SetMessage(504940); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504981, 5480, 5479); //@t
					var_0_object->AddReply(504985, -1, 5483); //@t
		}
	}
Label_2194:
	for(;;) {
		bool var_356_bool;
		func_5965(var_356_bool);
		if(var_356_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5754(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2223;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2223:
			return 0;

		}

	}
	
Label_2071:
	bool var_378_bool = false;
	bool var_379_bool;
	func_6607(var_1_object);
	if(var_379_bool != 0) {
		bool var_385_bool;
		func_6883(var_1_object);
		if(var_385_bool != 0)
			var_378_bool = true;
	}
	if(var_378_bool != 0) {
		object var_391_object; object var_392_object;
		var_391_object = var_1_object;
		var_392_object = var_0_object;
		func_6411();
		func_2224(var_313_object, "Neutral");
		var_0_object->SetMessage(504943); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(504987, 5486, 5485); //@t
		var_0_object->AddReply(533010, 34515, 34514); //@t
		goto Label_2194;
	}
	func_2224(var_313_object, "Neutral");
	var_0_object->SetMessage(506582); //@t
	var_0_object->ClearReplies(); //@t
	bool var_405_bool;
	func_6619(var_1_object);
	if(var_405_bool != 0)
		var_0_object->AddReply(508690, 9528, 9527); //@t
	bool var_410_bool = false;
	bool var_411_bool = false;
	bool var_412_bool;
	func_6919(var_1_object);
	if(var_412_bool != 0) {
		bool var_418_bool;
		func_6631(var_1_object);
		if(var_418_bool != 0)
			var_411_bool = true;
	}
	if(var_411_bool != 0) {
		bool var_424_bool;
		func_6595(var_1_object);
		if(!var_424_bool) //@nz
			var_410_bool = true;
	}
	if(var_410_bool != 0)
		var_0_object->AddReply(506583, 5521, 7252); //@t
	bool var_434_bool = false;
	bool var_435_bool = false;
	bool var_436_bool;
	func_6643(var_1_object);
	if(var_436_bool != 0) {
		bool var_442_bool;
		func_6607(var_1_object);
		if(var_442_bool != 0)
			var_435_bool = true;
	}
	if(var_435_bool != 0) {
		bool var_444_bool;
		func_6955(var_1_object);
		if(var_444_bool != 0)
			var_434_bool = true;
	}
	if(var_434_bool != 0)
		var_0_object->AddReply(531949, 33354, 33353); //@t
	var_0_object->AddReply(507538, -1, 8320); //@t
	goto Label_2194;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x7d0";


void func_7118(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 159, 1, 515392);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_7196(var_134_bool, var_135_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6607(bool var_379_bool)
{
	int var_381_int;
	func_5805(var_381_int, "d1q02");
	if(var_381_int == 1000)
		var_379_bool = true;
	var_379_bool = false;
}


// @pe
void func_6097(object var_129_object)
{
	@Trace("burah_serum is given");
	object var_132_object;
	var_129_object = var_132_object;
	func_5888(var_132_object, "burah_serum", 1);
}


// @pe
void func_6619(bool var_328_bool)
{
	int var_330_int;
	func_5805(var_330_int, "d1q02");
	if(var_330_int == 1)
		var_328_bool = true;
	var_328_bool = false;
}


// @pe
void func_6108(void)
{
	@SetVariable("ood9Anna1", 1);
}


void func_7131(void)
{
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 116, 1, 513739);
	bool var_103_bool; object var_104_object;
	var_99_object = var_104_object;
	func_7196(var_103_bool, var_104_object, 111);
}
EMIT "Stack[-1] = 0";


void func_5599(void)
{
	bool var_279_bool;
	@CameraSwitchToNormal();
	bool var_280_bool;
	func_5965(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_279_bool, "head");
		if(var_279_bool == 0) goto Label_5615;
		@UnlookAsync("head");
	}
Label_5615:
	
}


void func_3551(object var_0_object, int var_532_int, object var_533_object)
{
	var_0_object = var_533_object;
	bool var_543_bool; object var_544_object;
	object var_545_object;
	func_5789(var_545_object);
	var_545_object = var_544_object;
	func_5616(var_543_bool, var_544_object);
	bool var_546_bool; object var_547_object;
	var_533_object = var_547_object;
	func_5531(var_546_bool, var_547_object, 70.0);
	if(!var_546_bool) { //@nz
		var_532_int = -2;
		return 8;
	}
	object var_539_object;
	@CreateDialog(var_539_object);
	int var_550_int;
	func_5959(var_550_int);
	var_539_object->SetNPCName(var_550_int);
	int var_551_int;
	func_5957(var_551_int);
	var_539_object->SetNPCDescription(var_551_int);
	string var_552_string;
	func_5961(var_552_string);
	var_539_object->SetPhoto(var_552_string);
	string var_553_string;
	func_5963(var_553_string);
	var_539_object->SetPhoto2(var_553_string);
	int var_554_int;
	func_7274(var_554_int);
	var_539_object->SetPlayerName(var_554_int);
	bool var_540_bool;
	@IsOverrideActive(var_540_bool);
	if(var_540_bool != 0) {
		var_532_int = -2;
		return 8;
	}
	@DoDialog(var_539_object);
	object var_556_object; object var_557_object;
	var_533_object = var_556_object;
	var_539_object = var_557_object;
	TaskCall(14);
	func_3632(var_558_object, var_559_object, var_560_string, var_561_bool, var_556_object, var_557_object);
	TaskReturn();
	bool var_542_bool;
	var_539_object->IsDialogEnd(var_542_bool);
	
	for(;;) {
		var_628_bool = !var_542_bool; //@nz
		if(var_628_bool == 0) goto Label_3621;
		@sync();
		var_539_object->IsDialogEnd(var_542_bool);
	}
	
Label_3621:
	object var_629_object;
	var_533_object = var_629_object;
	func_5599();
	@StopDialog(var_539_object);
	var_539_object->GetReturnValue(-1);
	int var_541_int = var_532_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6114(void)
{
	@SetVariable("d9q04", 1);
	func_7144();
	func_7157();
}


// @pe
void func_6631(bool var_418_bool)
{
	int var_420_int;
	func_5805(var_420_int, "d1q01FirstGeorgVisit");
	if(var_420_int == 1)
		var_418_bool = true;
	var_418_bool = false;
}


void func_7144(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 662, 2, 533580);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_7196(var_61_bool, var_62_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6126(object var_87_object)
{
	@Trace("Gun_danko is given");
	object var_90_object;
	var_87_object = var_90_object;
	func_5888(var_90_object, "Gun_danko", 1);
}


void func_5616(bool var_78_bool, object var_79_object)
{
	int var_85_int; int var_86_int;
	@GetVariable("voice_common", var_85_int);
	if(var_85_int != 0) {
		bool var_89_bool; object var_90_object;
		var_79_object = var_90_object;
		func_5674(var_89_bool, var_90_object);
		if(!var_89_bool) { //@nz
			bool var_120_bool; object var_121_object;
			var_79_object = var_121_object;
			func_5711(var_120_bool, var_121_object);
			if(!var_120_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@irand(var_86_int, 2);
		if(var_86_int != 0)
			@SetVariable("voice_common", ((var_85_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_165_bool; object var_166_object;
		var_79_object = var_166_object;
		func_5711(var_165_bool, var_166_object);
		if(!var_165_bool) { //@nz
			bool var_168_bool; object var_169_object;
			var_79_object = var_169_object;
			func_5674(var_168_bool, var_169_object);
			if(!var_168_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5672;
	
Label_5672:
	var_78_bool = true;
	
}


// @pe
void func_5105(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1061_object, object var_1062_object)
{
	var_0_object = var_1062_object;
	var_1_object = var_1061_object;
	var_3_string = false;
	if(1 != 0) {
		func_5163(var_1062_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_5133;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13f5";
	}
Label_5133:
	bool var_1083_bool;
	func_5965(var_1083_bool);
	if(var_1083_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5162;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5162:
		return 0;

	}
	
}


void func_3056(object var_0_object, int var_461_int, object var_462_object)
{
	var_0_object = var_462_object;
	bool var_472_bool; object var_473_object;
	object var_474_object;
	func_5789(var_474_object);
	var_474_object = var_473_object;
	func_5616(var_472_bool, var_473_object);
	bool var_475_bool; object var_476_object;
	var_462_object = var_476_object;
	func_5531(var_475_bool, var_476_object, 70.0);
	if(!var_475_bool) { //@nz
		var_461_int = -2;
		return 8;
	}
	object var_468_object;
	@CreateDialog(var_468_object);
	int var_479_int;
	func_5959(var_479_int);
	var_468_object->SetNPCName(var_479_int);
	int var_480_int;
	func_5957(var_480_int);
	var_468_object->SetNPCDescription(var_480_int);
	string var_481_string;
	func_5961(var_481_string);
	var_468_object->SetPhoto(var_481_string);
	string var_482_string;
	func_5963(var_482_string);
	var_468_object->SetPhoto2(var_482_string);
	int var_483_int;
	func_7274(var_483_int);
	var_468_object->SetPlayerName(var_483_int);
	bool var_469_bool;
	@IsOverrideActive(var_469_bool);
	if(var_469_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	@DoDialog(var_468_object);
	object var_485_object; object var_486_object;
	var_462_object = var_485_object;
	var_468_object = var_486_object;
	TaskCall(12);
	func_3137(var_487_object, var_488_object, var_489_string, var_490_bool, var_485_object, var_486_object);
	TaskReturn();
	bool var_471_bool;
	var_468_object->IsDialogEnd(var_471_bool);
	
	for(;;) {
		var_528_bool = !var_471_bool; //@nz
		if(var_528_bool == 0) goto Label_3126;
		@sync();
		var_468_object->IsDialogEnd(var_471_bool);
	}
	
Label_3126:
	object var_529_object;
	var_462_object = var_529_object;
	func_5599();
	@StopDialog(var_468_object);
	var_468_object->GetReturnValue(-1);
	int var_470_int = var_461_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6643(bool var_436_bool)
{
	int var_438_int;
	func_5805(var_438_int, "d1q01");
	if(var_438_int == 6)
		var_436_bool = true;
	var_436_bool = false;
}


void func_7157(void)
{
	object var_80_object;
	@CreateDiaryEntry(var_80_object, 663, 2, 533581);
	bool var_84_bool; object var_85_object;
	var_80_object = var_85_object;
	func_7196(var_84_bool, var_85_object, 662);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6137(void)
{
	@SetVariable("d9q04", 1000);
	func_7170();
}


// @pe
void func_6655(bool var_925_bool)
{
	int var_927_int;
	func_5805(var_927_int, "d9q02");
	if(var_927_int == 1)
		var_925_bool = true;
	var_925_bool = false;
}


