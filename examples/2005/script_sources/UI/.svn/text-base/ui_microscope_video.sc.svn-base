include ui_events.sci
include ui_microscope_base.sci

maintask UI_MicroscopeVideo
{
	var object video;
	var int xpos, ypos, xsize, ysize;
	var int iVideo;
	var string strVideo;
	
	void init(void) {
		xpos = 0; ypos = 0;
		iVideo = c_iNoBlood;
		@ClientToScreen(xpos, ypos);
		@GetWindowSize(xsize, ysize);
		UpdateVideo();
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		bool bLost;
		video->IsLost(bLost);
		if (bLost) {
			bool bRestored;
			video->Restore(bRestored);
			if (!bRestored)
				return;
		}
	
		video->StretchBlit(xpos, ypos, xsize, ysize);
		@StretchBlit("ocular", 0, 0, xsize, ysize);
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
	
		if (iMessage == iVideo) 
			return;
			
		if (video)
			video->Stop();
			
		iVideo = iMessage;
		UpdateVideo();
	}
	
	void UpdateVideo() {
		@ReleaseVideo(strVideo);
		if (iVideo == c_iNoBlood) {
			strVideo = "ui_no_blood.wmv";
		}
		else
		if (iVideo == c_iGoodHumanBlood) {
			strVideo = "ui_blood.wmv";
		}
		else
		if (iVideo == c_iDiseasedDeadHumanBlood) {
			strVideo = "ui_diseased_blood.wmv";
		}	
		else 
		if (iVideo == c_iDiseasedAliveHumanBlood) {
			strVideo = "ui_diseased_alive_blood.wmv";
		}
		else 
		if (iVideo == c_iDiseasedAliveBullBlood) {
			strVideo = "ui_bull_blood.wmv";
		}
		else 
		if (iVideo == c_iDiseasedAliveAvroksBlood) {
			strVideo = "ui_avroks_blood.wmv";
		}
		else 
		if (iVideo == c_iDiseasedAliveSimonBlood) {
			strVideo = "ui_simon_blood.wmv";
		}
		else {
			@Trace("WRONG BLOOD NUMBER");
			return;
		}
		@LoadVideo(strVideo);
		@FindVideo(video, strVideo);
		video->Play(true);			
	}
}
