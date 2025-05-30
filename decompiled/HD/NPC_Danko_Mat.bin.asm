GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Untrust
	Rage
	Discontent
	Patronage
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	HasItem
	reputation
	add
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png
	d8q01MladVladIsVictim
	volonteers_danko
	kill
	mladvlad
	d8q01BigVladIsVictim
	bigvlad
	toy_horse
	RemoveItemByType
	pt_map_boiny_main_entrance
	ShowMap
	playsound
	giveitem
	ood8Mat1
	d8q01BringBadBoy
	d8q01MatBringToy
	d8q01MatGotoToyHouse
	pt_map_d8q01_toyhouse
	AddMark
	quest_d8_01
	place_toy
	ood8Mat2
	d8q01MatGotoBoiny
	unlock_boiny
	ood8Mat3
	ood8Mat4
	ood8Mat5
	ood8Mat6
	ood8Mat7
	d8TalkToMat
	quest_d8_02
	completed
	d8q02
	feromicin
	d8q04
	d8q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x852
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x149 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x72a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x828 Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x89b Vars = (int)
		EVENT_6 Op = 0x8c1 Vars = ()
		EVENT_5 Op = 0x8d0 Vars = ()
		EVENT_45 Op = 0x8dd Vars = (bool)
		EVENT_0 Op = 0x8e9 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x994

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb44

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb42

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb46

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb48

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd79

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xaaa

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x9eb

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x9d9

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0xc37

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0xc43

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0xb89

0x69: Pop(2)
0x6a: PushEmpty(object, object)
0x6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Call2 0xbf0

0x6e: Pop(2)
0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral"
0x71: Call2 0x133

0x72: Pop(1)
0x73: Push((int) 513496)
0x74: @@ SetMessage(Stack[-1])
0x75: Pop(1)
0x76: @@ ClearReplies()
0x77: Pop(0)
0x78: Push((int) 513504)
0x79: Push((int) 14773)
0x7a: Push((int) 14746)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: Push((int) 513505)
0x7e: Push((int) 14748)
0x7f: Push((int) 14747)
0x80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81: Pop(3)
0x82: GOTO 0x115

0x83: PushEmpty(object, object)
0x84: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86: Call2 0xbf0

0x87: Pop(2)
0x88: PushEmpty(string)
0x89: Stack[-1] = "Neutral"
0x8a: Call2 0x133

0x8b: Pop(1)
0x8c: Push((int) 512350)
0x8d: @@ SetMessage(Stack[-1])
0x8e: Pop(1)
0x8f: @@ ClearReplies()
0x90: Pop(0)
0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 0
0x93: PushEmpty(bool)
0x94: Stack[-1] = (bool) 0
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0xc4f

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0xc5b

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Stack[-1] = (bool) 1
0xa0: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0xc66

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Stack[-1] = (bool) 1
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: Push((int) 513563)
0xa9: Push((int) 14813)
0xaa: Push((int) 14812)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: PushEmpty(bool, object)
0xae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Call2 0xc72

0xb0: Pop(1)
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: Push((int) 512352)
0xb3: Push((int) 13512)
0xb4: Push((int) 13511)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: PushEmpty(bool)
0xb8: Stack[-1] = (bool) 0
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0xc7e

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0xc2b

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Stack[-1] = (bool) 1
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 512366)
0xc6: Push((int) 13527)
0xc7: Push((int) 13526)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0xc8a

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcf: Push((int) 512357)
0xd0: Push((int) 13518)
0xd1: Push((int) 13517)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: PushEmpty(bool)
0xd5: Stack[-1] = (bool) 0
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0xc96

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0xcae

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: Push((int) 513752)
0xe3: Push((int) 14997)
0xe4: Push((int) 14996)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: PushEmpty(bool)
0xe8: Stack[-1] = (bool) 0
0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0xca2

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0xcba

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Stack[-1] = (bool) 1
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: Push((int) 513568)
0xf6: Push((int) 14818)
0xf7: Push((int) 14817)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: PushEmpty(bool)
0xfb: Stack[-1] = (bool) 0
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0xcd2

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0xc1f

0x104: Pop(1)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Stack[-1] = (bool) 1
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: Push((int) 513766)
0x109: Push((int) 15006)
0x10a: Push((int) 15005)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 512351)
0x10e: Push((int) -1)
0x10f: Push((int) 13510)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: GOTO 0x115

0x113: Return(); Pop(0)

0x114: GOTO 0x55

0x115: PushEmpty(bool)
0x116: Call2 0xb4a

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x119: @ lshWaitForAnimEnd()
0x11a: Pop(0)
0x11b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11c: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11d: GOTO 0x123

0x11e: PushEmpty(string)
0x11f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x120: Call2 0xa75

0x121: Pop(1)
0x122: GOTO 0x119

0x123: GOTO 0x132

0x124: Push("all")
0x125: Push("idle")
0x126: @ PlayAnimation(Stack[-2], Stack[-1])
0x127: Pop(2)
0x128: @ WaitForAnimEnd()
0x129: Pop(0)
0x12a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: GOTO 0x132

0x12d: Push("all")
0x12e: Push("idle")
0x12f: @ PlayAnimation(Stack[-2], Stack[-1])
0x130: Pop(2)
0x131: GOTO 0x128

0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: PushEmpty(bool)
0x135: Call2 0xb4a

0x136: Pop(0)
0x137: Pop(1); Push((bool) Stack[-1] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Return(); Pop(0)

0x13a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Return(); Pop(0)

0x13d: PushEmpty(string, bool)
0x13e: Stack[-2] = Stack[-3]
0x13f: Push("")
0x140: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-1] = (bool) 0
0x143: GOTO 0x145

0x144: Stack[-1] = (bool) 1
0x145: Call2 0xa85

0x146: Pop(2)
0x147: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: Push((int) 1)
0x14b: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x14c: PushEmpty()
0x14d: Call2 0xaa3

0x14e: Pop(0)
0x14f: Push((int) 14805)
0x150: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0xb8f

0x156: Pop(2)
0x157: Push((int) 14811)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xb98

0x15e: Pop(2)
0x15f: PushEmpty(object, object)
0x160: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x161: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162: Call2 0xc0f

0x163: Pop(2)
0x164: Push((int) 14812)
0x165: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0xbb4

0x16b: Pop(2)
0x16c: Push((int) 14816)
0x16d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(object, object)
0x170: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x171: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x172: Call2 0xbba

0x173: Pop(2)
0x174: PushEmpty(object, object)
0x175: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x176: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x177: Call2 0xb66

0x178: Pop(2)
0x179: PushEmpty(object, object)
0x17a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17c: Call2 0xb7c

0x17d: Pop(2)
0x17e: PushEmpty(object, object)
0x17f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call2 0xb6c

0x182: Pop(2)
0x183: Push((int) 13511)
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(object, object)
0x187: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x188: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x189: Call2 0xbd2

0x18a: Pop(2)
0x18b: Push((int) 13526)
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: PushEmpty(object, object)
0x18f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x190: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x191: Call2 0xbd8

0x192: Pop(2)
0x193: Push((int) 13517)
0x194: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: PushEmpty(object, object)
0x197: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call2 0xbde

0x19a: Pop(2)
0x19b: Push((int) 14996)
0x19c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19e: PushEmpty(object, object)
0x19f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call2 0xbe4

0x1a2: Pop(2)
0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call2 0xb4c

0x1a7: Pop(2)
0x1a8: Push((int) 15004)
0x1a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: PushEmpty(object, object)
0x1ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Call2 0xbba

0x1af: Pop(2)
0x1b0: Push((int) 14817)
0x1b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b3: PushEmpty(object, object)
0x1b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b6: Call2 0xbea

0x1b7: Pop(2)
0x1b8: PushEmpty(object, object)
0x1b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bb: Call2 0xb4c

0x1bc: Pop(2)
0x1bd: Push((int) 15002)
0x1be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c0: PushEmpty(object, object)
0x1c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c3: Call2 0xbba

0x1c4: Pop(2)
0x1c5: PushEmpty(object, object)
0x1c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0xb6c

0x1c9: Pop(2)
0x1ca: Push((int) 15007)
0x1cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1cd: PushEmpty(object, object)
0x1ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0xc09

0x1d1: Pop(2)
0x1d2: PushEmpty(object, object)
0x1d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call2 0xb7c

0x1d6: Pop(2)
0x1d7: PushEmpty(object, object)
0x1d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1da: Call2 0xbf6

0x1db: Pop(2)
0x1dc: PushEmpty(object, object)
0x1dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1df: Call2 0xb82

0x1e0: Pop(2)
0x1e1: Push((int) 37663)
0x1e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: PushEmpty(object, object)
0x1e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e7: Call2 0xc00

0x1e8: Pop(2)
0x1e9: Push((int) 37664)
0x1ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ec: PushEmpty(object, object)
0x1ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ef: Call2 0xc00

0x1f0: Pop(2)
0x1f1: Push((int) 14737)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0xc37

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call2 0xc43

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x202: PushEmpty(object, object)
0x203: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call2 0xb89

0x206: Pop(2)
0x207: PushEmpty(object, object)
0x208: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x209: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20a: Call2 0xbf0

0x20b: Pop(2)
0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0x133

0x20f: Pop(1)
0x210: Push((int) 513496)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 513504)
0x216: Push((int) 14773)
0x217: Push((int) 14746)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Push((int) 513505)
0x21b: Push((int) 14748)
0x21c: Push((int) 14747)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: PushEmpty(object, object)
0x221: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x222: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x223: Call2 0xbf0

0x224: Pop(2)
0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral"
0x227: Call2 0x133

0x228: Pop(1)
0x229: Push((int) 512350)
0x22a: @@ SetMessage(Stack[-1])
0x22b: Pop(1)
0x22c: @@ ClearReplies()
0x22d: Pop(0)
0x22e: PushEmpty(bool)
0x22f: Stack[-1] = (bool) 0
0x230: PushEmpty(bool)
0x231: Stack[-1] = (bool) 0
0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x234: Call2 0xc4f

0x235: Pop(1)
0x236: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x239: Call2 0xc5b

0x23a: Pop(1)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Stack[-1] = (bool) 1
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x240: Call2 0xc66

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: Push((int) 513563)
0x246: Push((int) 14813)
0x247: Push((int) 14812)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24c: Call2 0xc72

0x24d: Pop(1)
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: Push((int) 512352)
0x250: Push((int) 13512)
0x251: Push((int) 13511)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: PushEmpty(bool)
0x255: Stack[-1] = (bool) 0
0x256: PushEmpty(bool, object)
0x257: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x258: Call2 0xc7e

0x259: Pop(1)
0x25a: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25b: PushEmpty(bool, object)
0x25c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25d: Call2 0xc2b

0x25e: Pop(1)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Stack[-1] = (bool) 1
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: Push((int) 512366)
0x263: Push((int) 13527)
0x264: Push((int) 13526)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x269: Call2 0xc8a

0x26a: Pop(1)
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: Push((int) 512357)
0x26d: Push((int) 13518)
0x26e: Push((int) 13517)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: PushEmpty(bool)
0x272: Stack[-1] = (bool) 0
0x273: PushEmpty(bool, object)
0x274: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x275: Call2 0xc96

0x276: Pop(1)
0x277: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0xcae

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: Push((int) 513752)
0x280: Push((int) 14997)
0x281: Push((int) 14996)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: PushEmpty(bool)
0x285: Stack[-1] = (bool) 0
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0xca2

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28d: Call2 0xcba

0x28e: Pop(1)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Stack[-1] = (bool) 1
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: Push((int) 513568)
0x293: Push((int) 14818)
0x294: Push((int) 14817)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: PushEmpty(bool)
0x298: Stack[-1] = (bool) 0
0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Call2 0xcd2

0x29c: Pop(1)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0xc1f

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 1
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: Push((int) 513766)
0x2a6: Push((int) 15006)
0x2a7: Push((int) 15005)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 512351)
0x2ab: Push((int) -1)
0x2ac: Push((int) 13510)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 15006)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Untrust"
0x2b5: Call2 0x133

0x2b6: Pop(1)
0x2b7: Push((int) 513767)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 535938)
0x2bd: Push((int) 37660)
0x2be: Push((int) 37659)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 535937)
0x2c2: Push((int) 37662)
0x2c3: Push((int) 37658)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 37662)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Untrust"
0x2cc: Call2 0x133

0x2cd: Pop(1)
0x2ce: Push((int) 535941)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 535942)
0x2d4: Push((int) -1)
0x2d5: Push((int) 37663)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Push((int) 535943)
0x2d9: Push((int) -1)
0x2da: Push((int) 37664)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 37660)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x133

0x2e4: Pop(1)
0x2e5: Push((int) 535939)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 513768)
0x2eb: Push((int) -1)
0x2ec: Push((int) 15007)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 14818)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call2 0x133

0x2f6: Pop(1)
0x2f7: Push((int) 513569)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 513570)
0x2fd: Push((int) 14820)
0x2fe: Push((int) 14819)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Push((int) 14820)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x305: PushEmpty(string)
0x306: Stack[-1] = "Rage"
0x307: Call2 0x133

0x308: Pop(1)
0x309: Push((int) 513571)
0x30a: @@ SetMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ ClearReplies()
0x30d: Pop(0)
0x30e: Push((int) 513572)
0x30f: Push((int) 15001)
0x310: Push((int) 14821)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Push((int) 535934)
0x314: Push((int) 37654)
0x315: Push((int) 37653)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Push((int) 37654)
0x31a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x31c: PushEmpty(string)
0x31d: Stack[-1] = "Neutral"
0x31e: Call2 0x133

0x31f: Pop(1)
0x320: Push((int) 535935)
0x321: @@ SetMessage(Stack[-1])
0x322: Pop(1)
0x323: @@ ClearReplies()
0x324: Pop(0)
0x325: Push((int) 535936)
0x326: Push((int) 15001)
0x327: Push((int) 37655)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: Push((int) 15001)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral"
0x330: Call2 0x133

0x331: Pop(1)
0x332: Push((int) 513757)
0x333: @@ SetMessage(Stack[-1])
0x334: Pop(1)
0x335: @@ ClearReplies()
0x336: Pop(0)
0x337: Push((int) 513758)
0x338: Push((int) -1)
0x339: Push((int) 15002)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 14997)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call2 0x133

0x343: Pop(1)
0x344: Push((int) 513753)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 513754)
0x34a: Push((int) 14999)
0x34b: Push((int) 14998)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Return(); Pop(0)

0x34f: Push((int) 14999)
0x350: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x352: PushEmpty(string)
0x353: Stack[-1] = "Rage"
0x354: Call2 0x133

0x355: Pop(1)
0x356: Push((int) 513755)
0x357: @@ SetMessage(Stack[-1])
0x358: Pop(1)
0x359: @@ ClearReplies()
0x35a: Pop(0)
0x35b: Push((int) 513756)
0x35c: Push((int) 15003)
0x35d: Push((int) 15000)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Push((int) 535931)
0x361: Push((int) 37650)
0x362: Push((int) 37649)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Return(); Pop(0)

0x366: Push((int) 37650)
0x367: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x369: PushEmpty(string)
0x36a: Stack[-1] = "Neutral"
0x36b: Call2 0x133

0x36c: Pop(1)
0x36d: Push((int) 535932)
0x36e: @@ SetMessage(Stack[-1])
0x36f: Pop(1)
0x370: @@ ClearReplies()
0x371: Pop(0)
0x372: Push((int) 535933)
0x373: Push((int) 15003)
0x374: Push((int) 37651)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 15003)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Neutral"
0x37d: Call2 0x133

0x37e: Pop(1)
0x37f: Push((int) 513759)
0x380: @@ SetMessage(Stack[-1])
0x381: Pop(1)
0x382: @@ ClearReplies()
0x383: Pop(0)
0x384: Push((int) 513760)
0x385: Push((int) -1)
0x386: Push((int) 15004)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: Return(); Pop(0)

0x38a: Push((int) 13518)
0x38b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x38d: PushEmpty(string)
0x38e: Stack[-1] = "Untrust"
0x38f: Call2 0x133

0x390: Pop(1)
0x391: Push((int) 512358)
0x392: @@ SetMessage(Stack[-1])
0x393: Pop(1)
0x394: @@ ClearReplies()
0x395: Pop(0)
0x396: Push((int) 512359)
0x397: Push((int) 13520)
0x398: Push((int) 13519)
0x399: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: Push((int) 513497)
0x39c: Push((int) 14739)
0x39d: Push((int) 14738)
0x39e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: Return(); Pop(0)

0x3a1: Push((int) 14739)
0x3a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = "Untrust"
0x3a6: Call2 0x133

0x3a7: Pop(1)
0x3a8: Push((int) 513498)
0x3a9: @@ SetMessage(Stack[-1])
0x3aa: Pop(1)
0x3ab: @@ ClearReplies()
0x3ac: Pop(0)
0x3ad: Push((int) 513499)
0x3ae: Push((int) 14741)
0x3af: Push((int) 14740)
0x3b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: Return(); Pop(0)

0x3b3: Push((int) 14741)
0x3b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = "Neutral"
0x3b8: Call2 0x133

0x3b9: Pop(1)
0x3ba: Push((int) 513500)
0x3bb: @@ SetMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ ClearReplies()
0x3be: Pop(0)
0x3bf: Push((int) 513501)
0x3c0: Push((int) 14743)
0x3c1: Push((int) 14742)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Return(); Pop(0)

0x3c5: Push((int) 14743)
0x3c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c8: PushEmpty(string)
0x3c9: Stack[-1] = "Neutral"
0x3ca: Call2 0x133

0x3cb: Pop(1)
0x3cc: Push((int) 513502)
0x3cd: @@ SetMessage(Stack[-1])
0x3ce: Pop(1)
0x3cf: @@ ClearReplies()
0x3d0: Pop(0)
0x3d1: Push((int) 513503)
0x3d2: Push((int) 13524)
0x3d3: Push((int) 14744)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 13520)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral"
0x3dc: Call2 0x133

0x3dd: Pop(1)
0x3de: Push((int) 512360)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 512361)
0x3e4: Push((int) 13522)
0x3e5: Push((int) 13521)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 13522)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call2 0x133

0x3ef: Pop(1)
0x3f0: Push((int) 512362)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 512363)
0x3f6: Push((int) 13524)
0x3f7: Push((int) 13523)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 13524)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Discontent"
0x400: Call2 0x133

0x401: Pop(1)
0x402: Push((int) 512364)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 512365)
0x408: Push((int) -1)
0x409: Push((int) 13525)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 13527)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Discontent"
0x412: Call2 0x133

0x413: Pop(1)
0x414: Push((int) 512367)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 512368)
0x41a: Push((int) 13529)
0x41b: Push((int) 13528)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Push((int) 535986)
0x41f: Push((int) 37715)
0x420: Push((int) 37714)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 37715)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Untrust"
0x429: Call2 0x133

0x42a: Pop(1)
0x42b: Push((int) 535987)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 535988)
0x431: Push((int) 37717)
0x432: Push((int) 37716)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 37717)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Untrust"
0x43b: Call2 0x133

0x43c: Pop(1)
0x43d: Push((int) 535989)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 535990)
0x443: Push((int) 13531)
0x444: Push((int) 37718)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 13529)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Discontent"
0x44d: Call2 0x133

0x44e: Pop(1)
0x44f: Push((int) 512369)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 512370)
0x455: Push((int) 13531)
0x456: Push((int) 13530)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Push((int) 535930)
0x45a: Push((int) -1)
0x45b: Push((int) 37648)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 13531)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Discontent"
0x464: Call2 0x133

0x465: Pop(1)
0x466: Push((int) 512371)
0x467: @@ SetMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ ClearReplies()
0x46a: Pop(0)
0x46b: Push((int) 512372)
0x46c: Push((int) -1)
0x46d: Push((int) 13532)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 13512)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Discontent"
0x476: Call2 0x133

0x477: Pop(1)
0x478: Push((int) 512353)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 513529)
0x47e: Push((int) 14775)
0x47f: Push((int) 14774)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Return(); Pop(0)

0x483: Push((int) 14775)
0x484: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x486: PushEmpty(string)
0x487: Stack[-1] = "Discontent"
0x488: Call2 0x133

0x489: Pop(1)
0x48a: Push((int) 513530)
0x48b: @@ SetMessage(Stack[-1])
0x48c: Pop(1)
0x48d: @@ ClearReplies()
0x48e: Pop(0)
0x48f: Push((int) 513531)
0x490: Push((int) 14777)
0x491: Push((int) 14776)
0x492: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x493: Pop(3)
0x494: Return(); Pop(0)

0x495: Push((int) 14777)
0x496: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x498: PushEmpty(string)
0x499: Stack[-1] = "Discontent"
0x49a: Call2 0x133

0x49b: Pop(1)
0x49c: Push((int) 513532)
0x49d: @@ SetMessage(Stack[-1])
0x49e: Pop(1)
0x49f: @@ ClearReplies()
0x4a0: Pop(0)
0x4a1: Push((int) 513533)
0x4a2: Push((int) 14779)
0x4a3: Push((int) 14778)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: Push((int) 513536)
0x4a7: Push((int) 14782)
0x4a8: Push((int) 14781)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Return(); Pop(0)

0x4ac: Push((int) 14782)
0x4ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Discontent"
0x4b1: Call2 0x133

0x4b2: Pop(1)
0x4b3: Push((int) 513537)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 513538)
0x4b9: Push((int) 14784)
0x4ba: Push((int) 14783)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Push((int) 14784)
0x4bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Discontent"
0x4c3: Call2 0x133

0x4c4: Pop(1)
0x4c5: Push((int) 513539)
0x4c6: @@ SetMessage(Stack[-1])
0x4c7: Pop(1)
0x4c8: @@ ClearReplies()
0x4c9: Pop(0)
0x4ca: Push((int) 513540)
0x4cb: Push((int) 14786)
0x4cc: Push((int) 14785)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: Return(); Pop(0)

0x4d0: Push((int) 14786)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Discontent"
0x4d5: Call2 0x133

0x4d6: Pop(1)
0x4d7: Push((int) 513541)
0x4d8: @@ SetMessage(Stack[-1])
0x4d9: Pop(1)
0x4da: @@ ClearReplies()
0x4db: Pop(0)
0x4dc: Push((int) 513542)
0x4dd: Push((int) -1)
0x4de: Push((int) 14787)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 14779)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Discontent"
0x4e7: Call2 0x133

0x4e8: Pop(1)
0x4e9: Push((int) 513534)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 513535)
0x4ef: Push((int) 14788)
0x4f0: Push((int) 14780)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Return(); Pop(0)

0x4f4: Push((int) 14788)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Discontent"
0x4f9: Call2 0x133

0x4fa: Pop(1)
0x4fb: Push((int) 513543)
0x4fc: @@ SetMessage(Stack[-1])
0x4fd: Pop(1)
0x4fe: @@ ClearReplies()
0x4ff: Pop(0)
0x500: Push((int) 513544)
0x501: Push((int) 14790)
0x502: Push((int) 14789)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: Return(); Pop(0)

0x506: Push((int) 14790)
0x507: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x509: PushEmpty(string)
0x50a: Stack[-1] = "Discontent"
0x50b: Call2 0x133

0x50c: Pop(1)
0x50d: Push((int) 513545)
0x50e: @@ SetMessage(Stack[-1])
0x50f: Pop(1)
0x510: @@ ClearReplies()
0x511: Pop(0)
0x512: Push((int) 513546)
0x513: Push((int) -1)
0x514: Push((int) 14791)
0x515: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x516: Pop(3)
0x517: Return(); Pop(0)

0x518: Push((int) 14813)
0x519: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x51b: PushEmpty(string)
0x51c: Stack[-1] = "Neutral"
0x51d: Call2 0x133

0x51e: Pop(1)
0x51f: Push((int) 513564)
0x520: @@ SetMessage(Stack[-1])
0x521: Pop(1)
0x522: @@ ClearReplies()
0x523: Pop(0)
0x524: Push((int) 513565)
0x525: Push((int) 14815)
0x526: Push((int) 14814)
0x527: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(3)
0x529: Return(); Pop(0)

0x52a: Push((int) 14815)
0x52b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x52d: PushEmpty(string)
0x52e: Stack[-1] = "Neutral"
0x52f: Call2 0x133

0x530: Pop(1)
0x531: Push((int) 513566)
0x532: @@ SetMessage(Stack[-1])
0x533: Pop(1)
0x534: @@ ClearReplies()
0x535: Pop(0)
0x536: Push((int) 513567)
0x537: Push((int) -1)
0x538: Push((int) 14816)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Return(); Pop(0)

0x53c: Push((int) 14748)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Discontent"
0x541: Call2 0x133

0x542: Pop(1)
0x543: Push((int) 513506)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 513507)
0x549: Push((int) 14750)
0x54a: Push((int) 14749)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Push((int) 513513)
0x54e: Push((int) 14756)
0x54f: Push((int) 14755)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Return(); Pop(0)

0x553: Push((int) 14756)
0x554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x556: PushEmpty(string)
0x557: Stack[-1] = "Patronage"
0x558: Call2 0x133

0x559: Pop(1)
0x55a: Push((int) 513514)
0x55b: @@ SetMessage(Stack[-1])
0x55c: Pop(1)
0x55d: @@ ClearReplies()
0x55e: Pop(0)
0x55f: Push((int) 513515)
0x560: Push((int) 14758)
0x561: Push((int) 14757)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Push((int) 513517)
0x565: Push((int) 14760)
0x566: Push((int) 14759)
0x567: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x568: Pop(3)
0x569: Return(); Pop(0)

0x56a: Push((int) 14760)
0x56b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x56d: PushEmpty(string)
0x56e: Stack[-1] = "Patronage"
0x56f: Call2 0x133

0x570: Pop(1)
0x571: Push((int) 513518)
0x572: @@ SetMessage(Stack[-1])
0x573: Pop(1)
0x574: @@ ClearReplies()
0x575: Pop(0)
0x576: Push((int) 513520)
0x577: Push((int) 14750)
0x578: Push((int) 14763)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: Return(); Pop(0)

0x57c: Push((int) 14758)
0x57d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x57f: PushEmpty(string)
0x580: Stack[-1] = "Patronage"
0x581: Call2 0x133

0x582: Pop(1)
0x583: Push((int) 513516)
0x584: @@ SetMessage(Stack[-1])
0x585: Pop(1)
0x586: @@ ClearReplies()
0x587: Pop(0)
0x588: Push((int) 513519)
0x589: Push((int) 14750)
0x58a: Push((int) 14761)
0x58b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58c: Pop(3)
0x58d: Return(); Pop(0)

0x58e: Push((int) 14750)
0x58f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x591: PushEmpty(string)
0x592: Stack[-1] = "Discontent"
0x593: Call2 0x133

0x594: Pop(1)
0x595: Push((int) 513508)
0x596: @@ SetMessage(Stack[-1])
0x597: Pop(1)
0x598: @@ ClearReplies()
0x599: Pop(0)
0x59a: Push((int) 513521)
0x59b: Push((int) 14766)
0x59c: Push((int) 14765)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Push((int) 513509)
0x5a0: Push((int) 14752)
0x5a1: Push((int) 14751)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Push((int) 14752)
0x5a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = "Patronage"
0x5aa: Call2 0x133

0x5ab: Pop(1)
0x5ac: Push((int) 513510)
0x5ad: @@ SetMessage(Stack[-1])
0x5ae: Pop(1)
0x5af: @@ ClearReplies()
0x5b0: Pop(0)
0x5b1: Push((int) 513511)
0x5b2: Push((int) 14754)
0x5b3: Push((int) 14753)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: Return(); Pop(0)

0x5b7: Push((int) 14754)
0x5b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5ba: PushEmpty(string)
0x5bb: Stack[-1] = "Patronage"
0x5bc: Call2 0x133

0x5bd: Pop(1)
0x5be: Push((int) 513512)
0x5bf: @@ SetMessage(Stack[-1])
0x5c0: Pop(1)
0x5c1: @@ ClearReplies()
0x5c2: Pop(0)
0x5c3: Push((int) 513547)
0x5c4: Push((int) 14773)
0x5c5: Push((int) 14792)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Return(); Pop(0)

0x5c9: Push((int) 14766)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Discontent"
0x5ce: Call2 0x133

0x5cf: Pop(1)
0x5d0: Push((int) 513522)
0x5d1: @@ SetMessage(Stack[-1])
0x5d2: Pop(1)
0x5d3: @@ ClearReplies()
0x5d4: Pop(0)
0x5d5: Push((int) 513523)
0x5d6: Push((int) 14769)
0x5d7: Push((int) 14767)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: PushEmpty(bool, object)
0x5db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5dc: Call2 0xcc6

0x5dd: Pop(1)
0x5de: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5df: Push((int) 513524)
0x5e0: Push((int) 14769)
0x5e1: Push((int) 14768)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 14769)
0x5e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Discontent"
0x5ea: Call2 0x133

0x5eb: Pop(1)
0x5ec: Push((int) 513525)
0x5ed: @@ SetMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ ClearReplies()
0x5f0: Pop(0)
0x5f1: Push((int) 513526)
0x5f2: Push((int) 14773)
0x5f3: Push((int) 14770)
0x5f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: Push((int) 513527)
0x5f7: Push((int) -1)
0x5f8: Push((int) 14772)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Return(); Pop(0)

0x5fc: Push((int) 14773)
0x5fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x5ff: PushEmpty(string)
0x600: Stack[-1] = "Rage"
0x601: Call2 0x133

0x602: Pop(1)
0x603: Push((int) 513528)
0x604: @@ SetMessage(Stack[-1])
0x605: Pop(1)
0x606: @@ ClearReplies()
0x607: Pop(0)
0x608: Push((int) 513548)
0x609: Push((int) 14796)
0x60a: Push((int) 14795)
0x60b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(3)
0x60d: Return(); Pop(0)

0x60e: Push((int) 14796)
0x60f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x611: PushEmpty(string)
0x612: Stack[-1] = "Rage"
0x613: Call2 0x133

0x614: Pop(1)
0x615: Push((int) 513549)
0x616: @@ SetMessage(Stack[-1])
0x617: Pop(1)
0x618: @@ ClearReplies()
0x619: Pop(0)
0x61a: Push((int) 513550)
0x61b: Push((int) 14800)
0x61c: Push((int) 14797)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Push((int) 513551)
0x620: Push((int) 14799)
0x621: Push((int) 14798)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: Push((int) 14799)
0x626: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x628: PushEmpty(string)
0x629: Stack[-1] = "Rage"
0x62a: Call2 0x133

0x62b: Pop(1)
0x62c: Push((int) 513552)
0x62d: @@ SetMessage(Stack[-1])
0x62e: Pop(1)
0x62f: @@ ClearReplies()
0x630: Pop(0)
0x631: Push((int) 513554)
0x632: Push((int) 14800)
0x633: Push((int) 14801)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Return(); Pop(0)

0x637: Push((int) 14800)
0x638: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63a: PushEmpty(string)
0x63b: Stack[-1] = "Rage"
0x63c: Call2 0x133

0x63d: Pop(1)
0x63e: Push((int) 513553)
0x63f: @@ SetMessage(Stack[-1])
0x640: Pop(1)
0x641: @@ ClearReplies()
0x642: Pop(0)
0x643: Push((int) 513556)
0x644: Push((int) -1)
0x645: Push((int) 14805)
0x646: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(3)
0x648: Push((int) 513557)
0x649: Push((int) 14807)
0x64a: Push((int) 14806)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Push((int) 14807)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Discontent"
0x653: Call2 0x133

0x654: Pop(1)
0x655: Push((int) 513558)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: Push((int) 513559)
0x65b: Push((int) 14810)
0x65c: Push((int) 14808)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Push((int) 513560)
0x660: Push((int) -1)
0x661: Push((int) 14809)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: Return(); Pop(0)

0x665: Push((int) 14810)
0x666: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x668: PushEmpty(string)
0x669: Stack[-1] = "Discontent"
0x66a: Call2 0x133

0x66b: Pop(1)
0x66c: Push((int) 513561)
0x66d: @@ SetMessage(Stack[-1])
0x66e: Pop(1)
0x66f: @@ ClearReplies()
0x670: Pop(0)
0x671: Push((int) 513562)
0x672: Push((int) -1)
0x673: Push((int) 14811)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x678: PushEmpty(bool)
0x679: Call2 0xb4a

0x67a: Pop(0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67c: @ lshStopAnimation()
0x67d: Pop(0)
0x67e: GOTO 0x681

0x67f: @ StopAnimation()
0x680: Pop(0)
0x681: Return(); Pop(0)

0x682: GOTO 0x14a

0x683: Return(); Pop(0)

0x684: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x685: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x686: PushEmpty(bool, object, float)
0x687: Stack[-2] = Stack[-12]
0x688: Stack[-1] = (float) 70.0
0x689: Call2 0x994

0x68a: Pop(2)
0x68b: Pop(1); Push((bool) Stack[-1] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68d: Stack[-10] = (int) -2
0x68e: Return(); Pop(8)

0x68f: @ CreateDialog(Stack[-4])
0x690: Pop(0)
0x691: PushEmpty(int)
0x692: Call2 0xb44

0x693: Pop(0)
0x694: @@ SetNPCName(Stack[-1])
0x695: Pop(1)
0x696: PushEmpty(int)
0x697: Call2 0xb42

0x698: Pop(0)
0x699: @@ SetNPCDescription(Stack[-1])
0x69a: Pop(1)
0x69b: PushEmpty(string)
0x69c: Call2 0xb46

0x69d: Pop(0)
0x69e: @@ SetPhoto(Stack[-1])
0x69f: Pop(1)
0x6a0: PushEmpty(string)
0x6a1: Call2 0xb48

0x6a2: Pop(0)
0x6a3: @@ SetPhoto2(Stack[-1])
0x6a4: Pop(1)
0x6a5: PushEmpty(int)
0x6a6: Call2 0xd79

0x6a7: Pop(0)
0x6a8: @@ SetPlayerName(Stack[-1])
0x6a9: Pop(1)
0x6aa: Stack[-2] = (int) -1
0x6ab: @ IsOverrideActive(Stack[-3])
0x6ac: Pop(0)
0x6ad: Push(Stack[-3])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-10] = (int) -2
0x6b0: Return(); Pop(8)

0x6b1: @ DoDialog(Stack[-4])
0x6b2: Pop(0)
0x6b3: PushEmpty(bool, object)
0x6b4: PushEmpty(object)
0x6b5: Call2 0xaaa

0x6b6: Stack[-2] = Stack[-1]
0x6b7: Pop(1)
0x6b8: Call2 0x9eb

0x6b9: Pop(2)
0x6ba: PushEmpty(object, object)
0x6bb: Stack[-2] = Stack[-11]
0x6bc: Stack[-1] = Stack[-6]
0x6bd: Push(-2, 4); TaskCall(3)
0x6be: Call2 0x6d5

0x6bf: Pop(-2, 4); TaskReturn
0x6c0: Pop(2)
0x6c1: @@ IsDialogEnd(Stack[-1])
0x6c2: Pop(0)
0x6c3: Pop(0); Push((bool) Stack[-1] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c5: @ sync()
0x6c6: Pop(0)
0x6c7: @@ IsDialogEnd(Stack[-1])
0x6c8: Pop(0)
0x6c9: GOTO 0x6c3

0x6ca: PushEmpty(object)
0x6cb: Stack[-1] = Stack[-10]
0x6cc: Call2 0x9d9

0x6cd: Pop(1)
0x6ce: @ StopDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: @@ GetReturnValue(Stack[-2])
0x6d1: Pop(0)
0x6d2: Stack[-10] = Stack[-2]
0x6d3: Return(); Pop(8)

0x6d4: Stack[-4] = 0
0x6d5: PushEmpty()
0x6d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6d7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6d8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6d9: Push((int) 1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral"
0x6dd: Call2 0x714

0x6de: Pop(1)
0x6df: Push((int) 535284)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: Push((int) 535285)
0x6e5: Push((int) 36962)
0x6e6: Push((int) 36961)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Push((int) 535292)
0x6ea: Push((int) -1)
0x6eb: Push((int) 36968)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Push((int) 535293)
0x6ef: Push((int) -1)
0x6f0: Push((int) 36969)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: GOTO 0x6f6

0x6f4: Return(); Pop(0)

0x6f5: GOTO 0x6d9

0x6f6: PushEmpty(bool)
0x6f7: Call2 0xb4a

0x6f8: Pop(0)
0x6f9: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6fa: @ lshWaitForAnimEnd()
0x6fb: Pop(0)
0x6fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6fd: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fe: GOTO 0x704

0x6ff: PushEmpty(string)
0x700: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x701: Call2 0xa75

0x702: Pop(1)
0x703: GOTO 0x6fa

0x704: GOTO 0x713

0x705: Push("all")
0x706: Push("idle")
0x707: @ PlayAnimation(Stack[-2], Stack[-1])
0x708: Pop(2)
0x709: @ WaitForAnimEnd()
0x70a: Pop(0)
0x70b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: GOTO 0x713

0x70e: Push("all")
0x70f: Push("idle")
0x710: @ PlayAnimation(Stack[-2], Stack[-1])
0x711: Pop(2)
0x712: GOTO 0x709

0x713: Return(); Pop(0)

0x714: PushEmpty()
0x715: PushEmpty(bool)
0x716: Call2 0xb4a

0x717: Pop(0)
0x718: Pop(1); Push((bool) Stack[-1] == 0)
0x719: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x71a: Return(); Pop(0)

0x71b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x71c: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71d: Return(); Pop(0)

0x71e: PushEmpty(string, bool)
0x71f: Stack[-2] = Stack[-3]
0x720: Push("")
0x721: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x723: Stack[-1] = (bool) 0
0x724: GOTO 0x726

0x725: Stack[-1] = (bool) 1
0x726: Call2 0xa85

0x727: Pop(2)
0x728: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x729: Return(); Pop(0)

0x72a: PushEmpty()
0x72b: Push((int) 1)
0x72c: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x72d: PushEmpty()
0x72e: Call2 0xaa3

0x72f: Pop(0)
0x730: Push((int) 36960)
0x731: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x732: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x733: PushEmpty(string)
0x734: Stack[-1] = "Neutral"
0x735: Call2 0x714

0x736: Pop(1)
0x737: Push((int) 535284)
0x738: @@ SetMessage(Stack[-1])
0x739: Pop(1)
0x73a: @@ ClearReplies()
0x73b: Pop(0)
0x73c: Push((int) 535285)
0x73d: Push((int) 36962)
0x73e: Push((int) 36961)
0x73f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x740: Pop(3)
0x741: Push((int) 535292)
0x742: Push((int) -1)
0x743: Push((int) 36968)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: Push((int) 535293)
0x747: Push((int) -1)
0x748: Push((int) 36969)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Return(); Pop(0)

0x74c: Push((int) 36962)
0x74d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x74f: PushEmpty(string)
0x750: Stack[-1] = "Neutral"
0x751: Call2 0x714

0x752: Pop(1)
0x753: Push((int) 535286)
0x754: @@ SetMessage(Stack[-1])
0x755: Pop(1)
0x756: @@ ClearReplies()
0x757: Pop(0)
0x758: Push((int) 535287)
0x759: Push((int) 36964)
0x75a: Push((int) 36963)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: Push((int) 535291)
0x75e: Push((int) -1)
0x75f: Push((int) 36967)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Return(); Pop(0)

0x763: Push((int) 36964)
0x764: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x766: PushEmpty(string)
0x767: Stack[-1] = "Neutral"
0x768: Call2 0x714

0x769: Pop(1)
0x76a: Push((int) 535288)
0x76b: @@ SetMessage(Stack[-1])
0x76c: Pop(1)
0x76d: @@ ClearReplies()
0x76e: Pop(0)
0x76f: Push((int) 535289)
0x770: Push((int) -1)
0x771: Push((int) 36965)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push((int) 535290)
0x775: Push((int) -1)
0x776: Push((int) 36966)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x77b: PushEmpty(bool)
0x77c: Call2 0xb4a

0x77d: Pop(0)
0x77e: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77f: @ lshStopAnimation()
0x780: Pop(0)
0x781: GOTO 0x784

0x782: @ StopAnimation()
0x783: Pop(0)
0x784: Return(); Pop(0)

0x785: GOTO 0x72b

0x786: Return(); Pop(0)

0x787: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x788: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x789: PushEmpty(bool, object, float)
0x78a: Stack[-2] = Stack[-12]
0x78b: Stack[-1] = (float) 70.0
0x78c: Call2 0x994

0x78d: Pop(2)
0x78e: Pop(1); Push((bool) Stack[-1] == 0)
0x78f: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x790: Stack[-10] = (int) -2
0x791: Return(); Pop(8)

0x792: @ CreateDialog(Stack[-4])
0x793: Pop(0)
0x794: PushEmpty(int)
0x795: Call2 0xb44

0x796: Pop(0)
0x797: @@ SetNPCName(Stack[-1])
0x798: Pop(1)
0x799: PushEmpty(int)
0x79a: Call2 0xb42

0x79b: Pop(0)
0x79c: @@ SetNPCDescription(Stack[-1])
0x79d: Pop(1)
0x79e: PushEmpty(string)
0x79f: Call2 0xb46

0x7a0: Pop(0)
0x7a1: @@ SetPhoto(Stack[-1])
0x7a2: Pop(1)
0x7a3: PushEmpty(string)
0x7a4: Call2 0xb48

0x7a5: Pop(0)
0x7a6: @@ SetPhoto2(Stack[-1])
0x7a7: Pop(1)
0x7a8: PushEmpty(int)
0x7a9: Call2 0xd79

0x7aa: Pop(0)
0x7ab: @@ SetPlayerName(Stack[-1])
0x7ac: Pop(1)
0x7ad: Stack[-2] = (int) -1
0x7ae: @ IsOverrideActive(Stack[-3])
0x7af: Pop(0)
0x7b0: Push(Stack[-3])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b2: Stack[-10] = (int) -2
0x7b3: Return(); Pop(8)

0x7b4: @ DoDialog(Stack[-4])
0x7b5: Pop(0)
0x7b6: PushEmpty(bool, object)
0x7b7: PushEmpty(object)
0x7b8: Call2 0xaaa

0x7b9: Stack[-2] = Stack[-1]
0x7ba: Pop(1)
0x7bb: Call2 0x9eb

0x7bc: Pop(2)
0x7bd: PushEmpty(object, object)
0x7be: Stack[-2] = Stack[-11]
0x7bf: Stack[-1] = Stack[-6]
0x7c0: Push(-2, 4); TaskCall(5)
0x7c1: Call2 0x7d8

0x7c2: Pop(-2, 4); TaskReturn
0x7c3: Pop(2)
0x7c4: @@ IsDialogEnd(Stack[-1])
0x7c5: Pop(0)
0x7c6: Pop(0); Push((bool) Stack[-1] == 0)
0x7c7: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7c8: @ sync()
0x7c9: Pop(0)
0x7ca: @@ IsDialogEnd(Stack[-1])
0x7cb: Pop(0)
0x7cc: GOTO 0x7c6

0x7cd: PushEmpty(object)
0x7ce: Stack[-1] = Stack[-10]
0x7cf: Call2 0x9d9

0x7d0: Pop(1)
0x7d1: @ StopDialog(Stack[-4])
0x7d2: Pop(0)
0x7d3: @@ GetReturnValue(Stack[-2])
0x7d4: Pop(0)
0x7d5: Stack[-10] = Stack[-2]
0x7d6: Return(); Pop(8)

0x7d7: Stack[-4] = 0
0x7d8: PushEmpty()
0x7d9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7da: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7db: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7dc: Push((int) 1)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7de: PushEmpty(string)
0x7df: Stack[-1] = "Neutral"
0x7e0: Call2 0x812

0x7e1: Pop(1)
0x7e2: Push((int) 540548)
0x7e3: @@ SetMessage(Stack[-1])
0x7e4: Pop(1)
0x7e5: @@ ClearReplies()
0x7e6: Pop(0)
0x7e7: Push((int) 540549)
0x7e8: Push((int) -1)
0x7e9: Push((int) 42558)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: Push((int) 540797)
0x7ed: Push((int) -1)
0x7ee: Push((int) 42846)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: GOTO 0x7f4

0x7f2: Return(); Pop(0)

0x7f3: GOTO 0x7dc

0x7f4: PushEmpty(bool)
0x7f5: Call2 0xb4a

0x7f6: Pop(0)
0x7f7: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7f8: @ lshWaitForAnimEnd()
0x7f9: Pop(0)
0x7fa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fc: GOTO 0x802

0x7fd: PushEmpty(string)
0x7fe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7ff: Call2 0xa75

0x800: Pop(1)
0x801: GOTO 0x7f8

0x802: GOTO 0x811

0x803: Push("all")
0x804: Push("idle")
0x805: @ PlayAnimation(Stack[-2], Stack[-1])
0x806: Pop(2)
0x807: @ WaitForAnimEnd()
0x808: Pop(0)
0x809: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: GOTO 0x811

0x80c: Push("all")
0x80d: Push("idle")
0x80e: @ PlayAnimation(Stack[-2], Stack[-1])
0x80f: Pop(2)
0x810: GOTO 0x807

0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: PushEmpty(bool)
0x814: Call2 0xb4a

0x815: Pop(0)
0x816: Pop(1); Push((bool) Stack[-1] == 0)
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: Return(); Pop(0)

0x819: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x81a: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x81b: Return(); Pop(0)

0x81c: PushEmpty(string, bool)
0x81d: Stack[-2] = Stack[-3]
0x81e: Push("")
0x81f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x821: Stack[-1] = (bool) 0
0x822: GOTO 0x824

0x823: Stack[-1] = (bool) 1
0x824: Call2 0xa85

0x825: Pop(2)
0x826: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x827: Return(); Pop(0)

0x828: PushEmpty()
0x829: Push((int) 1)
0x82a: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x82b: PushEmpty()
0x82c: Call2 0xaa3

0x82d: Pop(0)
0x82e: Push((int) 42557)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Neutral"
0x833: Call2 0x812

0x834: Pop(1)
0x835: Push((int) 540548)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 540549)
0x83b: Push((int) -1)
0x83c: Push((int) 42558)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Push((int) 540797)
0x840: Push((int) -1)
0x841: Push((int) 42846)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Return(); Pop(0)

0x845: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x846: PushEmpty(bool)
0x847: Call2 0xb4a

0x848: Pop(0)
0x849: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84a: @ lshStopAnimation()
0x84b: Pop(0)
0x84c: GOTO 0x84f

0x84d: @ StopAnimation()
0x84e: Pop(0)
0x84f: Return(); Pop(0)

0x850: GOTO 0x829

0x851: Return(); Pop(0)

0x852: PushEmpty()
0x853: Call2 0x856

0x854: Pop(0)
0x855: Return(); Pop(0)

0x856: PushEmpty(bool)
0x857: Call2 0x98f

0x858: Pop(0)
0x859: Pop(1); Push((bool) Stack[-1] == 0)
0x85a: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85b: @ Hold()
0x85c: Pop(0)
0x85d: @ GetDirection(Stack[-0])
0x85e: Pop(0)
0x85f: PushEmpty()
0x860: Call2 0x906

0x861: Pop(0)
0x862: GOTO 0x85f

0x863: Return(); Pop(0)

0x864: PushEmpty(object, object)
0x865: Push("player")
0x866: @ FindActor(Stack[-2], Stack[-1])
0x867: Pop(1)
0x868: Pop(0); Push((bool) Stack[-1] == 0)
0x869: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86a: Stack[-3] = (bool) 0
0x86b: Return(); Pop(2)

0x86c: PushEmpty(bool, object)
0x86d: Stack[-1] = Stack[-3]
0x86e: Call2 0x986

0x86f: Stack[-5] = Stack[-2]
0x870: Pop(2)
0x871: Return(); Pop(2)

0x872: Stack[-1] = 0
0x873: Push(CvectorIndex(Stack[-0], 0))
0x874: Push(CvectorIndex(Stack[-0], 2))
0x875: @ RotateAsync(Stack[-2], Stack[-1])
0x876: Pop(2)
0x877: Return(); Pop(0)

0x878: PushEmpty(object, bool, object, bool)
0x879: Push("player")
0x87a: @ FindActor(Stack[-3], Stack[-1])
0x87b: Pop(1)
0x87c: Pop(0); Push((bool) Stack[-2] == 0)
0x87d: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87e: Stack[-5] = (bool) 0
0x87f: Return(); Pop(4)

0x880: PushEmpty(float, object)
0x881: Stack[-1] = Stack[-4]
0x882: Call2 0x952

0x883: Pop(1)
0x884: Push((float)90000.0)
0x885: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x887: Stack[-5] = (bool) 0
0x888: Return(); Pop(4)

0x889: @ CanSee(Stack[-1], Stack[-2])
0x88a: Pop(0)
0x88b: Stack[-5] = Stack[-1]
0x88c: Return(); Pop(4)

0x88d: Stack[-2] = 0
0x88e: PushEmpty(float, float)
0x88f: Push((int) 8)
0x890: Push((int) 16)
0x891: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(2)
0x893: Push((int) 10)
0x894: @ SetTimer(Stack[-1], Stack[-2])
0x895: Pop(1)
0x896: Return(); Pop(2)

0x897: Push((int) 10)
0x898: @ KillTimer(Stack[-1])
0x899: Pop(1)
0x89a: Return(); Pop(0)

0x89b: PushEmpty()
0x89c: Push((int) 10)
0x89d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x89f: PushEmpty()
0x8a0: Call2 0x897

0x8a1: Pop(0)
0x8a2: PushEmpty(bool)
0x8a3: Stack[-1] = (bool) 0
0x8a4: PushEmpty(bool)
0x8a5: Call2 0x98f

0x8a6: Pop(0)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a8: PushEmpty(bool)
0x8a9: Call2 0x878

0x8aa: Pop(0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ac: Stack[-1] = (bool) 1
0x8ad: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8ae: PushEmpty(bool)
0x8af: Call2 0x864

0x8b0: Pop(0)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b2: PushEmpty(bool, object)
0x8b3: PushEmpty(object)
0x8b4: Call2 0xaaa

0x8b5: Stack[-2] = Stack[-1]
0x8b6: Pop(1)
0x8b7: Call2 0xa25

0x8b8: Pop(2)
0x8b9: GOTO 0x8c0

0x8ba: PushEmpty()
0x8bb: Call2 0x873

0x8bc: Pop(0)
0x8bd: PushEmpty()
0x8be: Call2 0x88e

0x8bf: Pop(0)
0x8c0: Return(); Pop(0)

0x8c1: PushEmpty()
0x8c2: Call2 0x94d

0x8c3: Pop(0)
0x8c4: PushEmpty()
0x8c5: Call2 0x897

0x8c6: Pop(0)
0x8c7: @ lshStopSpeech()
0x8c8: Pop(0)
0x8c9: @ lshStopAnimation()
0x8ca: Pop(0)
0x8cb: @ StopAsync()
0x8cc: Pop(0)
0x8cd: @ Hold()
0x8ce: Pop(0)
0x8cf: Return(); Pop(0)

0x8d0: @ StopGroup0()
0x8d1: Pop(0)
0x8d2: PushEmpty()
0x8d3: Call2 0x897

0x8d4: Pop(0)
0x8d5: PushEmpty(string)
0x8d6: Stack[-1] = "Neutral"
0x8d7: Call2 0xa75

0x8d8: Pop(1)
0x8d9: PushEmpty()
0x8da: Call2 0x88e

0x8db: Pop(0)
0x8dc: Return(); Pop(0)

0x8dd: PushEmpty()
0x8de: Push(Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e0: PushEmpty()
0x8e1: Call2 0x88e

0x8e2: Pop(0)
0x8e3: GOTO 0x8e8

0x8e4: PushEmpty(string)
0x8e5: Stack[-1] = "Neutral"
0x8e6: Call2 0xa75

0x8e7: Pop(1)
0x8e8: Return(); Pop(0)

0x8e9: PushEmpty(bool, bool)
0x8ea: @ IsOverrideActive(Stack[-1])
0x8eb: Pop(0)
0x8ec: Pop(0); Push((bool) Stack[-1] == 0)
0x8ed: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x8ee: EventDisable(0)
0x8ef: PushEmpty()
0x8f0: Call2 0x94d

0x8f1: Pop(0)
0x8f2: PushEmpty(bool, object)
0x8f3: Stack[-1] = Stack[-5]
0x8f4: Call2 0x986

0x8f5: Pop(2)
0x8f6: EventEnable(0)
0x8f7: PushEmpty(object)
0x8f8: Stack[-1] = Stack[-4]
0x8f9: Call2 0xd8a

0x8fa: Pop(1)
0x8fb: PushEmpty(string)
0x8fc: Stack[-1] = "Neutral"
0x8fd: Call2 0xa75

0x8fe: Pop(1)
0x8ff: PushEmpty()
0x900: Call2 0x897

0x901: Pop(0)
0x902: PushEmpty()
0x903: Call2 0x88e

0x904: Pop(0)
0x905: Return(); Pop(2)

0x906: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x907: @ WaitForAnimEnd()
0x908: Pop(0)
0x909: PushEmpty(bool)
0x90a: Call2 0x98f

0x90b: Pop(0)
0x90c: Pop(1); Push((bool) Stack[-1] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: Return(); Pop(12)

0x90f: PushEmpty(int)
0x910: Call2 0xb31

0x911: Stack[-7] = Stack[-1]
0x912: Pop(1)
0x913: Stack[-5] = (int) 0
0x914: PushEmpty(bool)
0x915: Stack[-1] = (bool) 0
0x916: Push((int) 5)
0x917: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x919: PushEmpty(bool)
0x91a: Call2 0x98f

0x91b: Pop(0)
0x91c: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91d: Stack[-1] = (bool) 1
0x91e: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x91f: Pop(0); Push((bool) Stack[-6] == 0)
0x920: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x921: Push((int) 3)
0x922: @ Sleep(Stack[-1], Stack[-5])
0x923: Pop(1)
0x924: Pop(0); Push((bool) Stack[-4] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x926: GOTO 0x948

0x927: GOTO 0x93d

0x928: @ irand(Stack[-3], Stack[-6])
0x929: Pop(0)
0x92a: Push((int) 5)
0x92b: @ irand(Stack[-3], Stack[-1])
0x92c: Pop(1)
0x92d: Push((int) 0)
0x92e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: Stack[-3] = (int) 0
0x931: Push("all")
0x932: PushEmpty(string, int)
0x933: Stack[-1] = Stack[-6]
0x934: Call2 0xb2a

0x935: Pop(1)
0x936: @ PlayAnimation(Stack[-2], Stack[-1])
0x937: Pop(2)
0x938: @ WaitForAnimEnd(Stack[-1])
0x939: Pop(0)
0x93a: Pop(0); Push((bool) Stack[-1] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: GOTO 0x948

0x93d: PushEmpty(bool)
0x93e: Call2 0x94b

0x93f: Pop(0)
0x940: Pop(1); Push((bool) Stack[-1] == 0)
0x941: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x942: GOTO 0x948

0x943: @ ResetAAS()
0x944: Pop(0)
0x945: Push((int) 1)
0x946: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x947: GOTO 0x914

0x948: @ ResetAAS()
0x949: Pop(0)
0x94a: Return(); Pop(12)

0x94b: Stack[-1] = (bool) 1
0x94c: Return(); Pop(0)

0x94d: @ StopAnimation()
0x94e: Pop(0)
0x94f: @ StopGroup0()
0x950: Pop(0)
0x951: Return(); Pop(0)

0x952: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x953: @ GetPosition(Stack[-3])
0x954: Pop(0)
0x955: @@ GetPosition(Stack[-2])
0x956: Pop(0)
0x957: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x958: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x959: Return(); Pop(6)

0x95a: PushEmpty(bool, bool)
0x95b: Push("HasProperty")
0x95c: Push((int) 2)
0x95d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-5] = (bool) 0
0x961: Return(); Pop(2)

0x962: @@ HasProperty(Stack[-3], Stack[-1])
0x963: Pop(0)
0x964: Stack[-5] = Stack[-1]
0x965: Return(); Pop(2)

0x966: PushEmpty(float, float)
0x967: PushEmpty(bool, object, string)
0x968: Stack[-2] = Stack[-10]
0x969: Stack[-1] = Stack[-9]
0x96a: Call2 0x95a

0x96b: Pop(2)
0x96c: Pop(1); Push((bool) Stack[-1] == 0)
0x96d: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96e: Stack[-8] = (bool) 0
0x96f: Return(); Pop(2)

0x970: @@ GetProperty(Stack[-6], Stack[-1])
0x971: Pop(0)
0x972: PushEmpty(float, float, float, float)
0x973: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x974: Stack[-2] = Stack[-8]
0x975: Stack[-1] = Stack[-7]
0x976: Call2 0xaba

0x977: Pop(3)
0x978: @@ SetProperty(Stack[-7], Stack[-1])
0x979: Pop(1)
0x97a: Stack[-8] = (bool) 1
0x97b: Return(); Pop(2)

0x97c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x97d: @ GetPosition(Stack[-3])
0x97e: Pop(0)
0x97f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x980: Push(CvectorIndex(Stack[-2], 0))
0x981: Push(CvectorIndex(Stack[-3], 2))
0x982: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x983: Pop(2)
0x984: Stack[-8] = Stack[-1]
0x985: Return(); Pop(6)

0x986: PushEmpty(cvector, cvector)
0x987: @@ GetPosition(Stack[-1])
0x988: Pop(0)
0x989: PushEmpty(bool, cvector)
0x98a: Stack[-1] = Stack[-3]
0x98b: Call2 0x97c

0x98c: Stack[-6] = Stack[-2]
0x98d: Pop(2)
0x98e: Return(); Pop(2)

0x98f: PushEmpty(bool, bool)
0x990: @ IsLoaded(Stack[-1])
0x991: Pop(0)
0x992: Stack[-3] = Stack[-1]
0x993: Return(); Pop(2)

0x994: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x995: @@ GetPosition(Stack[-8])
0x996: Pop(0)
0x997: @@ GetEyesHeight(Stack[-9])
0x998: Pop(0)
0x999: Push(CvectorIndex(Stack[-8], 1))
0x99a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x99b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x99c: @ GetPosition(Stack[-7])
0x99d: Pop(0)
0x99e: @ GetEyesHeight(Stack[-9])
0x99f: Pop(0)
0x9a0: Push(CvectorIndex(Stack[-7], 1))
0x9a1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9a2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9a3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x9a4: Push(CvectorIndex(Stack[-6], 1))
0x9a5: Stack[-1] = (int) 0
0x9a6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9a7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x9a8: Pop(1); Push(Sqrt(Stack[-1]))
0x9a9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x9aa: Stack[-5] = -Stack[-6]; Pop(0);
0x9ab: Pop(0); Push(Stack[-6] * Stack[-19]);
0x9ac: PushEmpty(cvector, cvector)
0x9ad: Push(CVector(0.0, 1.0, 0.0))
0x9ae: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x9af: Call2 0xab0

0x9b0: Pop(1)
0x9b1: Push((int) 25)
0x9b2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9b3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9b4: Push(CVector(0.0, 10.0, 0.0))
0x9b5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9b6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x9b7: @ IsOverrideActive(Stack[-2])
0x9b8: Pop(0)
0x9b9: Push(Stack[-2])
0x9ba: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bb: Stack[-21] = (bool) 0
0x9bc: Return(); Pop(18)

0x9bd: @ StopWorld()
0x9be: Pop(0)
0x9bf: Push((bool) 1)
0x9c0: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x9c1: Pop(1)
0x9c2: Push(CvectorIndex(Stack[-4], 0))
0x9c3: Push(CvectorIndex(Stack[-5], 2))
0x9c4: @ Rotate(Stack[-2], Stack[-1])
0x9c5: Pop(2)
0x9c6: PushEmpty(bool)
0x9c7: Call2 0xb4a

0x9c8: Pop(0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9ca: GOTO 0x9d3

0x9cb: Push("head")
0x9cc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9cd: Pop(1)
0x9ce: Push(Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d0: Push("head")
0x9d1: @ LookAsyncCamera(Stack[-1])
0x9d2: Pop(1)
0x9d3: @ CameraWaitForPlayFinish()
0x9d4: Pop(0)
0x9d5: @ ResumeWorld()
0x9d6: Pop(0)
0x9d7: Stack[-21] = (bool) 1
0x9d8: Return(); Pop(18)

0x9d9: PushEmpty(bool, bool)
0x9da: Push((bool) 1)
0x9db: @ CameraSwitchToNormal(Stack[-1])
0x9dc: Pop(1)
0x9dd: PushEmpty(bool)
0x9de: Call2 0xb4a

0x9df: Pop(0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e1: GOTO 0x9ea

0x9e2: Push("head")
0x9e3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9e4: Pop(1)
0x9e5: Push(Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e7: Push("head")
0x9e8: @ UnlookAsync(Stack[-1])
0x9e9: Pop(1)
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty(int, int, int, int)
0x9ec: Push("voice_common")
0x9ed: @ GetVariable(Stack[-1], Stack[-3])
0x9ee: Pop(1)
0x9ef: Push(Stack[-2])
0x9f0: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0x9f1: PushEmpty(bool, object)
0x9f2: Stack[-1] = Stack[-7]
0x9f3: Call2 0xa25

0x9f4: Pop(1)
0x9f5: Pop(1); Push((bool) Stack[-1] == 0)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9f7: PushEmpty(bool, object)
0x9f8: Stack[-1] = Stack[-7]
0x9f9: Call2 0xa4a

0x9fa: Pop(1)
0x9fb: Pop(1); Push((bool) Stack[-1] == 0)
0x9fc: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fd: Stack[-6] = (bool) 0
0x9fe: Return(); Pop(4)

0x9ff: Push((int) 2)
0xa00: @ irand(Stack[-2], Stack[-1])
0xa01: Pop(1)
0xa02: Push(Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa04: Push("voice_common")
0xa05: Push((int) 1)
0xa06: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa07: Push((int) 3)
0xa08: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa09: @ SetVariable(Stack[-2], Stack[-1])
0xa0a: Pop(2)
0xa0b: GOTO 0xa10

0xa0c: Push("voice_common")
0xa0d: Push((int) 0)
0xa0e: @ SetVariable(Stack[-2], Stack[-1])
0xa0f: Pop(2)
0xa10: GOTO 0xa23

0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[-7]
0xa13: Call2 0xa4a

0xa14: Pop(1)
0xa15: Pop(1); Push((bool) Stack[-1] == 0)
0xa16: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa17: PushEmpty(bool, object)
0xa18: Stack[-1] = Stack[-7]
0xa19: Call2 0xa25

0xa1a: Pop(1)
0xa1b: Pop(1); Push((bool) Stack[-1] == 0)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1d: Stack[-6] = (bool) 0
0xa1e: Return(); Pop(4)

0xa1f: Push("voice_common")
0xa20: Push((int) 1)
0xa21: @ SetVariable(Stack[-2], Stack[-1])
0xa22: Pop(2)
0xa23: Stack[-6] = (bool) 1
0xa24: Return(); Pop(4)

0xa25: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa26: Stack[-5] = "c"
0xa27: Stack[-4] = (int) 0
0xa28: Push((int) 1)
0xa29: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa2a: Push((int) 1)
0xa2b: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa2c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa2d: @@ HasProperty(Stack[-1], Stack[-4])
0xa2e: Pop(1)
0xa2f: Pop(0); Push((bool) Stack[-3] == 0)
0xa30: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa31: GOTO 0xa35

0xa32: Push((int) 1)
0xa33: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa34: GOTO 0xa28

0xa35: Pop(0); Push((bool) Stack[-4] == 0)
0xa36: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa37: Stack[-12] = (bool) 0
0xa38: Return(); Pop(10)

0xa39: Stack[-2] = (int) 0
0xa3a: Push((int) 1)
0xa3b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3d: @ irand(Stack[-2], Stack[-4])
0xa3e: Pop(0)
0xa3f: Push((int) 1)
0xa40: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa41: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa42: @@ GetProperty(Stack[-1], Stack[-2])
0xa43: Pop(1)
0xa44: PushEmpty(bool, string)
0xa45: Stack[-1] = Stack[-3]
0xa46: Call2 0xa94

0xa47: Stack[-14] = Stack[-2]
0xa48: Pop(2)
0xa49: Return(); Pop(10)

0xa4a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa4b: Push("d")
0xa4c: PushEmpty(int)
0xa4d: Call2 0xb1b

0xa4e: Pop(0)
0xa4f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa50: Push("m")
0xa51: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa52: Stack[-4] = (int) 0
0xa53: Push((int) 1)
0xa54: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa55: Push((int) 1)
0xa56: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa57: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa58: @@ HasProperty(Stack[-1], Stack[-4])
0xa59: Pop(1)
0xa5a: Pop(0); Push((bool) Stack[-3] == 0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: GOTO 0xa60

0xa5d: Push((int) 1)
0xa5e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa5f: GOTO 0xa53

0xa60: Pop(0); Push((bool) Stack[-4] == 0)
0xa61: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa62: Stack[-12] = (bool) 0
0xa63: Return(); Pop(10)

0xa64: Stack[-2] = (int) 0
0xa65: Push((int) 1)
0xa66: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa67: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa68: @ irand(Stack[-2], Stack[-4])
0xa69: Pop(0)
0xa6a: Push((int) 1)
0xa6b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa6c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa6d: @@ GetProperty(Stack[-1], Stack[-2])
0xa6e: Pop(1)
0xa6f: PushEmpty(bool, string)
0xa70: Stack[-1] = Stack[-3]
0xa71: Call2 0xa94

0xa72: Stack[-14] = Stack[-2]
0xa73: Pop(2)
0xa74: Return(); Pop(10)

0xa75: PushEmpty(bool, float, float, bool, float, float)
0xa76: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa77: Pop(0)
0xa78: Push(Stack[-3])
0xa79: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa7b: Pop(0)
0xa7c: Push((bool) 0)
0xa7d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa7e: Pop(1)
0xa7f: GOTO 0xa84

0xa80: Push("Can't find lsh animation : ")
0xa81: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa82: @ Trace(Stack[-1])
0xa83: Pop(1)
0xa84: Return(); Pop(6)

0xa85: PushEmpty(bool, float, float, bool, float, float)
0xa86: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa87: Pop(0)
0xa88: Push(Stack[-3])
0xa89: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa8b: Pop(0)
0xa8c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa8d: Pop(0)
0xa8e: GOTO 0xa93

0xa8f: Push("Can't find lsh animation : ")
0xa90: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa91: @ Trace(Stack[-1])
0xa92: Pop(1)
0xa93: Return(); Pop(6)

0xa94: PushEmpty(bool, bool)
0xa95: PushEmpty(bool)
0xa96: Call2 0xb4a

0xa97: Pop(0)
0xa98: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa99: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa9a: Pop(0)
0xa9b: Push(Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9d: @ lshPlaySpeech(Stack[-3])
0xa9e: Pop(0)
0xa9f: Stack[-4] = (bool) 1
0xaa0: Return(); Pop(2)

0xaa1: Stack[-4] = (bool) 0
0xaa2: Return(); Pop(2)

0xaa3: PushEmpty(bool)
0xaa4: Call2 0xb4a

0xaa5: Pop(0)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: @ lshStopSpeech()
0xaa8: Pop(0)
0xaa9: Return(); Pop(0)

0xaaa: PushEmpty(object, object)
0xaab: @ self(Stack[-1])
0xaac: Pop(0)
0xaad: Stack[-3] = Stack[-1]
0xaae: Return(); Pop(2)

0xaaf: Stack[-1] = 0
0xab0: PushEmpty(float, float)
0xab1: Pop(0); Push(Stack[-3] | Stack[-3]);
0xab2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xab3: Push((float)0.0)
0xab4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xab5: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xab7: Return(); Pop(2)

0xab8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xab9: Return(); Pop(2)

0xaba: PushEmpty()
0xabb: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-4] = Stack[-2]
0xabe: Return(); Pop(0)

0xabf: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xac0: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xac1: Stack[-4] = Stack[-1]
0xac2: Return(); Pop(0)

0xac3: Stack[-4] = Stack[-3]
0xac4: Return(); Pop(0)

0xac5: PushEmpty(int, int)
0xac6: @ GetVariable(Stack[-3], Stack[-1])
0xac7: Pop(0)
0xac8: Stack[-4] = Stack[-1]
0xac9: Return(); Pop(2)

0xaca: PushEmpty(int, bool, int, bool)
0xacb: @ GetInvItemByName(Stack[-2], Stack[-5])
0xacc: Pop(0)
0xacd: @@ HasItem(Stack[-2], Stack[-1])
0xace: Pop(0)
0xacf: Stack[-7] = Stack[-1]
0xad0: Return(); Pop(4)

0xad1: PushEmpty()
0xad2: Pop(0); Push((bool) Stack[-2] == 0)
0xad3: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad4: Stack[-3] = (bool) 0
0xad5: Return(); Pop(0)

0xad6: Push((int) 0)
0xad7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xad8: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xad9: Push((int) 8)
0xada: @ SendWorldWndMessage(Stack[-1])
0xadb: Pop(1)
0xadc: GOTO 0xae6

0xadd: Push((int) 0)
0xade: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xadf: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xae0: Push((int) 9)
0xae1: @ SendWorldWndMessage(Stack[-1])
0xae2: Pop(1)
0xae3: GOTO 0xae6

0xae4: Stack[-3] = (bool) 0
0xae5: Return(); Pop(0)

0xae6: PushEmpty(float)
0xae7: Stack[-1] = Stack[-2]
0xae8: Call2 0xaf4

0xae9: Pop(1)
0xaea: PushEmpty(bool, object, string, float, float, float)
0xaeb: Stack[-5] = Stack[-8]
0xaec: Stack[-4] = "reputation"
0xaed: Stack[-3] = Stack[-7]
0xaee: Stack[-2] = (int) 0
0xaef: Stack[-1] = (int) 1
0xaf0: Call2 0x966

0xaf1: Pop(6)
0xaf2: Stack[-3] = (bool) 1
0xaf3: Return(); Pop(0)

0xaf4: PushEmpty(object, object)
0xaf5: @ CreateFloatVector(Stack[-1])
0xaf6: Pop(0)
0xaf7: @@ add(Stack[-3])
0xaf8: Pop(0)
0xaf9: Push((int) 16)
0xafa: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xafb: Pop(1)
0xafc: Return(); Pop(2)

0xafd: Stack[-1] = 0
0xafe: PushEmpty(object, object)
0xaff: @ FindActor(Stack[-1], Stack[-4])
0xb00: Pop(0)
0xb01: Pop(0); Push((bool) Stack[-1] == 0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb03: Stack[-5] = (bool) 0
0xb04: Return(); Pop(2)

0xb05: @ Trigger(Stack[-1], Stack[-3])
0xb06: Pop(0)
0xb07: Stack[-5] = (bool) 1
0xb08: Return(); Pop(2)

0xb09: Stack[-1] = 0
0xb0a: PushEmpty(object, object)
0xb0b: @ FindActor(Stack[-1], Stack[-5])
0xb0c: Pop(0)
0xb0d: Pop(0); Push((bool) Stack[-1] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-6] = (bool) 0
0xb10: Return(); Pop(2)

0xb11: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0xb12: Pop(0)
0xb13: Stack[-6] = (bool) 1
0xb14: Return(); Pop(2)

0xb15: Stack[-1] = 0
0xb16: PushEmpty(float, float)
0xb17: @ GetGameTime(Stack[-1])
0xb18: Pop(0)
0xb19: Stack[-3] = Stack[-1]
0xb1a: Return(); Pop(2)

0xb1b: PushEmpty(float, float)
0xb1c: @ GetGameTime(Stack[-1])
0xb1d: Pop(0)
0xb1e: Push((int) 1)
0xb1f: PushEmpty(int)
0xb20: Push((int) 24)
0xb21: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb22: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb23: Return(); Pop(2)

0xb24: PushEmpty()
0xb25: PushEmpty(int)
0xb26: Call2 0xb1b

0xb27: Pop(0)
0xb28: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb29: Return(); Pop(0)

0xb2a: PushEmpty(string, string)
0xb2b: Stack[-1] = "idle"
0xb2c: Push(Stack[-3])
0xb2d: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb2f: Stack[-4] = Stack[-1]
0xb30: Return(); Pop(2)

0xb31: PushEmpty(int, bool, int, bool)
0xb32: Stack[-2] = (int) 0
0xb33: Push("all")
0xb34: PushEmpty(string, int)
0xb35: Stack[-1] = Stack[-5]
0xb36: Call2 0xb2a

0xb37: Pop(1)
0xb38: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb39: Pop(2)
0xb3a: Pop(0); Push((bool) Stack[-1] == 0)
0xb3b: IF (Stack[-1] == 0) GOTO 0xb3d; Pop(1)

0xb3c: GOTO 0xb40

0xb3d: Push((int) 1)
0xb3e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb3f: GOTO 0xb33

0xb40: Stack[-5] = Stack[-2]
0xb41: Return(); Pop(4)

0xb42: Stack[-1] = (int) 515545
0xb43: Return(); Pop(0)

0xb44: Stack[-1] = (int) 502870
0xb45: Return(); Pop(0)

0xb46: Stack[-1] = "ui/NPC_Mat.png"
0xb47: Return(); Pop(0)

0xb48: Stack[-1] = "ui/NPC_Mat_b.png"
0xb49: Return(); Pop(0)

0xb4a: Stack[-1] = (bool) 1
0xb4b: Return(); Pop(0)

0xb4c: PushEmpty(int, int)
0xb4d: Push("d8q01MladVladIsVictim")
0xb4e: @ GetVariable(Stack[-1], Stack[-2])
0xb4f: Pop(1)
0xb50: Push((int) 0)
0xb51: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb52: IF (Stack[-1] == 0) GOTO 0xb59; Pop(1)

0xb53: PushEmpty(bool, string, string, string)
0xb54: Stack[-3] = "volonteers_danko"
0xb55: Stack[-2] = "kill"
0xb56: Stack[-1] = "mladvlad"
0xb57: Call2 0xb0a

0xb58: Pop(4)
0xb59: Push("d8q01BigVladIsVictim")
0xb5a: @ GetVariable(Stack[-1], Stack[-2])
0xb5b: Pop(1)
0xb5c: Push((int) 0)
0xb5d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb5e: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb5f: PushEmpty(bool, string, string, string)
0xb60: Stack[-3] = "volonteers_danko"
0xb61: Stack[-2] = "kill"
0xb62: Stack[-1] = "bigvlad"
0xb63: Call2 0xb0a

0xb64: Pop(4)
0xb65: Return(); Pop(2)

0xb66: PushEmpty(int, int)
0xb67: Push("toy_horse")
0xb68: Push((int) 1)
0xb69: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb6a: Pop(2)
0xb6b: Return(); Pop(2)

0xb6c: PushEmpty()
0xb6d: PushEmpty(object, string, float)
0xb6e: PushEmpty(object)
0xb6f: Call2 0xd47

0xb70: Stack[-4] = Stack[-1]
0xb71: Pop(1)
0xb72: Stack[-2] = "pt_map_boiny_main_entrance"
0xb73: Stack[-1] = (int) 2
0xb74: Call2 0xd58

0xb75: Pop(3)
0xb76: PushEmpty(object)
0xb77: Call2 0xd47

0xb78: Pop(0)
0xb79: @@ ShowMap(Stack[-1])
0xb7a: Pop(1)
0xb7b: Return(); Pop(0)

0xb7c: PushEmpty()
0xb7d: Push("playsound")
0xb7e: Push("giveitem")
0xb7f: @ TriggerWorld(Stack[-2], Stack[-1])
0xb80: Pop(2)
0xb81: Return(); Pop(0)

0xb82: PushEmpty()
0xb83: PushEmpty(bool, object, float)
0xb84: Stack[-2] = Stack[-5]
0xb85: Stack[-1] = (float) 0.1
0xb86: Call2 0xad1

0xb87: Pop(3)
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: Push("ood8Mat1")
0xb8b: Push((int) 1)
0xb8c: @ SetVariable(Stack[-2], Stack[-1])
0xb8d: Pop(2)
0xb8e: Return(); Pop(0)

0xb8f: PushEmpty()
0xb90: Push("d8q01BringBadBoy")
0xb91: Push((int) 1)
0xb92: @ SetVariable(Stack[-2], Stack[-1])
0xb93: Pop(2)
0xb94: PushEmpty()
0xb95: Call2 0xcdd

0xb96: Pop(0)
0xb97: Return(); Pop(0)

0xb98: PushEmpty(object, object)
0xb99: Push("d8q01MatBringToy")
0xb9a: Push((int) 1)
0xb9b: @ SetVariable(Stack[-2], Stack[-1])
0xb9c: Pop(2)
0xb9d: PushEmpty(object)
0xb9e: Call2 0xd47

0xb9f: Stack[-2] = Stack[-1]
0xba0: Pop(1)
0xba1: Push("d8q01MatGotoToyHouse")
0xba2: Push("pt_map_d8q01_toyhouse")
0xba3: Push((int) 1)
0xba4: Push((int) 515444)
0xba5: PushEmpty(float)
0xba6: Call2 0xb16

0xba7: Pop(0)
0xba8: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(5)
0xbaa: PushEmpty()
0xbab: Call2 0xcea

0xbac: Pop(0)
0xbad: PushEmpty(bool, string, string)
0xbae: Stack[-2] = "quest_d8_01"
0xbaf: Stack[-1] = "place_toy"
0xbb0: Call2 0xafe

0xbb1: Pop(3)
0xbb2: Return(); Pop(2)

0xbb3: Stack[-1] = 0
0xbb4: PushEmpty()
0xbb5: Push("ood8Mat2")
0xbb6: Push((int) 1)
0xbb7: @ SetVariable(Stack[-2], Stack[-1])
0xbb8: Pop(2)
0xbb9: Return(); Pop(0)

0xbba: PushEmpty(object, object)
0xbbb: PushEmpty(object)
0xbbc: Call2 0xd47

0xbbd: Stack[-2] = Stack[-1]
0xbbe: Pop(1)
0xbbf: Push("d8q01MatGotoBoiny")
0xbc0: Push("pt_map_boiny_main_entrance")
0xbc1: Push((int) 1)
0xbc2: Push((int) 515324)
0xbc3: PushEmpty(float)
0xbc4: Call2 0xb16

0xbc5: Pop(0)
0xbc6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbc7: Pop(5)
0xbc8: PushEmpty()
0xbc9: Call2 0xcf7

0xbca: Pop(0)
0xbcb: PushEmpty(bool, string, string)
0xbcc: Stack[-2] = "quest_d8_01"
0xbcd: Stack[-1] = "unlock_boiny"
0xbce: Call2 0xafe

0xbcf: Pop(3)
0xbd0: Return(); Pop(2)

0xbd1: Stack[-1] = 0
0xbd2: PushEmpty()
0xbd3: Push("ood8Mat3")
0xbd4: Push((int) 1)
0xbd5: @ SetVariable(Stack[-2], Stack[-1])
0xbd6: Pop(2)
0xbd7: Return(); Pop(0)

0xbd8: PushEmpty()
0xbd9: Push("ood8Mat4")
0xbda: Push((int) 1)
0xbdb: @ SetVariable(Stack[-2], Stack[-1])
0xbdc: Pop(2)
0xbdd: Return(); Pop(0)

0xbde: PushEmpty()
0xbdf: Push("ood8Mat5")
0xbe0: Push((int) 1)
0xbe1: @ SetVariable(Stack[-2], Stack[-1])
0xbe2: Pop(2)
0xbe3: Return(); Pop(0)

0xbe4: PushEmpty()
0xbe5: Push("ood8Mat6")
0xbe6: Push((int) 1)
0xbe7: @ SetVariable(Stack[-2], Stack[-1])
0xbe8: Pop(2)
0xbe9: Return(); Pop(0)

0xbea: PushEmpty()
0xbeb: Push("ood8Mat7")
0xbec: Push((int) 1)
0xbed: @ SetVariable(Stack[-2], Stack[-1])
0xbee: Pop(2)
0xbef: Return(); Pop(0)

0xbf0: PushEmpty()
0xbf1: Push("d8TalkToMat")
0xbf2: Push((int) 1)
0xbf3: @ SetVariable(Stack[-2], Stack[-1])
0xbf4: Pop(2)
0xbf5: Return(); Pop(0)

0xbf6: PushEmpty()
0xbf7: PushEmpty()
0xbf8: Call2 0xd04

0xbf9: Pop(0)
0xbfa: PushEmpty(bool, string, string)
0xbfb: Stack[-2] = "quest_d8_02"
0xbfc: Stack[-1] = "completed"
0xbfd: Call2 0xafe

0xbfe: Pop(3)
0xbff: Return(); Pop(0)

0xc00: PushEmpty()
0xc01: Push("d8q02")
0xc02: Push((int) -1)
0xc03: @ SetVariable(Stack[-2], Stack[-1])
0xc04: Pop(2)
0xc05: PushEmpty()
0xc06: Call2 0xd11

0xc07: Pop(0)
0xc08: Return(); Pop(0)

0xc09: PushEmpty(int, int)
0xc0a: Push("feromicin")
0xc0b: Push((int) 1)
0xc0c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xc0d: Pop(2)
0xc0e: Return(); Pop(2)

0xc0f: PushEmpty()
0xc10: PushEmpty(object, string, float)
0xc11: PushEmpty(object)
0xc12: Call2 0xd47

0xc13: Stack[-4] = Stack[-1]
0xc14: Pop(1)
0xc15: Stack[-2] = "pt_map_d8q01_toyhouse"
0xc16: Stack[-1] = (int) 2
0xc17: Call2 0xd58

0xc18: Pop(3)
0xc19: PushEmpty(object)
0xc1a: Call2 0xd47

0xc1b: Pop(0)
0xc1c: @@ ShowMap(Stack[-1])
0xc1d: Pop(1)
0xc1e: Return(); Pop(0)

0xc1f: PushEmpty()
0xc20: PushEmpty(int, string)
0xc21: Stack[-1] = "d8q02"
0xc22: Call2 0xac5

0xc23: Pop(1)
0xc24: Push((int) 2)
0xc25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc26: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc27: Stack[-2] = (bool) 1
0xc28: Return(); Pop(0)

0xc29: Stack[-2] = (bool) 0
0xc2a: Return(); Pop(0)

0xc2b: PushEmpty()
0xc2c: PushEmpty(int, string)
0xc2d: Stack[-1] = "d8q04"
0xc2e: Call2 0xac5

0xc2f: Pop(1)
0xc30: Push((int) 1)
0xc31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc32: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc33: Stack[-2] = (bool) 1
0xc34: Return(); Pop(0)

0xc35: Stack[-2] = (bool) 0
0xc36: Return(); Pop(0)

0xc37: PushEmpty()
0xc38: PushEmpty(int, string)
0xc39: Stack[-1] = "d8q01"
0xc3a: Call2 0xac5

0xc3b: Pop(1)
0xc3c: Push((int) 1)
0xc3d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc3e: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc3f: Stack[-2] = (bool) 1
0xc40: Return(); Pop(0)

0xc41: Stack[-2] = (bool) 0
0xc42: Return(); Pop(0)

0xc43: PushEmpty()
0xc44: PushEmpty(int, string)
0xc45: Stack[-1] = "ood8Mat1"
0xc46: Call2 0xac5

0xc47: Pop(1)
0xc48: Push((int) 0)
0xc49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xc4b: Stack[-2] = (bool) 1
0xc4c: Return(); Pop(0)

0xc4d: Stack[-2] = (bool) 0
0xc4e: Return(); Pop(0)

0xc4f: PushEmpty()
0xc50: PushEmpty(int, string)
0xc51: Stack[-1] = "d8q01MatBringToy"
0xc52: Call2 0xac5

0xc53: Pop(1)
0xc54: Push((int) 1)
0xc55: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc57: Stack[-2] = (bool) 1
0xc58: Return(); Pop(0)

0xc59: Stack[-2] = (bool) 0
0xc5a: Return(); Pop(0)

0xc5b: PushEmpty()
0xc5c: PushEmpty(bool, object, string)
0xc5d: Stack[-2] = Stack[-4]
0xc5e: Stack[-1] = "toy_horse"
0xc5f: Call2 0xaca

0xc60: Pop(2)
0xc61: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc62: Stack[-2] = (bool) 1
0xc63: Return(); Pop(0)

0xc64: Stack[-2] = (bool) 0
0xc65: Return(); Pop(0)

0xc66: PushEmpty()
0xc67: PushEmpty(int, string)
0xc68: Stack[-1] = "ood8Mat2"
0xc69: Call2 0xac5

0xc6a: Pop(1)
0xc6b: Push((int) 0)
0xc6c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc70; Pop(1)

0xc6e: Stack[-2] = (bool) 1
0xc6f: Return(); Pop(0)

0xc70: Stack[-2] = (bool) 0
0xc71: Return(); Pop(0)

0xc72: PushEmpty()
0xc73: PushEmpty(int, string)
0xc74: Stack[-1] = "ood8Mat3"
0xc75: Call2 0xac5

0xc76: Pop(1)
0xc77: Push((int) 0)
0xc78: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc7a: Stack[-2] = (bool) 1
0xc7b: Return(); Pop(0)

0xc7c: Stack[-2] = (bool) 0
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty()
0xc7f: PushEmpty(int, string)
0xc80: Stack[-1] = "ood8Mat4"
0xc81: Call2 0xac5

0xc82: Pop(1)
0xc83: Push((int) 0)
0xc84: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc85: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc86: Stack[-2] = (bool) 1
0xc87: Return(); Pop(0)

0xc88: Stack[-2] = (bool) 0
0xc89: Return(); Pop(0)

0xc8a: PushEmpty()
0xc8b: PushEmpty(int, string)
0xc8c: Stack[-1] = "ood8Mat5"
0xc8d: Call2 0xac5

0xc8e: Pop(1)
0xc8f: Push((int) 0)
0xc90: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc91: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc92: Stack[-2] = (bool) 1
0xc93: Return(); Pop(0)

0xc94: Stack[-2] = (bool) 0
0xc95: Return(); Pop(0)

0xc96: PushEmpty()
0xc97: PushEmpty(int, string)
0xc98: Stack[-1] = "d8q01BigVladIsVictim"
0xc99: Call2 0xac5

0xc9a: Pop(1)
0xc9b: Push((int) 1)
0xc9c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9e: Stack[-2] = (bool) 1
0xc9f: Return(); Pop(0)

0xca0: Stack[-2] = (bool) 0
0xca1: Return(); Pop(0)

0xca2: PushEmpty()
0xca3: PushEmpty(int, string)
0xca4: Stack[-1] = "d8q01MladVladIsVictim"
0xca5: Call2 0xac5

0xca6: Pop(1)
0xca7: Push((int) 1)
0xca8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcaa: Stack[-2] = (bool) 1
0xcab: Return(); Pop(0)

0xcac: Stack[-2] = (bool) 0
0xcad: Return(); Pop(0)

0xcae: PushEmpty()
0xcaf: PushEmpty(int, string)
0xcb0: Stack[-1] = "ood8Mat6"
0xcb1: Call2 0xac5

0xcb2: Pop(1)
0xcb3: Push((int) 0)
0xcb4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcb5: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb6: Stack[-2] = (bool) 1
0xcb7: Return(); Pop(0)

0xcb8: Stack[-2] = (bool) 0
0xcb9: Return(); Pop(0)

0xcba: PushEmpty()
0xcbb: PushEmpty(int, string)
0xcbc: Stack[-1] = "ood8Mat7"
0xcbd: Call2 0xac5

0xcbe: Pop(1)
0xcbf: Push((int) 0)
0xcc0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc2: Stack[-2] = (bool) 1
0xcc3: Return(); Pop(0)

0xcc4: Stack[-2] = (bool) 0
0xcc5: Return(); Pop(0)

0xcc6: PushEmpty()
0xcc7: PushEmpty(int, string)
0xcc8: Stack[-1] = "d8q02"
0xcc9: Call2 0xac5

0xcca: Pop(1)
0xccb: Push((int) 1)
0xccc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcce: Stack[-2] = (bool) 1
0xccf: Return(); Pop(0)

0xcd0: Stack[-2] = (bool) 0
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: PushEmpty(bool, object, string)
0xcd4: Stack[-2] = Stack[-4]
0xcd5: Stack[-1] = "feromicin"
0xcd6: Call2 0xaca

0xcd7: Pop(2)
0xcd8: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd9: Stack[-2] = (bool) 1
0xcda: Return(); Pop(0)

0xcdb: Stack[-2] = (bool) 0
0xcdc: Return(); Pop(0)

0xcdd: PushEmpty(object, object)
0xcde: Push((int) 179)
0xcdf: Push((int) 1)
0xce0: Push((int) 515441)
0xce1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xce2: Pop(3)
0xce3: PushEmpty(bool, object, int)
0xce4: Stack[-2] = Stack[-4]
0xce5: Stack[-1] = (int) 175
0xce6: Call2 0xd2b

0xce7: Pop(3)
0xce8: Return(); Pop(2)

0xce9: Stack[-1] = 0
0xcea: PushEmpty(object, object)
0xceb: Push((int) 180)
0xcec: Push((int) 1)
0xced: Push((int) 515442)
0xcee: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcef: Pop(3)
0xcf0: PushEmpty(bool, object, int)
0xcf1: Stack[-2] = Stack[-4]
0xcf2: Stack[-1] = (int) 175
0xcf3: Call2 0xd2b

0xcf4: Pop(3)
0xcf5: Return(); Pop(2)

0xcf6: Stack[-1] = 0
0xcf7: PushEmpty(object, object)
0xcf8: Push((int) 181)
0xcf9: Push((int) 1)
0xcfa: Push((int) 515443)
0xcfb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: PushEmpty(bool, object, int)
0xcfe: Stack[-2] = Stack[-4]
0xcff: Stack[-1] = (int) 175
0xd00: Call2 0xd2b

0xd01: Pop(3)
0xd02: Return(); Pop(2)

0xd03: Stack[-1] = 0
0xd04: PushEmpty(object, object)
0xd05: Push((int) 128)
0xd06: Push((int) 2)
0xd07: Push((int) 513773)
0xd08: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd09: Pop(3)
0xd0a: PushEmpty(bool, object, int)
0xd0b: Stack[-2] = Stack[-4]
0xd0c: Stack[-1] = (int) 127
0xd0d: Call2 0xd2b

0xd0e: Pop(3)
0xd0f: Return(); Pop(2)

0xd10: Stack[-1] = 0
0xd11: PushEmpty(object, object)
0xd12: Push((int) 129)
0xd13: Push((int) 2)
0xd14: Push((int) 513774)
0xd15: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: PushEmpty(bool, object, int)
0xd18: Stack[-2] = Stack[-4]
0xd19: Stack[-1] = (int) 127
0xd1a: Call2 0xd2b

0xd1b: Pop(3)
0xd1c: Return(); Pop(2)

0xd1d: Stack[-1] = 0
0xd1e: PushEmpty(object, object)
0xd1f: @ GetDiaryRoot(Stack[-1])
0xd20: Pop(0)
0xd21: Pop(0); Push((bool) Stack[-1] == 0)
0xd22: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd23: Push("Can't retrieve diary root")
0xd24: @ Trace(Stack[-1])
0xd25: Pop(1)
0xd26: Stack[-3] = (bool) 0
0xd27: Return(); Pop(2)

0xd28: Stack[-3] = Stack[-1]
0xd29: Return(); Pop(2)

0xd2a: Stack[-1] = 0
0xd2b: PushEmpty(object, object, int, object, object, int)
0xd2c: PushEmpty(object)
0xd2d: Call2 0xd1e

0xd2e: Stack[-4] = Stack[-1]
0xd2f: Pop(1)
0xd30: @@ Find(Stack[-7], Stack[-2])
0xd31: Pop(0)
0xd32: Pop(0); Push((bool) Stack[-2] == 0)
0xd33: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd34: Push("Can't find diary parent with id: ")
0xd35: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd36: @ Trace(Stack[-1])
0xd37: Pop(1)
0xd38: Stack[-9] = (bool) 0
0xd39: Return(); Pop(6)

0xd3a: @@ AddChild(Stack[-8])
0xd3b: Pop(0)
0xd3c: Push((int) 7)
0xd3d: @ SendWorldWndMessage(Stack[-1])
0xd3e: Pop(1)
0xd3f: @@ GetCategory(Stack[-1])
0xd40: Pop(0)
0xd41: @ SetDiarySection(Stack[-1])
0xd42: Pop(0)
0xd43: Stack[-9] = (bool) 0
0xd44: Return(); Pop(6)

0xd45: Stack[-2] = 0
0xd46: Stack[-3] = 0
0xd47: PushEmpty(object, object, object, object)
0xd48: @ GetMainOutdoorScene(Stack[-2])
0xd49: Pop(0)
0xd4a: Pop(0); Push((bool) Stack[-2] == 0)
0xd4b: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4c: Push("Can't find main outdoor scene")
0xd4d: @ Trace(Stack[-1])
0xd4e: Pop(1)
0xd4f: Stack[-1] = 0
0xd50: Stack[-5] = Stack[-1]
0xd51: Return(); Pop(4)

0xd52: @@ GetMap(Stack[-1])
0xd53: Pop(0)
0xd54: Stack[-5] = Stack[-1]
0xd55: Return(); Pop(4)

0xd56: Stack[-1] = 0
0xd57: Stack[-2] = 0
0xd58: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd59: @ GetMainOutdoorScene(Stack[-2])
0xd5a: Pop(0)
0xd5b: Pop(0); Push((bool) Stack[-2] == 0)
0xd5c: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5d: Push("Can't find main outdoor scene")
0xd5e: @ Trace(Stack[-1])
0xd5f: Pop(1)
0xd60: Return(); Pop(8)

0xd61: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd62: Pop(0)
0xd63: Pop(0); Push((bool) Stack[-1] == 0)
0xd64: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd65: Push("Warning: outdoor scene locator ")
0xd66: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd67: Push(" doesnt exist")
0xd68: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd69: @ Trace(Stack[-1])
0xd6a: Pop(1)
0xd6b: @@ GetMap(Stack[-11])
0xd6c: Pop(0)
0xd6d: Pop(0); Push((bool) Stack[-11] == 0)
0xd6e: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6f: Push("Can't find map")
0xd70: @ Trace(Stack[-1])
0xd71: Pop(1)
0xd72: Return(); Pop(8)

0xd73: Push(CvectorIndex(Stack[-4], 0))
0xd74: Push(CvectorIndex(Stack[-5], 2))
0xd75: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd76: Pop(2)
0xd77: Return(); Pop(8)

0xd78: Stack[-2] = 0
0xd79: PushEmpty(int, int)
0xd7a: Push("branch")
0xd7b: @ GetVariable(Stack[-1], Stack[-2])
0xd7c: Pop(1)
0xd7d: Push((int) 0)
0xd7e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7f: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd80: Stack[-3] = (int) 1
0xd81: Return(); Pop(2)

0xd82: GOTO 0xd88

0xd83: Push((int) 1)
0xd84: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd85: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd86: Stack[-3] = (int) 2
0xd87: Return(); Pop(2)

0xd88: Stack[-3] = (int) 3
0xd89: Return(); Pop(2)

0xd8a: PushEmpty()
0xd8b: PushEmpty(bool, int)
0xd8c: Stack[-1] = (int) 8
0xd8d: Call2 0xb24

0xd8e: Pop(1)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd90: PushEmpty(int, object)
0xd91: Stack[-1] = Stack[-3]
0xd92: Push(-2, 1); TaskCall(0)
0xd93: Call2 0x0

0xd94: Pop(-2, 1); TaskReturn
0xd95: Pop(2)
0xd96: Return(); Pop(0)

0xd97: PushEmpty(bool, int)
0xd98: Stack[-1] = (int) 12
0xd99: Call2 0xb24

0xd9a: Pop(1)
0xd9b: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd9c: PushEmpty(int, object)
0xd9d: Stack[-1] = Stack[-3]
0xd9e: Push(-2, 1); TaskCall(2)
0xd9f: Call2 0x684

0xda0: Pop(-2, 1); TaskReturn
0xda1: Pop(2)
0xda2: Return(); Pop(0)

0xda3: PushEmpty(int, object)
0xda4: Stack[-1] = Stack[-3]
0xda5: Push(-2, 1); TaskCall(4)
0xda6: Call2 0x787

0xda7: Pop(-2, 1); TaskReturn
0xda8: Pop(2)
0xda9: Return(); Pop(0)

