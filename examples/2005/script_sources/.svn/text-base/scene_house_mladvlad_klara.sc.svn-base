include std.sci
include scene_house_mladvlad_base.sci

maintask TScene : TSceneBase
{
	var bool m_bBlock;

	void OnLoad(void) {
		if (!m_bBlock) {
			float fTime;
			@GetGameTime(fTime);
			if (fTime >= 7 * 24) {
				m_bBlock = true;
				object actor;
				@AddActor(actor, "d8q01_well_block", self(), [0, 0, 0]);
			}
		}

		super.init();
	}
}
