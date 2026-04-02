// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		func_4768();
		bool var_31_bool;
		func_3767(var_31_bool);
		if(!var_31_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_3832("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_31_object;
		var_30_bool = var_31_object;
		func_4772(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_3755(var_31_bool, var_32_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3850();
			if(var_30_string == 205) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4086();
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(171, 210, 206); //@t
				var_0_object->AddReply(172, 209, 207); //@t
				return 0;
			}
			if(var_30_string == 209) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(174); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(178, 218, 213); //@t
				return 0;
			}
			if(var_30_string == 210) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(176, 215, 211); //@t
				var_0_object->AddReply(177, 214, 212); //@t
				return 0;
			}
			if(var_30_string == 214) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(181, 218, 216); //@t
				return 0;
			}
			if(var_30_string == 215) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(182, 218, 217); //@t
				return 0;
			}
			if(var_30_string == 218) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(184, -1, 221); //@t
				var_0_object->AddReply(185, -1, 222); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_3951(var_103_bool);
			if(var_103_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3850();
			if(var_31_bool == 6364) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4038();
			}
			if(var_31_bool == 6361) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4038();
			}
			if(var_31_bool == 6365) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_4038();
			}
			if(var_31_bool == 6372) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_4044();
			}
			if(var_31_bool == 6373) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_4044();
			}
			if(var_31_bool == 6383) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_4050();
			}
			if(var_31_bool == 6384) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_4050();
			}
			if(var_31_bool == 6385) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_4050();
			}
			if(var_31_bool == 9428) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4056();
			}
			if(var_31_bool == 9429) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_4056();
			}
			if(var_31_bool == 9434) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_4062();
			}
			if(var_31_bool == 9435) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_4062();
			}
			if(var_31_bool == 9440) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_4068();
			}
			if(var_31_bool == 9447) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_4074();
			}
			if(var_31_bool == 9450) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_4080();
			}
			if(var_30_string == 9141) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8318); //@t
				var_0_object->ClearReplies(); //@t
				bool var_128_bool = false;
				bool var_129_bool;
				func_4300(var_1_object);
				if(var_129_bool != 0) {
					bool var_137_bool;
					func_4204(var_1_object);
					if(var_137_bool != 0)
						var_128_bool = true;
				}
				if(var_128_bool != 0)
					var_0_object->AddReply(8319, 6356, 9142); //@t
				bool var_146_bool = true;
				bool var_147_bool = false;
				bool var_148_bool;
				func_4408(var_148_bool, var_1_object);
				if(var_148_bool != 0) {
					bool var_159_bool;
					func_4312(var_1_object);
					if(var_159_bool != 0)
						var_147_bool = true;
				}
				if(var_147_bool != 1) {
					bool var_165_bool = false;
					bool var_166_bool;
					func_4418(var_166_bool, var_1_object);
					if(var_166_bool != 0) {
						bool var_177_bool;
						func_4312(var_1_object);
						if(var_177_bool != 0)
							var_165_bool = true;
					}
					if(var_165_bool != 1)
						var_146_bool = false;
				}
				if(var_146_bool != 0)
					var_0_object->AddReply(8320, 6369, 9143); //@t
				bool var_182_bool = false;
				bool var_183_bool;
				func_4572(var_1_object);
				if(var_183_bool != 0) {
					bool var_189_bool;
					func_4324(var_1_object);
					if(var_189_bool != 0)
						var_182_bool = true;
				}
				if(var_182_bool != 0)
					var_0_object->AddReply(8322, 6376, 9145); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_4476(var_1_object);
				if(var_199_bool != 0) {
					bool var_205_bool;
					func_4336(var_1_object);
					if(var_205_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_object->AddReply(8324, 9417, 9147); //@t
				bool var_214_bool = false;
				bool var_215_bool;
				func_4464(var_1_object);
				if(var_215_bool != 0) {
					bool var_221_bool;
					func_4348(var_1_object);
					if(var_221_bool != 0)
						var_214_bool = true;
				}
				if(var_214_bool != 0)
					var_0_object->AddReply(8327, 9169, 9150); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_4548(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_4360(var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(8329, 9170, 9152); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_4396(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_4372(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(8334, 9171, 9157); //@t
				bool var_262_bool = false;
				bool var_263_bool;
				func_4488(var_1_object);
				if(var_263_bool != 0) {
					bool var_269_bool;
					func_4384(var_1_object);
					if(var_269_bool != 0)
						var_262_bool = true;
				}
				if(var_262_bool != 0)
					var_0_object->AddReply(8337, 9172, 9160); //@t
				var_0_object->AddReply(8724, -1, 9561); //@t
				return 0;
			}
			if(var_30_string == 9172) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8601, 9449, 9448); //@t
				return 0;
			}
			if(var_30_string == 9449) {
				object var_290_object; object var_291_object;
				var_290_object = var_1_object;
				var_291_object = var_0_object;
				func_3959();
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8603, -1, 9450); //@t
				return 0;
			}
			if(var_30_string == 9171) {
				object var_301_object; object var_302_object;
				var_301_object = var_1_object;
				var_302_object = var_0_object;
				func_4098();
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8595, 9443, 9441); //@t
				var_0_object->AddReply(8596, 9444, 9442); //@t
				return 0;
			}
			if(var_30_string == 9444) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8598); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8599, 9443, 9445); //@t
				return 0;
			}
			if(var_30_string == 9443) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8600, -1, 9447); //@t
				return 0;
			}
			if(var_30_string == 9170) {
				object var_329_object; object var_330_object;
				var_329_object = var_1_object;
				var_330_object = var_0_object;
				func_4098();
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8591, 9437, 9436); //@t
				var_0_object->AddReply(8593, 9437, 9438); //@t
				return 0;
			}
			if(var_30_string == 9437) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8594, -1, 9440); //@t
				return 0;
			}
			if(var_30_string == 9169) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8585, 9431, 9430); //@t
				return 0;
			}
			if(var_30_string == 9431) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8587, 9433, 9432); //@t
				return 0;
			}
			if(var_30_string == 9433) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8588); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8589, -1, 9434); //@t
				var_0_object->AddReply(8590, -1, 9435); //@t
				return 0;
			}
			if(var_30_string == 9417) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8573); //@t
				var_0_object->ClearReplies(); //@t
				bool var_374_bool;
				func_4584(var_1_object);
				if(!var_374_bool) //@nz
					var_0_object->AddReply(8574, 9419, 9418); //@t
				var_0_object->AddReply(8576, 9421, 9420); //@t
				return 0;
			}
			if(var_30_string == 9421) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8578, 9424, 9422); //@t
				return 0;
			}
			if(var_30_string == 9419) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8579, 9424, 9423); //@t
				return 0;
			}
			if(var_30_string == 9424) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8581, 9427, 9426); //@t
				return 0;
			}
			if(var_30_string == 9427) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(8582); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8583, -1, 9428); //@t
				var_0_object->AddReply(8584, -1, 9429); //@t
				return 0;
			}
			if(var_30_string == 6376) {
				object var_420_object; object var_421_object;
				var_420_object = var_1_object;
				var_421_object = var_0_object;
				func_4198();
				object var_424_object; object var_425_object;
				var_424_object = var_1_object;
				var_425_object = var_0_object;
				func_4092();
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5789, 6378, 6377); //@t
				var_0_object->AddReply(5798, 6378, 6386); //@t
				return 0;
			}
			if(var_30_string == 6378) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5790); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5791, 6380, 6379); //@t
				var_0_object->AddReply(5797, -1, 6385); //@t
				return 0;
			}
			if(var_30_string == 6380) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5792); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5793, 6382, 6381); //@t
				var_0_object->AddReply(5796, -1, 6384); //@t
				return 0;
			}
			if(var_30_string == 6382) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5795, -1, 6383); //@t
				return 0;
			}
			if(var_30_string == 6369) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5783, 6371, 6370); //@t
				var_0_object->AddReply(5787, 6371, 6374); //@t
				return 0;
			}
			if(var_30_string == 6371) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5785, -1, 6372); //@t
				var_0_object->AddReply(5786, -1, 6373); //@t
				return 0;
			}
			if(var_30_string == 6356) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5772, 6358, 6357); //@t
				var_0_object->AddReply(5781, 6358, 6367); //@t
				return 0;
			}
			if(var_30_string == 6358) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5774, 6360, 6359); //@t
				var_0_object->AddReply(5780, 6360, 6365); //@t
				return 0;
			}
			if(var_30_string == 6360) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5777, 6363, 6362); //@t
				var_0_object->AddReply(5776, -1, 6361); //@t
				return 0;
			}
			if(var_30_string == 6363) {
				func_624(var_31_bool, "Neutral");
				var_0_object->SetMessage(5778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5779, -1, 6364); //@t
				return 0;
			}
			var_3_string = true;
			bool var_520_bool;
			func_3951(var_520_bool);
			if(var_520_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x281";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3850();
			if(var_31_bool == 8221) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3965();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_3983();
			}
			if(var_31_bool == 8222) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_3965();
			}
			if(var_31_bool == 8210) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_3971();
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_4006();
			}
			if(var_31_bool == 8201) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_3977();
			}
			if(var_30_string == 7583) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(6877); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool = false;
				bool var_146_bool;
				func_4216(var_1_object);
				if(var_146_bool != 0) {
					bool var_154_bool;
					func_4264(var_1_object);
					if(var_154_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_object->AddReply(6878, 7585, 7584); //@t
				bool var_163_bool = false;
				bool var_164_bool;
				func_4228(var_1_object);
				if(var_164_bool != 0) {
					bool var_170_bool;
					func_4288(var_1_object);
					if(var_170_bool != 0)
						var_163_bool = true;
				}
				if(var_163_bool != 0)
					var_0_object->AddReply(7431, 8203, 8202); //@t
				bool var_179_bool = false;
				bool var_180_bool;
				func_4240(var_1_object);
				if(var_180_bool != 0) {
					bool var_186_bool;
					func_4252(var_1_object);
					if(var_186_bool != 0)
						var_179_bool = true;
				}
				if(var_179_bool != 0)
					var_0_object->AddReply(6884, 7591, 7590); //@t
				var_0_object->AddReply(7529, -1, 8311); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x6c8";
			EMIT "Pop(1)";
			EMIT "Push((int) 9408)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9409)";
			EMIT "Push((int) 10339)";
			EMIT "Push((int) 10338)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9418)";
			EMIT "Push((int) 10339)";
			EMIT "Push((int) 10348)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9419)";
			EMIT "Push((int) 10351)";
			EMIT "Push((int) 10350)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x6c8";
			EMIT "Pop(1)";
			EMIT "Push((int) 9422)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9423)";
			EMIT "Push((int) 10356)";
			EMIT "Push((int) 10355)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9432)";
			EMIT "Push((int) 10366)";
			EMIT "Push((int) 10365)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9435)";
			EMIT "Push((int) 10370)";
			EMIT "Push((int) 10369)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_30_string == 10370) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9437, 10356, 10371); //@t
				return 0;
			}
			if(var_30_string == 10366) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9434, 10356, 10367); //@t
				return 0;
			}
			if(var_30_string == 10356) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9425, 10358, 10357); //@t
				var_0_object->AddReply(9429, 10362, 10361); //@t
				return 0;
			}
			if(var_30_string == 10362) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9431, 10358, 10363); //@t
				return 0;
			}
			if(var_30_string == 10358) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9427, -1, 10359); //@t
				var_0_object->AddReply(9428, -1, 10360); //@t
				return 0;
			}
			if(var_30_string == 10351) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9420); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9421, 10339, 10352); //@t
				return 0;
			}
			if(var_30_string == 10339) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9411, 10341, 10340); //@t
				var_0_object->AddReply(9417, -1, 10347); //@t
				return 0;
			}
			if(var_30_string == 10341) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9412); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9413, 10343, 10342); //@t
				var_0_object->AddReply(9416, 10343, 10345); //@t
				return 0;
			}
			if(var_30_string == 10343) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(9414); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9415, -1, 10344); //@t
				return 0;
			}
			if(var_30_string == 7591) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(6885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7430, -1, 8201); //@t
				return 0;
			}
			if(var_30_string == 8203) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7433, 8205, 8204); //@t
				return 0;
			}
			if(var_30_string == 8205) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6882, 7589, 7588); //@t
				return 0;
			}
			if(var_30_string == 7589) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(6883); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7435, 8207, 8206); //@t
				var_0_object->AddReply(7440, 8207, 8211); //@t
				return 0;
			}
			if(var_30_string == 8207) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7437, 8209, 8208); //@t
				var_0_object->AddReply(7441, 8209, 8213); //@t
				return 0;
			}
			if(var_30_string == 8209) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7439, -1, 8210); //@t
				return 0;
			}
			if(var_30_string == 7585) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(6879); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6880, 7587, 7586); //@t
				var_0_object->AddReply(7450, 8216, 8223); //@t
				return 0;
			}
			if(var_30_string == 7587) {
				object var_333_object; object var_334_object;
				var_333_object = var_1_object;
				var_334_object = var_0_object;
				func_3959();
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(6881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7442, 8216, 8215); //@t
				var_0_object->AddReply(7451, 8226, 8225); //@t
				return 0;
			}
			if(var_30_string == 8226) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7453, 8216, 8227); //@t
				return 0;
			}
			if(var_30_string == 8216) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7444, 8218, 8217); //@t
				return 0;
			}
			if(var_30_string == 8218) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7446, 8220, 8219); //@t
				bool var_366_bool;
				func_4276(var_1_object);
				if(var_366_bool != 0)
					var_0_object->AddReply(7449, -1, 8222); //@t
				return 0;
			}
			if(var_30_string == 8220) {
				func_1736(var_31_bool, "Neutral");
				var_0_object->SetMessage(7447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7448, -1, 8221); //@t
				return 0;
			}
			var_3_string = true;
			bool var_382_bool;
			func_3951(var_382_bool);
			if(var_382_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d9";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3850();
			if(var_30_string == 11052) {
				bool var_36_bool;
				func_4560(var_1_object);
				if(var_36_bool != 0) {
					object var_44_object; object var_45_object;
					var_44_object = var_1_object;
					var_45_object = var_0_object;
					func_4192();
					func_2517(var_31_bool, "Neutral");
					var_0_object->SetMessage(10030); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10031, 11054, 11053); //@t
					var_0_object->AddReply(10039, 11063, 11062); //@t
					return 0;
				}
				func_2517(var_31_bool, "Neutral");
				var_0_object->SetMessage(15308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15309, -1, 16547); //@t
				return 0;
			}
			if(var_30_string == 11063) {
				func_2517(var_31_bool, "Neutral");
				var_0_object->SetMessage(10040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10041, -1, 11064); //@t
				var_0_object->AddReply(10042, 11056, 11065); //@t
				return 0;
			}
			if(var_30_string == 11054) {
				func_2517(var_31_bool, "Neutral");
				var_0_object->SetMessage(10032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10033, 11056, 11055); //@t
				var_0_object->AddReply(10038, 11056, 11060); //@t
				return 0;
			}
			if(var_30_string == 11056) {
				func_2517(var_31_bool, "Neutral");
				var_0_object->SetMessage(10034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10035, -1, 11057); //@t
				var_0_object->AddReply(10036, -1, 11058); //@t
				var_0_object->AddReply(10037, -1, 11059); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_3951(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9e6";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3850();
			if(var_31_bool == 14602) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4163();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4104();
			}
			if(var_31_bool == 14605) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_4163();
			}
			if(var_31_bool == 14608) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_4104();
			}
			if(var_31_bool == 14626) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_4113();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_4119();
				object var_123_object = var_1_object;
				func_4169(var_0_object);
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_3953();
			}
			if(var_30_string == 14585) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13353); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool = false;
				bool var_165_bool;
				func_4440(var_1_object);
				if(var_165_bool != 0) {
					bool var_171_bool;
					func_4428(var_1_object);
					if(var_171_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_object->AddReply(13355, 14598, 14587); //@t
				bool var_180_bool = false;
				bool var_181_bool;
				func_4440(var_1_object);
				if(!var_181_bool) { //@nz
					bool var_184_bool;
					func_4428(var_1_object);
					if(var_184_bool != 0)
						var_180_bool = true;
				}
				if(var_180_bool != 0)
					var_0_object->AddReply(13374, 14607, 14606); //@t
				bool var_189_bool;
				func_4452(var_1_object);
				if(var_189_bool != 0)
					var_0_object->AddReply(13390, 14625, 14624); //@t
				var_0_object->AddReply(13354, -1, 14586); //@t
				return 0;
			}
			if(var_30_string == 14625) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13392, -1, 14626); //@t
				return 0;
			}
			if(var_30_string == 14607) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13376, -1, 14608); //@t
				return 0;
			}
			if(var_30_string == 14598) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13367, 14588, 14599); //@t
				return 0;
			}
			if(var_30_string == 14588) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13357, 14590, 14589); //@t
				return 0;
			}
			if(var_30_string == 14590) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13359, 14592, 14591); //@t
				return 0;
			}
			if(var_30_string == 14592) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13361, 14594, 14593); //@t
				return 0;
			}
			if(var_30_string == 14594) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13364, 14597, 14596); //@t
				var_0_object->AddReply(13363, -1, 14595); //@t
				return 0;
			}
			if(var_30_string == 14597) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13368, 14601, 14600); //@t
				var_0_object->AddReply(13371, 14604, 14603); //@t
				return 0;
			}
			if(var_30_string == 14604) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13373, -1, 14605); //@t
				return 0;
			}
			if(var_30_string == 14601) {
				func_2839(var_31_bool, "Neutral");
				var_0_object->SetMessage(13369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13370, -1, 14602); //@t
				return 0;
			}
			var_3_string = true;
			bool var_277_bool;
			func_3951(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb28";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int)
	{
		if(1 != 0) {
			func_3850();
			if(var_31_int == 15708) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4186();
			}
			if(var_30_int == 15693) {
				bool var_42_bool = false;
				bool var_43_bool;
				func_4500(var_1_object);
				if(var_43_bool != 0) {
					bool var_51_bool;
					func_4512(var_1_object);
					if(var_51_bool != 0)
						var_42_bool = true;
				}
				if(var_42_bool != 0) {
					object var_57_object; object var_58_object;
					var_57_object = var_1_object;
					var_58_object = var_0_object;
					func_4180();
					func_3358(var_31_int, "Neutral");
					var_0_object->SetMessage(14462); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14463, 15695, 15694); //@t
					var_0_object->AddReply(14473, 15695, 15705); //@t
					return 0;
				}
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14474); //@t
				var_0_object->ClearReplies(); //@t
				bool var_85_bool;
				func_4536(var_1_object);
				if(var_85_bool != 0)
					var_0_object->AddReply(14475, 15709, 15708); //@t
				var_0_object->AddReply(14500, -1, 15736); //@t
				bool var_97_bool;
				func_4524(var_1_object);
				if(var_97_bool != 0)
					var_0_object->AddReply(14501, -1, 15737); //@t
				return 0;
			}
			if(var_30_int == 15709) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14477, 15711, 15710); //@t
				var_0_object->AddReply(14499, 15711, 15734); //@t
				return 0;
			}
			if(var_30_int == 15711) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14479, 15713, 15712); //@t
				var_0_object->AddReply(14494, 15729, 15728); //@t
				return 0;
			}
			if(var_30_int == 15729) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14496, 15731, 15730); //@t
				return 0;
			}
			if(var_30_int == 15731) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14498, 15713, 15732); //@t
				return 0;
			}
			if(var_30_int == 15713) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14481, 15715, 15714); //@t
				return 0;
			}
			if(var_30_int == 15715) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14483, 15717, 15716); //@t
				return 0;
			}
			if(var_30_int == 15717) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14485, 15719, 15718); //@t
				return 0;
			}
			if(var_30_int == 15719) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14487, 15721, 15720); //@t
				var_0_object->AddReply(14491, 15725, 15724); //@t
				return 0;
			}
			if(var_30_int == 15725) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14493, 15721, 15726); //@t
				return 0;
			}
			if(var_30_int == 15721) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14488); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14489, -1, 15722); //@t
				var_0_object->AddReply(14490, -1, 15723); //@t
				return 0;
			}
			if(var_30_int == 15695) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14464); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14465, 15697, 15696); //@t
				return 0;
			}
			if(var_30_int == 15697) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14467, 15699, 15698); //@t
				return 0;
			}
			if(var_30_int == 15699) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14469, 15701, 15700); //@t
				var_0_object->AddReply(14472, 15701, 15703); //@t
				return 0;
			}
			if(var_30_int == 15701) {
				func_3358(var_31_int, "Neutral");
				var_0_object->SetMessage(14470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14471, -1, 15702); //@t
				return 0;
			}
			var_3_string = true;
			bool var_219_bool;
			func_3951(var_219_bool);
			if(var_219_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2f";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_4098(void)
{
	@SetVariable("KnowNina", 1);
}


// @pe
void func_4104(void)
{
	@SetVariable("d7q02", 2);
	func_4736();
}


// @pe
void func_4360(bool var_237_bool)
{
	int var_239_int;
	func_3867(var_239_int, "ood1Petr6");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_3850(void)
{
	bool var_33_bool;
	func_3951(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4113(void)
{
	@SetVariable("d7q02", 4);
}


void func_3857(cvector var_70_cvector, cvector var_71_cvector)
{
	float var_74_float = sqrt(var_71_cvector | var_71_cvector);
	if(var_74_float < 0.000001)
		var_70_cvector = [0.0, 0.0, 0.0];
	var_70_cvector = var_71_cvector / var_74_float;
}


void func_4628(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4372(bool var_253_bool)
{
	int var_255_int;
	func_3867(var_255_int, "ood1Petr7");
	if(var_255_int == 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


void func_4119(void)
{
	object var_87_object; object var_88_object;
	int var_89_int;
	func_3867(var_89_int, "d7q02BirdBalahon");
	if(var_89_int != 0) {
		object var_95_object;
		func_4670(var_95_object);
		var_95_object = var_87_object;
		var_87_object->FindMark(var_88_object, "d7q02AlexandrGotoPetr");
		if(var_88_object != 0)
			var_88_object->Remove();
		var_87_object->FindMark(var_88_object, "d7q02MarkGotoAlexandr");
		if(var_88_object != 0)
			var_88_object->Remove();
		var_87_object->FindMark(var_88_object, "d7q02MarkGotoCemetery");
		if(var_88_object != 0)
			var_88_object->Remove();
		func_4752();
		bool var_117_bool;
		func_3898(var_117_bool, "quest_d7_02", "completed");
		var_88_object = null;
		var_87_object = null;
	}
}


// @pe
void func_2839(object var_2_object, string var_148_string)
{
	bool var_149_bool;
	func_3951(var_149_bool);
	if(!var_149_bool) //@nz
		return 0;
	if(var_148_string == var_2_object)
		return 0;
	string var_152_string;
	func_3832(var_152_string);
	var_2_object = var_152_string;
}


void func_3867(int var_45_int, string var_46_string)
{
	int var_48_int;
	@GetVariable(var_46_string, var_48_int);
	var_48_int = var_45_int;
}


// @pe
void func_3358(object var_2_object, string var_61_string)
{
	bool var_62_bool;
	func_3951(var_62_bool);
	if(!var_62_bool) //@nz
		return 0;
	if(var_61_string == var_2_object)
		return 0;
	string var_65_string;
	func_3832(var_65_string);
	var_2_object = var_65_string;
}


// @pe
void func_4384(bool var_269_bool)
{
	int var_271_int;
	func_3867(var_271_int, "ood1Petr8");
	if(var_271_int == 0) {
		var_269_bool = true;
		return 0;
	}
	var_269_bool = false;
}


void func_4641(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_4628(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SetVariable("player_diary", 1);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3872(object var_131_object, object var_132_object, int var_133_int)
{
	int var_137_int;
	var_132_object->GetItemID(var_137_int);
	int var_138_int;
	@GetInvItemProperty(var_138_int, var_137_int, "Category");
	bool var_139_bool;
	var_131_object->AddItem(var_139_bool, var_132_object, var_138_int, var_133_int);
	if(!var_139_bool) //@nz
		var_131_object->DropItems(var_132_object, var_133_int);
}


// @pe
void func_1576(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_363_object, object var_364_object)
{
	var_0_object = var_364_object;
	var_1_object = var_363_object;
	var_3_object = false;
	if(1 != 0) {
		func_1736(var_364_object, "Neutral");
		var_0_object->SetMessage(6877); //@t
		var_0_object->ClearReplies(); //@t
		bool var_376_bool = false;
		bool var_377_bool;
		func_4216(var_1_object);
		if(var_377_bool != 0) {
			bool var_383_bool;
			func_4264(var_1_object);
			if(var_383_bool != 0)
				var_376_bool = true;
		}
		if(var_376_bool != 0)
			var_0_object->AddReply(6878, 7585, 7584); //@t
		bool var_392_bool = false;
		bool var_393_bool;
		func_4228(var_1_object);
		if(var_393_bool != 0) {
			bool var_399_bool;
			func_4288(var_1_object);
			if(var_399_bool != 0)
				var_392_bool = true;
		}
		if(var_392_bool != 0)
			var_0_object->AddReply(7431, 8203, 8202); //@t
		bool var_408_bool = false;
		bool var_409_bool;
		func_4240(var_1_object);
		if(var_409_bool != 0) {
			bool var_415_bool;
			func_4252(var_1_object);
			if(var_415_bool != 0)
				var_408_bool = true;
		}
		if(var_408_bool != 0)
			var_0_object->AddReply(6884, 7591, 7590); //@t
		var_0_object->AddReply(7529, -1, 8311); //@t
		goto Label_1706;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x6c8";
	EMIT "Pop(1)";
	EMIT "Push((int) 9408)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9409)";
	EMIT "Push((int) 10339)";
	EMIT "Push((int) 10338)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9418)";
	EMIT "Push((int) 10339)";
	EMIT "Push((int) 10348)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9419)";
	EMIT "Push((int) 10351)";
	EMIT "Push((int) 10350)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x6aa";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x6c8";
	EMIT "Pop(1)";
	EMIT "Push((int) 9422)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9423)";
	EMIT "Push((int) 10356)";
	EMIT "Push((int) 10355)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9432)";
	EMIT "Push((int) 10366)";
	EMIT "Push((int) 10365)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9435)";
	EMIT "Push((int) 10370)";
	EMIT "Push((int) 10369)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x6aa";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62c";
	}
Label_1706:
	bool var_427_bool;
	func_3951(var_427_bool);
	if(var_427_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1735;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1735:
		return 0;

	}
	
}


// @pe
void func_4396(bool var_247_bool)
{
	int var_249_int;
	func_3867(var_249_int, "KnowViktor");
	if(var_249_int == 1)
		var_247_bool = true;
	var_247_bool = false;
}


void func_3885(object var_126_object, string var_127_string, int var_128_int)
{
	object var_130_object;
	@CreateInvItem(var_130_object);
	var_130_object->SetItemName(var_127_string);
	object var_131_object; object var_132_object; int var_133_int;
	var_126_object = var_131_object;
	var_130_object = var_132_object;
	var_128_int = var_133_int;
	func_3872(var_131_object, var_132_object, var_133_int);
}
EMIT "Stack[-1] = 0";


void func_49(object var_0_object, int var_34_int, object var_35_object)
{
	var_0_object = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_3772(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_3947(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_3949(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_4687(var_88_int);
	var_41_object->SetPlayerName(var_88_int);
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	@DoDialog(var_41_object);
	object var_97_object; object var_98_object;
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(3);
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	bool var_44_bool;
	var_41_object->IsDialogEnd(var_44_bool);
	
	for(;;) {
		var_138_bool = !var_44_bool; //@nz
		if(var_138_bool == 0) goto Label_101;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_101:
	object var_139_object;
	var_35_object = var_139_object;
	func_3828();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4408(bool var_148_bool, object var_149_object)
{
	object var_151_object;
	var_149_object = var_151_object;
	func_4596(var_151_object);
	bool var_150_bool;
	if(var_150_bool != 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
}


void func_3898(bool var_117_bool, string var_118_string, string var_119_string)
{
	object var_121_object;
	@FindActor(var_121_object, var_118_string);
	if(var_121_object == null)
		var_117_bool = false;
	@Trigger(var_121_object, var_119_string);
	var_117_bool = true;
}
EMIT "Stack[-1] = 0";


void func_4670(object var_95_object)
{
	object var_98_object; object var_99_object;
	@GetMainOutdoorScene(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find main outdoor scene");
		var_99_object = null;
		var_99_object = var_95_object;
	}
	var_98_object->GetMap(var_99_object);
	var_99_object = var_95_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4418(bool var_166_bool, object var_167_object)
{
	object var_169_object;
	var_167_object = var_169_object;
	func_4607(var_169_object);
	bool var_168_bool;
	if(var_168_bool != 0) {
		var_166_bool = true;
		return 0;
	}
	var_166_bool = false;
}


// @pe
void func_4163(void)
{
	@SetVariable("ood7Petr1", 1);
}


void func_2371(object var_0_object, int var_439_int, object var_440_object)
{
	var_0_object = var_440_object;
	bool var_450_bool; object var_451_object;
	var_440_object = var_451_object;
	func_3772(var_450_bool, var_451_object);
	if(!var_450_bool) { //@nz
		var_439_int = -2;
		return 8;
	}
	object var_446_object;
	@CreateDialog(var_446_object);
	int var_453_int;
	func_3947(var_453_int);
	var_446_object->SetNPCName(var_453_int);
	string var_454_string;
	func_3949(var_454_string);
	var_446_object->SetPhoto(var_454_string);
	int var_455_int;
	func_4687(var_455_int);
	var_446_object->SetPlayerName(var_455_int);
	bool var_447_bool;
	@IsOverrideActive(var_447_bool);
	if(var_447_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	@DoDialog(var_446_object);
	object var_457_object; object var_458_object;
	var_440_object = var_457_object;
	var_446_object = var_458_object;
	TaskCall(9);
	func_2434(var_459_object, var_460_object, var_461_string, var_462_bool, var_457_object, var_458_object);
	TaskReturn();
	bool var_449_bool;
	var_446_object->IsDialogEnd(var_449_bool);
	
	for(;;) {
		var_499_bool = !var_449_bool; //@nz
		if(var_499_bool == 0) goto Label_2423;
		@sync();
		var_446_object->IsDialogEnd(var_449_bool);
	}
	
Label_2423:
	object var_500_object;
	var_440_object = var_500_object;
	func_3828();
	@StopDialog(var_446_object);
	var_446_object->GetReturnValue(-1);
	int var_448_int = var_439_int;
}
EMIT "Stack[-4] = 0";


void func_3910(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


// @pe
void func_4169(object var_123_object)
{
	@Trace("birdmask is given");
	object var_126_object;
	var_123_object = var_126_object;
	func_3885(var_126_object, "bird_mask", 1);
}


void func_3915(int var_143_int)
{
	float var_145_float;
	@GetGameTime(var_145_float);
	var_143_int = 1 + (var_145_float / 24);
}


// @pe
void func_4428(bool var_171_bool)
{
	int var_173_int;
	func_3867(var_173_int, "d7q02");
	if(var_173_int == 1)
		var_171_bool = true;
	var_171_bool = false;
}


void func_4687(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x125e";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


void func_338(object var_0_object, int var_149_int, object var_150_object)
{
	var_0_object = var_150_object;
	bool var_160_bool; object var_161_object;
	var_150_object = var_161_object;
	func_3772(var_160_bool, var_161_object);
	if(!var_160_bool) { //@nz
		var_149_int = -2;
		return 8;
	}
	object var_156_object;
	@CreateDialog(var_156_object);
	int var_163_int;
	func_3947(var_163_int);
	var_156_object->SetNPCName(var_163_int);
	string var_164_string;
	func_3949(var_164_string);
	var_156_object->SetPhoto(var_164_string);
	int var_165_int;
	func_4687(var_165_int);
	var_156_object->SetPlayerName(var_165_int);
	bool var_157_bool;
	@IsOverrideActive(var_157_bool);
	if(var_157_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	@DoDialog(var_156_object);
	object var_167_object; object var_168_object;
	var_150_object = var_167_object;
	var_156_object = var_168_object;
	TaskCall(5);
	func_401(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object);
	TaskReturn();
	bool var_159_bool;
	var_156_object->IsDialogEnd(var_159_bool);
	
	for(;;) {
		var_341_bool = !var_159_bool; //@nz
		if(var_341_bool == 0) goto Label_390;
		@sync();
		var_156_object->IsDialogEnd(var_159_bool);
	}
	
Label_390:
	object var_342_object;
	var_150_object = var_342_object;
	func_3828();
	@StopDialog(var_156_object);
	var_156_object->GetReturnValue(-1);
	int var_158_int = var_149_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4180(void)
{
	@SetVariable("ood11Petr1", 1);
}


void func_3924(int var_152_int)
{
	float var_154_float;
	@GetGameTime(var_154_float);
	int var_155_int;
	var_154_float = var_155_int;
	var_152_int = var_155_int % 24;
}


// @pe
void func_4440(bool var_165_bool)
{
	int var_167_int;
	func_3867(var_167_int, "ood7Petr1");
	if(var_167_int == 0) {
		var_165_bool = true;
		return 0;
	}
	var_165_bool = false;
}


// @pe
void func_4186(void)
{
	@SetVariable("ood11Petr2", 1);
}


// @pe
void func_3932(bool var_141_bool, int var_142_int)
{
	int var_143_int;
	func_3915(var_143_int);
	var_141_bool = var_143_int == var_142_int;
}


// @pe
void func_4192(void)
{
	@SetVariable("ood3Petr1", 1);
}


void func_4704(void)
{
	@Trace("Adding diary entry");
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 130, 2, 15267);
	bool var_66_bool; object var_67_object;
	var_61_object = var_67_object;
	func_4641(var_66_bool, var_67_object, 11);
}
EMIT "Stack[-1] = 0";


void func_3938(bool var_670_bool)
{
	func_3832("No");
	bool var_672_bool;
	@lshWaitForAnimEnd(var_672_bool);
	var_672_bool = var_670_bool;
}


// @pe
void func_4452(bool var_189_bool)
{
	int var_191_int;
	func_3867(var_191_int, "d7q02");
	if(var_191_int == 3)
		var_189_bool = true;
	var_189_bool = false;
}


// @pe
void func_4198(void)
{
	@SetVariable("KnowMyth", 1);
}


void func_3947(int var_86_int)
{
	var_86_int = 2875;
}


// @pe
void func_4204(bool var_137_bool)
{
	int var_139_int;
	func_3867(var_139_int, "d1q01FirstGeorgVisit");
	if(var_139_int == 1)
		var_137_bool = true;
	var_137_bool = false;
}


void func_3949(string var_87_string)
{
	var_87_string = "ui/NPC_Petr.png";
}


// @pe
void func_4092(void)
{
	@SetVariable("KnowMistresses", 1);
}


void func_3183(object var_0_object, int var_583_int, object var_584_object)
{
	var_0_object = var_584_object;
	bool var_594_bool; object var_595_object;
	var_584_object = var_595_object;
	func_3772(var_594_bool, var_595_object);
	if(!var_594_bool) { //@nz
		var_583_int = -2;
		return 8;
	}
	object var_590_object;
	@CreateDialog(var_590_object);
	int var_597_int;
	func_3947(var_597_int);
	var_590_object->SetNPCName(var_597_int);
	string var_598_string;
	func_3949(var_598_string);
	var_590_object->SetPhoto(var_598_string);
	int var_599_int;
	func_4687(var_599_int);
	var_590_object->SetPlayerName(var_599_int);
	bool var_591_bool;
	@IsOverrideActive(var_591_bool);
	if(var_591_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	@DoDialog(var_590_object);
	object var_601_object; object var_602_object;
	var_584_object = var_601_object;
	var_590_object = var_602_object;
	TaskCall(13);
	func_3246(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	bool var_593_bool;
	var_590_object->IsDialogEnd(var_593_bool);
	
	for(;;) {
		var_668_bool = !var_593_bool; //@nz
		if(var_668_bool == 0) goto Label_3235;
		@sync();
		var_590_object->IsDialogEnd(var_593_bool);
	}
	
Label_3235:
	object var_669_object;
	var_584_object = var_669_object;
	func_3828();
	@StopDialog(var_590_object);
	var_590_object->GetReturnValue(-1);
	int var_592_int = var_583_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_97_object, object var_98_object)
{
	var_0_object = var_98_object;
	var_3_object = false;
	if(1 != 0) {
		object var_104_object; object var_105_object;
		var_104_object = var_97_object;
		var_105_object = var_0_object;
		func_4086();
		func_175(var_98_object, "Neutral");
		var_0_object->SetMessage(170); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(171, 210, 206); //@t
		var_0_object->AddReply(172, 209, 207); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_130_bool;
	func_3951(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3832(var_2_object);
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


// @pe
void func_624(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_3951(var_113_bool);
	if(!var_113_bool) //@nz
		return 0;
	if(var_112_string == var_2_object)
		return 0;
	string var_116_string;
	func_3832(var_116_string);
	var_2_object = var_116_string;
}


void func_4720(void)
{
	@Trace("Adding diary entry");
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 131, 2, 15268);
	bool var_118_bool; object var_119_object;
	var_113_object = var_119_object;
	func_4641(var_118_bool, var_119_object, 11);
}
EMIT "Stack[-1] = 0";


void func_2674(object var_0_object, int var_503_int, object var_504_object)
{
	var_0_object = var_504_object;
	bool var_514_bool; object var_515_object;
	var_504_object = var_515_object;
	func_3772(var_514_bool, var_515_object);
	if(!var_514_bool) { //@nz
		var_503_int = -2;
		return 8;
	}
	object var_510_object;
	@CreateDialog(var_510_object);
	int var_517_int;
	func_3947(var_517_int);
	var_510_object->SetNPCName(var_517_int);
	string var_518_string;
	func_3949(var_518_string);
	var_510_object->SetPhoto(var_518_string);
	int var_519_int;
	func_4687(var_519_int);
	var_510_object->SetPlayerName(var_519_int);
	bool var_511_bool;
	@IsOverrideActive(var_511_bool);
	if(var_511_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	@DoDialog(var_510_object);
	object var_521_object; object var_522_object;
	var_504_object = var_521_object;
	var_510_object = var_522_object;
	TaskCall(11);
	func_2737(var_523_object, var_524_object, var_525_string, var_526_bool, var_521_object, var_522_object);
	TaskReturn();
	bool var_513_bool;
	var_510_object->IsDialogEnd(var_513_bool);
	
	for(;;) {
		var_579_bool = !var_513_bool; //@nz
		if(var_579_bool == 0) goto Label_2726;
		@sync();
		var_510_object->IsDialogEnd(var_513_bool);
	}
	
Label_2726:
	object var_580_object;
	var_504_object = var_580_object;
	func_3828();
	@StopDialog(var_510_object);
	var_510_object->GetReturnValue(-1);
	int var_512_int = var_503_int;
}
EMIT "Stack[-4] = 0";


void func_3951(bool var_33_bool)
{
	var_33_bool = true;
}


// @pe
void func_4464(bool var_215_bool)
{
	int var_217_int;
	func_3867(var_217_int, "KnowAnna");
	if(var_217_int == 1)
		var_215_bool = true;
	var_215_bool = false;
}


// @pe
void func_3953(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3959(void)
{
	@SetVariable("KnowTvirin", 1);
}


// @pe
void func_4216(bool var_146_bool)
{
	int var_148_int;
	func_3867(var_148_int, "ood2Petr1");
	if(var_148_int == 0) {
		var_146_bool = true;
		return 0;
	}
	var_146_bool = false;
}


// @pe
void func_4476(bool var_199_bool)
{
	int var_201_int;
	func_3867(var_201_int, "KnowEva");
	if(var_201_int == 1)
		var_199_bool = true;
	var_199_bool = false;
}


// @pe
void func_3965(void)
{
	@SetVariable("ood2Petr1", 1);
}


void func_4736(void)
{
	@Trace("Adding diary entry");
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 173, 0, 15425);
	bool var_50_bool; object var_51_object;
	var_45_object = var_51_object;
	func_4641(var_50_bool, var_51_object, 170);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2434(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_457_object, object var_458_object)
{
	var_0_object = var_458_object;
	var_1_object = var_457_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_464_bool;
		func_4560(var_1_object);
		if(var_464_bool != 0) {
			object var_470_object; object var_471_object;
			var_470_object = var_1_object;
			var_471_object = var_0_object;
			func_4192();
			func_2517(var_458_object, "Neutral");
			var_0_object->SetMessage(10030); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10031, 11054, 11053); //@t
			var_0_object->AddReply(10039, 11063, 11062); //@t
		} else {
					func_2517(var_458_object, "Neutral");
					var_0_object->SetMessage(15308); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15309, -1, 16547); //@t
		}
	}
	for(;;) {
		bool var_486_bool;
		func_3951(var_486_bool);
		if(var_486_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3832(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2516;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2516:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x986";


// @pe
void func_3971(void)
{
	@SetVariable("ood2Petr2", 1);
}


// @pe
void func_4228(bool var_164_bool)
{
	int var_166_int;
	func_3867(var_166_int, "ood2Petr2");
	if(var_166_int == 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


// @pe
void func_4488(bool var_263_bool)
{
	int var_265_int;
	func_3867(var_265_int, "KnowGrif");
	if(var_265_int == 1)
		var_263_bool = true;
	var_263_bool = false;
}


// @pe
void func_3977(void)
{
	@SetVariable("ood2Petr3", 1);
}


void func_3983(void)
{
	@SetVariable("d2q02", 3);
	object var_46_object;
	func_4670(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_3910(var_57_float);
	var_43_object->AddMark("d2q02PetrRefusedSelf", "pt_map_petr", 0, 15280, var_57_float);
	func_4704();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4240(bool var_180_bool)
{
	int var_182_int;
	func_3867(var_182_int, "ood2Petr3");
	if(var_182_int == 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_4752(void)
{
	@Trace("Adding diary entry");
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 174, 0, 15426);
	bool var_114_bool; object var_115_object;
	var_109_object = var_115_object;
	func_4641(var_114_bool, var_115_object, 170);
}
EMIT "Stack[-1] = 0";


// @pe
void func_401(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_167_object, object var_168_object)
{
	var_0_object = var_168_object;
	var_1_object = var_167_object;
	var_3_object = false;
	if(1 != 0) {
		func_624(var_168_object, "Neutral");
		var_0_object->SetMessage(8318); //@t
		var_0_object->ClearReplies(); //@t
		bool var_180_bool = false;
		bool var_181_bool;
		func_4300(var_1_object);
		if(var_181_bool != 0) {
			bool var_189_bool;
			func_4204(var_1_object);
			if(var_189_bool != 0)
				var_180_bool = true;
		}
		if(var_180_bool != 0)
			var_0_object->AddReply(8319, 6356, 9142); //@t
		bool var_198_bool = true;
		bool var_199_bool = false;
		bool var_200_bool;
		func_4408(var_200_bool, var_1_object);
		if(var_200_bool != 0) {
			bool var_211_bool;
			func_4312(var_1_object);
			if(var_211_bool != 0)
				var_199_bool = true;
		}
		if(var_199_bool != 1) {
			bool var_217_bool = false;
			bool var_218_bool;
			func_4418(var_218_bool, var_1_object);
			if(var_218_bool != 0) {
				bool var_229_bool;
				func_4312(var_1_object);
				if(var_229_bool != 0)
					var_217_bool = true;
			}
			if(var_217_bool != 1)
				var_198_bool = false;
		}
		if(var_198_bool != 0)
			var_0_object->AddReply(8320, 6369, 9143); //@t
		bool var_234_bool = false;
		bool var_235_bool;
		func_4572(var_1_object);
		if(var_235_bool != 0) {
			bool var_241_bool;
			func_4324(var_1_object);
			if(var_241_bool != 0)
				var_234_bool = true;
		}
		if(var_234_bool != 0)
			var_0_object->AddReply(8322, 6376, 9145); //@t
		bool var_250_bool = false;
		bool var_251_bool;
		func_4476(var_1_object);
		if(var_251_bool != 0) {
			bool var_257_bool;
			func_4336(var_1_object);
			if(var_257_bool != 0)
				var_250_bool = true;
		}
		if(var_250_bool != 0)
			var_0_object->AddReply(8324, 9417, 9147); //@t
		bool var_266_bool = false;
		bool var_267_bool;
		func_4464(var_1_object);
		if(var_267_bool != 0) {
			bool var_273_bool;
			func_4348(var_1_object);
			if(var_273_bool != 0)
				var_266_bool = true;
		}
		if(var_266_bool != 0)
			var_0_object->AddReply(8327, 9169, 9150); //@t
		bool var_282_bool = false;
		bool var_283_bool;
		func_4548(var_1_object);
		if(var_283_bool != 0) {
			bool var_289_bool;
			func_4360(var_1_object);
			if(var_289_bool != 0)
				var_282_bool = true;
		}
		if(var_282_bool != 0)
			var_0_object->AddReply(8329, 9170, 9152); //@t
		bool var_298_bool = false;
		bool var_299_bool;
		func_4396(var_1_object);
		if(var_299_bool != 0) {
			bool var_305_bool;
			func_4372(var_1_object);
			if(var_305_bool != 0)
				var_298_bool = true;
		}
		if(var_298_bool != 0)
			var_0_object->AddReply(8334, 9171, 9157); //@t
		bool var_314_bool = false;
		bool var_315_bool;
		func_4488(var_1_object);
		if(var_315_bool != 0) {
			bool var_321_bool;
			func_4384(var_1_object);
			if(var_321_bool != 0)
				var_314_bool = true;
		}
		if(var_314_bool != 0)
			var_0_object->AddReply(8337, 9172, 9160); //@t
		var_0_object->AddReply(8724, -1, 9561); //@t
		goto Label_594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x195";
	}
Label_594:
	bool var_333_bool;
	func_3951(var_333_bool);
	if(var_333_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_623;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_623:
		return 0;

	}
	
}


// @pe
void func_4500(bool var_43_bool)
{
	int var_45_int;
	func_3867(var_45_int, "d11q01");
	if(var_45_int == 1)
		var_43_bool = true;
	var_43_bool = false;
}


// @pe
void func_4252(bool var_186_bool)
{
	int var_188_int;
	func_3867(var_188_int, "d2q02");
	if(var_188_int == 1000)
		var_186_bool = true;
	var_186_bool = false;
}


void func_4768(void)
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_4512(bool var_51_bool)
{
	int var_53_int;
	func_3867(var_53_int, "ood11Petr1");
	if(var_53_int == 0) {
		var_51_bool = true;
		return 0;
	}
	var_51_bool = false;
}


// @pe
void func_4772(object var_31_object)
{
	var_32_bool = GlobalVars[1];
	if(!var_32_bool) { //@nz
		int var_34_int; object var_35_object;
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_140_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_141_bool;
	func_3932(var_141_bool, 1);
	if(var_141_bool != 0) {
		int var_149_int; object var_150_object;
		var_31_object = var_150_object;
		TaskCall(4);
		func_338(var_151_object, var_149_int, var_150_object);
		TaskReturn();
	}
	bool var_343_bool;
	func_3932(var_343_bool, 2);
	if(var_343_bool != 0) {
		int var_345_int; object var_346_object;
		var_31_object = var_346_object;
		TaskCall(6);
		func_1513(var_347_object, var_345_int, var_346_object);
		TaskReturn();
		return 0;
	}
	bool var_437_bool;
	func_3932(var_437_bool, 3);
	if(var_437_bool != 0) {
		int var_439_int; object var_440_object;
		var_31_object = var_440_object;
		TaskCall(8);
		func_2371(var_441_object, var_439_int, var_440_object);
		TaskReturn();
		return 0;
	}
	bool var_501_bool;
	func_3932(var_501_bool, 7);
	if(var_501_bool != 0) {
		int var_503_int; object var_504_object;
		var_31_object = var_504_object;
		TaskCall(10);
		func_2674(var_505_object, var_503_int, var_504_object);
		TaskReturn();
		return 0;
	}
	bool var_581_bool;
	func_3932(var_581_bool, 11);
	if(var_581_bool != 0) {
		int var_583_int; object var_584_object;
		var_31_object = var_584_object;
		TaskCall(12);
		func_3183(var_585_object, var_583_int, var_584_object);
		TaskReturn();
		return 0;
	}
	bool var_670_bool;
	func_3938(var_670_bool);
}


void func_4006(void)
{
	@SetVariable("d2q02", 5);
	object var_101_object;
	func_4670(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	float var_106_float;
	func_3910(var_106_float);
	var_98_object->AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", 0, 15276, var_106_float);
	float var_111_float;
	func_3910(var_111_float);
	var_98_object->AddMark("d2q02PetrGotoAndreiSelf", "pt_map_petr", 0, 15281, var_111_float);
	func_4720();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4264(bool var_154_bool)
{
	int var_156_int;
	func_3867(var_156_int, "d2q02");
	if(var_156_int == 2)
		var_154_bool = true;
	var_154_bool = false;
}


void func_3755(bool var_31_bool, object var_32_object)
{
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	bool var_40_bool;
	@Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
}


// @pe
void func_4524(bool var_97_bool)
{
	int var_99_int;
	func_3867(var_99_int, "d11q01");
	if(var_99_int == 1000)
		var_97_bool = true;
	var_97_bool = false;
}


// @pe
void func_3246(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_601_object, object var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_608_bool = false;
		bool var_609_bool;
		func_4500(var_1_object);
		if(var_609_bool != 0) {
			bool var_615_bool;
			func_4512(var_1_object);
			if(var_615_bool != 0)
				var_608_bool = true;
		}
		if(var_608_bool != 0) {
			object var_621_object; object var_622_object;
			var_621_object = var_1_object;
			var_622_object = var_0_object;
			func_4180();
			func_3358(var_602_object, "Neutral");
			var_0_object->SetMessage(14462); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14463, 15695, 15694); //@t
			var_0_object->AddReply(14473, 15695, 15705); //@t
		} else {
					func_3358(var_602_object, "Neutral");
					var_0_object->SetMessage(14474); //@t
					var_0_object->ClearReplies(); //@t
					bool var_647_bool;
					func_4536(var_1_object);
					if(var_647_bool != 0)
						var_0_object->AddReply(14475, 15709, 15708); //@t
					var_0_object->AddReply(14500, -1, 15736); //@t
					bool var_659_bool;
					func_4524(var_1_object);
					if(var_659_bool != 0)
						var_0_object->AddReply(14501, -1, 15737); //@t
		}
	}
	for(;;) {
		bool var_637_bool;
		func_3951(var_637_bool);
		if(var_637_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3832(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3357;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3357:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcb2";


// @pe
void func_175(object var_2_object, string var_40_string)
{
	bool var_41_bool;
	func_3951(var_41_bool);
	if(!var_41_bool) //@nz
		return 0;
	if(var_40_string == var_2_object)
		return 0;
	string var_44_string;
	func_3832(var_44_string);
	var_2_object = var_44_string;
}


// @pe
void func_2737(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_521_object, object var_522_object)
{
	var_0_object = var_522_object;
	var_1_object = var_521_object;
	var_3_object = false;
	if(1 != 0) {
		func_2839(var_522_object, "Neutral");
		var_0_object->SetMessage(13353); //@t
		var_0_object->ClearReplies(); //@t
		bool var_534_bool = false;
		bool var_535_bool;
		func_4440(var_1_object);
		if(var_535_bool != 0) {
			bool var_541_bool;
			func_4428(var_1_object);
			if(var_541_bool != 0)
				var_534_bool = true;
		}
		if(var_534_bool != 0)
			var_0_object->AddReply(13355, 14598, 14587); //@t
		bool var_550_bool = false;
		bool var_551_bool;
		func_4440(var_1_object);
		if(!var_551_bool) { //@nz
			bool var_554_bool;
			func_4428(var_1_object);
			if(var_554_bool != 0)
				var_550_bool = true;
		}
		if(var_550_bool != 0)
			var_0_object->AddReply(13374, 14607, 14606); //@t
		bool var_559_bool;
		func_4452(var_1_object);
		if(var_559_bool != 0)
			var_0_object->AddReply(13390, 14625, 14624); //@t
		var_0_object->AddReply(13354, -1, 14586); //@t
		goto Label_2809;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab5";
	}
Label_2809:
	bool var_571_bool;
	func_3951(var_571_bool);
	if(var_571_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2838;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2838:
		return 0;

	}
	
}


// @pe
void func_4276(bool var_366_bool)
{
	int var_368_int;
	func_3867(var_368_int, "d2q02");
	if(var_368_int == 3)
		var_366_bool = true;
	var_366_bool = false;
}


void func_3767(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


// @pe
void func_4536(bool var_85_bool)
{
	int var_87_int;
	func_3867(var_87_int, "ood11Petr2");
	if(var_87_int == 0) {
		var_85_bool = true;
		return 0;
	}
	var_85_bool = false;
}


void func_3772(bool var_45_bool, object var_46_object)
{
	cvector var_56_cvector;
	var_46_object->GetPosition(var_56_cvector);
	float var_55_float;
	var_46_object->GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_63_float + var_55_float);
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	@GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_55_float);
	cvector var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_67_float = sqrt(var_58_cvector | var_58_cvector);
	var_58_cvector /= var_67_float;
	cvector var_59_cvector = -var_58_cvector;
	cvector var_70_cvector;
	func_3857(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_60_cvector = ((var_58_cvector * 70) + (var_70_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0)
		var_45_bool = false;
	@StopWorld();
	@CameraTransit((var_57_cvector + var_60_cvector), var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_45_bool = true;
}


// @pe
void func_4288(bool var_170_bool)
{
	int var_172_int;
	func_3867(var_172_int, "d2q02");
	if(var_172_int == 4)
		var_170_bool = true;
	var_170_bool = false;
}


// @pe
void func_4548(bool var_231_bool)
{
	int var_233_int;
	func_3867(var_233_int, "KnowMaria");
	if(var_233_int == 1)
		var_231_bool = true;
	var_231_bool = false;
}


// @pe
void func_4038(void)
{
	@SetVariable("ood1Petr1", 1);
}


// @pe
void func_1736(object var_2_object, string var_129_string)
{
	bool var_130_bool;
	func_3951(var_130_bool);
	if(!var_130_bool) //@nz
		return 0;
	if(var_129_string == var_2_object)
		return 0;
	string var_133_string;
	func_3832(var_133_string);
	var_2_object = var_133_string;
}


// @pe
void func_4300(bool var_129_bool)
{
	int var_131_int;
	func_3867(var_131_int, "ood1Petr1");
	if(var_131_int == 0) {
		var_129_bool = true;
		return 0;
	}
	var_129_bool = false;
}


// @pe
void func_4044(void)
{
	@SetVariable("ood1Petr2", 1);
}


// @pe
void func_4560(bool var_36_bool)
{
	int var_38_int;
	func_3867(var_38_int, "ood3Petr1");
	if(var_38_int == 0) {
		var_36_bool = true;
		return 0;
	}
	var_36_bool = false;
}


// @pe
void func_4050(void)
{
	@SetVariable("ood1Petr3", 1);
}


// @pe
void func_2517(object var_2_object, string var_48_string)
{
	bool var_49_bool;
	func_3951(var_49_bool);
	if(!var_49_bool) //@nz
		return 0;
	if(var_48_string == var_2_object)
		return 0;
	string var_52_string;
	func_3832(var_52_string);
	var_2_object = var_52_string;
}


// @pe
void func_4312(bool var_159_bool)
{
	int var_161_int;
	func_3867(var_161_int, "ood1Petr2");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


// @pe
void func_4056(void)
{
	@SetVariable("ood1Petr4", 1);
}


// @pe
void func_4572(bool var_183_bool)
{
	int var_185_int;
	func_3867(var_185_int, "KnowPredictions");
	if(var_185_int == 1)
		var_183_bool = true;
	var_183_bool = false;
}


// @pe
void func_4062(void)
{
	@SetVariable("ood1Petr5", 1);
}


// @pe
void func_4324(bool var_189_bool)
{
	int var_191_int;
	func_3867(var_191_int, "ood1Petr3");
	if(var_191_int == 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


// @pe
void func_4068(void)
{
	@SetVariable("ood1Petr6", 1);
}


// @pe
void func_4584(bool var_374_bool)
{
	int var_376_int;
	func_3867(var_376_int, "KnowMnogogrannik");
	if(var_376_int == 1)
		var_374_bool = true;
	var_374_bool = false;
}


void func_1513(object var_0_object, int var_345_int, object var_346_object)
{
	var_0_object = var_346_object;
	bool var_356_bool; object var_357_object;
	var_346_object = var_357_object;
	func_3772(var_356_bool, var_357_object);
	if(!var_356_bool) { //@nz
		var_345_int = -2;
		return 8;
	}
	object var_352_object;
	@CreateDialog(var_352_object);
	int var_359_int;
	func_3947(var_359_int);
	var_352_object->SetNPCName(var_359_int);
	string var_360_string;
	func_3949(var_360_string);
	var_352_object->SetPhoto(var_360_string);
	int var_361_int;
	func_4687(var_361_int);
	var_352_object->SetPlayerName(var_361_int);
	bool var_353_bool;
	@IsOverrideActive(var_353_bool);
	if(var_353_bool != 0) {
		var_345_int = -2;
		return 8;
	}
	@DoDialog(var_352_object);
	object var_363_object; object var_364_object;
	var_346_object = var_363_object;
	var_352_object = var_364_object;
	TaskCall(7);
	func_1576(var_365_object, var_366_object, var_367_string, var_368_bool, var_363_object, var_364_object);
	TaskReturn();
	bool var_355_bool;
	var_352_object->IsDialogEnd(var_355_bool);
	
	for(;;) {
		var_435_bool = !var_355_bool; //@nz
		if(var_435_bool == 0) goto Label_1565;
		@sync();
		var_352_object->IsDialogEnd(var_355_bool);
	}
	
Label_1565:
	object var_436_object;
	var_346_object = var_436_object;
	func_3828();
	@StopDialog(var_352_object);
	var_352_object->GetReturnValue(-1);
	int var_354_int = var_345_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4074(void)
{
	@SetVariable("ood1Petr7", 1);
}


// @pe
void func_4336(bool var_205_bool)
{
	int var_207_int;
	func_3867(var_207_int, "ood1Petr4");
	if(var_207_int == 0) {
		var_205_bool = true;
		return 0;
	}
	var_205_bool = false;
}


// @pe
void func_4080(void)
{
	@SetVariable("ood1Petr8", 1);
}


// @pe
void func_3828(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_4596(bool var_150_bool)
{
	int var_152_int;
	func_3924(var_152_int);
	if(var_152_int >= 18)
		var_150_bool = true;
	var_150_bool = false;
}


// @pe
void func_4086(void)
{
	@SetVariable("KnowPetr", 1);
}


void func_3832(string var_35_string)
{
	@Trace("playing " + var_35_string);
	float var_38_float;
	float var_39_float;
	@lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	@lshPlayAnimation(var_38_float, var_39_float);
	@Trace("start: " + var_38_float);
	@Trace("end: " + var_39_float);
}


// @pe
void func_4348(bool var_221_bool)
{
	int var_223_int;
	func_3867(var_223_int, "ood1Petr5");
	if(var_223_int == 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


// @pe
void func_4607(bool var_168_bool)
{
	bool var_170_bool = false;
	int var_171_int;
	func_3924(var_171_int);
	if(var_171_int >= 12) {
		int var_174_int;
		func_3924(var_174_int);
		if(var_174_int < 18)
			var_170_bool = true;
	}
	if(var_170_bool != 0) {
		var_168_bool = true;
		return 0;
	}
	var_168_bool = false;
}


