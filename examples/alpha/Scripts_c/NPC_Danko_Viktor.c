// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		func_7521();
		bool var_41_bool;
		func_6112(var_41_bool);
		if(!var_41_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_6177("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_41_object;
		var_40_bool = var_41_object;
		func_7525(var_41_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_42_object;
		var_40_bool = var_42_object;
		bool var_41_bool;
		func_6100(var_41_bool, var_42_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_40_string == 1779) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6445();
				func_175(var_41_bool, "Neutral");
				var_0_object->SetMessage(1575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(1576, 1782, 1780); //@t
				var_0_object->AddReply(1577, 1782, 1781); //@t
				return 0;
			}
			if(var_40_string == 1782) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_6683();
				func_175(var_41_bool, "Neutral");
				var_0_object->SetMessage(1578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(1580, 1785, 1784); //@t
				var_0_object->AddReply(1579, -1, 1783); //@t
				return 0;
			}
			if(var_40_string == 1785) {
				func_175(var_41_bool, "Neutral");
				var_0_object->SetMessage(1581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(1582, -1, 1786); //@t
				var_0_object->AddReply(1583, -1, 1787); //@t
				return 0;
			}
			var_3_string = true;
			bool var_96_bool;
			func_6273(var_96_bool);
			if(var_96_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_bool == 13819) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6595();
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_6589();
			}
			if(var_41_bool == 13848) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_6595();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_6589();
			}
			if(var_40_string == 13254) {
				bool var_131_bool;
				func_7100(var_1_object);
				if(var_131_bool != 0) {
					object var_139_object; object var_140_object;
					var_139_object = var_1_object;
					var_140_object = var_0_object;
					func_6689();
					func_435(var_41_bool, "Neutral");
					var_0_object->SetMessage(12036); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12037, 13256, 13255); //@t
					var_0_object->AddReply(12640, 13821, 13820); //@t
					return 0;
				}
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(13016); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13017, -1, 14223); //@t
				return 0;
			}
			if(var_40_string == 13821) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12642, 13823, 13822); //@t
				return 0;
			}
			if(var_40_string == 13823) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12644, 13825, 13824); //@t
				return 0;
			}
			if(var_40_string == 13825) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12645); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12666, -1, 13848); //@t
				return 0;
			}
			if(var_40_string == 13256) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12635, 13816, 13815); //@t
				return 0;
			}
			if(var_40_string == 13816) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12637, 13818, 13817); //@t
				return 0;
			}
			if(var_40_string == 13818) {
				func_435(var_41_bool, "Neutral");
				var_0_object->SetMessage(12638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12639, -1, 13819); //@t
				return 0;
			}
			var_3_string = true;
			bool var_212_bool;
			func_6273(var_212_bool);
			if(var_212_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c4";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_bool == 5686) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6299();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_6275();
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_6395();
				object var_103_object = var_1_object;
				func_6411(var_0_object);
			}
			if(var_41_bool == 5685) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_6275();
			}
			if(var_41_bool == 5689) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_6299();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_6275();
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_6395();
			}
			if(var_41_bool == 9297) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_6357();
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_6281();
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_6505();
			}
			if(var_41_bool == 5621) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_6299();
			}
			if(var_41_bool == 9316) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_6293();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_6395();
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_6299();
				object var_174_object = var_1_object;
				func_6411(var_0_object);
			}
			if(var_41_bool == 5648) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_6287();
			}
			if(var_41_bool == 5649) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6287();
			}
			if(var_41_bool == 5718) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_6308();
			}
			if(var_41_bool == 5719) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_6308();
			}
			if(var_41_bool == 5724) {
				object var_198_object; object var_199_object;
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_6308();
			}
			if(var_41_bool == 5725) {
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_6308();
			}
			if(var_41_bool == 5726) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_6308();
			}
			if(var_41_bool == 9329) {
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_6359();
			}
			if(var_41_bool == 9334) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_6359();
			}
			if(var_41_bool == 9341) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_6365();
			}
			if(var_41_bool == 9347) {
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_6371();
			}
			if(var_41_bool == 9349) {
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_6371();
			}
			if(var_41_bool == 9354) {
				object var_236_object; object var_237_object;
				var_236_object = var_1_object;
				var_237_object = var_0_object;
				func_6377();
			}
			if(var_41_bool == 9357) {
				object var_242_object; object var_243_object;
				var_242_object = var_1_object;
				var_243_object = var_0_object;
				func_6377();
			}
			if(var_41_bool == 9360) {
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_6383();
			}
			if(var_41_bool == 9361) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_6383();
			}
			if(var_41_bool == 5667) {
				object var_256_object; object var_257_object;
				var_256_object = var_1_object;
				var_257_object = var_0_object;
				func_6389();
			}
			if(var_41_bool == 5668) {
				object var_262_object; object var_263_object;
				var_262_object = var_1_object;
				var_263_object = var_0_object;
				func_6389();
			}
			if(var_41_bool == 5671) {
				object var_266_object; object var_267_object;
				var_266_object = var_1_object;
				var_267_object = var_0_object;
				func_6389();
			}
			if(var_40_string == 5624) {
				bool var_270_bool;
				func_6821(var_1_object);
				if(!var_270_bool) { //@nz
					func_1019(var_41_bool, "Neutral");
					var_0_object->SetMessage(5111); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5112, 5626, 5625); //@t
					var_0_object->AddReply(5119, 5626, 5632); //@t
					var_0_object->AddReply(5120, -1, 5634); //@t
					return 0;
				}
				bool var_304_bool;
				func_6713(var_1_object);
				if(var_304_bool != 0) {
					func_1019(var_41_bool, "Neutral");
					var_0_object->SetMessage(5155); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5156, 5678, 5677); //@t
					var_0_object->AddReply(5183, 5678, 5707); //@t
					var_0_object->AddReply(5184, 5678, 5709); //@t
					return 0;
				}
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5106); //@t
				var_0_object->ClearReplies(); //@t
				bool var_323_bool = false;
				bool var_324_bool;
				func_6725(var_1_object);
				if(var_324_bool != 0) {
					bool var_330_bool;
					func_6821(var_1_object);
					if(var_330_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0)
					var_0_object->AddReply(5107, 9234, 5620); //@t
				bool var_335_bool = false;
				bool var_336_bool;
				func_6785(var_1_object);
				if(var_336_bool != 0) {
					bool var_342_bool;
					func_6749(var_1_object);
					if(var_342_bool != 0)
						var_335_bool = true;
				}
				if(var_335_bool != 0)
					var_0_object->AddReply(5108, 9315, 5621); //@t
				bool var_351_bool = false;
				bool var_352_bool;
				func_6881(var_1_object);
				if(var_352_bool != 0) {
					bool var_354_bool;
					func_6737(var_1_object);
					if(var_354_bool != 0)
						var_351_bool = true;
				}
				if(var_351_bool != 0)
					var_0_object->AddReply(8455, 5635, 9290); //@t
				bool var_363_bool = false;
				bool var_364_bool;
				func_6797(var_1_object);
				if(var_364_bool != 0) {
					bool var_370_bool;
					func_6809(var_1_object);
					if(var_370_bool != 0)
						var_363_bool = true;
				}
				if(var_363_bool != 0)
					var_0_object->AddReply(5109, 5711, 5622); //@t
				bool var_379_bool = false;
				bool var_380_bool;
				func_7172(var_1_object);
				if(var_380_bool != 0) {
					bool var_386_bool;
					func_6886(var_1_object);
					if(var_386_bool != 0)
						var_379_bool = true;
				}
				if(var_379_bool != 0)
					var_0_object->AddReply(8390, 9317, 9213); //@t
				bool var_395_bool = false;
				bool var_396_bool;
				func_7220(var_1_object);
				if(var_396_bool != 0) {
					bool var_402_bool;
					func_6898(var_1_object);
					if(var_402_bool != 0)
						var_395_bool = true;
				}
				if(var_395_bool != 0)
					var_0_object->AddReply(8392, 9247, 9215); //@t
				bool var_411_bool = false;
				bool var_412_bool;
				func_7112(var_1_object);
				if(var_412_bool != 0) {
					bool var_418_bool;
					func_6910(var_1_object);
					if(var_418_bool != 0)
						var_411_bool = true;
				}
				if(var_411_bool != 0)
					var_0_object->AddReply(8397, 9248, 9220); //@t
				bool var_427_bool = false;
				bool var_428_bool;
				func_7124(var_1_object);
				if(var_428_bool != 0) {
					bool var_434_bool;
					func_6922(var_1_object);
					if(var_434_bool != 0)
						var_427_bool = true;
				}
				if(var_427_bool != 0)
					var_0_object->AddReply(8399, 9249, 9222); //@t
				bool var_443_bool = false;
				bool var_444_bool;
				func_7244(var_1_object);
				if(var_444_bool != 0) {
					bool var_450_bool;
					func_6934(var_1_object);
					if(var_450_bool != 0)
						var_443_bool = true;
				}
				if(var_443_bool != 0)
					var_0_object->AddReply(8404, 9358, 9227); //@t
				bool var_459_bool = false;
				bool var_460_bool;
				func_6773(var_1_object);
				if(var_460_bool != 0) {
					bool var_466_bool;
					func_6946(var_1_object);
					if(var_466_bool != 0)
						var_459_bool = true;
				}
				if(var_459_bool != 0)
					var_0_object->AddReply(5142, 5662, 5661); //@t
				var_0_object->AddReply(5110, -1, 5623); //@t
				return 0;
			}
			if(var_40_string == 5662) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5143); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5144, 5664, 5663); //@t
				var_0_object->AddReply(5154, 5664, 5674); //@t
				return 0;
			}
			if(var_40_string == 5664) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5146, 5666, 5665); //@t
				var_0_object->AddReply(5153, 5666, 5672); //@t
				return 0;
			}
			if(var_40_string == 5666) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5148, -1, 5667); //@t
				var_0_object->AddReply(5149, -1, 5668); //@t
				var_0_object->AddReply(5150, 5670, 5669); //@t
				return 0;
			}
			if(var_40_string == 5670) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5151); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5152, -1, 5671); //@t
				return 0;
			}
			if(var_40_string == 9358) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8517, 9250, 9359); //@t
				return 0;
			}
			if(var_40_string == 9250) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8518, -1, 9360); //@t
				var_0_object->AddReply(8519, -1, 9361); //@t
				return 0;
			}
			if(var_40_string == 9249) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8508, 9351, 9350); //@t
				return 0;
			}
			if(var_40_string == 9351) {
				object var_544_object; object var_545_object;
				var_544_object = var_1_object;
				var_545_object = var_0_object;
				func_6642();
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8510, 9353, 9352); //@t
				bool var_553_bool;
				func_7256(var_1_object);
				if(!var_553_bool) //@nz
					var_0_object->AddReply(8513, 9356, 9355); //@t
				return 0;
			}
			if(var_40_string == 9356) {
				object var_565_object; object var_566_object;
				var_565_object = var_1_object;
				var_566_object = var_0_object;
				func_6701();
				object var_569_object; object var_570_object;
				var_569_object = var_1_object;
				var_570_object = var_0_object;
				func_6433();
				object var_573_object; object var_574_object;
				var_573_object = var_1_object;
				var_574_object = var_0_object;
				func_6427();
				object var_577_object; object var_578_object;
				var_577_object = var_1_object;
				var_578_object = var_0_object;
				func_6439();
				object var_581_object; object var_582_object;
				var_581_object = var_1_object;
				var_582_object = var_0_object;
				func_6707();
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8515, -1, 9357); //@t
				return 0;
			}
			if(var_40_string == 9353) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8512, -1, 9354); //@t
				return 0;
			}
			if(var_40_string == 9248) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8500, 9343, 9342); //@t
				return 0;
			}
			if(var_40_string == 9343) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8501); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8502, 9345, 9344); //@t
				var_0_object->AddReply(8507, -1, 9349); //@t
				return 0;
			}
			if(var_40_string == 9345) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8503); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8504, 9348, 9346); //@t
				return 0;
			}
			if(var_40_string == 9348) {
				object var_623_object; object var_624_object;
				var_623_object = var_1_object;
				var_624_object = var_0_object;
				func_6320();
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8505, -1, 9347); //@t
				return 0;
			}
			if(var_40_string == 9247) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8495, 9338, 9337); //@t
				return 0;
			}
			if(var_40_string == 9338) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8497, 9340, 9339); //@t
				return 0;
			}
			if(var_40_string == 9340) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8499, -1, 9341); //@t
				return 0;
			}
			if(var_40_string == 9317) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8478, 9246, 9318); //@t
				var_0_object->AddReply(8481, 9322, 9321); //@t
				return 0;
			}
			if(var_40_string == 9322) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8483, 9246, 9323); //@t
				return 0;
			}
			if(var_40_string == 9246) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8423); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8479, 9320, 9319); //@t
				var_0_object->AddReply(8494, 9331, 9335); //@t
				return 0;
			}
			if(var_40_string == 9320) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8484, 9326, 9325); //@t
				return 0;
			}
			if(var_40_string == 9326) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8486, 9328, 9327); //@t
				var_0_object->AddReply(8489, 9331, 9330); //@t
				return 0;
			}
			if(var_40_string == 9331) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8491, 9333, 9332); //@t
				return 0;
			}
			if(var_40_string == 9333) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8493, -1, 9334); //@t
				return 0;
			}
			if(var_40_string == 9328) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8488, -1, 9329); //@t
				return 0;
			}
			if(var_40_string == 5711) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5186, 5713, 5712); //@t
				var_0_object->AddReply(5202, 5713, 5729); //@t
				var_0_object->AddReply(5203, 5713, 5731); //@t
				return 0;
			}
			if(var_40_string == 5713) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5188, 5715, 5714); //@t
				var_0_object->AddReply(5201, 5715, 5727); //@t
				return 0;
			}
			if(var_40_string == 5715) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5190, 5717, 5716); //@t
				var_0_object->AddReply(5194, 5721, 5720); //@t
				return 0;
			}
			if(var_40_string == 5721) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5196, 5723, 5722); //@t
				var_0_object->AddReply(5200, -1, 5726); //@t
				return 0;
			}
			if(var_40_string == 5723) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5198, -1, 5724); //@t
				var_0_object->AddReply(5199, -1, 5725); //@t
				return 0;
			}
			if(var_40_string == 5717) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5192, -1, 5718); //@t
				var_0_object->AddReply(5193, -1, 5719); //@t
				return 0;
			}
			if(var_40_string == 5635) {
				object var_783_object; object var_784_object;
				var_783_object = var_1_object;
				var_784_object = var_0_object;
				func_6326();
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5122, 5637, 5636); //@t
				bool var_792_bool;
				func_7004(var_1_object);
				if(!var_792_bool) //@nz
					var_0_object->AddReply(8466, 9304, 9303); //@t
				return 0;
			}
			if(var_40_string == 9304) {
				object var_804_object; object var_805_object;
				var_804_object = var_1_object;
				var_805_object = var_0_object;
				func_6326();
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8468, 5637, 9305); //@t
				return 0;
			}
			if(var_40_string == 5637) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5123); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5124, 5639, 5638); //@t
				var_0_object->AddReply(8472, 9312, 9311); //@t
				var_0_object->AddReply(8469, 9308, 9307); //@t
				return 0;
			}
			if(var_40_string == 9308) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8471, 5639, 9309); //@t
				return 0;
			}
			if(var_40_string == 9312) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8474, 5639, 9313); //@t
				return 0;
			}
			if(var_40_string == 5639) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5126, 5641, 5640); //@t
				var_0_object->AddReply(5138, 5641, 5654); //@t
				return 0;
			}
			if(var_40_string == 5641) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5128, 5643, 5642); //@t
				var_0_object->AddReply(5137, 5643, 5652); //@t
				return 0;
			}
			if(var_40_string == 5643) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5130, 5645, 5644); //@t
				return 0;
			}
			if(var_40_string == 5645) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5132, 5647, 5646); //@t
				var_0_object->AddReply(5136, 5647, 5650); //@t
				return 0;
			}
			if(var_40_string == 5647) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5134, -1, 5648); //@t
				var_0_object->AddReply(5135, -1, 5649); //@t
				return 0;
			}
			if(var_40_string == 9315) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8476, -1, 9316); //@t
				return 0;
			}
			if(var_40_string == 9234) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8411); //@t
				var_0_object->ClearReplies(); //@t
				bool var_896_bool;
				func_6958(var_1_object);
				if(var_896_bool != 0)
					var_0_object->AddReply(8448, 9282, 9281); //@t
				bool var_905_bool;
				func_6761(var_1_object);
				if(var_905_bool != 0)
					var_0_object->AddReply(8463, 9300, 9299); //@t
				return 0;
			}
			if(var_40_string == 9300) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8464); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8465, -1, 9301); //@t
				return 0;
			}
			if(var_40_string == 9282) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8451, 9287, 9284); //@t
				var_0_object->AddReply(8452, 9287, 9285); //@t
				var_0_object->AddReply(8453, 9287, 9286); //@t
				return 0;
			}
			if(var_40_string == 9287) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8412, 9236, 9235); //@t
				return 0;
			}
			if(var_40_string == 9236) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8414, 9238, 9237); //@t
				return 0;
			}
			if(var_40_string == 9238) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8416, 9240, 9239); //@t
				var_0_object->AddReply(8418, 9242, 9241); //@t
				return 0;
			}
			if(var_40_string == 9242) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8456, 9292, 9291); //@t
				return 0;
			}
			if(var_40_string == 9292) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8459, 9244, 9294); //@t
				return 0;
			}
			if(var_40_string == 9240) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8420, 9244, 9243); //@t
				return 0;
			}
			if(var_40_string == 9244) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8430, 9254, 9253); //@t
				var_0_object->AddReply(8422, 9251, 9245); //@t
				return 0;
			}
			if(var_40_string == 9254) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8432, 9256, 9255); //@t
				return 0;
			}
			if(var_40_string == 9256) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8434, 9258, 9257); //@t
				return 0;
			}
			if(var_40_string == 9258) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8436, 9251, 9259); //@t
				return 0;
			}
			if(var_40_string == 9251) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8429, 9296, 9252); //@t
				return 0;
			}
			if(var_40_string == 9296) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(8460); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8461, -1, 9297); //@t
				return 0;
			}
			if(var_40_string == 5678) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5157); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5158, 5680, 5679); //@t
				var_0_object->AddReply(5181, 5680, 5705); //@t
				var_0_object->AddReply(5182, 5680, 5706); //@t
				return 0;
			}
			if(var_40_string == 5680) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5159); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5160, 5682, 5681); //@t
				var_0_object->AddReply(5177, 5684, 5700); //@t
				var_0_object->AddReply(5178, 5703, 5702); //@t
				return 0;
			}
			if(var_40_string == 5703) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5180, 5694, 5704); //@t
				return 0;
			}
			if(var_40_string == 5682) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5161); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5162, 5684, 5683); //@t
				var_0_object->AddReply(5170, 5692, 5691); //@t
				return 0;
			}
			if(var_40_string == 5692) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5171); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5172, 5694, 5693); //@t
				var_0_object->AddReply(5176, 5694, 5699); //@t
				return 0;
			}
			if(var_40_string == 5694) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5173); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5174, 5684, 5695); //@t
				var_0_object->AddReply(5175, 5684, 5697); //@t
				return 0;
			}
			if(var_40_string == 5684) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5163); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5165, -1, 5686); //@t
				var_0_object->AddReply(5164, -1, 5685); //@t
				var_0_object->AddReply(5166, 5688, 5687); //@t
				return 0;
			}
			if(var_40_string == 5688) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5168, -1, 5689); //@t
				return 0;
			}
			if(var_40_string == 5626) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5113); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5114, 5628, 5627); //@t
				var_0_object->AddReply(5118, -1, 5631); //@t
				return 0;
			}
			if(var_40_string == 5628) {
				func_1019(var_41_bool, "Neutral");
				var_0_object->SetMessage(5115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5116, -1, 5629); //@t
				var_0_object->AddReply(5117, -1, 5630); //@t
				return 0;
			}
			var_3_string = true;
			bool var_1127_bool;
			func_6273(var_1127_bool);
			if(var_1127_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x40c";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_bool == 8194) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6334();
				object var_50_object = var_1_object;
				func_6346(var_0_object);
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_6314();
			}
			if(var_41_bool == 8192) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_6334();
			}
			if(var_40_string == 7630) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(6924); //@t
				var_0_object->ClearReplies(); //@t
				bool var_85_bool = false;
				bool var_86_bool = false;
				bool var_87_bool;
				func_6833(var_1_object);
				if(var_87_bool != 0) {
					bool var_95_bool;
					func_6869(var_1_object);
					if(var_95_bool != 0)
						var_86_bool = true;
				}
				if(var_86_bool != 0) {
					bool var_101_bool;
					func_6857(var_1_object);
					if(var_101_bool != 0)
						var_85_bool = true;
				}
				if(var_85_bool != 0)
					var_0_object->AddReply(6925, 7632, 7631); //@t
				var_0_object->AddReply(7777, -1, 8579); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xc8a";
			EMIT "Pop(1)";
			EMIT "Push((int) 9531)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9532)";
			EMIT "Push((int) 10478)";
			EMIT "Push((int) 10477)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9539)";
			EMIT "Push((int) 10478)";
			EMIT "Push((int) 10484)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_40_string == 10478) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(9533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9534, -1, 10479); //@t
				var_0_object->AddReply(9535, 10481, 10480); //@t
				return 0;
			}
			if(var_40_string == 10481) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(9536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9537, -1, 10482); //@t
				var_0_object->AddReply(9538, -1, 10483); //@t
				return 0;
			}
			if(var_40_string == 7632) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(6926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6927, 8188, 7633); //@t
				bool var_140_bool;
				func_6845(var_1_object);
				if(var_140_bool != 0)
					var_0_object->AddReply(7420, 8190, 8189); //@t
				return 0;
			}
			if(var_40_string == 8190) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(7421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7426, 8197, 8195); //@t
				return 0;
			}
			if(var_40_string == 8197) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(7427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7428, 8188, 8198); //@t
				return 0;
			}
			if(var_40_string == 8188) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_6340();
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(7419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7422, 8193, 8191); //@t
				var_0_object->AddReply(7423, -1, 8192); //@t
				return 0;
			}
			if(var_40_string == 8193) {
				func_3210(var_41_bool, "Neutral");
				var_0_object->SetMessage(7424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7425, -1, 8194); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_6273(var_184_bool);
			if(var_184_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc9b";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_bool == 11314) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6479();
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_6451();
				object var_96_object = var_1_object;
				func_6481(var_0_object);
			}
			if(var_41_bool == 11315) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_6479();
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_6451();
				object var_128_object = var_1_object;
				func_6481(var_0_object);
			}
			if(var_41_bool == 11318) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_6479();
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_6451();
				object var_136_object = var_1_object;
				func_6481(var_0_object);
			}
			if(var_41_bool == 11340) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_6497();
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_6499();
				object var_146_object = var_1_object;
				func_6411(var_0_object);
			}
			if(var_41_bool == 11341) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_6497();
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_6499();
				object var_159_object = var_1_object;
				func_6411(var_0_object);
			}
			if(var_41_bool == 11335) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6497();
			}
			if(var_41_bool == 11326) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_6497();
			}
			if(var_40_string == 11285) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10235); //@t
				var_0_object->ClearReplies(); //@t
				bool var_187_bool = false;
				bool var_188_bool;
				func_6970(var_1_object);
				if(var_188_bool != 0) {
					bool var_196_bool;
					func_6982(var_1_object);
					if(var_196_bool != 0)
						var_187_bool = true;
				}
				if(var_187_bool != 0)
					var_0_object->AddReply(10236, 11288, 11286); //@t
				bool var_201_bool = false;
				bool var_202_bool;
				func_6987(var_1_object);
				if(var_202_bool != 0) {
					bool var_208_bool;
					func_6999(var_1_object);
					if(var_208_bool != 0)
						var_201_bool = true;
				}
				if(var_201_bool != 0)
					var_0_object->AddReply(10266, 11321, 11320); //@t
				var_0_object->AddReply(10237, 11089, 11287); //@t
				var_0_object->AddReply(11382, -1, 12578); //@t
				return 0;
			}
			if(var_40_string == 11089) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10064, 11091, 11090); //@t
				return 0;
			}
			if(var_40_string == 11091) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10066, 11093, 11092); //@t
				var_0_object->AddReply(10070, 11097, 11096); //@t
				return 0;
			}
			if(var_40_string == 11097) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10072, 11099, 11098); //@t
				var_0_object->AddReply(10080, -1, 11109); //@t
				var_0_object->AddReply(10242, 11293, 11292); //@t
				return 0;
			}
			if(var_40_string == 11293) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10244, 11110, 11294); //@t
				var_0_object->AddReply(10245, 11290, 11295); //@t
				return 0;
			}
			if(var_40_string == 11110) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10239, 11290, 11289); //@t
				var_0_object->AddReply(10083, -1, 11112); //@t
				return 0;
			}
			if(var_40_string == 11290) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10082, -1, 11111); //@t
				return 0;
			}
			if(var_40_string == 11099) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10074, 11101, 11100); //@t
				var_0_object->AddReply(10079, 11101, 11107); //@t
				return 0;
			}
			if(var_40_string == 11101) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10076, 11093, 11102); //@t
				var_0_object->AddReply(10078, -1, 11106); //@t
				return 0;
			}
			if(var_40_string == 11093) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10068, -1, 11094); //@t
				var_0_object->AddReply(10069, -1, 11095); //@t
				return 0;
			}
			if(var_40_string == 11321) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10268, 11323, 11322); //@t
				var_0_object->AddReply(10270, 11325, 11324); //@t
				return 0;
			}
			if(var_40_string == 11325) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10272, -1, 11326); //@t
				return 0;
			}
			if(var_40_string == 11323) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10273, 11328, 11327); //@t
				var_0_object->AddReply(10275, 11330, 11329); //@t
				return 0;
			}
			if(var_40_string == 11330) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10277, 11332, 11331); //@t
				return 0;
			}
			if(var_40_string == 11332) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10279, 11328, 11333); //@t
				var_0_object->AddReply(10280, -1, 11335); //@t
				return 0;
			}
			if(var_40_string == 11328) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10281, 11337, 11336); //@t
				return 0;
			}
			if(var_40_string == 11337) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10283, 11339, 11338); //@t
				return 0;
			}
			if(var_40_string == 11339) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10285, -1, 11340); //@t
				var_0_object->AddReply(10286, -1, 11341); //@t
				return 0;
			}
			if(var_40_string == 11288) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10246, 11298, 11297); //@t
				var_0_object->AddReply(10253, 11308, 11304); //@t
				return 0;
			}
			if(var_40_string == 11298) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10248, 11300, 11299); //@t
				var_0_object->AddReply(10258, 11308, 11309); //@t
				return 0;
			}
			if(var_40_string == 11300) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10250, 11302, 11301); //@t
				var_0_object->AddReply(10256, 11302, 11307); //@t
				return 0;
			}
			if(var_40_string == 11302) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10259, 11313, 11312); //@t
				return 0;
			}
			if(var_40_string == 11313) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10261, -1, 11314); //@t
				var_0_object->AddReply(10252, 11308, 11303); //@t
				return 0;
			}
			if(var_40_string == 11308) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10262, -1, 11315); //@t
				var_0_object->AddReply(10263, 11317, 11316); //@t
				return 0;
			}
			if(var_40_string == 11317) {
				func_3652(var_41_bool, "Neutral");
				var_0_object->SetMessage(10264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10265, -1, 11318); //@t
				return 0;
			}
			var_3_string = true;
			bool var_438_bool;
			func_6273(var_438_bool);
			if(var_438_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe55";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_bool == 12998) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6510();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_6583();
			}
			if(var_41_bool == 12999) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_6583();
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_6510();
			}
			if(var_41_bool == 13752) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_6583();
			}
			if(var_41_bool == 12989) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_6558();
				object var_136_object = var_1_object;
				func_6564(var_0_object);
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_6314();
			}
			if(var_41_bool == 12990) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_6558();
				object var_153_object = var_1_object;
				func_6564(var_0_object);
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_6314();
			}
			if(var_41_bool == 13741) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_6575();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6332();
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_6581();
			}
			if(var_40_string == 13751) {
				bool var_169_bool = false;
				bool var_170_bool = false;
				bool var_171_bool;
				func_7088(var_1_object);
				if(var_171_bool != 0) {
					bool var_177_bool;
					func_7028(var_1_object);
					if(!var_177_bool) //@nz
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					bool var_184_bool;
					func_7040(var_1_object);
					if(!var_184_bool) //@nz
						var_169_bool = true;
				}
				if(var_169_bool != 0) {
					func_4576(var_41_bool, "Neutral");
					var_0_object->SetMessage(12584); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11771, 12991, 12979); //@t
					bool var_210_bool;
					func_7016(var_1_object);
					if(!var_210_bool) //@nz
						var_0_object->AddReply(12585, 13755, 13752); //@t
					return 0;
				}
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11765); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool = false;
				bool var_223_bool;
				func_7052(var_1_object);
				if(var_223_bool != 0) {
					bool var_229_bool;
					func_7064(var_1_object);
					if(var_229_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_object->AddReply(11767, 12977, 12975); //@t
				bool var_238_bool = false;
				bool var_239_bool;
				func_7028(var_1_object);
				if(var_239_bool != 0) {
					bool var_241_bool;
					func_7076(var_1_object);
					if(var_241_bool != 0)
						var_238_bool = true;
				}
				if(var_238_bool != 0)
					var_0_object->AddReply(12570, 13740, 13739); //@t
				var_0_object->AddReply(11766, -1, 12974); //@t
				return 0;
			}
			if(var_40_string == 13740) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(12571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12592, 13763, 13762); //@t
				return 0;
			}
			if(var_40_string == 13763) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(12593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12594, 13765, 13764); //@t
				return 0;
			}
			if(var_40_string == 13765) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(12595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12572, -1, 13741); //@t
				return 0;
			}
			if(var_40_string == 12977) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11770, 12981, 12978); //@t
				var_0_object->AddReply(11772, 12981, 12980); //@t
				return 0;
			}
			if(var_40_string == 12981) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11774, 12984, 12983); //@t
				return 0;
			}
			if(var_40_string == 12984) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11776, 12987, 12985); //@t
				var_0_object->AddReply(11777, 12987, 12986); //@t
				return 0;
			}
			if(var_40_string == 12987) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11779, -1, 12989); //@t
				var_0_object->AddReply(11780, -1, 12990); //@t
				return 0;
			}
			if(var_40_string == 13755) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(12587); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12588, 12993, 13756); //@t
				return 0;
			}
			if(var_40_string == 12991) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11782, 12993, 12992); //@t
				return 0;
			}
			if(var_40_string == 12993) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11783); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12589, 12995, 13758); //@t
				var_0_object->AddReply(11784, 13760, 12994); //@t
				return 0;
			}
			if(var_40_string == 12995) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12590, 13760, 13759); //@t
				return 0;
			}
			if(var_40_string == 13760) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(12591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11786, 12997, 12996); //@t
				return 0;
			}
			if(var_40_string == 12997) {
				func_4576(var_41_bool, "Neutral");
				var_0_object->SetMessage(11787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11788, -1, 12998); //@t
				var_0_object->AddReply(11789, -1, 12999); //@t
				return 0;
			}
			var_3_string = true;
			bool var_359_bool;
			func_6273(var_359_bool);
			if(var_359_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x11f1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6195();
			if(var_40_string == 13432) {
				bool var_46_bool = false;
				bool var_47_bool;
				func_7148(var_1_object);
				if(var_47_bool != 0) {
					bool var_55_bool;
					func_7136(var_1_object);
					if(var_55_bool != 0)
						var_46_bool = true;
				}
				if(var_46_bool != 0) {
					object var_61_object; object var_62_object;
					var_61_object = var_1_object;
					var_62_object = var_0_object;
					func_6648();
					func_5220(var_41_bool, "Neutral");
					var_0_object->SetMessage(12275); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12276, 13435, 13433); //@t
					var_0_object->AddReply(12277, 13435, 13434); //@t
					return 0;
				}
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(13779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13780, -1, 15016); //@t
				return 0;
			}
			if(var_40_string == 13435) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12279, 13439, 13437); //@t
				var_0_object->AddReply(12280, 13439, 13438); //@t
				return 0;
			}
			if(var_40_string == 13439) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12282, 13442, 13441); //@t
				return 0;
			}
			if(var_40_string == 13442) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12284, 13444, 13443); //@t
				return 0;
			}
			if(var_40_string == 13444) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12286, 13446, 13445); //@t
				return 0;
			}
			if(var_40_string == 13446) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12288, 13448, 13447); //@t
				return 0;
			}
			if(var_40_string == 13448) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12290, 13450, 13449); //@t
				return 0;
			}
			if(var_40_string == 13450) {
				func_5220(var_41_bool, "Neutral");
				var_0_object->SetMessage(12291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12292, -1, 13451); //@t
				return 0;
			}
			var_3_string = true;
			bool var_144_bool;
			func_6273(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1475";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int)
	{
		if(1 != 0) {
			func_6195();
			if(var_41_int == 15244) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_6660();
			}
			if(var_41_int == 15245) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_6660();
			}
			if(var_41_int == 15247) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_6695();
			}
			if(var_41_int == 15264) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_6677();
			}
			if(var_40_int == 15229) {
				bool var_108_bool;
				func_7160(var_1_object);
				if(var_108_bool != 0) {
					object var_116_object; object var_117_object;
					var_116_object = var_1_object;
					var_117_object = var_0_object;
					func_6654();
					func_5613(var_41_int, "Neutral");
					var_0_object->SetMessage(13994); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13995, 15231, 15230); //@t
					return 0;
				}
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14011); //@t
				var_0_object->ClearReplies(); //@t
				bool var_141_bool;
				func_7232(var_1_object);
				if(var_141_bool != 0)
					var_0_object->AddReply(14012, 15248, 15247); //@t
				bool var_150_bool = false;
				bool var_151_bool;
				func_7184(var_1_object);
				if(var_151_bool != 0) {
					bool var_157_bool;
					func_7196(var_1_object);
					if(var_157_bool != 0)
						var_150_bool = true;
				}
				if(var_150_bool != 0)
					var_0_object->AddReply(14029, 15265, 15264); //@t
				var_0_object->AddReply(14039, -1, 15274); //@t
				return 0;
			}
			if(var_40_int == 15265) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14031, 15267, 15266); //@t
				return 0;
			}
			if(var_40_int == 15267) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14032); //@t
				var_0_object->ClearReplies(); //@t
				bool var_180_bool;
				func_7208(var_1_object);
				if(var_180_bool != 0)
					var_0_object->AddReply(14033, 15269, 15268); //@t
				var_0_object->AddReply(14038, -1, 15273); //@t
				return 0;
			}
			if(var_40_int == 15269) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14035, -1, 15270); //@t
				var_0_object->AddReply(14036, -1, 15271); //@t
				var_0_object->AddReply(14037, -1, 15272); //@t
				return 0;
			}
			if(var_40_int == 15248) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14014, 15250, 15249); //@t
				var_0_object->AddReply(14024, 15260, 15259); //@t
				return 0;
			}
			if(var_40_int == 15260) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14026, 15262, 15261); //@t
				return 0;
			}
			if(var_40_int == 15262) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14028, -1, 15263); //@t
				return 0;
			}
			if(var_40_int == 15250) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14016, 15252, 15251); //@t
				return 0;
			}
			if(var_40_int == 15252) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14018, -1, 15253); //@t
				var_0_object->AddReply(14019, 15255, 15254); //@t
				return 0;
			}
			if(var_40_int == 15255) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14020); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14021, 15257, 15256); //@t
				return 0;
			}
			if(var_40_int == 15257) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14023, -1, 15258); //@t
				return 0;
			}
			if(var_40_int == 15231) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(13996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13997, 15233, 15232); //@t
				return 0;
			}
			if(var_40_int == 15233) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(13998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13999, 15235, 15234); //@t
				return 0;
			}
			if(var_40_int == 15235) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14000); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14001, 15237, 15236); //@t
				return 0;
			}
			if(var_40_int == 15237) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14003, 15239, 15238); //@t
				return 0;
			}
			if(var_40_int == 15239) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14005, 15241, 15240); //@t
				return 0;
			}
			if(var_40_int == 15241) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14007, 15243, 15242); //@t
				return 0;
			}
			if(var_40_int == 15243) {
				func_5613(var_41_int, "Neutral");
				var_0_object->SetMessage(14008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14009, -1, 15244); //@t
				var_0_object->AddReply(14010, -1, 15245); //@t
				return 0;
			}
			var_3_string = true;
			bool var_312_bool;
			func_6273(var_312_bool);
			if(var_312_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x15fe";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_7172(bool var_380_bool)
{
	int var_382_int;
	func_6212(var_382_int, "KnowEva");
	if(var_382_int == 1)
		var_380_bool = true;
	var_380_bool = false;
}


// @pe
void func_6660(void)
{
	@SetVariable("d9q01", 1);
	func_7489();
	func_7505();
	bool var_84_bool;
	func_6228(var_84_bool, "quest_d9_01", "place_rifles");
}


// @pe
void func_5128(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_729_object, object var_730_object)
{
	var_0_object = var_730_object;
	var_1_object = var_729_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_736_bool = false;
		bool var_737_bool;
		func_7148(var_1_object);
		if(var_737_bool != 0) {
			bool var_743_bool;
			func_7136(var_1_object);
			if(var_743_bool != 0)
				var_736_bool = true;
		}
		if(var_736_bool != 0) {
			object var_749_object; object var_750_object;
			var_749_object = var_1_object;
			var_750_object = var_0_object;
			func_6648();
			func_5220(var_730_object, "Neutral");
			var_0_object->SetMessage(12275); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12276, 13435, 13433); //@t
			var_0_object->AddReply(12277, 13435, 13434); //@t
		} else {
					func_5220(var_730_object, "Neutral");
					var_0_object->SetMessage(13779); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13780, -1, 15016); //@t
		}
	}
	for(;;) {
		bool var_765_bool;
		func_6273(var_765_bool);
		if(var_765_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6177(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5219;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5219:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x140c";


// @pe
void func_7184(bool var_151_bool)
{
	int var_153_int;
	func_6212(var_153_int, "d9q01");
	if(var_153_int == 2)
		var_151_bool = true;
	var_151_bool = false;
}


// @pe
void func_6677(void)
{
	@SetVariable("ood9Viktor2", 1);
}


// @pe
void func_6683(void)
{
	@SetVariable("KnowMyth", 1);
}


// @pe
void func_7196(bool var_157_bool)
{
	int var_159_int;
	func_6212(var_159_int, "ood9Viktor2");
	if(var_159_int == 0) {
		var_157_bool = true;
		return 0;
	}
	var_157_bool = false;
}


// @pe
void func_6173(void)
{
	@CameraSwitchToNormal();
}


void func_6177(string var_45_string)
{
	@Trace("playing " + var_45_string);
	float var_48_float;
	float var_49_float;
	@lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	@lshPlayAnimation(var_48_float, var_49_float);
	@Trace("start: " + var_48_float);
	@Trace("end: " + var_49_float);
}


// @pe
void func_6689(void)
{
	@SetVariable("d6ViktorVisit", 1);
}


// @pe
void func_3109(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_412_object, object var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_object = false;
	if(1 != 0) {
		func_3210(var_413_object, "Neutral");
		var_0_object->SetMessage(6924); //@t
		var_0_object->ClearReplies(); //@t
		bool var_425_bool = false;
		bool var_426_bool = false;
		bool var_427_bool;
		func_6833(var_1_object);
		if(var_427_bool != 0) {
			bool var_433_bool;
			func_6869(var_1_object);
			if(var_433_bool != 0)
				var_426_bool = true;
		}
		if(var_426_bool != 0) {
			bool var_439_bool;
			func_6857(var_1_object);
			if(var_439_bool != 0)
				var_425_bool = true;
		}
		if(var_425_bool != 0)
			var_0_object->AddReply(6925, 7632, 7631); //@t
		var_0_object->AddReply(7777, -1, 8579); //@t
		goto Label_3180;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xc8a";
	EMIT "Pop(1)";
	EMIT "Push((int) 9531)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9532)";
	EMIT "Push((int) 10478)";
	EMIT "Push((int) 10477)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9539)";
	EMIT "Push((int) 10478)";
	EMIT "Push((int) 10484)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xc6c";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc29";
	}
Label_3180:
	bool var_451_bool;
	func_6273(var_451_bool);
	if(var_451_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6177(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3209;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3209:
		return 0;

	}
	
}


// @pe
void func_6695(void)
{
	@SetVariable("ood9Viktor3", 1);
}


// @pe
void func_7208(bool var_180_bool)
{
	int var_182_int;
	func_6212(var_182_int, "d9TalkToPolkovodec");
	if(var_182_int != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


// @pe
void func_6701(void)
{
	@SetVariable("KnowBoyni", 1);
}


void func_49(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_6117(var_55_bool, var_56_object);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_96_int;
	func_6269(var_96_int);
	var_51_object->SetNPCName(var_96_int);
	string var_97_string;
	func_6271(var_97_string);
	var_51_object->SetPhoto(var_97_string);
	int var_98_int;
	func_7360(var_98_int);
	var_51_object->SetPlayerName(var_98_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_107_object; object var_108_object;
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_148_bool = !var_54_bool; //@nz
		if(var_148_bool == 0) goto Label_101;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_101:
	object var_149_object;
	var_45_object = var_149_object;
	func_6173();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


void func_6195(void)
{
	bool var_43_bool;
	func_6273(var_43_bool);
	if(var_43_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_7220(bool var_396_bool)
{
	int var_398_int;
	func_6212(var_398_int, "KnowJulia");
	if(var_398_int == 1)
		var_396_bool = true;
	var_396_bool = false;
}


// @pe
void func_6707(void)
{
	@SetVariable("KnowTaurusProject", 1);
}


// @pe
void func_6713(bool var_304_bool)
{
	int var_306_int;
	func_6212(var_306_int, "ood1Viktor1");
	if(var_306_int == 0) {
		var_304_bool = true;
		return 0;
	}
	var_304_bool = false;
}


void func_6202(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


// @pe
void func_7232(bool var_141_bool)
{
	int var_143_int;
	func_6212(var_143_int, "ood9Viktor3");
	if(var_143_int == 0) {
		var_141_bool = true;
		return 0;
	}
	var_141_bool = false;
}


// @pe
void func_3652(object var_2_object, string var_171_string)
{
	bool var_172_bool;
	func_6273(var_172_bool);
	if(!var_172_bool) //@nz
		return 0;
	if(var_171_string == var_2_object)
		return 0;
	string var_175_string;
	func_6177(var_175_string);
	var_2_object = var_175_string;
}


// @pe
void func_6725(bool var_324_bool)
{
	int var_326_int;
	func_6212(var_326_int, "ood1Viktor2");
	if(var_326_int == 0) {
		var_324_bool = true;
		return 0;
	}
	var_324_bool = false;
}


void func_6212(int var_110_int, string var_111_string)
{
	int var_113_int;
	@GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
}


void func_6217(object var_102_object, string var_103_string)
{
	object var_106_object;
	@GetMainOutdoorScene(var_106_object);
	object var_107_object;
	@AddBlankActor(var_107_object, var_106_object, var_103_string, (var_103_string + ".bin"));
	var_107_object = var_102_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7244(bool var_444_bool)
{
	int var_446_int;
	func_6212(var_446_int, "KnowStamatins");
	if(var_446_int == 1)
		var_444_bool = true;
	var_444_bool = false;
}


// @pe
void func_6737(bool var_354_bool)
{
	int var_356_int;
	func_6212(var_356_int, "ood1Viktor3");
	if(var_356_int == 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


void func_6228(bool var_84_bool, string var_85_string, string var_86_string)
{
	object var_88_object;
	@FindActor(var_88_object, var_85_string);
	if(var_88_object == null)
		var_84_bool = false;
	@Trigger(var_88_object, var_86_string);
	var_84_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7256(bool var_553_bool)
{
	int var_555_int;
	func_6212(var_555_int, "KnowTaurusProject");
	if(var_555_int == 1)
		var_553_bool = true;
	var_553_bool = false;
}


// @pe
void func_6749(bool var_342_bool)
{
	int var_344_int;
	func_6212(var_344_int, "ood1Viktor4");
	if(var_344_int == 0) {
		var_342_bool = true;
		return 0;
	}
	var_342_bool = false;
}


void func_6240(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


// @pe
void func_5220(object var_2_object, string var_65_string)
{
	bool var_66_bool;
	func_6273(var_66_bool);
	if(!var_66_bool) //@nz
		return 0;
	if(var_65_string == var_2_object)
		return 0;
	string var_69_string;
	func_6177(var_69_string);
	var_2_object = var_69_string;
}


void func_6245(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_7268(object var_65_object)
{
	object var_67_object;
	@GetDiaryRoot(var_67_object);
	if(!var_67_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_65_object = false;
	}
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6761(bool var_905_bool)
{
	int var_907_int;
	func_6212(var_907_int, "d1q01");
	if(var_907_int == 0) {
		var_905_bool = true;
		return 0;
	}
	var_905_bool = false;
}


// @pe
void func_6254(bool var_151_bool, int var_152_int)
{
	int var_153_int;
	func_6245(var_153_int);
	var_151_bool = var_153_int == var_152_int;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_107_object, object var_108_object)
{
	var_0_object = var_108_object;
	var_3_object = false;
	if(1 != 0) {
		object var_114_object; object var_115_object;
		var_114_object = var_107_object;
		var_115_object = var_0_object;
		func_6445();
		func_175(var_108_object, "Neutral");
		var_0_object->SetMessage(1575); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(1576, 1782, 1780); //@t
		var_0_object->AddReply(1577, 1782, 1781); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_140_bool;
	func_6273(var_140_bool);
	if(var_140_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6177(var_2_object);
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


void func_7281(bool var_56_bool, object var_57_object, int var_58_int)
{
	object var_65_object;
	func_7268(var_65_object);
	object var_62_object;
	var_65_object = var_62_object;
	object var_63_object;
	var_62_object->Find(var_58_int, var_63_object);
	if(!var_63_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_58_int);
		var_56_bool = false;
	}
	var_63_object->AddChild(var_57_object);
	@SetVariable("player_diary", 1);
	int var_64_int;
	var_57_object->GetCategory(var_64_int);
	@SetDiarySection(var_64_int);
	var_56_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_6260(bool var_866_bool)
{
	func_6177("No");
	bool var_868_bool;
	@lshWaitForAnimEnd(var_868_bool);
	var_868_bool = var_866_bool;
}


// @pe
void func_6773(bool var_460_bool)
{
	int var_462_int;
	func_6212(var_462_int, "d1q01TeloNedostupno");
	if(var_462_int == 1)
		var_460_bool = true;
	var_460_bool = false;
}


void func_6269(int var_96_int)
{
	var_96_int = 2879;
}


void func_6271(string var_97_string)
{
	var_97_string = "ui/NPC_Viktor.png";
}


void func_6273(bool var_43_bool)
{
	var_43_bool = true;
}


// @pe
void func_6785(bool var_336_bool)
{
	int var_338_int;
	func_6212(var_338_int, "d1q02");
	if(var_338_int == 0) {
		var_336_bool = true;
		return 0;
	}
	var_336_bool = false;
}


// @pe
void func_6275(void)
{
	@SetVariable("ood1Viktor1", 1);
}


// @pe
void func_6281(void)
{
	@SetVariable("ood1Viktor2", 1);
}


// @pe
void func_3210(object var_2_object, string var_69_string)
{
	bool var_70_bool;
	func_6273(var_70_bool);
	if(!var_70_bool) //@nz
		return 0;
	if(var_69_string == var_2_object)
		return 0;
	string var_73_string;
	func_6177(var_73_string);
	var_2_object = var_73_string;
}


void func_652(object var_0_object, int var_159_int, object var_160_object)
{
	var_0_object = var_160_object;
	bool var_170_bool; object var_171_object;
	var_160_object = var_171_object;
	func_6117(var_170_bool, var_171_object);
	if(!var_170_bool) { //@nz
		var_159_int = -2;
		return 8;
	}
	object var_166_object;
	@CreateDialog(var_166_object);
	int var_173_int;
	func_6269(var_173_int);
	var_166_object->SetNPCName(var_173_int);
	string var_174_string;
	func_6271(var_174_string);
	var_166_object->SetPhoto(var_174_string);
	int var_175_int;
	func_7360(var_175_int);
	var_166_object->SetPlayerName(var_175_int);
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	@DoDialog(var_166_object);
	object var_177_object; object var_178_object;
	var_160_object = var_177_object;
	var_166_object = var_178_object;
	TaskCall(7);
	func_715(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object);
	TaskReturn();
	bool var_169_bool;
	var_166_object->IsDialogEnd(var_169_bool);
	
	for(;;) {
		var_390_bool = !var_169_bool; //@nz
		if(var_390_bool == 0) goto Label_704;
		@sync();
		var_166_object->IsDialogEnd(var_169_bool);
	}
	
Label_704:
	object var_391_object;
	var_160_object = var_391_object;
	func_6173();
	@StopDialog(var_166_object);
	var_166_object->GetReturnValue(-1);
	int var_168_int = var_159_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6797(bool var_364_bool)
{
	int var_366_int;
	func_6212(var_366_int, "d1q02");
	if(var_366_int == 1000)
		var_364_bool = true;
	var_364_bool = false;
}


void func_7310(object var_58_object)
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
void func_6287(void)
{
	@SetVariable("ood1Viktor3", 1);
}


// @pe
void func_6293(void)
{
	@SetVariable("ood1Viktor4", 1);
}


// @pe
void func_6809(bool var_370_bool)
{
	int var_372_int;
	func_6212(var_372_int, "ood1Viktor5");
	if(var_372_int == 0) {
		var_370_bool = true;
		return 0;
	}
	var_370_bool = false;
}


// @pe
void func_6299(void)
{
	func_7393();
	object var_73_object;
	func_6217(var_73_object, "quest_d1_02");
}


void func_7327(object var_98_object, string var_99_string, float var_100_float)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_106_cvector;
	cvector var_107_cvector;
	bool var_109_bool;
	var_108_object->GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	if(!var_109_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_99_string) + " doesnt exist");
	var_108_object->GetMap(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	var_98_object->SetMapParams(var_119_float, var_120_float, var_100_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_6308(void)
{
	@SetVariable("ood1Viktor5", 1);
}


// @pe
void func_6821(bool var_270_bool)
{
	int var_272_int;
	func_6212(var_272_int, "d1q01FirstGeorgVisit");
	if(var_272_int == 1)
		var_270_bool = true;
	var_270_bool = false;
}


// @pe
void func_6648(void)
{
	@SetVariable("ood8Viktor1", 1);
}


// @pe
void func_6314(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_175(object var_2_object, string var_50_string)
{
	bool var_51_bool;
	func_6273(var_51_bool);
	if(!var_51_bool) //@nz
		return 0;
	if(var_50_string == var_2_object)
		return 0;
	string var_54_string;
	func_6177(var_54_string);
	var_2_object = var_54_string;
}


// @pe
void func_6320(void)
{
	@SetVariable("KnowBattleBrods", 1);
}


// @pe
void func_6833(bool var_87_bool)
{
	int var_89_int;
	func_6212(var_89_int, "ood2Viktor1");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
}


// @pe
void func_6326(void)
{
	@SetVariable("KnowShabnak", 1);
}


// @pe
void func_6332(void)
{
}


// @pe
void func_6845(bool var_140_bool)
{
	int var_142_int;
	func_6212(var_142_int, "KnowRavell");
	if(var_142_int == 1)
		var_140_bool = true;
	var_140_bool = false;
}


// @pe
void func_6334(void)
{
	@SetVariable("ood2Viktor1", 1);
}


void func_7360(int var_98_int)
{
	int var_100_int;
	@GetVariable("player", var_100_int);
	if(var_100_int == 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x1ccf";
	}
	if(var_100_int == 1) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
}


// @pe
void func_6340(void)
{
	@SetVariable("KnowRavell", 1);
}


// @pe
void func_6857(bool var_101_bool)
{
	int var_103_int;
	func_6212(var_103_int, "d2q03");
	if(var_103_int == 1)
		var_101_bool = true;
	var_101_bool = false;
}


// @pe
void func_6346(object var_50_object)
{
	@Trace("money 5000 is given");
	object var_53_object;
	var_50_object = var_53_object;
	func_6093(var_53_object, "money", 5000);
}


// @pe
void func_715(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_177_object, object var_178_object)
{
	var_0_object = var_178_object;
	var_1_object = var_177_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_184_bool;
		func_6821(var_1_object);
		if(!var_184_bool) { //@nz
			func_1019(var_178_object, "Neutral");
			var_0_object->SetMessage(5111); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5112, 5626, 5625); //@t
			var_0_object->AddReply(5119, 5626, 5632); //@t
			var_0_object->AddReply(5120, -1, 5634); //@t
		} else {
					bool var_216_bool;
					func_6713(var_1_object);
					if(var_216_bool == 0) goto Label_782;
					func_1019(var_178_object, "Neutral");
					var_0_object->SetMessage(5155); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5156, 5678, 5677); //@t
					var_0_object->AddReply(5183, 5678, 5707); //@t
					var_0_object->AddReply(5184, 5678, 5709); //@t
		}
	}
Label_989:
	for(;;) {
		bool var_208_bool;
		func_6273(var_208_bool);
		if(var_208_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6177(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1018;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1018:
			return 0;

		}

	}
	
Label_782:
	func_1019(var_178_object, "Neutral");
	var_0_object->SetMessage(5106); //@t
	var_0_object->ClearReplies(); //@t
	bool var_235_bool = false;
	bool var_236_bool;
	func_6725(var_1_object);
	if(var_236_bool != 0) {
		bool var_242_bool;
		func_6821(var_1_object);
		if(var_242_bool != 0)
			var_235_bool = true;
	}
	if(var_235_bool != 0)
		var_0_object->AddReply(5107, 9234, 5620); //@t
	bool var_247_bool = false;
	bool var_248_bool;
	func_6785(var_1_object);
	if(var_248_bool != 0) {
		bool var_254_bool;
		func_6749(var_1_object);
		if(var_254_bool != 0)
			var_247_bool = true;
	}
	if(var_247_bool != 0)
		var_0_object->AddReply(5108, 9315, 5621); //@t
	bool var_263_bool = false;
	bool var_264_bool;
	func_6881(var_1_object);
	if(var_264_bool != 0) {
		bool var_266_bool;
		func_6737(var_1_object);
		if(var_266_bool != 0)
			var_263_bool = true;
	}
	if(var_263_bool != 0)
		var_0_object->AddReply(8455, 5635, 9290); //@t
	bool var_275_bool = false;
	bool var_276_bool;
	func_6797(var_1_object);
	if(var_276_bool != 0) {
		bool var_282_bool;
		func_6809(var_1_object);
		if(var_282_bool != 0)
			var_275_bool = true;
	}
	if(var_275_bool != 0)
		var_0_object->AddReply(5109, 5711, 5622); //@t
	bool var_291_bool = false;
	bool var_292_bool;
	func_7172(var_1_object);
	if(var_292_bool != 0) {
		bool var_298_bool;
		func_6886(var_1_object);
		if(var_298_bool != 0)
			var_291_bool = true;
	}
	if(var_291_bool != 0)
		var_0_object->AddReply(8390, 9317, 9213); //@t
	bool var_307_bool = false;
	bool var_308_bool;
	func_7220(var_1_object);
	if(var_308_bool != 0) {
		bool var_314_bool;
		func_6898(var_1_object);
		if(var_314_bool != 0)
			var_307_bool = true;
	}
	if(var_307_bool != 0)
		var_0_object->AddReply(8392, 9247, 9215); //@t
	bool var_323_bool = false;
	bool var_324_bool;
	func_7112(var_1_object);
	if(var_324_bool != 0) {
		bool var_330_bool;
		func_6910(var_1_object);
		if(var_330_bool != 0)
			var_323_bool = true;
	}
	if(var_323_bool != 0)
		var_0_object->AddReply(8397, 9248, 9220); //@t
	bool var_339_bool = false;
	bool var_340_bool;
	func_7124(var_1_object);
	if(var_340_bool != 0) {
		bool var_346_bool;
		func_6922(var_1_object);
		if(var_346_bool != 0)
			var_339_bool = true;
	}
	if(var_339_bool != 0)
		var_0_object->AddReply(8399, 9249, 9222); //@t
	bool var_355_bool = false;
	bool var_356_bool;
	func_7244(var_1_object);
	if(var_356_bool != 0) {
		bool var_362_bool;
		func_6934(var_1_object);
		if(var_362_bool != 0)
			var_355_bool = true;
	}
	if(var_355_bool != 0)
		var_0_object->AddReply(8404, 9358, 9227); //@t
	bool var_371_bool = false;
	bool var_372_bool;
	func_6773(var_1_object);
	if(var_372_bool != 0) {
		bool var_378_bool;
		func_6946(var_1_object);
		if(var_378_bool != 0)
			var_371_bool = true;
	}
	if(var_371_bool != 0)
		var_0_object->AddReply(5142, 5662, 5661); //@t
	var_0_object->AddReply(5110, -1, 5623); //@t
	goto Label_989;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2cf";


void func_7377(void)
{
	@Trace("Adding diary entry");
	object var_152_object;
	@CreateDiaryEntry(var_152_object, 31, 1, 12113);
	bool var_157_bool; object var_158_object;
	var_152_object = var_158_object;
	func_7281(var_157_bool, var_158_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6357(void)
{
}


// @pe
void func_6869(bool var_95_bool)
{
	int var_97_int;
	func_6212(var_97_int, "d2q03MariaGotoViktor");
	if(var_97_int == 1)
		var_95_bool = true;
	var_95_bool = false;
}


// @pe
void func_6359(void)
{
	@SetVariable("ood1Viktor6", 1);
}


// @pe
void func_6365(void)
{
	@SetVariable("ood1Viktor7", 1);
}


// @pe
void func_6881(bool var_352_bool)
{
	var_352_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_7393(void)
{
	@Trace("Adding diary entry");
	object var_49_object;
	@CreateDiaryEntry(var_49_object, 7, 2, 3078);
	bool var_54_bool; object var_55_object;
	var_49_object = var_55_object;
	func_7281(var_54_bool, var_55_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6371(void)
{
	@SetVariable("ood1Viktor8", 1);
}


// @pe
void func_6886(bool var_386_bool)
{
	int var_388_int;
	func_6212(var_388_int, "ood1Viktor6");
	if(var_388_int == 0) {
		var_386_bool = true;
		return 0;
	}
	var_386_bool = false;
}


// @pe
void func_6377(void)
{
	@SetVariable("ood1Viktor9", 1);
}


// @pe
void func_6383(void)
{
	@SetVariable("ood1Viktor10", 1);
}


void func_7409(void)
{
	@Trace("Adding diary entry");
	object var_72_object;
	@CreateDiaryEntry(var_72_object, 77, 2, 12159);
	bool var_77_bool; object var_78_object;
	var_72_object = var_78_object;
	func_7281(var_77_bool, var_78_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6898(bool var_402_bool)
{
	int var_404_int;
	func_6212(var_404_int, "ood1Viktor7");
	if(var_404_int == 0) {
		var_402_bool = true;
		return 0;
	}
	var_402_bool = false;
}


// @pe
void func_6389(void)
{
	@SetVariable("ood1Viktor11", 1);
}


void func_6395(void)
{
	object var_89_object;
	func_7310(var_89_object);
	object var_88_object;
	var_89_object = var_88_object;
	float var_100_float;
	func_6240(var_100_float);
	var_88_object->AddMark("d1q02ViktorGotoAnna", "pt_map_anna", 0, 8634, var_100_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6910(bool var_418_bool)
{
	int var_420_int;
	func_6212(var_420_int, "ood1Viktor8");
	if(var_420_int == 0) {
		var_418_bool = true;
		return 0;
	}
	var_418_bool = false;
}


void func_7425(void)
{
	@Trace("Adding diary entry");
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 154, 2, 15365);
	bool var_83_bool; object var_84_object;
	var_78_object = var_84_object;
	func_7281(var_83_bool, var_84_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6922(bool var_434_bool)
{
	int var_436_int;
	func_6212(var_436_int, "ood1Viktor9");
	if(var_436_int == 0) {
		var_434_bool = true;
		return 0;
	}
	var_434_bool = false;
}


// @pe
void func_6411(object var_147_object)
{
	object var_151_object;
	func_7310(var_151_object);
	object var_148_object;
	var_151_object = var_148_object;
	func_7327(var_148_object, "pt_map_anna", (float)2);
	object var_152_object;
	func_7310(var_152_object);
	var_147_object->ShowMap(var_152_object);
}


void func_7441(void)
{
	@Trace("Adding diary entry");
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 111, 1, 13734);
	bool var_82_bool; object var_83_object;
	var_77_object = var_83_object;
	func_7281(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


void func_4371(object var_0_object, int var_536_int, object var_537_object)
{
	var_0_object = var_537_object;
	bool var_547_bool; object var_548_object;
	var_537_object = var_548_object;
	func_6117(var_547_bool, var_548_object);
	if(!var_547_bool) { //@nz
		var_536_int = -2;
		return 8;
	}
	object var_543_object;
	@CreateDialog(var_543_object);
	int var_550_int;
	func_6269(var_550_int);
	var_543_object->SetNPCName(var_550_int);
	string var_551_string;
	func_6271(var_551_string);
	var_543_object->SetPhoto(var_551_string);
	int var_552_int;
	func_7360(var_552_int);
	var_543_object->SetPlayerName(var_552_int);
	bool var_544_bool;
	@IsOverrideActive(var_544_bool);
	if(var_544_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	@DoDialog(var_543_object);
	object var_554_object; object var_555_object;
	var_537_object = var_554_object;
	var_543_object = var_555_object;
	TaskCall(13);
	func_4434(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	bool var_546_bool;
	var_543_object->IsDialogEnd(var_546_bool);
	
	for(;;) {
		var_643_bool = !var_546_bool; //@nz
		if(var_643_bool == 0) goto Label_4423;
		@sync();
		var_543_object->IsDialogEnd(var_546_bool);
	}
	
Label_4423:
	object var_644_object;
	var_537_object = var_644_object;
	func_6173();
	@StopDialog(var_543_object);
	var_543_object->GetReturnValue(-1);
	int var_545_int = var_536_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6934(bool var_450_bool)
{
	int var_452_int;
	func_6212(var_452_int, "ood1Viktor10");
	if(var_452_int == 0) {
		var_450_bool = true;
		return 0;
	}
	var_450_bool = false;
}


// @pe
void func_6427(void)
{
	@SetVariable("KnowStation", 1);
}


// @pe
void func_6433(void)
{
	@SetVariable("KnowFactory", 1);
}


// @pe
void func_6946(bool var_466_bool)
{
	int var_468_int;
	func_6212(var_468_int, "ood1Viktor11");
	if(var_468_int == 0) {
		var_466_bool = true;
		return 0;
	}
	var_466_bool = false;
}


void func_7457(void)
{
	@Trace("Adding diary entry");
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 113, 1, 13736);
	bool var_116_bool; object var_117_object;
	var_111_object = var_117_object;
	func_7281(var_116_bool, var_117_object, 111);
}
EMIT "Stack[-1] = 0";


void func_289(object var_0_object, int var_647_int, object var_648_object)
{
	var_0_object = var_648_object;
	bool var_658_bool; object var_659_object;
	var_648_object = var_659_object;
	func_6117(var_658_bool, var_659_object);
	if(!var_658_bool) { //@nz
		var_647_int = -2;
		return 8;
	}
	object var_654_object;
	@CreateDialog(var_654_object);
	int var_661_int;
	func_6269(var_661_int);
	var_654_object->SetNPCName(var_661_int);
	string var_662_string;
	func_6271(var_662_string);
	var_654_object->SetPhoto(var_662_string);
	int var_663_int;
	func_7360(var_663_int);
	var_654_object->SetPlayerName(var_663_int);
	bool var_655_bool;
	@IsOverrideActive(var_655_bool);
	if(var_655_bool != 0) {
		var_647_int = -2;
		return 8;
	}
	@DoDialog(var_654_object);
	object var_665_object; object var_666_object;
	var_648_object = var_665_object;
	var_654_object = var_666_object;
	TaskCall(5);
	func_352(var_667_object, var_668_object, var_669_string, var_670_bool, var_665_object, var_666_object);
	TaskReturn();
	bool var_657_bool;
	var_654_object->IsDialogEnd(var_657_bool);
	
	for(;;) {
		var_707_bool = !var_657_bool; //@nz
		if(var_707_bool == 0) goto Label_341;
		@sync();
		var_654_object->IsDialogEnd(var_657_bool);
	}
	
Label_341:
	object var_708_object;
	var_648_object = var_708_object;
	func_6173();
	@StopDialog(var_654_object);
	var_654_object->GetReturnValue(-1);
	int var_656_int = var_647_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6439(void)
{
	@SetVariable("KnowWarehouses", 1);
}


// @pe
void func_6445(void)
{
	@SetVariable("KnowViktor", 1);
}


// @pe
void func_6958(bool var_896_bool)
{
	int var_898_int;
	func_6212(var_898_int, "d1q01");
	if(var_898_int == 1)
		var_896_bool = true;
	var_896_bool = false;
}


void func_7473(void)
{
	@Trace("Adding diary entry");
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 112, 1, 13735);
	bool var_107_bool; object var_108_object;
	var_102_object = var_108_object;
	func_7281(var_107_bool, var_108_object, 111);
}
EMIT "Stack[-1] = 0";


void func_6451(void)
{
	object var_52_object;
	func_7310(var_52_object);
	object var_51_object;
	var_52_object = var_51_object;
	float var_63_float;
	func_6240(var_63_float);
	var_51_object->AddMark("d3q02ViktorGotoMladVlad", "pt_map_maldvlad", 0, 11380, var_63_float);
	float var_70_float;
	func_6240(var_70_float);
	var_51_object->AddMark("d3q02ViktorGotoMladVladSelf", "pt_map_viktor", 0, 15305, var_70_float);
	func_7409();
}
EMIT "Stack[-1] = 0";


// @pe
void func_6970(bool var_188_bool)
{
	int var_190_int;
	func_6212(var_190_int, "d3q02");
	if(var_190_int == 1)
		var_188_bool = true;
	var_188_bool = false;
}


void func_7489(void)
{
	@Trace("Adding diary entry");
	object var_51_object;
	@CreateDiaryEntry(var_51_object, 182, 1, 15445);
	bool var_56_bool; object var_57_object;
	var_51_object = var_57_object;
	func_7281(var_56_bool, var_57_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5443(object var_0_object, int var_782_int, object var_783_object)
{
	var_0_object = var_783_object;
	bool var_793_bool; object var_794_object;
	var_783_object = var_794_object;
	func_6117(var_793_bool, var_794_object);
	if(!var_793_bool) { //@nz
		var_782_int = -2;
		return 8;
	}
	object var_789_object;
	@CreateDialog(var_789_object);
	int var_796_int;
	func_6269(var_796_int);
	var_789_object->SetNPCName(var_796_int);
	string var_797_string;
	func_6271(var_797_string);
	var_789_object->SetPhoto(var_797_string);
	int var_798_int;
	func_7360(var_798_int);
	var_789_object->SetPlayerName(var_798_int);
	bool var_790_bool;
	@IsOverrideActive(var_790_bool);
	if(var_790_bool != 0) {
		var_782_int = -2;
		return 8;
	}
	@DoDialog(var_789_object);
	object var_800_object; object var_801_object;
	var_783_object = var_800_object;
	var_789_object = var_801_object;
	TaskCall(17);
	func_5506(var_802_object, var_803_object, var_804_string, var_805_bool, var_800_object, var_801_object);
	TaskReturn();
	bool var_792_bool;
	var_789_object->IsDialogEnd(var_792_bool);
	
	for(;;) {
		var_864_bool = !var_792_bool; //@nz
		if(var_864_bool == 0) goto Label_5495;
		@sync();
		var_789_object->IsDialogEnd(var_792_bool);
	}
	
Label_5495:
	object var_865_object;
	var_783_object = var_865_object;
	func_6173();
	@StopDialog(var_789_object);
	var_789_object->GetReturnValue(-1);
	int var_791_int = var_782_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6982(bool var_196_bool)
{
	var_196_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_6987(bool var_202_bool)
{
	int var_204_int;
	func_6212(var_204_int, "d3q02");
	if(var_204_int == 4)
		var_202_bool = true;
	var_202_bool = false;
}


// @pe
void func_6479(void)
{
}


// @pe
void func_6481(object var_97_object)
{
	object var_101_object;
	func_7310(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	func_7327(var_98_object, "pt_map_mladvlad", (float)2);
	object var_121_object;
	func_7310(var_121_object);
	var_97_object->ShowMap(var_121_object);
}


// @pe
void func_4434(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_554_object, object var_555_object)
{
	var_0_object = var_555_object;
	var_1_object = var_554_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_561_bool = false;
		bool var_562_bool = false;
		bool var_563_bool;
		func_7088(var_1_object);
		if(var_563_bool != 0) {
			bool var_569_bool;
			func_7028(var_1_object);
			if(!var_569_bool) //@nz
				var_562_bool = true;
		}
		if(var_562_bool != 0) {
			bool var_576_bool;
			func_7040(var_1_object);
			if(!var_576_bool) //@nz
				var_561_bool = true;
		}
		if(var_561_bool != 0) {
			func_4576(var_555_object, "Neutral");
			var_0_object->SetMessage(12584); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11771, 12991, 12979); //@t
			bool var_592_bool;
			func_7016(var_1_object);
			if(!var_592_bool) //@nz
				var_0_object->AddReply(12585, 13755, 13752); //@t
		} else {
					func_4576(var_555_object, "Neutral");
					var_0_object->SetMessage(11765); //@t
					var_0_object->ClearReplies(); //@t
					bool var_612_bool = false;
					bool var_613_bool;
					func_7052(var_1_object);
					if(var_613_bool != 0) {
						bool var_619_bool;
						func_7064(var_1_object);
						if(var_619_bool != 0)
							var_612_bool = true;
					}
					if(var_612_bool != 0)
						var_0_object->AddReply(11767, 12977, 12975); //@t
					bool var_628_bool = false;
					bool var_629_bool;
					func_7028(var_1_object);
					if(var_629_bool != 0) {
						bool var_631_bool;
						func_7076(var_1_object);
						if(var_631_bool != 0)
							var_628_bool = true;
					}
					if(var_628_bool != 0)
						var_0_object->AddReply(12570, 13740, 13739); //@t
					var_0_object->AddReply(11766, -1, 12974); //@t
		}
	}
	for(;;) {
		bool var_602_bool;
		func_6273(var_602_bool);
		if(var_602_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6177(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4575;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4575:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1156";


void func_7505(void)
{
	@Trace("Adding diary entry");
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 183, 1, 15446);
	bool var_81_bool; object var_82_object;
	var_76_object = var_82_object;
	func_7281(var_81_bool, var_82_object, 182);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6999(bool var_208_bool)
{
	var_208_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_7004(bool var_792_bool)
{
	int var_794_int;
	func_6212(var_794_int, "KnowSaburivClan");
	if(var_794_int == 1)
		var_792_bool = true;
	var_792_bool = false;
}


// @pe
void func_352(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_665_object, object var_666_object)
{
	var_0_object = var_666_object;
	var_1_object = var_665_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_672_bool;
		func_7100(var_1_object);
		if(var_672_bool != 0) {
			object var_678_object; object var_679_object;
			var_678_object = var_1_object;
			var_679_object = var_0_object;
			func_6689();
			func_435(var_666_object, "Neutral");
			var_0_object->SetMessage(12036); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12037, 13256, 13255); //@t
			var_0_object->AddReply(12640, 13821, 13820); //@t
		} else {
					func_435(var_666_object, "Neutral");
					var_0_object->SetMessage(13016); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13017, -1, 14223); //@t
		}
	}
	for(;;) {
		bool var_694_bool;
		func_6273(var_694_bool);
		if(var_694_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6177(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_434;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_434:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x164";


void func_7521(void)
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_6497(void)
{
}


// @pe
void func_6499(void)
{
	@SetVariable("d3q02", 5);
}


// @pe
void func_7525(object var_41_object)
{
	var_42_bool = GlobalVars[1];
	if(!var_42_bool) { //@nz
		int var_44_int; object var_45_object;
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_150_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_151_bool;
	func_6254(var_151_bool, 1);
	if(var_151_bool != 0) {
		int var_159_int; object var_160_object;
		var_41_object = var_160_object;
		TaskCall(6);
		func_652(var_161_object, var_159_int, var_160_object);
		TaskReturn();
		return 0;
	}
	bool var_392_bool;
	func_6254(var_392_bool, 2);
	if(var_392_bool != 0) {
		int var_394_int; object var_395_object;
		var_41_object = var_395_object;
		TaskCall(8);
		func_3046(var_396_object, var_394_int, var_395_object);
		TaskReturn();
		return 0;
	}
	bool var_461_bool;
	func_6254(var_461_bool, 3);
	if(var_461_bool != 0) {
		int var_463_int; object var_464_object;
		var_41_object = var_464_object;
		TaskCall(10);
		func_3493(var_465_object, var_463_int, var_464_object);
		TaskReturn();
		return 0;
	}
	bool var_534_bool;
	func_6254(var_534_bool, 5);
	if(var_534_bool != 0) {
		int var_536_int; object var_537_object;
		var_41_object = var_537_object;
		TaskCall(12);
		func_4371(var_538_object, var_536_int, var_537_object);
		TaskReturn();
		return 0;
	}
	bool var_645_bool;
	func_6254(var_645_bool, 6);
	if(var_645_bool != 0) {
		int var_647_int; object var_648_object;
		var_41_object = var_648_object;
		TaskCall(4);
		func_289(var_649_object, var_647_int, var_648_object);
		TaskReturn();
		return 0;
	}
	bool var_709_bool;
	func_6254(var_709_bool, 8);
	if(var_709_bool != 0) {
		int var_711_int; object var_712_object;
		var_41_object = var_712_object;
		TaskCall(14);
		func_5065(var_713_object, var_711_int, var_712_object);
		TaskReturn();
		return 0;
	}
	bool var_780_bool;
	func_6254(var_780_bool, 9);
	if(var_780_bool != 0) {
		int var_782_int; object var_783_object;
		var_41_object = var_783_object;
		TaskCall(16);
		func_5443(var_784_object, var_782_int, var_783_object);
		TaskReturn();
		return 0;
	}
	bool var_866_bool;
	func_6260(var_866_bool);
}


// @pe
void func_7016(bool var_210_bool)
{
	int var_212_int;
	func_6212(var_212_int, "d5q03");
	if(var_212_int == 0) {
		var_210_bool = true;
		return 0;
	}
	var_210_bool = false;
}


// @pe
void func_6505(void)
{
	func_7377();
}


void func_6510(void)
{
	object var_49_object;
	int var_50_int;
	func_6212(var_50_int, "d5q03");
	if(var_50_int == 0) {
		@SetVariable("d5q03", 1);
		object var_58_object;
		func_7310(var_58_object);
		var_58_object = var_49_object;
		float var_69_float;
		func_6240(var_69_float);
		var_49_object->AddMark("d5q03ViktorSavePrisonersSelf", "pt_map_viktor", 0, 15371, var_69_float);
		float var_76_float;
		func_6240(var_76_float);
		var_49_object->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 15370, var_76_float);
		func_7425();
		object var_102_object;
		func_6217(var_102_object, "quest_d5_03");
		bool var_110_bool;
		func_6228(var_110_bool, "quest_d5_03", "place_prisoners");
		var_49_object = null;
	}
}


// @pe
void func_7028(bool var_177_bool)
{
	int var_179_int;
	func_6212(var_179_int, "d5q03");
	if(var_179_int == 1000)
		var_177_bool = true;
	var_177_bool = false;
}


// @pe
void func_7040(bool var_184_bool)
{
	int var_186_int;
	func_6212(var_186_int, "d5q03");
	if(var_186_int == -1)
		var_184_bool = true;
	var_184_bool = false;
}


// @pe
void func_5506(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_800_object, object var_801_object)
{
	var_0_object = var_801_object;
	var_1_object = var_800_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_807_bool;
		func_7160(var_1_object);
		if(var_807_bool != 0) {
			object var_813_object; object var_814_object;
			var_813_object = var_1_object;
			var_814_object = var_0_object;
			func_6654();
			func_5613(var_801_object, "Neutral");
			var_0_object->SetMessage(13994); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13995, 15231, 15230); //@t
		} else {
					func_5613(var_801_object, "Neutral");
					var_0_object->SetMessage(14011); //@t
					var_0_object->ClearReplies(); //@t
					bool var_836_bool;
					func_7232(var_1_object);
					if(var_836_bool != 0)
						var_0_object->AddReply(14012, 15248, 15247); //@t
					bool var_845_bool = false;
					bool var_846_bool;
					func_7184(var_1_object);
					if(var_846_bool != 0) {
						bool var_852_bool;
						func_7196(var_1_object);
						if(var_852_bool != 0)
							var_845_bool = true;
					}
					if(var_845_bool != 0)
						var_0_object->AddReply(14029, 15265, 15264); //@t
					var_0_object->AddReply(14039, -1, 15274); //@t
		}
	}
	for(;;) {
		bool var_826_bool;
		func_6273(var_826_bool);
		if(var_826_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6177(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5612;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5612:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1586";


// @pe
void func_7052(bool var_223_bool)
{
	int var_225_int;
	func_6212(var_225_int, "d5q03");
	if(var_225_int == 2)
		var_223_bool = true;
	var_223_bool = false;
}


// @pe
void func_7064(bool var_229_bool)
{
	int var_231_int;
	func_6212(var_231_int, "ood5Viktor1");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


// @pe
void func_6558(void)
{
	@SetVariable("ood5Viktor1", 1);
}


// @pe
void func_7076(bool var_241_bool)
{
	int var_243_int;
	func_6212(var_243_int, "ood5Viktor2");
	if(var_243_int == 0) {
		var_241_bool = true;
		return 0;
	}
	var_241_bool = false;
}


// @pe
void func_6564(object var_136_object)
{
	@Trace("money30000 is given");
	object var_139_object;
	var_136_object = var_139_object;
	func_6093(var_139_object, "money", 30000);
}


void func_3493(object var_0_object, int var_463_int, object var_464_object)
{
	var_0_object = var_464_object;
	bool var_474_bool; object var_475_object;
	var_464_object = var_475_object;
	func_6117(var_474_bool, var_475_object);
	if(!var_474_bool) { //@nz
		var_463_int = -2;
		return 8;
	}
	object var_470_object;
	@CreateDialog(var_470_object);
	int var_477_int;
	func_6269(var_477_int);
	var_470_object->SetNPCName(var_477_int);
	string var_478_string;
	func_6271(var_478_string);
	var_470_object->SetPhoto(var_478_string);
	int var_479_int;
	func_7360(var_479_int);
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
	func_3556(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object);
	TaskReturn();
	bool var_473_bool;
	var_470_object->IsDialogEnd(var_473_bool);
	
	for(;;) {
		var_532_bool = !var_473_bool; //@nz
		if(var_532_bool == 0) goto Label_3545;
		@sync();
		var_470_object->IsDialogEnd(var_473_bool);
	}
	
Label_3545:
	object var_533_object;
	var_464_object = var_533_object;
	func_6173();
	@StopDialog(var_470_object);
	var_470_object->GetReturnValue(-1);
	int var_472_int = var_463_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6575(void)
{
	@SetVariable("ood5Viktor2", 1);
}


// @pe
void func_7088(bool var_171_bool)
{
	int var_173_int;
	func_6212(var_173_int, "ood5Viktor3");
	if(var_173_int == 0) {
		var_171_bool = true;
		return 0;
	}
	var_171_bool = false;
}


// @pe
void func_435(object var_2_object, string var_143_string)
{
	bool var_144_bool;
	func_6273(var_144_bool);
	if(!var_144_bool) //@nz
		return 0;
	if(var_143_string == var_2_object)
		return 0;
	string var_147_string;
	func_6177(var_147_string);
	var_2_object = var_147_string;
}


// @pe
void func_6581(void)
{
}


// @pe
void func_6583(void)
{
	@SetVariable("ood5Viktor3", 1);
}


// @pe
void func_7100(bool var_131_bool)
{
	int var_133_int;
	func_6212(var_133_int, "ood6Viktor1");
	if(var_133_int == 0) {
		var_131_bool = true;
		return 0;
	}
	var_131_bool = false;
}


// @pe
void func_6589(void)
{
	@SetVariable("ood6Viktor1", 1);
}


void func_6595(void)
{
	@SetVariable("d6q01", 1);
	object var_52_object;
	func_7310(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_6240(var_63_float);
	var_49_object->AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", 1, 15383, var_63_float);
	float var_70_float;
	func_6240(var_70_float);
	var_49_object->AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", 1, 15384, var_70_float);
	float var_75_float;
	func_6240(var_75_float);
	var_49_object->AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", 1, 15385, var_75_float);
	func_7441();
	func_7473();
	func_7457();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7112(bool var_412_bool)
{
	int var_414_int;
	func_6212(var_414_int, "KnowAlexandr");
	if(var_414_int == 1)
		var_412_bool = true;
	var_412_bool = false;
}


void func_5065(object var_0_object, int var_711_int, object var_712_object)
{
	var_0_object = var_712_object;
	bool var_722_bool; object var_723_object;
	var_712_object = var_723_object;
	func_6117(var_722_bool, var_723_object);
	if(!var_722_bool) { //@nz
		var_711_int = -2;
		return 8;
	}
	object var_718_object;
	@CreateDialog(var_718_object);
	int var_725_int;
	func_6269(var_725_int);
	var_718_object->SetNPCName(var_725_int);
	string var_726_string;
	func_6271(var_726_string);
	var_718_object->SetPhoto(var_726_string);
	int var_727_int;
	func_7360(var_727_int);
	var_718_object->SetPlayerName(var_727_int);
	bool var_719_bool;
	@IsOverrideActive(var_719_bool);
	if(var_719_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	@DoDialog(var_718_object);
	object var_729_object; object var_730_object;
	var_712_object = var_729_object;
	var_718_object = var_730_object;
	TaskCall(15);
	func_5128(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object);
	TaskReturn();
	bool var_721_bool;
	var_718_object->IsDialogEnd(var_721_bool);
	
	for(;;) {
		var_778_bool = !var_721_bool; //@nz
		if(var_778_bool == 0) goto Label_5117;
		@sync();
		var_718_object->IsDialogEnd(var_721_bool);
	}
	
Label_5117:
	object var_779_object;
	var_712_object = var_779_object;
	func_6173();
	@StopDialog(var_718_object);
	var_718_object->GetReturnValue(-1);
	int var_720_int = var_711_int;
}
EMIT "Stack[-4] = 0";


void func_6093(object var_139_object, string var_140_string, int var_141_int)
{
	int var_143_int;
	var_139_object->GetProperty(var_140_string, var_143_int);
	var_139_object->SetProperty(var_140_string, (var_143_int + var_141_int));
}


void func_6100(bool var_41_bool, object var_42_object)
{
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	bool var_50_bool;
	@Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
}


// @pe
void func_7124(bool var_428_bool)
{
	int var_430_int;
	func_6212(var_430_int, "KnowBigVlad");
	if(var_430_int == 1)
		var_428_bool = true;
	var_428_bool = false;
}


void func_6112(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


// @pe
void func_4576(object var_2_object, string var_191_string)
{
	bool var_192_bool;
	func_6273(var_192_bool);
	if(!var_192_bool) //@nz
		return 0;
	if(var_191_string == var_2_object)
		return 0;
	string var_195_string;
	func_6177(var_195_string);
	var_2_object = var_195_string;
}


// @pe
void func_7136(bool var_55_bool)
{
	int var_57_int;
	func_6212(var_57_int, "ood8Viktor1");
	if(var_57_int == 0) {
		var_55_bool = true;
		return 0;
	}
	var_55_bool = false;
}


// @pe
void func_3556(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_481_object, object var_482_object)
{
	var_0_object = var_482_object;
	var_1_object = var_481_object;
	var_3_object = false;
	if(1 != 0) {
		func_3652(var_482_object, "Neutral");
		var_0_object->SetMessage(10235); //@t
		var_0_object->ClearReplies(); //@t
		bool var_494_bool = false;
		bool var_495_bool;
		func_6970(var_1_object);
		if(var_495_bool != 0) {
			bool var_501_bool;
			func_6982(var_1_object);
			if(var_501_bool != 0)
				var_494_bool = true;
		}
		if(var_494_bool != 0)
			var_0_object->AddReply(10236, 11288, 11286); //@t
		bool var_506_bool = false;
		bool var_507_bool;
		func_6987(var_1_object);
		if(var_507_bool != 0) {
			bool var_513_bool;
			func_6999(var_1_object);
			if(var_513_bool != 0)
				var_506_bool = true;
		}
		if(var_506_bool != 0)
			var_0_object->AddReply(10266, 11321, 11320); //@t
		var_0_object->AddReply(10237, 11089, 11287); //@t
		var_0_object->AddReply(11382, -1, 12578); //@t
		goto Label_3622;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xde8";
	}
Label_3622:
	bool var_524_bool;
	func_6273(var_524_bool);
	if(var_524_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6177(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3651;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3651:
		return 0;

	}
	
}


void func_6117(bool var_55_bool, object var_56_object)
{
	cvector var_66_cvector;
	var_56_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_56_object->GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_73_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_74_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_77_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_6202(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * 70) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
}


void func_3046(object var_0_object, int var_394_int, object var_395_object)
{
	var_0_object = var_395_object;
	bool var_405_bool; object var_406_object;
	var_395_object = var_406_object;
	func_6117(var_405_bool, var_406_object);
	if(!var_405_bool) { //@nz
		var_394_int = -2;
		return 8;
	}
	object var_401_object;
	@CreateDialog(var_401_object);
	int var_408_int;
	func_6269(var_408_int);
	var_401_object->SetNPCName(var_408_int);
	string var_409_string;
	func_6271(var_409_string);
	var_401_object->SetPhoto(var_409_string);
	int var_410_int;
	func_7360(var_410_int);
	var_401_object->SetPlayerName(var_410_int);
	bool var_402_bool;
	@IsOverrideActive(var_402_bool);
	if(var_402_bool != 0) {
		var_394_int = -2;
		return 8;
	}
	@DoDialog(var_401_object);
	object var_412_object; object var_413_object;
	var_395_object = var_412_object;
	var_401_object = var_413_object;
	TaskCall(9);
	func_3109(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	bool var_404_bool;
	var_401_object->IsDialogEnd(var_404_bool);
	
	for(;;) {
		var_459_bool = !var_404_bool; //@nz
		if(var_459_bool == 0) goto Label_3098;
		@sync();
		var_401_object->IsDialogEnd(var_404_bool);
	}
	
Label_3098:
	object var_460_object;
	var_395_object = var_460_object;
	func_6173();
	@StopDialog(var_401_object);
	var_401_object->GetReturnValue(-1);
	int var_403_int = var_394_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7148(bool var_47_bool)
{
	int var_49_int;
	func_6212(var_49_int, "d8KainIsReason");
	if(var_49_int == 1)
		var_47_bool = true;
	var_47_bool = false;
}


// @pe
void func_5613(object var_2_object, string var_120_string)
{
	bool var_121_bool;
	func_6273(var_121_bool);
	if(!var_121_bool) //@nz
		return 0;
	if(var_120_string == var_2_object)
		return 0;
	string var_124_string;
	func_6177(var_124_string);
	var_2_object = var_124_string;
}


// @pe
void func_6642(void)
{
	@SetVariable("KnowAlexandr", 1);
}


// @pe
void func_7160(bool var_108_bool)
{
	int var_110_int;
	func_6212(var_110_int, "ood9Viktor1");
	if(var_110_int == 0) {
		var_108_bool = true;
		return 0;
	}
	var_108_bool = false;
}


// @pe
void func_1019(object var_2_object, string var_279_string)
{
	bool var_280_bool;
	func_6273(var_280_bool);
	if(!var_280_bool) //@nz
		return 0;
	if(var_279_string == var_2_object)
		return 0;
	string var_283_string;
	func_6177(var_283_string);
	var_2_object = var_283_string;
}


// @pe
void func_6654(void)
{
	@SetVariable("ood9Viktor1", 1);
}


