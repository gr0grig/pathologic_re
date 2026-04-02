task TVideo
{
	var object video;
	var int xsize, ysize;
	var bool m_bKeyInterrupt;
	void init(string strVideo, bool bKeyInterrupt) {
		m_bKeyInterrupt = bKeyInterrupt;
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@GetWindowSize(xsize, ysize);
		@LoadVideo(strVideo);
		@FindVideo(video, strVideo);
		video->Play(false);
		@ProcessEvents();
		@SetOwnerDraw(false);
		@ShowCursor(true);
		@ReleaseVideo(strVideo);
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
	
		bool bPlaying;
		video->IsPlaying(bPlaying);
		if (bPlaying)
			video->StretchBlit(0, 0, xsize, ysize);
		else {
			video->StretchBlit(0, 0, xsize, ysize);
			@StopEventProcessing();
		}
	}	
	
	void OnKeyDown(int iKey) {
		if (!m_bKeyInterrupt)
			return;
		@StopEventProcessing();
		video->Stop();
	}
}