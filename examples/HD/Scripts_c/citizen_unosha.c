// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool;
		func_5511(var_20_bool);
		if(var_20_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_4448();
			if(var_19_object == 45786) {
				bool var_25_bool = false;
				bool var_26_bool;
				func_4637(var_1_object);
				if(var_26_bool != 0) {
					bool var_34_bool;
					func_4669(var_34_bool, var_1_object);
					if(var_34_bool != 0)
						var_25_bool = true;
				}
				if(var_25_bool != 0) {
					func_424(var_20_bool, "Neutral");
					var_0_bool->SetMessage(543329); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543330, 45790, 45787); //@t
					var_0_bool->AddReply(543332, 45790, 45789); //@t
					var_0_bool->AddReply(543331, -1, 45788); //@t
					return 0;
				}
				bool var_72_bool = false;
				bool var_73_bool;
				func_4637(var_1_object);
				if(var_73_bool != 0) {
					bool var_75_bool;
					func_4669(var_75_bool, var_1_object);
					if(!var_75_bool) //@nz
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					func_424(var_20_bool, "Neutral");
					var_0_bool->SetMessage(543328); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543336, -1, 45794); //@t
					return 0;
				}
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537969); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_85_bool = false;
				bool var_86_bool;
				func_4649(var_86_bool, var_1_object);
				if(var_86_bool != 0) {
					bool var_92_bool;
					func_4625(var_1_object);
					if(var_92_bool != 0)
						var_85_bool = true;
				}
				if(var_85_bool != 0)
					var_0_bool->AddReply(537970, 39833, 39832); //@t
				bool var_101_bool = false;
				bool var_102_bool;
				func_4649(var_102_bool, var_1_object);
				if(var_102_bool != 0) {
					bool var_104_bool;
					func_4625(var_1_object);
					if(var_104_bool != 0)
						var_101_bool = true;
				}
				if(var_101_bool != 0)
					var_0_bool->AddReply(537995, 39861, 39860); //@t
				bool var_109_bool = false;
				bool var_110_bool;
				func_4649(var_110_bool, var_1_object);
				if(var_110_bool != 0) {
					bool var_112_bool;
					func_4625(var_1_object);
					if(var_112_bool != 0)
						var_109_bool = true;
				}
				if(var_109_bool != 0)
					var_0_bool->AddReply(538003, 39869, 39868); //@t
				bool var_117_bool = false;
				bool var_118_bool;
				func_4649(var_118_bool, var_1_object);
				if(var_118_bool != 0) {
					bool var_120_bool;
					func_4625(var_1_object);
					if(var_120_bool != 0)
						var_117_bool = true;
				}
				if(var_117_bool != 0)
					var_0_bool->AddReply(538012, 39878, 39877); //@t
				bool var_125_bool = false;
				bool var_126_bool = false;
				bool var_127_bool;
				func_4649(var_127_bool, var_1_object);
				if(var_127_bool != 0) {
					bool var_129_bool;
					func_4699(var_129_bool, var_1_object);
					if(var_129_bool != 0)
						var_126_bool = true;
				}
				if(var_126_bool != 0) {
					bool var_140_bool;
					func_4625(var_1_object);
					if(var_140_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 0)
					var_0_bool->AddReply(538017, 39883, 39882); //@t
				bool var_145_bool = false;
				bool var_146_bool = false;
				bool var_147_bool;
				func_4659(var_147_bool, var_1_object);
				if(var_147_bool != 0) {
					bool var_153_bool;
					func_4689(var_153_bool, var_1_object);
					if(var_153_bool != 0)
						var_146_bool = true;
				}
				if(var_146_bool != 0) {
					bool var_164_bool;
					func_4625(var_1_object);
					if(var_164_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_bool->AddReply(538043, 39911, 39910); //@t
				bool var_169_bool = false;
				bool var_170_bool = false;
				bool var_171_bool;
				func_4679(var_171_bool, var_1_object);
				if(var_171_bool != 0) {
					bool var_177_bool;
					func_4689(var_177_bool, var_1_object);
					if(var_177_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					bool var_179_bool;
					func_4625(var_1_object);
					if(var_179_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0)
					var_0_bool->AddReply(538083, 39952, 39951); //@t
				bool var_184_bool = false;
				bool var_185_bool = false;
				bool var_186_bool;
				func_4679(var_186_bool, var_1_object);
				if(var_186_bool != 0) {
					bool var_188_bool;
					func_4699(var_188_bool, var_1_object);
					if(var_188_bool != 0)
						var_185_bool = true;
				}
				if(var_185_bool != 0) {
					bool var_190_bool;
					func_4625(var_1_object);
					if(var_190_bool != 0)
						var_184_bool = true;
				}
				if(var_184_bool != 0)
					var_0_bool->AddReply(538110, 39980, 39979); //@t
				var_0_bool->AddReply(538126, -1, 39997); //@t
				return 0;
			}
			if(var_19_object == 39980) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538111); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538112, 39982, 39981); //@t
				var_0_bool->AddReply(538124, 39982, 39994); //@t
				var_0_bool->AddReply(538125, -1, 39996); //@t
				return 0;
			}
			if(var_19_object == 39982) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538113); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538114, 39984, 39983); //@t
				var_0_bool->AddReply(538118, 39989, 39988); //@t
				return 0;
			}
			if(var_19_object == 39989) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538119); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538120, 39991, 39990); //@t
				return 0;
			}
			if(var_19_object == 39991) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538121); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538122, -1, 39992); //@t
				var_0_bool->AddReply(538123, -1, 39993); //@t
				return 0;
			}
			if(var_19_object == 39984) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538115); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538116, -1, 39985); //@t
				var_0_bool->AddReply(538117, 39991, 39986); //@t
				return 0;
			}
			if(var_19_object == 39952) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538084); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538085, 39954, 39953); //@t
				var_0_bool->AddReply(538094, 39963, 39962); //@t
				var_0_bool->AddReply(538103, 39972, 39971); //@t
				var_0_bool->AddReply(538109, -1, 39978); //@t
				return 0;
			}
			if(var_19_object == 39972) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538104); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538105, 39974, 39973); //@t
				var_0_bool->AddReply(538108, -1, 39977); //@t
				return 0;
			}
			if(var_19_object == 39974) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538106); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538107, 39963, 39975); //@t
				return 0;
			}
			if(var_19_object == 39963) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538095); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538096, 39965, 39964); //@t
				var_0_bool->AddReply(538100, 39969, 39968); //@t
				return 0;
			}
			if(var_19_object == 39969) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538101); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538102, -1, 39970); //@t
				return 0;
			}
			if(var_19_object == 39965) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538097); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538098, -1, 39966); //@t
				var_0_bool->AddReply(538099, -1, 39967); //@t
				return 0;
			}
			if(var_19_object == 39954) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538086); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538087, 39956, 39955); //@t
				var_0_bool->AddReply(538093, -1, 39961); //@t
				return 0;
			}
			if(var_19_object == 39956) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538088); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538089, 39958, 39957); //@t
				return 0;
			}
			if(var_19_object == 39958) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538090); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538091, -1, 39959); //@t
				var_0_bool->AddReply(538092, -1, 39960); //@t
				return 0;
			}
			if(var_19_object == 39911) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538045, 39913, 39912); //@t
				var_0_bool->AddReply(538063, 39932, 39931); //@t
				return 0;
			}
			if(var_19_object == 39932) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538064); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538065, 39934, 39933); //@t
				return 0;
			}
			if(var_19_object == 39934) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538066); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538067, 39936, 39935); //@t
				return 0;
			}
			if(var_19_object == 39936) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538068); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538069, 39938, 39937); //@t
				var_0_bool->AddReply(538075, 39944, 39943); //@t
				return 0;
			}
			if(var_19_object == 39944) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538076); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538077, 39946, 39945); //@t
				var_0_bool->AddReply(538082, -1, 39950); //@t
				return 0;
			}
			if(var_19_object == 39946) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538078); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538079, 39948, 39947); //@t
				return 0;
			}
			if(var_19_object == 39948) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538080); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538081, -1, 39949); //@t
				return 0;
			}
			if(var_19_object == 39938) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538070); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538071, 39940, 39939); //@t
				var_0_bool->AddReply(538074, -1, 39942); //@t
				return 0;
			}
			if(var_19_object == 39940) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538072); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538073, -1, 39941); //@t
				return 0;
			}
			if(var_19_object == 39913) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538046); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538047, 39915, 39914); //@t
				var_0_bool->AddReply(538060, 39928, 39927); //@t
				return 0;
			}
			if(var_19_object == 39928) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538061); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538062, 39915, 39929); //@t
				return 0;
			}
			if(var_19_object == 39915) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538048); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538049, 39917, 39916); //@t
				var_0_bool->AddReply(538057, 39925, 39924); //@t
				return 0;
			}
			if(var_19_object == 39925) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538058); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538059, -1, 39926); //@t
				return 0;
			}
			if(var_19_object == 39917) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538050); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538051, 39919, 39918); //@t
				var_0_bool->AddReply(538056, -1, 39923); //@t
				return 0;
			}
			if(var_19_object == 39919) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538052); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538053, 39921, 39920); //@t
				return 0;
			}
			if(var_19_object == 39921) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538054); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538055, -1, 39922); //@t
				return 0;
			}
			if(var_19_object == 39883) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538018); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538019, 39885, 39884); //@t
				var_0_bool->AddReply(538030, 39897, 39896); //@t
				var_0_bool->AddReply(538039, 39907, 39906); //@t
				var_0_bool->AddReply(538042, -1, 39909); //@t
				return 0;
			}
			if(var_19_object == 39907) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538041, -1, 39908); //@t
				return 0;
			}
			if(var_19_object == 39897) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538031); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538032, 39899, 39898); //@t
				var_0_bool->AddReply(538038, 39899, 39904); //@t
				return 0;
			}
			if(var_19_object == 39899) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538033); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538034, 39901, 39900); //@t
				var_0_bool->AddReply(538037, -1, 39903); //@t
				return 0;
			}
			if(var_19_object == 39901) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538035); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538036, -1, 39902); //@t
				return 0;
			}
			if(var_19_object == 39885) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538021, 39887, 39886); //@t
				var_0_bool->AddReply(538027, 39894, 39893); //@t
				return 0;
			}
			if(var_19_object == 39894) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538028); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538029, -1, 39895); //@t
				return 0;
			}
			if(var_19_object == 39887) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538022); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538023, 39889, 39888); //@t
				var_0_bool->AddReply(538026, 39889, 39891); //@t
				return 0;
			}
			if(var_19_object == 39889) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538024); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538025, -1, 39890); //@t
				return 0;
			}
			if(var_19_object == 39878) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538013); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538014, 39880, 39879); //@t
				return 0;
			}
			if(var_19_object == 39880) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538015); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538016, -1, 39881); //@t
				return 0;
			}
			if(var_19_object == 39869) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538005, 39871, 39870); //@t
				var_0_bool->AddReply(538011, -1, 39876); //@t
				return 0;
			}
			if(var_19_object == 39871) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538007, 39873, 39872); //@t
				return 0;
			}
			if(var_19_object == 39873) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538009, -1, 39874); //@t
				var_0_bool->AddReply(538010, -1, 39875); //@t
				return 0;
			}
			if(var_19_object == 39861) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537997, 39863, 39862); //@t
				return 0;
			}
			if(var_19_object == 39863) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537998); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537999, 39865, 39864); //@t
				var_0_bool->AddReply(538002, -1, 39867); //@t
				return 0;
			}
			if(var_19_object == 39865) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(538000); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538001, -1, 39866); //@t
				return 0;
			}
			if(var_19_object == 39833) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537972, 39835, 39834); //@t
				var_0_bool->AddReply(537976, 39840, 39839); //@t
				var_0_bool->AddReply(537988, 39852, 39851); //@t
				var_0_bool->AddReply(537994, -1, 39859); //@t
				return 0;
			}
			if(var_19_object == 39852) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537989); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537990, 39835, 39853); //@t
				var_0_bool->AddReply(537991, 39856, 39855); //@t
				return 0;
			}
			if(var_19_object == 39856) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537992); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537993, 39840, 39857); //@t
				return 0;
			}
			if(var_19_object == 39840) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537977); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537978, 39842, 39841); //@t
				var_0_bool->AddReply(537987, -1, 39850); //@t
				return 0;
			}
			if(var_19_object == 39842) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537979); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537980, 39844, 39843); //@t
				var_0_bool->AddReply(537986, -1, 39849); //@t
				return 0;
			}
			if(var_19_object == 39844) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537981); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537982, 39846, 39845); //@t
				var_0_bool->AddReply(537985, -1, 39848); //@t
				return 0;
			}
			if(var_19_object == 39846) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537983); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537984, -1, 39847); //@t
				return 0;
			}
			if(var_19_object == 39835) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537973); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537974, 39840, 39836); //@t
				var_0_bool->AddReply(537975, -1, 39838); //@t
				return 0;
			}
			if(var_19_object == 45790) {
				func_424(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543333); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543334, -1, 45791); //@t
				var_0_bool->AddReply(543335, -1, 45792); //@t
				return 0;
			}
			var_3_object = true;
			bool var_707_bool;
			func_5511(var_707_bool);
			if(var_707_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bf";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5457(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			object var_26_object;
			var_19_bool = var_26_object;
			func_5460(var_26_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_5466();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, bool var_20_bool, object var_21_object, bool var_22_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@SensePlayerOnly(true);
		func_5513();
		func_2114();
	
		for(;;) {
			var_2_object = false;
			func_2375(var_17_object, var_18_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5457(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2310(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_5460(var_29_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5188(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5271(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2310(var_21_int);
			object var_72_object;
			var_19_bool = var_72_object;
			func_5281(var_72_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5364(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_2310(var_23_int);
				object var_124_object;
				var_19_bool = var_124_object;
				func_5371(var_124_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5406(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2310(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_5409();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5102(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_2310(var_22_int);
			object var_52_object; string var_53_string;
			var_19_object = var_52_object;
			var_20_bool = var_53_string;
			func_5134(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_20_bool = var_129_string;
			var_19_object = var_130_object;
			func_5411(var_128_int, var_129_string, var_130_object);
			var_128_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2251;
			if(var_22_int > 1)
				func_2310(var_22_int);
			string var_176_string; object var_177_object;
			var_20_bool = var_176_string;
			var_19_object = var_177_object;
			func_5423(var_176_string, var_177_object);
		}
	Label_2251:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; string var_21_string;
		func_5201(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_2310(var_21_string);
			string var_30_string;
			var_19_bool = var_30_string;
			func_5217(var_30_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; object var_21_object;
		func_5159(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_2310(var_21_object);
			object var_33_object;
			var_19_bool = var_33_object;
			func_5182(var_33_object);
		} else {
			object var_35_object;
			func_2335(var_35_object, var_35_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_2335(var_20_object, var_20_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_2310(var_18_bool);
		func_5466();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_2310(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_5078();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5457(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2713();
			object var_28_object;
			var_19_bool = var_28_object;
			func_5460(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5188(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5271(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2713();
			object var_71_object;
			var_19_bool = var_71_object;
			func_5281(var_71_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5364(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_2713();
				object var_123_object;
				var_19_bool = var_123_object;
				func_5371(var_123_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5406(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2713();
			object var_28_object;
			var_19_bool = var_28_object;
			func_5409();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5102(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_2713();
			object var_51_object; string var_52_string;
			var_19_object = var_51_object;
			var_20_bool = var_52_string;
			func_5134(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_20_bool = var_128_string;
			var_19_object = var_129_object;
			func_5411(var_127_int, var_128_string, var_129_object);
			var_127_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2596;
			if(var_22_int > 1)
				func_2713();
			string var_175_string; object var_176_object;
			var_20_bool = var_175_string;
			var_19_object = var_176_object;
			func_5423(var_175_string, var_176_object);
		}
	Label_2596:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5201(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_2713();
			string var_29_string;
			var_19_bool = var_29_string;
			func_5217(var_29_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_2713();
		func_5466();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5159(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_2713();
			object var_32_object;
			var_19_bool = var_32_object;
			func_5182(var_32_object);
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5457(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2917();
			object var_30_object;
			var_19_bool = var_30_object;
			func_5460(var_30_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5188(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5271(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2917();
			object var_73_object;
			var_19_bool = var_73_object;
			func_5281(var_73_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5364(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_2917();
				object var_125_object;
				var_19_bool = var_125_object;
				func_5371(var_125_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5406(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2917();
			object var_30_object;
			var_19_bool = var_30_object;
			func_5409();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5102(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_2917();
			object var_53_object; string var_54_string;
			var_19_object = var_53_object;
			var_20_bool = var_54_string;
			func_5134(var_53_object, var_54_string);
		} else {
			int var_129_int; string var_130_string; object var_131_object;
			var_20_bool = var_130_string;
			var_19_object = var_131_object;
			func_5411(var_129_int, var_130_string, var_131_object);
			var_129_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2902;
			if(var_22_int > 1)
				func_2917();
			string var_177_string; object var_178_object;
			var_20_bool = var_177_string;
			var_19_object = var_178_object;
			func_5423(var_177_string, var_178_object);
		}
	Label_2902:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5201(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_2917();
			string var_31_string;
			var_19_bool = var_31_string;
			func_5217(var_31_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_2917();
		object var_22_object;
		var_19_bool = var_22_object;
		func_5078();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 111)
			return 4;
		bool var_26_bool;
		func_4092(var_26_bool, var_0_bool);
		if(!var_26_bool) { //@nz
			func_2917();
			return 4;
		}
		cvector var_22_cvector;
		@GetDirection(var_22_cvector);
		cvector var_63_cvector;
		func_3946(var_63_cvector, var_0_bool);
		cvector var_23_cvector;
		var_63_cvector = var_23_cvector;
		float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
		var_22_cvector = var_70_cvector;
		var_23_cvector = var_71_cvector;
		func_4549(var_69_float, var_70_cvector, var_71_cvector);
		if(var_69_float < 0.49999997)
			func_4242(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_2917();
		func_5466();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5159(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_2917();
			object var_34_object;
			var_19_bool = var_34_object;
			func_5182(var_34_object);
		}
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3739(var_18_bool);
		func_5466();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_4605(var_1_object);
		} else {
			int var_27_int;
			func_3883(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_4437(var_23_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_3739(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_5078();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_5057(var_20_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_4160(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_4228(var_27_float, var_28_cvector, var_29_cvector);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_359_bool;
		func_5511(var_359_bool);
		if(var_359_bool == 0) goto Label_15;
		func_4406("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_4614(void)
{
	object var_474_object;
	@GetScene(var_474_object);
	object var_476_object;
	func_4496(var_476_object);
	@BroadcastMessage("battle", var_476_object, var_474_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5134(object var_53_object, string var_54_string)
{
	if(var_54_string == "unholster") {
		object var_57_object;
		var_53_object = var_57_object;
		func_5470();
	} else if(var_54_string == "player_shot") {
			object var_60_object;
			var_53_object = var_60_object;
			func_5487(var_60_object);
	}
Label_5158:
	for(;;) {

	}
	
	if(!(var_54_string == "battle")) goto Label_5158;
	object var_128_object;
	var_53_object = var_128_object;
	func_5496();
}


// @pe
void func_4625(bool var_208_bool)
{
	int var_210_int;
	func_4566(var_210_int, "branch");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


// @pe
void func_2067(string var_44_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_45_string;
	var_44_string = var_45_string;
	func_4455(var_45_string);
	@PlayAnimation("all", var_44_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_44_string);
	@RemoveEnvelope();
}


void func_4116(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_3606(bool var_0_bool, bool var_367_bool)
{
	bool var_369_bool;
	var_372_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_372_bool != 0) {
		var_0_bool->IsAttacking(var_369_bool); //@t
		var_369_bool = var_367_bool;
	}
	var_367_bool = false;
}


// @pe
void func_4637(bool var_124_bool)
{
	int var_126_int;
	func_4566(var_126_int, "branch");
	if(var_126_int == 2)
		var_124_bool = true;
	var_124_bool = false;
}


void func_3617(object var_2_object, bool var_5_bool)
{
	int var_483_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_482_float;
	@rand(var_482_float);
	float var_489_float;
	func_3667(var_489_float);
	if(var_482_float < var_489_float) {
		@irand(var_483_int, var_2_object);
		@Speak("attack" + (var_483_int + 1));
		int var_494_int;
		func_3665(var_494_int);
		var_5_bool = var_494_int;
	}
}


void func_5159(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	bool var_24_bool = false;
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_5467(var_26_object);
	if(var_25_bool != 0) {
		bool var_27_bool; object var_28_object;
		func_3961(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_28_object->IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) //@nz
			var_20_bool = true;
	}
	var_20_bool = false;
}


void func_40(bool var_0_bool, int var_44_int, object var_45_object)
{
	var_0_bool = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_4258(var_55_bool, var_56_object, 70.0);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_103_int;
	func_5505(var_103_int);
	var_51_object->SetNPCName(var_103_int);
	int var_104_int;
	func_5503(var_104_int);
	var_51_object->SetNPCDescription(var_104_int);
	string var_105_string;
	func_5507(var_105_string);
	var_51_object->SetPhoto(var_105_string);
	string var_106_string;
	func_5509(var_106_string);
	var_51_object->SetPhoto2(var_106_string);
	int var_107_int;
	func_4769(var_107_int);
	var_51_object->SetPlayerName(var_107_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_116_object; object var_117_object;
	var_45_object = var_116_object;
	var_51_object = var_117_object;
	TaskCall(2);
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_314_bool = !var_54_bool; //@nz
		if(var_314_bool == 0) goto Label_103;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_103:
	object var_315_object;
	var_45_object = var_315_object;
	func_4327();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4649(bool var_202_bool, object var_203_object)
{
	object var_205_object;
	var_203_object = var_205_object;
	func_4709(var_205_object);
	bool var_204_bool;
	if(var_204_bool != 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


// @pe
void func_4659(bool var_263_bool, object var_264_object)
{
	object var_266_object;
	var_264_object = var_266_object;
	func_4716(var_266_object);
	bool var_265_bool;
	if(var_265_bool != 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


// @pe
void func_4669(bool var_132_bool, object var_133_object)
{
	object var_135_object;
	var_133_object = var_135_object;
	func_4723(var_135_object);
	bool var_134_bool;
	if(var_134_bool != 0) {
		var_132_bool = true;
		return 0;
	}
	var_132_bool = false;
}


// @pe
void func_5182(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	func_5470();
}


void func_4160(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_3946(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_4502(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_4222:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_4116(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_4222;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_4228(var_70_float, var_71_cvector, var_72_cvector);
}


void func_3649(bool var_0_bool)
{
	func_4605(var_0_bool);
}


void func_2114(void)
{
	bool var_21_bool;
	func_4253(var_21_bool);
	if(!var_21_bool) //@nz
		func_5466();
}


// @pe
void func_5188(object var_22_object)
{
	bool var_23_bool; object var_24_object;
	func_3961(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		object var_27_object;
		func_4496(var_27_object);
		@ReportReputationChange(var_24_object, var_27_object, -0.03);
	}
}


void func_3654(int var_577_int)
{
	var_577_int = 0;
}


// @pe
void func_4679(bool var_287_bool, object var_288_object)
{
	object var_290_object;
	var_288_object = var_290_object;
	func_4730(var_290_object);
	bool var_289_bool;
	if(var_289_bool != 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


void func_2632(void)
{
	int var_61_int; int var_62_int; bool var_63_bool; float var_64_float; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_4253(var_66_bool);
	if(!var_66_bool) //@nz
		return 14;
	int var_68_int;
	func_5237(var_68_int);
	int var_59_int;
	var_68_int = var_59_int;
	int var_60_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_60_int < 5) {
			bool var_84_bool;
			func_4253(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			@irand(var_61_int, 3);
			if(var_61_int == 0) {
				if(var_59_int == 0) goto Label_2679;
				@irand(var_62_int, var_59_int);
				string var_90_string; int var_91_int;
				var_62_int = var_91_int;
				func_5230(var_90_string, var_91_int);
				@PlayAnimation("all", var_90_string);
				@WaitForAnimEnd(var_63_bool);
				if(!var_63_bool) { //@nz
				} else {
			} else {
			if(var_61_int == 1) {
				@rand(var_64_float, 4);
				@Sleep((var_64_float + 1), var_65_bool);
				if(!var_65_bool) { //@nz
					goto Label_2708;
				}
			} else if(var_60_int != 0) {
				goto Label_2708;
			}
			}
					bool var_93_bool;
					func_2711(var_93_bool);
					var_94_bool = !var_93_bool; //@nz
					if(var_94_bool == 0) goto Label_2703;
			}
		}
	Label_2708:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_2703:
		@ResetAAS();
		var_60_int += 1;
	}
	
}


void func_3656(void)
{
	func_4455("attack_stay");
}


// @pe
void func_3661(void)
{
}


void func_3663(bool var_602_bool)
{
	var_602_bool = true;
}


// @pe
void func_4689(bool var_269_bool, object var_270_object)
{
	object var_272_object;
	var_270_object = var_272_object;
	func_4737(var_272_object);
	bool var_271_bool;
	if(var_271_bool != 0) {
		var_269_bool = true;
		return 0;
	}
	var_269_bool = false;
}


void func_5201(bool var_20_bool, string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_5498(var_28_object);
		var_27_bool = var_20_bool;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = false;
}


void func_3667(float var_489_float)
{
	var_489_float = 0.5;
}


void func_3665(int var_494_int)
{
	var_494_int = 1;
}


// @pe
void func_4699(bool var_245_bool, object var_246_object)
{
	object var_248_object;
	var_246_object = var_248_object;
	func_4758(var_248_object);
	bool var_247_bool;
	if(var_247_bool != 0) {
		var_245_bool = true;
		return 0;
	}
	var_245_bool = false;
}


void func_3676(object var_2_object, bool var_261_bool, object var_262_object, float var_263_float, float var_264_float, bool var_265_bool, bool var_266_bool)
{
	object var_274_object;
	func_4605(var_274_object);
	@SetTimer(1, 5);
	bool var_272_bool;
	@CanSee(var_272_bool, var_274_object);
	if(var_272_bool != 0) {
		var_2_object = true;
		object var_278_object;
		var_262_object = var_278_object;
		func_4437(var_278_object);
	} else {
		var_2_object = false;
	}
	bool var_279_bool; object var_280_object;
	func_3961(var_279_bool, var_280_object);
	if(var_279_bool != 0) {
		object var_283_object;
		func_4496(var_283_object);
		@SendPlayerEnemy(var_280_object, var_283_object);
	}
	bool var_284_bool; object var_285_object; float var_286_float; float var_287_float; bool var_288_bool; bool var_289_bool;
	var_262_object = var_285_object;
	var_263_float = var_286_float;
	var_264_float = var_287_float;
	var_265_bool = var_288_bool;
	var_266_bool = var_289_bool;
	bool var_273_bool;
	func_3781(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool);
	var_284_bool = var_273_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_273_bool = var_261_bool;
	
}


void func_5217(string var_31_string)
{
	object var_33_object;
	if(var_31_string == "heal") {
		@FindActor(var_33_object, "player");
		object var_37_object;
		var_33_object = var_37_object;
		func_5501();
		var_33_object = null;
	}
}


// @pe
void func_4709(bool var_204_bool)
{
	int var_206_int;
	func_4588(var_206_int);
	var_204_bool = var_206_int == 1;
}


// @pe
void func_4716(bool var_265_bool)
{
	int var_267_int;
	func_4588(var_267_int);
	var_265_bool = var_267_int == 2;
}


void func_5230(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_116_object, object var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_123_bool = false;
		bool var_124_bool;
		func_4637(var_1_object);
		if(var_124_bool != 0) {
			bool var_132_bool;
			func_4669(var_132_bool, var_1_object);
			if(var_132_bool != 0)
				var_123_bool = true;
		}
		if(var_123_bool != 0) {
			func_424(var_117_object, "Neutral");
			var_0_bool->SetMessage(543329); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(543330, 45790, 45787); //@t
			var_0_bool->AddReply(543332, 45790, 45789); //@t
			var_0_bool->AddReply(543331, -1, 45788); //@t
		} else {
					bool var_188_bool = false;
					bool var_189_bool;
					func_4637(var_1_object);
					if(var_189_bool != 0) {
						bool var_191_bool;
						func_4669(var_191_bool, var_1_object);
						if(!var_191_bool) //@nz
							var_188_bool = true;
					}
					if(var_188_bool == 0) goto Label_189;
					func_424(var_117_object, "Neutral");
					var_0_bool->SetMessage(543328); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543336, -1, 45794); //@t
		}
	}
Label_394:
	for(;;) {
		bool var_170_bool;
		func_5511(var_170_bool);
		if(var_170_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4406(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_423;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_423:
			return 0;

		}

	}
	
Label_189:
	func_424(var_117_object, "Neutral");
	var_0_bool->SetMessage(537969); //@t
	var_0_bool->ClearReplies(); //@t
	bool var_201_bool = false;
	bool var_202_bool;
	func_4649(var_202_bool, var_1_object);
	if(var_202_bool != 0) {
		bool var_208_bool;
		func_4625(var_1_object);
		if(var_208_bool != 0)
			var_201_bool = true;
	}
	if(var_201_bool != 0)
		var_0_bool->AddReply(537970, 39833, 39832); //@t
	bool var_217_bool = false;
	bool var_218_bool;
	func_4649(var_218_bool, var_1_object);
	if(var_218_bool != 0) {
		bool var_220_bool;
		func_4625(var_1_object);
		if(var_220_bool != 0)
			var_217_bool = true;
	}
	if(var_217_bool != 0)
		var_0_bool->AddReply(537995, 39861, 39860); //@t
	bool var_225_bool = false;
	bool var_226_bool;
	func_4649(var_226_bool, var_1_object);
	if(var_226_bool != 0) {
		bool var_228_bool;
		func_4625(var_1_object);
		if(var_228_bool != 0)
			var_225_bool = true;
	}
	if(var_225_bool != 0)
		var_0_bool->AddReply(538003, 39869, 39868); //@t
	bool var_233_bool = false;
	bool var_234_bool;
	func_4649(var_234_bool, var_1_object);
	if(var_234_bool != 0) {
		bool var_236_bool;
		func_4625(var_1_object);
		if(var_236_bool != 0)
			var_233_bool = true;
	}
	if(var_233_bool != 0)
		var_0_bool->AddReply(538012, 39878, 39877); //@t
	bool var_241_bool = false;
	bool var_242_bool = false;
	bool var_243_bool;
	func_4649(var_243_bool, var_1_object);
	if(var_243_bool != 0) {
		bool var_245_bool;
		func_4699(var_245_bool, var_1_object);
		if(var_245_bool != 0)
			var_242_bool = true;
	}
	if(var_242_bool != 0) {
		bool var_256_bool;
		func_4625(var_1_object);
		if(var_256_bool != 0)
			var_241_bool = true;
	}
	if(var_241_bool != 0)
		var_0_bool->AddReply(538017, 39883, 39882); //@t
	bool var_261_bool = false;
	bool var_262_bool = false;
	bool var_263_bool;
	func_4659(var_263_bool, var_1_object);
	if(var_263_bool != 0) {
		bool var_269_bool;
		func_4689(var_269_bool, var_1_object);
		if(var_269_bool != 0)
			var_262_bool = true;
	}
	if(var_262_bool != 0) {
		bool var_280_bool;
		func_4625(var_1_object);
		if(var_280_bool != 0)
			var_261_bool = true;
	}
	if(var_261_bool != 0)
		var_0_bool->AddReply(538043, 39911, 39910); //@t
	bool var_285_bool = false;
	bool var_286_bool = false;
	bool var_287_bool;
	func_4679(var_287_bool, var_1_object);
	if(var_287_bool != 0) {
		bool var_293_bool;
		func_4689(var_293_bool, var_1_object);
		if(var_293_bool != 0)
			var_286_bool = true;
	}
	if(var_286_bool != 0) {
		bool var_295_bool;
		func_4625(var_1_object);
		if(var_295_bool != 0)
			var_285_bool = true;
	}
	if(var_285_bool != 0)
		var_0_bool->AddReply(538083, 39952, 39951); //@t
	bool var_300_bool = false;
	bool var_301_bool = false;
	bool var_302_bool;
	func_4679(var_302_bool, var_1_object);
	if(var_302_bool != 0) {
		bool var_304_bool;
		func_4699(var_304_bool, var_1_object);
		if(var_304_bool != 0)
			var_301_bool = true;
	}
	if(var_301_bool != 0) {
		bool var_306_bool;
		func_4625(var_1_object);
		if(var_306_bool != 0)
			var_300_bool = true;
	}
	if(var_300_bool != 0)
		var_0_bool->AddReply(538110, 39980, 39979); //@t
	var_0_bool->AddReply(538126, -1, 39997); //@t
	goto Label_394;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


// @pe
void func_4723(bool var_134_bool)
{
	int var_136_int;
	func_4588(var_136_int);
	var_134_bool = var_136_int == 4;
}


void func_5237(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_5230(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


// @pe
void func_4730(bool var_289_bool)
{
	int var_291_int;
	func_4588(var_291_int);
	var_289_bool = var_291_int == 5;
}


// @pe
void func_4737(bool var_271_bool)
{
	bool var_273_bool = false;
	int var_274_int;
	func_4597(var_274_int);
	if(var_274_int >= 0) {
		int var_277_int;
		func_4597(var_277_int);
		if(var_277_int < 12)
			var_273_bool = true;
	}
	if(var_273_bool != 0) {
		var_271_bool = true;
		return 0;
	}
	var_271_bool = false;
}


void func_4228(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_4116(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5254(int var_62_int)
{
	bool var_64_bool;
	func_5557(var_64_bool);
	if(var_64_bool != 0)
		var_62_int = 2;
	else
		var_62_int = 0;
	
}


// @pe
void func_5263(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(6);
	func_2718(var_63_object, var_62_object);
	TaskReturn();
}


void func_4242(object var_95_object)
{
	cvector var_99_cvector;
	var_95_object->GetPosition(var_99_cvector);
	cvector var_100_cvector;
	@GetPosition(var_100_cvector);
	cvector var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = GetByIndex(var_101_cvector, 0);
	var_103_float = GetByIndex(var_101_cvector, 2);
	@RotateAsync(var_102_float, var_103_float);
}


// @pe
void func_4758(bool var_247_bool)
{
	int var_249_int;
	func_4597(var_249_int);
	if(var_249_int >= 12)
		var_247_bool = true;
	var_247_bool = false;
}


// @pe
void func_5271(int var_89_int, object var_90_object)
{
	object var_92_object;
	var_90_object = var_92_object;
	bool var_91_bool;
	func_4092(var_91_bool, var_92_object);
	if(var_91_bool != 0)
		var_89_int = 2;
	else
		var_89_int = 0;
	
}


void func_2711(bool var_93_bool)
{
	var_93_bool = true;
}


void func_2713(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3739(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_3905(var_19_object);
}


void func_4253(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_2718(bool var_0_bool, object var_62_object)
{
	var_0_bool = var_62_object;
	bool var_69_bool;
	func_2769(var_69_bool);
	cvector var_67_cvector;
	@GetDirection(var_67_cvector);
	cvector var_77_cvector;
	func_3946(var_77_cvector, var_0_bool);
	cvector var_68_cvector;
	var_77_cvector = var_68_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_4549(var_83_float, var_84_cvector, var_85_cvector);
	if(var_83_float < 0) {
		func_4242(var_0_bool);
		var_69_bool = true;
	} else {
		@Sleep(1.5, var_69_bool);
	}
	if(var_69_bool != 0) {
		func_4242(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_4769(int var_107_int)
{
	int var_109_int;
	@GetVariable("branch", var_109_int);
	if(var_109_int == 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x12b0";
	}
	if(var_109_int == 1) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
}


void func_4258(bool var_55_bool, object var_56_object, float var_57_float)
{
	cvector var_68_cvector; bool var_75_bool;
	var_56_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_56_object->GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_80_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_80_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_4502(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * var_57_float) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector, true);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_96_float, var_97_float);
	bool var_98_bool;
	func_5511(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		@HasAnimationTrack(var_75_bool, "head");
		if(var_75_bool == 0) goto Label_4321;
		@LookAsyncCamera("head");
	}
Label_4321:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
	
}


// @pe
void func_5281(object var_182_object)
{
	object var_183_object;
	var_182_object = var_183_object;
	TaskCall(7);
	func_2993(var_183_object);
	TaskReturn();
}


void func_3236(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_218_bool; bool var_219_bool; cvector var_220_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_218_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_218_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_219_bool, ("attack" + (var_2_object + 1)));
			if(!var_219_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_220_cvector, "all", "bjump");
		var_234_float = GetByIndex(var_220_cvector, 2);
		var_4_string = -var_234_float;

	}
}


void func_5289(bool var_35_bool, object var_36_object, bool var_37_bool)
{
	bool var_42_bool; object var_43_object;
	func_3966(var_42_bool, var_43_object, "class");
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 4;
	}
	string var_40_string;
	@GetProperty("class", var_40_string);
	string var_41_string;
	var_43_object->GetProperty("class", var_41_string);
	bool var_54_bool = false;
	if(!var_37_bool) { //@nz
		if(var_40_string == var_41_string)
			var_54_bool = true;
	}
	if(var_54_bool != 0) {
		var_35_bool = true;
		return 4;
	}
	if(var_41_string == "rat") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "rat_big") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "dog") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "grabitel") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "bomber") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "sanitar") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "hunter") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	if(var_41_string == "soldier") {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}


void func_4786(int var_226_int)
{
	int var_228_int;
	@GetVariable("branch", var_228_int);
	var_228_int = var_226_int;
}


// @pe
void func_4792(object var_36_object)
{
	int var_37_int;
	func_4786(var_37_int);
	if(var_37_int == 1)
		@WorkWithCorpse(var_36_object);
	else
		@Barter(var_36_object);
	
}


void func_3781(bool var_0_bool, object var_1_object, bool var_284_bool, object var_285_object, float var_286_float, float var_287_float, bool var_288_bool, bool var_289_bool)
{
	bool var_298_bool; object var_300_object; cvector var_301_cvector; cvector var_302_cvector; float var_304_float; object var_305_object;
	var_0_bool = false;
	var_1_object = var_285_object;
	bool var_299_bool;
	var_289_bool = var_299_bool;
	
	for(;;) {
		bool var_306_bool; object var_307_object;
		var_285_object = var_307_object;
		func_3921(var_306_bool, var_307_object);
		if(!var_306_bool) { //@nz
			var_284_bool = false;
			return 16;
		}
		var_285_object->GetPosition(var_301_cvector);
		@GetPosition(var_302_cvector);
		var_304_float = (var_301_cvector - var_302_cvector) | (var_301_cvector - var_302_cvector);
		bool var_311_bool = false;
		if(var_287_float > 0) {
			if(var_304_float > (var_287_float * var_287_float))
				var_311_bool = true;
		}
		if(var_311_bool != 0) {
			@Stop();
			var_284_bool = false;
			return 16;
		}
		if(var_304_float > (var_286_float * var_286_float)) {
			var_285_object->GetPFPosition(var_301_cvector);
			@FindPathTo(var_305_object, var_301_cvector);
			if(var_305_object != null) {
				var_305_object = var_300_object;
				var_305_object = null;
			}
			if(var_300_object != null) {
				if(var_299_bool == 0) goto Label_3834;
				var_299_bool = false;
				@RotatePath(var_300_object, var_298_bool);
				if(!var_298_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_324_string;
						func_3928(var_324_string);
						string var_325_string;
						func_3930(var_325_string);
						@FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string);
						if(!var_298_bool) { //@nz
							if(var_0_bool == 0) goto Label_3853;
							var_300_object = null;
						}
					EMIT "GOTO 0xf0e";

					Label_3853:
						} else {
					var_300_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_298_bool);
					if(!var_298_bool) { //@nz
						if(var_0_bool != 0) {
							var_300_object = null;
							goto Label_3881;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_3881;
		}
			var_305_object = null;
			goto Label_3879;

		Label_3879:
			var_300_object = null;

		}
	Label_3881:
		for(;;) {
			var_284_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_4805(int var_118_int, int var_119_int)
{
	if(var_118_int > var_119_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_131_int = 0;
	if(var_118_int != var_119_int) {
		@irand(var_131_int, (var_119_int - var_118_int));
	} else if(var_118_int == 0) {
		return 4;
	}
	var_131_int += var_118_int;
	if(var_131_int == 0)
		return 4;
	int var_139_int;
	func_5052(var_139_int, "Money");
	bool var_132_bool;
	@AddItem(var_132_bool, var_139_int, 0, var_131_int);
	
}


void func_3271(bool var_0_bool, float var_498_float, int var_499_int)
{
	object var_503_object; float var_504_float; float var_505_float;
	@GetVictim((var_498_float * 0.9), var_503_object);
	@ReportAttack(var_0_bool);
	if(var_503_object == var_0_bool) {
		float var_509_float; object var_510_object; int var_511_int;
		var_503_object = var_510_object;
		var_499_int = var_511_int;
		func_3001(var_511_int);
		var_509_float = var_504_float;
		float var_512_float; object var_513_object; float var_514_float; int var_515_int;
		var_503_object = var_513_object;
		int var_516_int; object var_517_object; int var_518_int;
		var_503_object = var_517_object;
		var_499_int = var_518_int;
		func_3004(var_518_int);
		var_516_int = var_515_int;
		func_3978(var_512_float, var_513_object, var_514_float, var_515_int);
		var_512_float = var_505_float;
		int var_577_int;
		func_3654(var_577_int);
		@ReportHit(var_0_bool, var_577_int, var_505_float, var_514_float);
		object var_578_object; float var_579_float;
		var_503_object = var_578_object;
		var_505_float = var_579_float;
		func_3661();
	}
}
EMIT "Stack[-3] = 0";


void func_2769(bool var_0_bool)
{
	func_4437(var_0_bool);
}


void func_4836(string var_232_string)
{
	object var_236_object;
	@CreateInvItem(var_236_object);
	var_236_object->SetItemName(var_232_string);
	var_236_object->SetProperty("Organ", 1);
	int var_237_int;
	var_236_object->GetItemID(var_237_int);
	bool var_238_bool;
	@AddItem(var_238_bool, var_236_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_4327(void)
{
	bool var_317_bool;
	@CameraSwitchToNormal(true);
	bool var_319_bool;
	func_5511(var_319_bool);
	if(var_319_bool != 0) {
	} else {
		@HasAnimationTrack(var_317_bool, "head");
		if(var_317_bool == 0) goto Label_4344;
		@UnlookAsync("head");
	}
Label_4344:
	
}


void func_3310(bool var_0_bool, object var_1_object, bool var_461_bool, float var_462_float)
{
	string var_470_string;
	func_3649(var_470_string);
	int var_467_int;
	@irand(var_467_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_4614();
	@PlayAnimation("all", ("attack_begin" + (var_467_int + 1)));
	@WaitForAnimEnd();
	int var_469_int;
	func_3617(var_469_int, var_470_string);
	bool var_495_bool;
	func_4092(var_495_bool, var_0_bool);
	if(!var_495_bool) { //@nz
		@StopAsync();
		var_461_bool = false;
		return 8;
	}
	float var_498_float; int var_499_int;
	var_462_float = var_498_float;
	var_467_int = var_499_int;
	func_3271(var_470_string, var_498_float, var_499_int);
	bool var_468_bool;
	@HasAnimation(var_468_bool, "all", ("attack_middle" + var_467_int));
	if(var_468_bool != 0) {
		func_4614();
		@PlayAnimation("all", ("attack_middle" + var_467_int));
		@WaitForAnimEnd();
		func_3649(var_470_string);
		bool var_587_bool;
		func_4092(var_587_bool, var_0_bool);
		if(!var_587_bool) { //@nz
			@StopAsync();
			var_461_bool = false;
			return 8;
		}
		float var_590_float; int var_591_int;
		var_462_float = var_590_float;
		func_3271(var_470_string, var_590_float, var_591_int);
		var_469_int = 1;

		for(;;) {
			var_470_string = (("attack_middle" + var_591_int) + "_") + var_469_int;
			@HasAnimation(var_468_bool, "all", var_470_string);
			if(!var_468_bool) { //@nz
			} else {
				func_4614();
				@PlayAnimation("all", var_470_string);
				@WaitForAnimEnd();
				func_3649(var_470_string);
				bool var_613_bool;
				func_4092(var_613_bool, var_0_bool);
				if(!var_613_bool) { //@nz
					@StopAsync();
					var_461_bool = false;
					return 8;
				}
				float var_616_float; int var_617_int;
				var_462_float = var_616_float;
				var_467_int = var_617_int;
				func_3271(var_470_string, var_616_float, var_617_int);
				var_469_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_467_int));
		bool var_602_bool;
		func_3663(var_602_bool);
		if(var_602_bool != 0) {
			bool var_603_bool;
			func_3447(var_603_bool, 0.75);
			@StopAsync();
		}
		var_461_bool = true;
		return 8;

	}
}


// @pe
void func_5364(int var_86_int, object var_87_object)
{
	object var_90_object;
	var_87_object = var_90_object;
	int var_89_int;
	func_5271(var_89_int, var_90_object);
	var_89_int = var_86_int;
}


void func_4853(void)
{
	int var_226_int;
	func_4786(var_226_int);
	if(var_226_int != 1) {
	}
	func_4836("liver");
	func_4836("kidney");
	func_4836("heart");
	func_4836("blood");
}


// @pe
void func_4345(bool var_324_bool, object var_325_object)
{
	object var_327_object;
	var_325_object = var_327_object;
	bool var_326_bool;
	func_4353(var_326_bool, var_327_object, (float)70);
	var_326_bool = var_324_bool;
}


// @pe
void func_5371(object var_125_object)
{
	object var_126_object;
	var_125_object = var_126_object;
	func_5281(var_126_object);
}


void func_4353(bool var_326_bool, object var_327_object, float var_328_float)
{
	cvector var_338_cvector;
	var_327_object->GetPosition(var_338_cvector);
	float var_337_float;
	var_327_object->GetEyesHeight(var_337_float);
	var_345_float = GetByIndex(var_338_cvector, 1);
	SetByIndex(var_338_cvector, 1) = (var_345_float + var_337_float);
	cvector var_339_cvector;
	@GetPosition(var_339_cvector);
	@GetEyesHeight(var_337_float);
	var_346_float = GetByIndex(var_339_cvector, 1);
	SetByIndex(var_339_cvector, 1) = (var_346_float + var_337_float);
	cvector var_340_cvector = var_338_cvector - var_339_cvector;
	var_347_float = GetByIndex(var_340_cvector, 1);
	SetByIndex(var_340_cvector, 1) = (float)0;
	var_349_float = sqrt(var_340_cvector | var_340_cvector);
	var_340_cvector /= var_349_float;
	cvector var_341_cvector = -var_340_cvector;
	cvector var_342_cvector = (var_340_cvector * var_328_float) - [0.0, 10.0, 0.0];
	bool var_344_bool;
	@IsOverrideActive(var_344_bool);
	if(var_344_bool != 0)
		var_326_bool = false;
	@StopWorld();
	@CameraTransit((var_339_cvector + var_342_cvector), var_341_cvector, true);
	var_354_float = GetByIndex(var_342_cvector, 0);
	var_355_float = GetByIndex(var_342_cvector, 2);
	@Rotate(var_354_float, var_355_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_326_bool = true;
}


void func_5377(bool var_28_bool, object var_29_object, object var_30_object, float var_31_float, bool var_32_bool)
{
	object var_36_object;
	var_30_object = var_36_object;
	bool var_35_bool;
	func_5289(var_35_bool, var_36_object, !var_32_bool);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_34_bool;
	@CanSee(var_34_bool, var_29_object);
	bool var_74_bool = true;
	if(var_34_bool != 1) {
		float var_76_float; object var_77_object;
		var_29_object = var_77_object;
		func_3953(var_76_float, var_77_object);
		var_85_bool = var_76_float <= (var_31_float * var_31_float);
		if(var_85_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 0) {
		var_28_bool = true;
		return 2;
	}
	var_28_bool = false;
}


void func_2310(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2446(var_18_object, var_19_bool);
}


void func_4877(bool var_112_bool)
{
	int var_115_int; bool var_116_bool;
	if(var_112_bool != 0) {
		int var_121_int;
		func_4588(var_121_int);
		func_4805(0, (100 + (var_121_int * 100)));
		@irand(var_115_int, 8);
		if(var_115_int == 0) {
			int var_149_int;
			func_5052(var_149_int, "lemon");
			@AddItem(var_116_bool, var_149_int, 0, 1);
		} else {
				if(var_115_int == 1) {
					int var_155_int;
					func_5052(var_155_int, "rusk");
					@AddItem(var_116_bool, var_155_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_115_int == 2) {
				int var_161_int;
				func_5052(var_161_int, "hook");
				@AddItem(var_116_bool, var_161_int, 0, 1);
			} else if(var_115_int == 4) {
				int var_167_int;
				func_5052(var_167_int, "syringe");
				@AddItem(var_116_bool, var_167_int, 0, 1);
			} else if(var_115_int == 5) {
				int var_173_int;
				func_5052(var_173_int, "watch");
				@AddItem(var_116_bool, var_173_int, 0, 1);
			} else if(var_115_int == 6) {
				int var_179_int;
				func_5052(var_179_int, "razor");
				@AddItem(var_116_bool, var_179_int, 0, 1);
			}
	}
		int var_186_int;
		func_4588(var_186_int);
		func_4805(0, (50 + (var_186_int * 50)));
		@irand(var_115_int, 7);
		if(var_115_int == 0) {
			int var_192_int;
			func_5052(var_192_int, "beads");
			@AddItem(var_116_bool, var_192_int, 0, 1);
		} else if(var_115_int == 1) {
			int var_198_int;
			func_5052(var_198_int, "bracelet");
			@AddItem(var_116_bool, var_198_int, 0, 1);
		} else if(var_115_int == 2) {
			int var_204_int;
			func_5052(var_204_int, "ear_ring");
			@AddItem(var_116_bool, var_204_int, 0, 1);
		} else if(var_115_int == 3) {
			int var_210_int;
			func_5052(var_210_int, "gold_ring");
			@AddItem(var_116_bool, var_210_int, 0, 1);
		} else if(var_115_int == 4) {
			int var_216_int;
			func_5052(var_216_int, "silver_ring");
			@AddItem(var_116_bool, var_216_int, 0, 1);
		} else if(var_115_int == 5) {
			int var_222_int;
			func_5052(var_222_int, "flower");
			@AddItem(var_116_bool, var_222_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2318(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2453(var_23_bool, var_24_int);
}


// @pe
void func_5406(int var_22_int)
{
	var_22_int = 0;
}


void func_2335(object var_2_object, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_4092(var_25_bool, var_26_object);
	if(!var_25_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_23_bool;
	@IsPlayerActor(var_26_object, var_23_bool);
	if(!var_23_bool) //@nz
		return 4;
	int var_62_int; object var_63_object;
	var_20_object = var_63_object;
	func_5254(var_63_object);
	int var_24_int;
	var_62_int = var_24_int;
	if(var_24_int > 0) {
		if(var_24_int > 1)
			func_2318(var_24_int);
		object var_70_object;
		var_20_object = var_70_object;
		func_5263(var_70_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_5409(void)
{
}


// @pe
void func_5411(int var_129_int, string var_130_string, object var_131_object)
{
	if(var_130_string == "killme") {
		int var_134_int; object var_135_object;
		var_131_object = var_135_object;
		func_5433(var_134_int, var_135_object);
		var_134_int = var_129_int;
		return 0;
	}
	var_129_int = 0;
}


// @pe
void func_3883(bool var_0_bool, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_3921(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_5423(string var_177_string, object var_178_object)
{
	if(var_177_string == "killme") {
		object var_181_object;
		var_178_object = var_181_object;
		func_5451(var_181_object);
	}
}


// @pe
void func_4401(void)
{
	@CameraSwitchToNormal(true);
}


void func_4406(string var_172_string)
{
	bool var_176_bool; float var_177_float; float var_178_float;
	@lshHasAnimation(var_176_bool, var_172_string);
	if(var_176_bool != 0) {
		@lshGetAnimTimes(var_172_string, var_177_float, var_178_float);
		@lshPlayAnimation(var_177_float, var_178_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_172_string);
	}
	
}


// @pe
void func_5433(int var_134_int, object var_135_object)
{
	object var_137_object;
	var_135_object = var_137_object;
	bool var_136_bool;
	func_4092(var_136_bool, var_137_object);
	if(!var_136_bool) { //@nz
		var_134_int = 0;
		return 0;
	}
	bool var_171_bool; object var_172_object;
	var_135_object = var_172_object;
	func_5559(var_172_object);
	if(var_171_bool != 0)
		var_134_int = 2;
	else
		var_134_int = 0;
	
}


void func_3905(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_4422(string var_147_string, bool var_148_bool)
{
	bool var_154_bool; float var_155_float; float var_156_float;
	@lshHasAnimation(var_154_bool, var_147_string);
	if(var_154_bool != 0) {
		@lshGetAnimTimes(var_147_string, var_155_float, var_156_float);
		@lshPlayAnimation(var_155_float, var_156_float, var_148_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_147_string);
	}
	
}


void func_2375(bool var_0_bool, object var_1_object)
{
	float var_31_float; cvector var_32_cvector; cvector var_33_cvector; bool var_34_bool; object var_35_object; bool var_36_bool;
	@rand(var_31_float, 0.5);
	@Sleep(var_31_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_2387:
				@GetPosition(var_33_cvector);
				float var_40_float;
				func_2434(var_40_float);
				@GetRandomPFPointInCircle(var_32_cvector, var_33_cvector, var_40_float, var_34_bool);
				if(var_34_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_2387;
			}
				var_1_object = false;
		}
		}
		goto Label_2403;

	Label_2403:
		object var_44_object; cvector var_45_cvector;
		var_32_cvector = var_45_cvector;
		func_2462(var_44_object, var_45_cvector);
		var_44_object = var_35_object;
		if(var_35_object != null) {
			@RotatePath(var_35_object, var_36_bool);
			if(var_36_bool != 0) {
				bool var_50_bool;
				func_2460(var_50_bool);
				@FollowPath(var_35_object, var_50_bool, var_36_bool);
				var_35_object = null;
				if(var_36_bool != 0) {
					TaskCall(5);
					func_2632();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_35_object = null;
	}
	
}


// @pe
void func_5451(object var_181_object)
{
	object var_182_object;
	var_181_object = var_182_object;
	func_5281(var_182_object);
}


// @pe
void func_5457(int var_22_int)
{
	var_22_int = 2;
}


// @pe
void func_3921(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_4092(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


// @pe
void func_5460(object var_30_object)
{
	object var_31_object;
	func_5517(var_31_object, var_31_object);
}


void func_4437(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_3928(string var_324_string)
{
	var_324_string = "walk";
}


void func_5466(void)
{
}


void func_3930(string var_325_string)
{
	var_325_string = "run";
}


// @pe
void func_3932(string var_540_string, int var_541_int)
{
	if(var_541_int == 2) {
		var_540_string = "fire";
		return 0;
	EMIT "GOTO 0xf68";
	}
	if(var_541_int == 1) {
		var_540_string = "bullet";
		return 0;
	}
	var_540_string = "phys";
}


// @pe
void func_5467(bool var_25_bool)
{
	var_25_bool = false;
}


// @pe
void func_5470(void)
{
}


void func_4448(void)
{
	bool var_22_bool;
	func_5511(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_5472(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@CanSee(var_35_bool, var_33_object);
	var_32_bool = true;
	if(var_35_bool != 1) {
		float var_37_float; object var_38_object;
		var_33_object = var_38_object;
		func_3953(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 2250000;
		if(var_46_bool != 1)
			var_32_bool = false;
	}
}


void func_2917(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_4455(string var_45_string)
{
	bool var_54_bool; int var_55_int; bool var_56_bool; int var_57_int; bool var_58_bool; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	@IsExisting3DSound(var_54_bool, var_45_string);
	if(!var_54_bool) { //@nz
		var_55_int = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, (var_45_string + (var_55_int + 1)));
			if(!var_56_bool) { //@nz
				break;
			Label_4475:
				@irand(var_57_int, var_55_int);
				var_45_string += (var_57_int + 1);
	}
			@Is3DSoundLoaded(var_58_bool, var_45_string);
			if(var_58_bool != 0) {
				@GetEyesHeight(var_59_float);
				@GetDirection(var_60_cvector);
				var_61_cvector = var_60_cvector * 50;
				var_72_float = GetByIndex(var_61_cvector, 1);
				SetByIndex(var_61_cvector, 1) = (var_72_float + var_59_float);
				@PlayGlobalSound(var_45_string, var_61_cvector);
			}
		}
		var_55_int += 1;
	}
	var_67_bool = !var_55_int; //@nz
	if(var_67_bool == 0) goto Label_4475;
}


void func_3946(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


// @pe
void func_5487(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_5263(var_61_object);
}


void func_3953(float var_37_float, object var_38_object)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_38_object->GetPosition(var_43_cvector);
	var_37_float = (var_43_cvector - var_42_cvector) | (var_43_cvector - var_42_cvector);
}


// @pe
void func_5493(bool var_49_bool)
{
	var_49_bool = false;
}


void func_3447(bool var_603_bool, float var_604_float)
{
	float var_607_float; bool var_608_bool;
	@rand(var_607_float);
	if(var_607_float < var_604_float) {

		for(;;) {
			@IsAnimationPlaying(var_608_bool);
			if(!var_608_bool) { //@nz
			} else {
				bool var_611_bool;
				func_3545(var_611_bool);
				if(var_611_bool != 0) {
					var_603_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_603_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_3649(var_608_bool);
}


// @pe
void func_5496(void)
{
}


void func_3961(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	@IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
}


// @pe
void func_5498(bool var_27_bool)
{
	var_27_bool = false;
}


// @pe
void func_5501(void)
{
}


void func_3966(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_5503(int var_104_int)
{
	var_104_int = 515564;
}


void func_5505(int var_103_int)
{
	var_103_int = 503349;
}


void func_2434(float var_40_float)
{
	float var_42_float;
	@GetCameraFarDistance(var_42_float);
	var_42_float = var_40_float;
}


void func_5507(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen2.png";
}


void func_5509(string var_106_string)
{
	var_106_string = "ui/NPC_Citizen2_b.png";
}


void func_5511(bool var_98_bool)
{
	var_98_bool = false;
}


void func_5513(void)
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_3978(float var_512_float, object var_513_object, float var_514_float, int var_515_int)
{
	int var_525_int; int var_527_int;
	object var_532_object;
	var_513_object = var_532_object;
	bool var_531_bool;
	func_3966(var_531_bool, var_532_object, "health");
	if(!var_531_bool) //@nz
		var_512_float = 0.0;
	bool var_535_bool; object var_536_object;
	func_3966(var_535_bool, var_536_object, "armor");
	if(!var_535_bool) //@nz
		var_525_int = 0;
	else
		var_536_object->GetProperty("armor", var_525_int);
	string var_540_string; int var_541_int;
	var_515_int = var_541_int;
	func_3932(var_540_string, var_541_int);
	string var_526_string = "armor_" + var_540_string;
	bool var_546_bool; object var_547_object; string var_548_string;
	var_513_object = var_547_object;
	func_3966(var_546_bool, var_547_object, var_548_string);
	if(!var_546_bool) //@nz
		var_527_int = 0;
	else
		var_513_object->GetProperty(var_548_string, var_527_int);

	float var_550_float;
	func_4512(var_550_float, ((var_525_int + var_527_int) / 100.0), (float)1);
	float var_528_float;
	var_550_float = var_528_float;
	float var_529_float;
	var_513_object->GetProperty("health", var_529_float);
	float var_530_float = var_514_float * (1 - var_528_float);
	float var_560_float;
	func_4519(var_560_float, (var_529_float - var_530_float), (float)0, (float)1);
	var_513_object->SetProperty("health", var_560_float);
	bool var_566_bool; object var_567_object;
	var_513_object = var_567_object;
	func_3961(var_566_bool, var_567_object);
	if(var_566_bool != 0) {
		float var_568_float = -var_530_float;
		func_4571(var_568_float);
	}
	var_530_float = var_512_float;
	
}


void func_5517(object var_31_object, object var_46_object)
{
	bool var_33_bool;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			object var_36_object;
			var_31_object = var_36_object;
			func_4792(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x15b4";
	}
	int var_44_int; object var_45_object;
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	if(1000 == var_46_object) {
		bool var_324_bool; object var_325_object;
		var_31_object = var_325_object;
		func_4345(var_324_bool, var_325_object);
		if(!var_324_bool) //@nz
			return 2;
		object var_357_object;
		var_31_object = var_357_object;
		TaskCall(0);
		func_0(var_357_object);
		TaskReturn();
		object var_364_object;
		var_31_object = var_364_object;
		func_4401();
	}
}


void func_2446(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_4496(object var_107_object)
{
	object var_109_object;
	@self(var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_3474(bool var_0_bool, bool var_404_bool, float var_405_float)
{
	bool var_411_bool; cvector var_412_cvector; cvector var_413_cvector; cvector var_414_cvector; float var_415_float;
	
	for(;;) {
		@IsAnimationPlaying(var_411_bool);
		if(!var_411_bool) //@nz
			break;
		bool var_417_bool;
		func_3545(var_417_bool);
		if(var_417_bool != 0) {
			var_404_bool = true;
			return 10;
		}
		bool var_456_bool;
		func_4092(var_456_bool, var_0_bool);
		if(!var_456_bool) { //@nz
			var_404_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_412_cvector); //@t
		@GetPFPosition(var_413_cvector);
		var_414_cvector = var_412_cvector - var_413_cvector;
		var_415_float = var_414_cvector | var_414_cvector;
		if(var_415_float < (var_405_float * var_405_float)) {
			bool var_461_bool; float var_462_float;
			var_405_float = var_462_float;
			func_3310(var_414_cvector, var_415_float, var_461_bool, var_462_float);
			var_404_bool = true;
			return 10;
		}
		@sync();
	}
	func_3649(var_415_float);
	var_404_bool = false;
}


void func_2453(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


void func_4502(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


// @pe
void func_1943(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_1976(var_22_object);
	object var_102_object;
	var_21_object = var_102_object;
	func_5572(var_102_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2460(bool var_50_bool)
{
	var_50_bool = false;
}


void func_2462(object var_44_object, cvector var_45_cvector)
{
	object var_47_object;
	@FindShiftedPathTo(var_47_object, var_45_cvector);
	var_47_object = var_44_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4512(float var_550_float, float var_551_float, float var_552_float)
{
	if(var_551_float < var_552_float)
		var_551_float = var_550_float;
	else
		var_552_float = var_550_float;
	
}


// @pe
void func_4519(float var_560_float, float var_561_float, float var_562_float, float var_563_float)
{
	if(var_561_float < var_562_float) {
		var_562_float = var_560_float;
		return 0;
	}
	if(var_561_float > var_563_float) {
		var_563_float = var_560_float;
		return 0;
	}
	var_561_float = var_560_float;
}


// @pe
void func_424(object var_2_object, string var_143_string)
{
	bool var_144_bool;
	func_5511(var_144_bool);
	if(!var_144_bool) //@nz
		return 0;
	if(var_143_string == var_2_object)
		return 0;
	string var_147_string; bool var_148_bool;
	var_143_string = var_147_string;
	if(var_143_string == "")
		var_148_bool = false;
	else
		var_148_bool = true;
	func_4422(var_147_string, var_148_bool);
	var_2_object = var_143_string;
	
}


// @pe
void func_2993(object var_183_object)
{
	object var_190_object;
	func_3007(var_186_int, var_187_bool, var_188_float, var_189_int, var_190_object, var_190_object, true, 180.0);
}


// @pe
void func_4530(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_72_float = (var_75_float * var_76_float) + (var_78_float * var_79_float);
}


void func_5557(bool var_64_bool)
{
	var_64_bool = false;
}


// @pe
void func_5559(bool var_171_bool)
{
	var_171_bool = true;
}


void func_1976(object var_22_object)
{
	cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; string var_37_string; object var_38_object; bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector;
	if(var_22_object == null) {
		func_2067("fdie");
	} else {
		var_22_object->GetPosition(var_33_cvector);
		@GetPosition(var_34_cvector);
		@GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_76_float = GetByIndex(var_36_cvector, 0);
		var_77_float = GetByIndex(var_35_cvector, 0);
		var_79_float = GetByIndex(var_36_cvector, 2);
		var_80_float = GetByIndex(var_35_cvector, 2);
		if(((var_76_float * var_77_float) + (var_79_float * var_80_float)) >= 0)
			var_37_string = "fdie";
		else
			var_37_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_22_object = var_38_object;
		var_87_bool = IsFuncExist(var_22_object, "GetScriptProperty", 2);
		if(var_87_bool != 0) {
			var_22_object->HasScriptProperty(var_39_bool, "Owner");
			if(var_39_bool != 0) {
				var_22_object->GetScriptProperty(var_38_object, "Owner");
				if(var_38_object == null)
					var_22_object = var_38_object;
			}
		}
		var_94_bool = IsFuncExist(var_38_object, "@GetEyesHeight", 1);
		if(var_94_bool != 0) {
			var_38_object->GetEyesHeight(var_41_float);
			var_42_cvector = [0.0, 0.0, 0.0];
			var_95_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_95_float;
			SetByIndex(var_42_cvector, 1) = var_95_float;
			@LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = true;
		} else {
			var_40_bool = false;

		}
		string var_97_string;
		var_37_string = var_97_string;
		func_4455(var_97_string);
		@PlayAnimation("all", var_37_string);
		@WaitForAnimEnd();
		if(var_40_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_37_string);
		@RemoveEnvelope();
		var_38_object = null;
	}
	
}


// @pe
void func_3001(float var_509_float)
{
	var_509_float = 0.05;
}


// @pe
void func_5562(bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool)
{
	object var_29_object;
	var_25_object = var_29_object;
	object var_30_object;
	var_26_object = var_30_object;
	bool var_32_bool;
	var_27_bool = var_32_bool;
	bool var_28_bool;
	func_5377(var_28_bool, var_29_object, var_30_object, 700.0, var_32_bool);
	var_28_bool = var_24_bool;
}


// @pe
void func_4539(float var_81_float, cvector var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0);
	var_84_float = GetByIndex(var_82_cvector, 0);
	var_86_float = GetByIndex(var_82_cvector, 2);
	var_87_float = GetByIndex(var_82_cvector, 2);
	var_81_float = sqrt((var_83_float * var_84_float) + (var_86_float * var_87_float));
}


// @pe
void func_3004(int var_516_int)
{
	var_516_int = 0;
}


void func_3517(bool var_0_bool, bool var_419_bool)
{
	cvector var_425_cvector; cvector var_426_cvector;
	bool var_430_bool;
	func_4092(var_430_bool, var_0_bool);
	if(!var_430_bool) { //@nz
		var_419_bool = false;
		return 10;
	}
	bool var_433_bool;
	float var_429_float;
	func_3606(var_429_float, var_433_bool);
	if(var_433_bool != 0) {
		var_0_bool->GetPFPosition(var_425_cvector); //@t
		@GetPFPosition(var_426_cvector);
		var_0_bool->GetAttackDistance(var_429_float); //@t
		var_419_bool = ((var_425_cvector - var_426_cvector) | (var_425_cvector - var_426_cvector)) <= ((var_429_float + 50) * (var_429_float + 50));
		return 10;
	}
	var_419_bool = false;
}


void func_5052(int var_139_int, string var_140_string)
{
	int var_142_int;
	@GetInvItemByName(var_142_int, var_140_string);
	var_142_int = var_139_int;
}


void func_3007(bool var_0_bool, object var_3_object, bool var_5_bool, object var_190_object, bool var_191_bool, float var_192_float, bool var_267_bool, bool var_353_bool)
{
	float var_204_float; cvector var_205_cvector; cvector var_206_cvector; bool var_208_bool; float var_211_float; cvector var_212_cvector; bool var_213_bool; float var_214_float;
	func_3236(var_212_cvector, var_213_bool, var_214_float);
	var_5_bool = 0;
	var_239_bool = IsFuncExist(var_190_object, "@GetAttackDistance", 1);
	if(var_239_bool != 0) {
		var_190_object->GetAttackDistance(var_204_float);
		var_204_float += 50;
	} else {
						var_192_float = var_204_float;
	}
	if(var_204_float >= 150)
		var_204_float = 150;
	var_3_object = false;
	var_0_bool = var_190_object;
	bool var_207_bool;
	@IsPlayerActor(var_0_bool, var_207_bool);
	if(var_207_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_245_object;
		func_4496(var_245_object);
		@SendPlayerEnemy(var_190_object, var_245_object);
	}
	if(var_191_bool != 0)
		var_208_bool = false;
	else
		var_208_bool = true;

	
Label_3047:
	for(;;) {
		bool var_250_bool = false;
		bool var_251_bool;
		func_4092(var_251_bool, var_0_bool);
		if(var_251_bool != 0) {
			if(!var_3_object) //@nz
				var_250_bool = true;
		}
		if(var_250_bool != 0) {
			func_3649(var_214_float);
			var_0_bool->GetPFPosition(var_205_cvector); //@t
			@GetPFPosition(var_206_cvector);
			var_211_float = (var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector);
			if(var_211_float >= ((400.0 + var_204_float) * (400.0 + var_204_float))) {
				bool var_261_bool; float var_263_float;
				var_204_float = var_263_float;
				TaskCall(8);
				func_3676(var_269_bool, var_261_bool, var_0_bool, var_263_float, 3000.0, true, false);
				TaskReturn();
				if(!var_267_bool) { //@nz
				} else {
					var_208_bool = false;
			} else {
			if(var_211_float >= (var_192_float * var_192_float)) {
				var_0_bool->GetPFPosition(var_212_cvector); //@t
				@CanReachByPF(var_213_bool, var_212_cvector);
				if(!var_213_bool) { //@nz
					bool var_347_bool; float var_349_float;
					var_204_float = var_349_float;
					TaskCall(8);
					func_3676(var_355_bool, var_347_bool, var_0_bool, var_349_float, 3000.0, true, false);
					TaskReturn();
					if(!var_353_bool) { //@nz
						goto Label_3219;
					}
					var_208_bool = false;
					goto Label_3047;
				}
				if(!var_208_bool) { //@nz
					func_4242(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_3649(var_214_float);
					@StopAsync();
					var_208_bool = true;
					bool var_361_bool;
					func_4092(var_361_bool, var_0_bool);
					if(!var_361_bool) { //@nz
						goto Label_3219;
					}
				}
				@rand(var_214_float);
				bool var_364_bool;
				var_366_bool = var_214_float < 0.25;
				if(var_366_bool != 1) {
					bool var_367_bool;
					func_3606(true, var_367_bool);
					if(var_367_bool != 1)
						var_364_bool = false;
				}
				if(var_364_bool != 0) {
					@Face(var_0_bool);
					func_3656();
					@PlayAnimation("all", "attack_stay");
					bool var_404_bool; float var_405_float;
					func_3474(var_214_float, var_404_bool, var_405_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_3649(var_214_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_622_bool;
					func_3606(var_214_float, var_622_bool);
					var_623_bool = !var_622_bool; //@nz
					if(var_623_bool == 0) goto Label_3209;
					bool var_624_bool;
					func_4092(var_624_bool, var_0_bool);
					if(!var_624_bool) { //@nz
						goto Label_3219;
					}
					var_0_bool->GetPFPosition(var_205_cvector); //@t
					@GetPFPosition(var_206_cvector);
					if(!(((var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector)) < (var_405_float * var_405_float))) goto Label_3209;
					bool var_629_bool; float var_630_float;
					var_192_float = var_630_float;
					func_3310(var_213_bool, var_214_float, var_629_bool, var_630_float);
					var_631_bool = !var_629_bool; //@nz
					if(var_631_bool == 0) goto Label_3209;
					goto Label_3219;
			}
				bool var_632_bool; float var_633_float;
				var_192_float = var_633_float;
				func_3310(var_213_bool, var_214_float, var_632_bool, var_633_float);
				if(!var_632_bool) { //@nz
					goto Label_3219;
				}
				var_208_bool = true;

			}
		Label_3209:
			goto Label_3218;
			}
			Label_3218:
			}
		}
	Label_3219:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_207_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_5057(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_1943(var_21_object);
	TaskReturn();
}


// @pe
void func_5572(object var_102_object)
{
	bool var_103_bool; object var_104_object;
	func_3961(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		object var_107_object;
		func_4496(var_107_object);
		@ReportReputationChange(var_104_object, var_107_object, -0.07, true);
		func_4877(true);
	}
	func_4853();
	var_246_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


// @pe
void func_4549(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	cvector var_74_cvector;
	var_71_cvector = var_74_cvector;
	float var_72_float;
	func_4530(var_72_float, var_73_cvector, var_74_cvector);
	float var_81_float; cvector var_82_cvector;
	var_70_cvector = var_82_cvector;
	func_4539(var_81_float, var_82_cvector);
	float var_90_float; cvector var_91_cvector;
	var_71_cvector = var_91_cvector;
	func_4539(var_90_float, var_91_cvector);
	var_69_float = var_72_float / (var_81_float * var_90_float);
}


void func_4051(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


void func_4566(int var_126_int, string var_127_string)
{
	int var_129_int;
	@GetVariable(var_127_string, var_129_int);
	var_129_int = var_126_int;
}


void func_4056(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_4051(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3545(bool var_417_bool)
{
	bool var_418_bool = false;
	bool var_419_bool;
	func_3517(var_418_bool, var_419_bool);
	if(var_419_bool != 0) {
		bool var_436_bool;
		func_3561(var_417_bool, var_418_bool, var_436_bool);
		if(var_436_bool != 0)
			var_418_bool = true;
	}
	if(var_418_bool != 0) {
		var_417_bool = true;
		return 0;
	}
	var_417_bool = false;
}


void func_4571(float var_568_float)
{
	object var_570_object;
	@CreateFloatVector(var_570_object);
	var_570_object->add(var_568_float);
	if(var_568_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_570_object);
}
EMIT "Stack[-1] = 0";


void func_3561(bool var_0_bool, string var_4_string, bool var_436_bool)
{
	object var_442_object; float var_444_float; cvector var_445_cvector; cvector var_446_cvector;
	@GetScene(var_442_object);
	bool var_443_bool = false;
	
	for(;;) {
		cvector var_447_cvector;
		func_3946(var_447_cvector, var_0_bool);
		var_449_int = -var_447_cvector;
		@FindDirLength(var_444_float, var_449_int, var_4_string);
		if(var_444_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_445_cvector); //@t
				@GetPFPosition(var_446_cvector);
				@WaitForAnimEnd();
				func_3649(var_446_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_443_bool = true;
				bool var_454_bool;
				func_3517(var_446_cvector, var_454_bool);
				var_455_bool = !var_454_bool; //@nz
				if(var_455_bool == 0) goto Label_3602;
		}
		for(;;) {
			var_443_bool = var_436_bool;

		}

	Label_3602:
	}
}
EMIT "Stack[-5] = 0";


void func_4588(int var_121_int)
{
	float var_123_float;
	@GetGameTime(var_123_float);
	var_121_int = 1 + (var_123_float / 24);
}


// @pe
void func_5102(bool var_23_bool, object var_24_object, string var_25_string)
{
	if(var_25_string == "unholster") {
		bool var_28_bool; object var_29_object;
		var_24_object = var_29_object;
		func_5467(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x140c";
	}
	if(var_25_string == "player_shot") {
		bool var_32_bool; object var_33_object;
		var_24_object = var_33_object;
		func_5472(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x140c";
	}
	if(var_25_string == "battle") {
		bool var_49_bool; object var_50_object;
		var_24_object = var_50_object;
		func_5493(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = false;
}


void func_4597(int var_249_int)
{
	float var_251_float;
	@GetGameTime(var_251_float);
	int var_252_int;
	var_251_float = var_252_int;
	var_249_int = var_252_int % 24;
}


void func_4092(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_4056(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_3966(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_4605(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


