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
	Patronage
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Rage
	Discontent
	Untrust
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	oob6Mat1
	b6q01
	b6q01MatGotoByk
	pt_b6q01_bull
	AddMark
	alpha_pills
	RemoveItemByType
	quest_b6_01
	init_altar
	clean_termitnik
	playsound
	giveitem
	oob6Mat2
	pt_map_kurgan
	ShowMap
	recipe1 is given
	recipe1
	GetItemCountOfType
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
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x3dc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf4 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x3e0 Vars = (string)
		EVENT_6 Op = 0x3f4 Vars = ()
		EVENT_5 Op = 0x401 Vars = ()
		EVENT_7 Op = 0x44a Vars = (int)
		EVENT_45 Op = 0x48c Vars = (bool)
		EVENT_0 Op = 0x498 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x521

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x7e5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7e3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7e7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7e9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7d2

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
0x31: Call2 0x637

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x578

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
0x48: Call2 0x566

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
0x56: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x711

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x6aa

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Patronage"
0x63: Call2 0xde

0x64: Pop(1)
0x65: Push((int) 520595)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 520596)
0x6b: Push((int) 21802)
0x6c: Push((int) 21801)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 520621)
0x70: Push((int) 29795)
0x71: Push((int) 21829)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0xc0

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xde

0x78: Pop(1)
0x79: Push((int) 520622)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x71d

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 520623)
0x84: Push((int) 21833)
0x85: Push((int) 21832)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x729

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x733

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: Push((int) 520626)
0x97: Push((int) 21836)
0x98: Push((int) 21835)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0x733

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x73f

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 520686)
0xaa: Push((int) 21897)
0xab: Push((int) 21896)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x705

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: Push((int) 528534)
0xb4: Push((int) 29927)
0xb5: Push((int) 29926)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 520629)
0xb9: Push((int) -1)
0xba: Push((int) 21838)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: GOTO 0xc0

0xbe: Return(); Pop(0)

0xbf: GOTO 0x55

0xc0: PushEmpty(bool)
0xc1: Call2 0x7eb

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc4: @ lshWaitForAnimEnd()
0xc5: Pop(0)
0xc6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0xce

0xc9: PushEmpty(string)
0xca: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcb: Call2 0x602

0xcc: Pop(1)
0xcd: GOTO 0xc4

0xce: GOTO 0xdd

0xcf: Push("all")
0xd0: Push("idle")
0xd1: @ PlayAnimation(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: @ WaitForAnimEnd()
0xd4: Pop(0)
0xd5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: GOTO 0xdd

0xd8: Push("all")
0xd9: Push("idle")
0xda: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: GOTO 0xd3

0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: PushEmpty(bool)
0xe0: Call2 0x7eb

0xe1: Pop(0)
0xe2: Pop(1); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Return(); Pop(0)

0xe5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Return(); Pop(0)

0xe8: PushEmpty(string, bool)
0xe9: Stack[-2] = Stack[-3]
0xea: Push("")
0xeb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: Stack[-1] = (bool) 0
0xee: GOTO 0xf0

0xef: Stack[-1] = (bool) 1
0xf0: Call2 0x612

0xf1: Pop(2)
0xf2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Push((int) 1)
0xf6: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0xf7: PushEmpty()
0xf8: Call2 0x630

0xf9: Pop(0)
0xfa: Push((int) 21809)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x6b0

0x101: Pop(2)
0x102: Push((int) 21822)
0x103: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x6b0

0x109: Pop(2)
0x10a: Push((int) 21834)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x6b0

0x111: Pop(2)
0x112: Push((int) 21895)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x6b9

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x6ea

0x11e: Pop(2)
0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x6de

0x123: Pop(2)
0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x6fa

0x128: Pop(2)
0x129: Push((int) 21890)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x6b9

0x130: Pop(2)
0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x6ea

0x135: Pop(2)
0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x6fa

0x13a: Pop(2)
0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x6de

0x13f: Pop(2)
0x140: Push((int) 29926)
0x141: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0x6e4

0x147: Pop(2)
0x148: Push((int) 21800)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x711

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x150: PushEmpty(object, object)
0x151: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x152: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x153: Call2 0x6aa

0x154: Pop(2)
0x155: PushEmpty(string)
0x156: Stack[-1] = "Patronage"
0x157: Call2 0xde

0x158: Pop(1)
0x159: Push((int) 520595)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 520596)
0x15f: Push((int) 21802)
0x160: Push((int) 21801)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 520621)
0x164: Push((int) 29795)
0x165: Push((int) 21829)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xde

0x16c: Pop(1)
0x16d: Push((int) 520622)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x71d

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push((int) 520623)
0x178: Push((int) 21833)
0x179: Push((int) 21832)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: PushEmpty(bool)
0x17d: Stack[-1] = (bool) 0
0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x180: Call2 0x729

0x181: Pop(1)
0x182: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0x733

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Stack[-1] = (bool) 1
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: Push((int) 520626)
0x18b: Push((int) 21836)
0x18c: Push((int) 21835)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: PushEmpty(bool, object)
0x192: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x193: Call2 0x733

0x194: Pop(1)
0x195: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0x73f

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: Push((int) 520686)
0x19e: Push((int) 21897)
0x19f: Push((int) 21896)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x705

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 528534)
0x1a8: Push((int) 29927)
0x1a9: Push((int) 29926)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Push((int) 520629)
0x1ad: Push((int) -1)
0x1ae: Push((int) 21838)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 29927)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Patronage"
0x1b7: Call2 0xde

0x1b8: Pop(1)
0x1b9: Push((int) 528535)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 528536)
0x1bf: Push((int) 29929)
0x1c0: Push((int) 29928)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 29929)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral"
0x1c9: Call2 0xde

0x1ca: Pop(1)
0x1cb: Push((int) 528537)
0x1cc: @@ SetMessage(Stack[-1])
0x1cd: Pop(1)
0x1ce: @@ ClearReplies()
0x1cf: Pop(0)
0x1d0: Push((int) 528538)
0x1d1: Push((int) 29931)
0x1d2: Push((int) 29930)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 29931)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral"
0x1db: Call2 0xde

0x1dc: Pop(1)
0x1dd: Push((int) 528539)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 528540)
0x1e3: Push((int) 29933)
0x1e4: Push((int) 29932)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 29933)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xde

0x1ee: Pop(1)
0x1ef: Push((int) 528541)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 528542)
0x1f5: Push((int) 29935)
0x1f6: Push((int) 29934)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 29935)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xde

0x200: Pop(1)
0x201: Push((int) 528543)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 528544)
0x207: Push((int) 29937)
0x208: Push((int) 29936)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 29937)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0xde

0x212: Pop(1)
0x213: Push((int) 528545)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 528546)
0x219: Push((int) -1)
0x21a: Push((int) 29938)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 21897)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Rage"
0x223: Call2 0xde

0x224: Pop(1)
0x225: Push((int) 520687)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 520689)
0x22b: Push((int) 21900)
0x22c: Push((int) 21899)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 520688)
0x230: Push((int) -1)
0x231: Push((int) 21898)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 21900)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Rage"
0x23a: Call2 0xde

0x23b: Pop(1)
0x23c: Push((int) 520690)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 520691)
0x242: Push((int) -1)
0x243: Push((int) 21901)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 520692)
0x247: Push((int) -1)
0x248: Push((int) 21902)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 21836)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Patronage"
0x251: Call2 0xde

0x252: Pop(1)
0x253: Push((int) 520627)
0x254: @@ SetMessage(Stack[-1])
0x255: Pop(1)
0x256: @@ ClearReplies()
0x257: Pop(0)
0x258: Push((int) 520628)
0x259: Push((int) 21885)
0x25a: Push((int) 21837)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Push((int) 520677)
0x25e: Push((int) 21887)
0x25f: Push((int) 21886)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 21887)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral"
0x268: Call2 0xde

0x269: Pop(1)
0x26a: Push((int) 520678)
0x26b: @@ SetMessage(Stack[-1])
0x26c: Pop(1)
0x26d: @@ ClearReplies()
0x26e: Pop(0)
0x26f: Push((int) 520679)
0x270: Push((int) 21885)
0x271: Push((int) 21888)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 21885)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Patronage"
0x27a: Call2 0xde

0x27b: Pop(1)
0x27c: Push((int) 520676)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 520681)
0x282: Push((int) 21892)
0x283: Push((int) 21891)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Push((int) 520680)
0x287: Push((int) -1)
0x288: Push((int) 21890)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 21892)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Patronage"
0x291: Call2 0xde

0x292: Pop(1)
0x293: Push((int) 520682)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 520683)
0x299: Push((int) 21894)
0x29a: Push((int) 21893)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 528420)
0x29e: Push((int) 29803)
0x29f: Push((int) 29802)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 29803)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0xde

0x2a9: Pop(1)
0x2aa: Push((int) 528421)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 528422)
0x2b0: Push((int) 21894)
0x2b1: Push((int) 29804)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Push((int) 21894)
0x2b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "Neutral"
0x2ba: Call2 0xde

0x2bb: Pop(1)
0x2bc: Push((int) 520684)
0x2bd: @@ SetMessage(Stack[-1])
0x2be: Pop(1)
0x2bf: @@ ClearReplies()
0x2c0: Pop(0)
0x2c1: Push((int) 520685)
0x2c2: Push((int) -1)
0x2c3: Push((int) 21895)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 21833)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Rage"
0x2cc: Call2 0xde

0x2cd: Pop(1)
0x2ce: Push((int) 520624)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 520625)
0x2d4: Push((int) -1)
0x2d5: Push((int) 21834)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 21802)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Patronage"
0x2de: Call2 0xde

0x2df: Pop(1)
0x2e0: Push((int) 520597)
0x2e1: @@ SetMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ ClearReplies()
0x2e4: Pop(0)
0x2e5: Push((int) 528414)
0x2e6: Push((int) 29795)
0x2e7: Push((int) 29794)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 29795)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Rage"
0x2f0: Call2 0xde

0x2f1: Pop(1)
0x2f2: Push((int) 528415)
0x2f3: @@ SetMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ ClearReplies()
0x2f6: Pop(0)
0x2f7: Push((int) 528416)
0x2f8: Push((int) 29798)
0x2f9: Push((int) 29797)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Push((int) 528418)
0x2fd: Push((int) 21806)
0x2fe: Push((int) 29799)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Push((int) 29798)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x305: PushEmpty(string)
0x306: Stack[-1] = "Discontent"
0x307: Call2 0xde

0x308: Pop(1)
0x309: Push((int) 528417)
0x30a: @@ SetMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ ClearReplies()
0x30d: Pop(0)
0x30e: Push((int) 520598)
0x30f: Push((int) 21804)
0x310: Push((int) 21803)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Push((int) 520620)
0x314: Push((int) 21808)
0x315: Push((int) 21827)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Push((int) 21804)
0x31a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x31c: PushEmpty(string)
0x31d: Stack[-1] = "Patronage"
0x31e: Call2 0xde

0x31f: Pop(1)
0x320: Push((int) 520599)
0x321: @@ SetMessage(Stack[-1])
0x322: Pop(1)
0x323: @@ ClearReplies()
0x324: Pop(0)
0x325: Push((int) 520600)
0x326: Push((int) 21806)
0x327: Push((int) 21805)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: Push((int) 21806)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral"
0x330: Call2 0xde

0x331: Pop(1)
0x332: Push((int) 520601)
0x333: @@ SetMessage(Stack[-1])
0x334: Pop(1)
0x335: @@ ClearReplies()
0x336: Pop(0)
0x337: Push((int) 520602)
0x338: Push((int) 21808)
0x339: Push((int) 21807)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Push((int) 520605)
0x33d: Push((int) 21811)
0x33e: Push((int) 21810)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Push((int) 21811)
0x343: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x345: PushEmpty(string)
0x346: Stack[-1] = "Untrust"
0x347: Call2 0xde

0x348: Pop(1)
0x349: Push((int) 520606)
0x34a: @@ SetMessage(Stack[-1])
0x34b: Pop(1)
0x34c: @@ ClearReplies()
0x34d: Pop(0)
0x34e: Push((int) 520607)
0x34f: Push((int) 21813)
0x350: Push((int) 21812)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Push((int) 520617)
0x354: Push((int) 21824)
0x355: Push((int) 21823)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 21824)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Untrust"
0x35e: Call2 0xde

0x35f: Pop(1)
0x360: Push((int) 520618)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 520619)
0x366: Push((int) 21815)
0x367: Push((int) 21825)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 21813)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Untrust"
0x370: Call2 0xde

0x371: Pop(1)
0x372: Push((int) 520608)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 520609)
0x378: Push((int) 21815)
0x379: Push((int) 21814)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 520616)
0x37d: Push((int) -1)
0x37e: Push((int) 21822)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 21815)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Untrust"
0x387: Call2 0xde

0x388: Pop(1)
0x389: Push((int) 520610)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 520611)
0x38f: Push((int) 21817)
0x390: Push((int) 21816)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Push((int) 520615)
0x394: Push((int) 21817)
0x395: Push((int) 21821)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 21817)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Rage"
0x39e: Call2 0xde

0x39f: Pop(1)
0x3a0: Push((int) 520612)
0x3a1: @@ SetMessage(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ ClearReplies()
0x3a4: Pop(0)
0x3a5: Push((int) 520613)
0x3a6: Push((int) 21808)
0x3a7: Push((int) 21818)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Push((int) 520614)
0x3ab: Push((int) -1)
0x3ac: Push((int) 21820)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 21808)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Rage"
0x3b5: Call2 0xde

0x3b6: Pop(1)
0x3b7: Push((int) 520603)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 520604)
0x3bd: Push((int) -1)
0x3be: Push((int) 21809)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 528419)
0x3c2: Push((int) -1)
0x3c3: Push((int) 29801)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c8: PushEmpty(bool)
0x3c9: Call2 0x7eb

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: @ lshStopAnimation()
0x3cd: Pop(0)
0x3ce: GOTO 0x3d1

0x3cf: @ StopAnimation()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0xf5

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty()
0x3d5: PushEmpty(int, object)
0x3d6: Stack[-1] = Stack[-3]
0x3d7: Push(-2, 1); TaskCall(0)
0x3d8: Call2 0x0

0x3d9: Pop(-2, 1); TaskReturn
0x3da: Pop(2)
0x3db: Return(); Pop(0)

0x3dc: PushEmpty()
0x3dd: Call2 0x405

0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(bool, bool)
0x3e1: Push("cleanup")
0x3e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e4: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3e5: @ IsLoaded(Stack[-1])
0x3e6: Pop(0)
0x3e7: Pop(0); Push((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e9: PushEmpty(object)
0x3ea: Call2 0x637

0x3eb: Pop(0)
0x3ec: @ RemoveActor(Stack[-1])
0x3ed: Pop(1)
0x3ee: GOTO 0x3f3

0x3ef: Push("restore")
0x3f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3f3: Return(); Pop(2)

0x3f4: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f6: PushEmpty(object)
0x3f7: Call2 0x637

0x3f8: Pop(0)
0x3f9: @ RemoveActor(Stack[-1])
0x3fa: Pop(1)
0x3fb: @ Hold()
0x3fc: Pop(0)
0x3fd: PushEmpty()
0x3fe: Call2 0x470

0x3ff: Pop(0)
0x400: Return(); Pop(0)

0x401: PushEmpty()
0x402: Call2 0x47f

0x403: Pop(0)
0x404: Return(); Pop(0)

0x405: PushEmpty(bool)
0x406: Call2 0x51c

0x407: Pop(0)
0x408: Pop(1); Push((bool) Stack[-1] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: @ Hold()
0x40b: Pop(0)
0x40c: @ GetDirection(Stack[-0])
0x40d: Pop(0)
0x40e: PushEmpty()
0x40f: Call2 0x4b5

0x410: Pop(0)
0x411: GOTO 0x40e

0x412: Return(); Pop(0)

0x413: PushEmpty(object, object)
0x414: Push("player")
0x415: @ FindActor(Stack[-2], Stack[-1])
0x416: Pop(1)
0x417: Pop(0); Push((bool) Stack[-1] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x419: Stack[-3] = (bool) 0
0x41a: Return(); Pop(2)

0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[-3]
0x41d: Call2 0x513

0x41e: Stack[-5] = Stack[-2]
0x41f: Pop(2)
0x420: Return(); Pop(2)

0x421: Stack[-1] = 0
0x422: Push(CvectorIndex(Stack[-0], 0))
0x423: Push(CvectorIndex(Stack[-0], 2))
0x424: @ RotateAsync(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: Return(); Pop(0)

0x427: PushEmpty(object, bool, object, bool)
0x428: Push("player")
0x429: @ FindActor(Stack[-3], Stack[-1])
0x42a: Pop(1)
0x42b: Pop(0); Push((bool) Stack[-2] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-5] = (bool) 0
0x42e: Return(); Pop(4)

0x42f: PushEmpty(float, object)
0x430: Stack[-1] = Stack[-4]
0x431: Call2 0x501

0x432: Pop(1)
0x433: Push((float)90000.0)
0x434: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-5] = (bool) 0
0x437: Return(); Pop(4)

0x438: @ CanSee(Stack[-1], Stack[-2])
0x439: Pop(0)
0x43a: Stack[-5] = Stack[-1]
0x43b: Return(); Pop(4)

0x43c: Stack[-2] = 0
0x43d: PushEmpty(float, float)
0x43e: Push((int) 8)
0x43f: Push((int) 16)
0x440: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(2)
0x442: Push((int) 10)
0x443: @ SetTimer(Stack[-1], Stack[-2])
0x444: Pop(1)
0x445: Return(); Pop(2)

0x446: Push((int) 10)
0x447: @ KillTimer(Stack[-1])
0x448: Pop(1)
0x449: Return(); Pop(0)

0x44a: PushEmpty()
0x44b: Push((int) 10)
0x44c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x44e: PushEmpty()
0x44f: Call2 0x446

0x450: Pop(0)
0x451: PushEmpty(bool)
0x452: Stack[-1] = (bool) 0
0x453: PushEmpty(bool)
0x454: Call2 0x51c

0x455: Pop(0)
0x456: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x457: PushEmpty(bool)
0x458: Call2 0x427

0x459: Pop(0)
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x45d: PushEmpty(bool)
0x45e: Call2 0x413

0x45f: Pop(0)
0x460: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x461: PushEmpty(bool, object)
0x462: PushEmpty(object)
0x463: Call2 0x637

0x464: Stack[-2] = Stack[-1]
0x465: Pop(1)
0x466: Call2 0x5b2

0x467: Pop(2)
0x468: GOTO 0x46f

0x469: PushEmpty()
0x46a: Call2 0x422

0x46b: Pop(0)
0x46c: PushEmpty()
0x46d: Call2 0x43d

0x46e: Pop(0)
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: Call2 0x4fc

0x472: Pop(0)
0x473: PushEmpty()
0x474: Call2 0x446

0x475: Pop(0)
0x476: @ lshStopSpeech()
0x477: Pop(0)
0x478: @ lshStopAnimation()
0x479: Pop(0)
0x47a: @ StopAsync()
0x47b: Pop(0)
0x47c: @ Hold()
0x47d: Pop(0)
0x47e: Return(); Pop(0)

0x47f: @ StopGroup0()
0x480: Pop(0)
0x481: PushEmpty()
0x482: Call2 0x446

0x483: Pop(0)
0x484: PushEmpty(string)
0x485: Stack[-1] = "Neutral"
0x486: Call2 0x602

0x487: Pop(1)
0x488: PushEmpty()
0x489: Call2 0x43d

0x48a: Pop(0)
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: Push(Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48f: PushEmpty()
0x490: Call2 0x43d

0x491: Pop(0)
0x492: GOTO 0x497

0x493: PushEmpty(string)
0x494: Stack[-1] = "Neutral"
0x495: Call2 0x602

0x496: Pop(1)
0x497: Return(); Pop(0)

0x498: PushEmpty(bool, bool)
0x499: @ IsOverrideActive(Stack[-1])
0x49a: Pop(0)
0x49b: Pop(0); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x49d: EventDisable(0)
0x49e: PushEmpty()
0x49f: Call2 0x4fc

0x4a0: Pop(0)
0x4a1: PushEmpty(bool, object)
0x4a2: Stack[-1] = Stack[-5]
0x4a3: Call2 0x513

0x4a4: Pop(2)
0x4a5: EventEnable(0)
0x4a6: PushEmpty(object)
0x4a7: Stack[-1] = Stack[-4]
0x4a8: Call2 0x3d4

0x4a9: Pop(1)
0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = "Neutral"
0x4ac: Call2 0x602

0x4ad: Pop(1)
0x4ae: PushEmpty()
0x4af: Call2 0x446

0x4b0: Pop(0)
0x4b1: PushEmpty()
0x4b2: Call2 0x43d

0x4b3: Pop(0)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4b6: @ WaitForAnimEnd()
0x4b7: Pop(0)
0x4b8: PushEmpty(bool)
0x4b9: Call2 0x51c

0x4ba: Pop(0)
0x4bb: Pop(1); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Return(); Pop(12)

0x4be: PushEmpty(int)
0x4bf: Call2 0x699

0x4c0: Stack[-7] = Stack[-1]
0x4c1: Pop(1)
0x4c2: Stack[-5] = (int) 0
0x4c3: PushEmpty(bool)
0x4c4: Stack[-1] = (bool) 0
0x4c5: Push((int) 5)
0x4c6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c8: PushEmpty(bool)
0x4c9: Call2 0x51c

0x4ca: Pop(0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: Stack[-1] = (bool) 1
0x4cd: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4ce: Pop(0); Push((bool) Stack[-6] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d0: Push((int) 3)
0x4d1: @ Sleep(Stack[-1], Stack[-5])
0x4d2: Pop(1)
0x4d3: Pop(0); Push((bool) Stack[-4] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: GOTO 0x4f7

0x4d6: GOTO 0x4ec

0x4d7: @ irand(Stack[-3], Stack[-6])
0x4d8: Pop(0)
0x4d9: Push((int) 5)
0x4da: @ irand(Stack[-3], Stack[-1])
0x4db: Pop(1)
0x4dc: Push((int) 0)
0x4dd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: Stack[-3] = (int) 0
0x4e0: Push("all")
0x4e1: PushEmpty(string, int)
0x4e2: Stack[-1] = Stack[-6]
0x4e3: Call2 0x692

0x4e4: Pop(1)
0x4e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e6: Pop(2)
0x4e7: @ WaitForAnimEnd(Stack[-1])
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: GOTO 0x4f7

0x4ec: PushEmpty(bool)
0x4ed: Call2 0x4fa

0x4ee: Pop(0)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: GOTO 0x4f7

0x4f2: @ ResetAAS()
0x4f3: Pop(0)
0x4f4: Push((int) 1)
0x4f5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4f6: GOTO 0x4c3

0x4f7: @ ResetAAS()
0x4f8: Pop(0)
0x4f9: Return(); Pop(12)

0x4fa: Stack[-1] = (bool) 1
0x4fb: Return(); Pop(0)

0x4fc: @ StopAnimation()
0x4fd: Pop(0)
0x4fe: @ StopGroup0()
0x4ff: Pop(0)
0x500: Return(); Pop(0)

0x501: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x502: @ GetPosition(Stack[-3])
0x503: Pop(0)
0x504: @@ GetPosition(Stack[-2])
0x505: Pop(0)
0x506: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x507: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x508: Return(); Pop(6)

0x509: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x50a: @ GetPosition(Stack[-3])
0x50b: Pop(0)
0x50c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x50d: Push(CvectorIndex(Stack[-2], 0))
0x50e: Push(CvectorIndex(Stack[-3], 2))
0x50f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x510: Pop(2)
0x511: Stack[-8] = Stack[-1]
0x512: Return(); Pop(6)

0x513: PushEmpty(cvector, cvector)
0x514: @@ GetPosition(Stack[-1])
0x515: Pop(0)
0x516: PushEmpty(bool, cvector)
0x517: Stack[-1] = Stack[-3]
0x518: Call2 0x509

0x519: Stack[-6] = Stack[-2]
0x51a: Pop(2)
0x51b: Return(); Pop(2)

0x51c: PushEmpty(bool, bool)
0x51d: @ IsLoaded(Stack[-1])
0x51e: Pop(0)
0x51f: Stack[-3] = Stack[-1]
0x520: Return(); Pop(2)

0x521: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x522: @@ GetPosition(Stack[-8])
0x523: Pop(0)
0x524: @@ GetEyesHeight(Stack[-9])
0x525: Pop(0)
0x526: Push(CvectorIndex(Stack[-8], 1))
0x527: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x528: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x529: @ GetPosition(Stack[-7])
0x52a: Pop(0)
0x52b: @ GetEyesHeight(Stack[-9])
0x52c: Pop(0)
0x52d: Push(CvectorIndex(Stack[-7], 1))
0x52e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x52f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x530: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x531: Push(CvectorIndex(Stack[-6], 1))
0x532: Stack[-1] = (int) 0
0x533: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x534: Pop(0); Push(Stack[-6] | Stack[-6]);
0x535: Pop(1); Push(Sqrt(Stack[-1]))
0x536: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x537: Stack[-5] = -Stack[-6]; Pop(0);
0x538: Pop(0); Push(Stack[-6] * Stack[-19]);
0x539: PushEmpty(cvector, cvector)
0x53a: Push(CVector(0.0, 1.0, 0.0))
0x53b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x53c: Call2 0x63d

0x53d: Pop(1)
0x53e: Push((int) 25)
0x53f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x540: Pop(2); Push(Stack[-2] + Stack[-1]);
0x541: Push(CVector(0.0, 10.0, 0.0))
0x542: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x543: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x544: @ IsOverrideActive(Stack[-2])
0x545: Pop(0)
0x546: Push(Stack[-2])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-21] = (bool) 0
0x549: Return(); Pop(18)

0x54a: @ StopWorld()
0x54b: Pop(0)
0x54c: Push((bool) 1)
0x54d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x54e: Pop(1)
0x54f: Push(CvectorIndex(Stack[-4], 0))
0x550: Push(CvectorIndex(Stack[-5], 2))
0x551: @ Rotate(Stack[-2], Stack[-1])
0x552: Pop(2)
0x553: PushEmpty(bool)
0x554: Call2 0x7eb

0x555: Pop(0)
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: GOTO 0x560

0x558: Push("head")
0x559: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x55a: Pop(1)
0x55b: Push(Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55d: Push("head")
0x55e: @ LookAsyncCamera(Stack[-1])
0x55f: Pop(1)
0x560: @ CameraWaitForPlayFinish()
0x561: Pop(0)
0x562: @ ResumeWorld()
0x563: Pop(0)
0x564: Stack[-21] = (bool) 1
0x565: Return(); Pop(18)

0x566: PushEmpty(bool, bool)
0x567: Push((bool) 1)
0x568: @ CameraSwitchToNormal(Stack[-1])
0x569: Pop(1)
0x56a: PushEmpty(bool)
0x56b: Call2 0x7eb

0x56c: Pop(0)
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: GOTO 0x577

0x56f: Push("head")
0x570: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x571: Pop(1)
0x572: Push(Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x574: Push("head")
0x575: @ UnlookAsync(Stack[-1])
0x576: Pop(1)
0x577: Return(); Pop(2)

0x578: PushEmpty(int, int, int, int)
0x579: Push("voice_common")
0x57a: @ GetVariable(Stack[-1], Stack[-3])
0x57b: Pop(1)
0x57c: Push(Stack[-2])
0x57d: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x57e: PushEmpty(bool, object)
0x57f: Stack[-1] = Stack[-7]
0x580: Call2 0x5b2

0x581: Pop(1)
0x582: Pop(1); Push((bool) Stack[-1] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x584: PushEmpty(bool, object)
0x585: Stack[-1] = Stack[-7]
0x586: Call2 0x5d7

0x587: Pop(1)
0x588: Pop(1); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-6] = (bool) 0
0x58b: Return(); Pop(4)

0x58c: Push((int) 2)
0x58d: @ irand(Stack[-2], Stack[-1])
0x58e: Pop(1)
0x58f: Push(Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x591: Push("voice_common")
0x592: Push((int) 1)
0x593: Pop(1); Push(Stack[-4] + Stack[-1]);
0x594: Push((int) 3)
0x595: Pop(2); Push(Stack[-2] % Stack[-1]);
0x596: @ SetVariable(Stack[-2], Stack[-1])
0x597: Pop(2)
0x598: GOTO 0x59d

0x599: Push("voice_common")
0x59a: Push((int) 0)
0x59b: @ SetVariable(Stack[-2], Stack[-1])
0x59c: Pop(2)
0x59d: GOTO 0x5b0

0x59e: PushEmpty(bool, object)
0x59f: Stack[-1] = Stack[-7]
0x5a0: Call2 0x5d7

0x5a1: Pop(1)
0x5a2: Pop(1); Push((bool) Stack[-1] == 0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a4: PushEmpty(bool, object)
0x5a5: Stack[-1] = Stack[-7]
0x5a6: Call2 0x5b2

0x5a7: Pop(1)
0x5a8: Pop(1); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-6] = (bool) 0
0x5ab: Return(); Pop(4)

0x5ac: Push("voice_common")
0x5ad: Push((int) 1)
0x5ae: @ SetVariable(Stack[-2], Stack[-1])
0x5af: Pop(2)
0x5b0: Stack[-6] = (bool) 1
0x5b1: Return(); Pop(4)

0x5b2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5b3: Stack[-5] = "c"
0x5b4: Stack[-4] = (int) 0
0x5b5: Push((int) 1)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5b7: Push((int) 1)
0x5b8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ba: @@ HasProperty(Stack[-1], Stack[-4])
0x5bb: Pop(1)
0x5bc: Pop(0); Push((bool) Stack[-3] == 0)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5be: GOTO 0x5c2

0x5bf: Push((int) 1)
0x5c0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5c1: GOTO 0x5b5

0x5c2: Pop(0); Push((bool) Stack[-4] == 0)
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c4: Stack[-12] = (bool) 0
0x5c5: Return(); Pop(10)

0x5c6: Stack[-2] = (int) 0
0x5c7: Push((int) 1)
0x5c8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: @ irand(Stack[-2], Stack[-4])
0x5cb: Pop(0)
0x5cc: Push((int) 1)
0x5cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5cf: @@ GetProperty(Stack[-1], Stack[-2])
0x5d0: Pop(1)
0x5d1: PushEmpty(bool, string)
0x5d2: Stack[-1] = Stack[-3]
0x5d3: Call2 0x621

0x5d4: Stack[-14] = Stack[-2]
0x5d5: Pop(2)
0x5d6: Return(); Pop(10)

0x5d7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5d8: Push("d")
0x5d9: PushEmpty(int)
0x5da: Call2 0x689

0x5db: Pop(0)
0x5dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5dd: Push("m")
0x5de: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5df: Stack[-4] = (int) 0
0x5e0: Push((int) 1)
0x5e1: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e2: Push((int) 1)
0x5e3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5e4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5e5: @@ HasProperty(Stack[-1], Stack[-4])
0x5e6: Pop(1)
0x5e7: Pop(0); Push((bool) Stack[-3] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e9: GOTO 0x5ed

0x5ea: Push((int) 1)
0x5eb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5ec: GOTO 0x5e0

0x5ed: Pop(0); Push((bool) Stack[-4] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-12] = (bool) 0
0x5f0: Return(); Pop(10)

0x5f1: Stack[-2] = (int) 0
0x5f2: Push((int) 1)
0x5f3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: @ irand(Stack[-2], Stack[-4])
0x5f6: Pop(0)
0x5f7: Push((int) 1)
0x5f8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5fa: @@ GetProperty(Stack[-1], Stack[-2])
0x5fb: Pop(1)
0x5fc: PushEmpty(bool, string)
0x5fd: Stack[-1] = Stack[-3]
0x5fe: Call2 0x621

0x5ff: Stack[-14] = Stack[-2]
0x600: Pop(2)
0x601: Return(); Pop(10)

0x602: PushEmpty(bool, float, float, bool, float, float)
0x603: @ lshHasAnimation(Stack[-3], Stack[-7])
0x604: Pop(0)
0x605: Push(Stack[-3])
0x606: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x607: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x608: Pop(0)
0x609: Push((bool) 0)
0x60a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(1)
0x60c: GOTO 0x611

0x60d: Push("Can't find lsh animation : ")
0x60e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x60f: @ Trace(Stack[-1])
0x610: Pop(1)
0x611: Return(); Pop(6)

0x612: PushEmpty(bool, float, float, bool, float, float)
0x613: @ lshHasAnimation(Stack[-3], Stack[-8])
0x614: Pop(0)
0x615: Push(Stack[-3])
0x616: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x617: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x618: Pop(0)
0x619: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x61a: Pop(0)
0x61b: GOTO 0x620

0x61c: Push("Can't find lsh animation : ")
0x61d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x61e: @ Trace(Stack[-1])
0x61f: Pop(1)
0x620: Return(); Pop(6)

0x621: PushEmpty(bool, bool)
0x622: PushEmpty(bool)
0x623: Call2 0x7eb

0x624: Pop(0)
0x625: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x626: @ lshHasSpeech(Stack[-1], Stack[-3])
0x627: Pop(0)
0x628: Push(Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62a: @ lshPlaySpeech(Stack[-3])
0x62b: Pop(0)
0x62c: Stack[-4] = (bool) 1
0x62d: Return(); Pop(2)

0x62e: Stack[-4] = (bool) 0
0x62f: Return(); Pop(2)

0x630: PushEmpty(bool)
0x631: Call2 0x7eb

0x632: Pop(0)
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: @ lshStopSpeech()
0x635: Pop(0)
0x636: Return(); Pop(0)

0x637: PushEmpty(object, object)
0x638: @ self(Stack[-1])
0x639: Pop(0)
0x63a: Stack[-3] = Stack[-1]
0x63b: Return(); Pop(2)

0x63c: Stack[-1] = 0
0x63d: PushEmpty(float, float)
0x63e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x63f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x640: Push((float)0.0)
0x641: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x644: Return(); Pop(2)

0x645: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x646: Return(); Pop(2)

0x647: PushEmpty(int, int)
0x648: @ GetVariable(Stack[-3], Stack[-1])
0x649: Pop(0)
0x64a: Stack[-4] = Stack[-1]
0x64b: Return(); Pop(2)

0x64c: PushEmpty(object, object)
0x64d: @ CreateIntVector(Stack[-1])
0x64e: Pop(0)
0x64f: @@ add(Stack[-4])
0x650: Pop(0)
0x651: @@ add(Stack[-3])
0x652: Pop(0)
0x653: Push((int) 3)
0x654: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x655: Pop(1)
0x656: Return(); Pop(2)

0x657: Stack[-1] = 0
0x658: PushEmpty(int, int, bool, int, int, bool)
0x659: @@ GetItemID(Stack[-3])
0x65a: Pop(0)
0x65b: Push("Category")
0x65c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x65d: Pop(1)
0x65e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x65f: Pop(0)
0x660: Pop(0); Push((bool) Stack[-1] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x662: @@ DropItems(Stack[-8], Stack[-7])
0x663: Pop(0)
0x664: GOTO 0x66a

0x665: PushEmpty(int, int)
0x666: Stack[-2] = Stack[-5]
0x667: Stack[-1] = Stack[-9]
0x668: Call2 0x64c

0x669: Pop(2)
0x66a: Return(); Pop(6)

0x66b: PushEmpty(object, object)
0x66c: @ CreateInvItem(Stack[-1])
0x66d: Pop(0)
0x66e: @@ SetItemName(Stack[-4])
0x66f: Pop(0)
0x670: PushEmpty(object, object, int)
0x671: Stack[-3] = Stack[-8]
0x672: Stack[-2] = Stack[-4]
0x673: Stack[-1] = Stack[-6]
0x674: Call2 0x658

0x675: Pop(3)
0x676: Return(); Pop(2)

0x677: Stack[-1] = 0
0x678: PushEmpty(object, object)
0x679: @ FindActor(Stack[-1], Stack[-4])
0x67a: Pop(0)
0x67b: Pop(0); Push((bool) Stack[-1] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-5] = (bool) 0
0x67e: Return(); Pop(2)

0x67f: @ Trigger(Stack[-1], Stack[-3])
0x680: Pop(0)
0x681: Stack[-5] = (bool) 1
0x682: Return(); Pop(2)

0x683: Stack[-1] = 0
0x684: PushEmpty(float, float)
0x685: @ GetGameTime(Stack[-1])
0x686: Pop(0)
0x687: Stack[-3] = Stack[-1]
0x688: Return(); Pop(2)

0x689: PushEmpty(float, float)
0x68a: @ GetGameTime(Stack[-1])
0x68b: Pop(0)
0x68c: Push((int) 1)
0x68d: PushEmpty(int)
0x68e: Push((int) 24)
0x68f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x690: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x691: Return(); Pop(2)

0x692: PushEmpty(string, string)
0x693: Stack[-1] = "idle"
0x694: Push(Stack[-3])
0x695: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x696: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x697: Stack[-4] = Stack[-1]
0x698: Return(); Pop(2)

0x699: PushEmpty(int, bool, int, bool)
0x69a: Stack[-2] = (int) 0
0x69b: Push("all")
0x69c: PushEmpty(string, int)
0x69d: Stack[-1] = Stack[-5]
0x69e: Call2 0x692

0x69f: Pop(1)
0x6a0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(2)
0x6a2: Pop(0); Push((bool) Stack[-1] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: GOTO 0x6a8

0x6a5: Push((int) 1)
0x6a6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6a7: GOTO 0x69b

0x6a8: Stack[-5] = Stack[-2]
0x6a9: Return(); Pop(4)

0x6aa: PushEmpty()
0x6ab: Push("oob6Mat1")
0x6ac: Push((int) 1)
0x6ad: @ SetVariable(Stack[-2], Stack[-1])
0x6ae: Pop(2)
0x6af: Return(); Pop(0)

0x6b0: PushEmpty()
0x6b1: Push("b6q01")
0x6b2: Push((int) 3)
0x6b3: @ SetVariable(Stack[-2], Stack[-1])
0x6b4: Pop(2)
0x6b5: PushEmpty()
0x6b6: Call2 0x75d

0x6b7: Pop(0)
0x6b8: Return(); Pop(0)

0x6b9: PushEmpty(object, int, object, int)
0x6ba: Push("b6q01")
0x6bb: Push((int) 4)
0x6bc: @ SetVariable(Stack[-2], Stack[-1])
0x6bd: Pop(2)
0x6be: PushEmpty(object)
0x6bf: Call2 0x7a0

0x6c0: Stack[-3] = Stack[-1]
0x6c1: Pop(1)
0x6c2: Push("b6q01MatGotoByk")
0x6c3: Push("pt_b6q01_bull")
0x6c4: Push((int) 1)
0x6c5: Push((int) 530992)
0x6c6: PushEmpty(float)
0x6c7: Call2 0x684

0x6c8: Pop(0)
0x6c9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(5)
0x6cb: PushEmpty()
0x6cc: Call2 0x76a

0x6cd: Pop(0)
0x6ce: Push("alpha_pills")
0x6cf: Push((int) 50)
0x6d0: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(2)
0x6d2: PushEmpty(bool, string, string)
0x6d3: Stack[-2] = "quest_b6_01"
0x6d4: Stack[-1] = "init_altar"
0x6d5: Call2 0x678

0x6d6: Pop(3)
0x6d7: PushEmpty(bool, string, string)
0x6d8: Stack[-2] = "quest_b6_01"
0x6d9: Stack[-1] = "clean_termitnik"
0x6da: Call2 0x678

0x6db: Pop(3)
0x6dc: Return(); Pop(4)

0x6dd: Stack[-2] = 0
0x6de: PushEmpty()
0x6df: Push("playsound")
0x6e0: Push("giveitem")
0x6e1: @ TriggerWorld(Stack[-2], Stack[-1])
0x6e2: Pop(2)
0x6e3: Return(); Pop(0)

0x6e4: PushEmpty()
0x6e5: Push("oob6Mat2")
0x6e6: Push((int) 1)
0x6e7: @ SetVariable(Stack[-2], Stack[-1])
0x6e8: Pop(2)
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty()
0x6eb: PushEmpty(object, string, float)
0x6ec: PushEmpty(object)
0x6ed: Call2 0x7a0

0x6ee: Stack[-4] = Stack[-1]
0x6ef: Pop(1)
0x6f0: Stack[-2] = "pt_map_kurgan"
0x6f1: Stack[-1] = (int) 2
0x6f2: Call2 0x7b1

0x6f3: Pop(3)
0x6f4: PushEmpty(object)
0x6f5: Call2 0x7a0

0x6f6: Pop(0)
0x6f7: @@ ShowMap(Stack[-1])
0x6f8: Pop(1)
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: Push("recipe1 is given")
0x6fc: @ Trace(Stack[-1])
0x6fd: Pop(1)
0x6fe: PushEmpty(object, string, int)
0x6ff: Stack[-3] = Stack[-5]
0x700: Stack[-2] = "recipe1"
0x701: Stack[-1] = (int) 1
0x702: Call2 0x66b

0x703: Pop(3)
0x704: Return(); Pop(0)

0x705: PushEmpty()
0x706: PushEmpty(int, string)
0x707: Stack[-1] = "oob6Mat2"
0x708: Call2 0x647

0x709: Pop(1)
0x70a: Push((int) 0)
0x70b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-2] = (bool) 1
0x70e: Return(); Pop(0)

0x70f: Stack[-2] = (bool) 0
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: PushEmpty(int, string)
0x713: Stack[-1] = "oob6Mat1"
0x714: Call2 0x647

0x715: Pop(1)
0x716: Push((int) 0)
0x717: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: Stack[-2] = (bool) 1
0x71a: Return(); Pop(0)

0x71b: Stack[-2] = (bool) 0
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: PushEmpty(int, string)
0x71f: Stack[-1] = "b6q01"
0x720: Call2 0x647

0x721: Pop(1)
0x722: Push((int) 2)
0x723: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: Stack[-2] = (bool) 1
0x726: Return(); Pop(0)

0x727: Stack[-2] = (bool) 0
0x728: Return(); Pop(0)

0x729: PushEmpty()
0x72a: PushEmpty(bool, object)
0x72b: Stack[-1] = Stack[-3]
0x72c: Call2 0x749

0x72d: Pop(1)
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: Stack[-2] = (bool) 1
0x730: Return(); Pop(0)

0x731: Stack[-2] = (bool) 0
0x732: Return(); Pop(0)

0x733: PushEmpty()
0x734: PushEmpty(int, string)
0x735: Stack[-1] = "b6q01"
0x736: Call2 0x647

0x737: Pop(1)
0x738: Push((int) 3)
0x739: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-2] = (bool) 1
0x73c: Return(); Pop(0)

0x73d: Stack[-2] = (bool) 0
0x73e: Return(); Pop(0)

0x73f: PushEmpty()
0x740: PushEmpty(bool, object)
0x741: Stack[-1] = Stack[-3]
0x742: Call2 0x750

0x743: Pop(1)
0x744: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x745: Stack[-2] = (bool) 1
0x746: Return(); Pop(0)

0x747: Stack[-2] = (bool) 0
0x748: Return(); Pop(0)

0x749: PushEmpty(int, int)
0x74a: Push("alpha_pills")
0x74b: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x74c: Pop(1)
0x74d: Push((int) 50)
0x74e: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x74f: Return(); Pop(2)

0x750: PushEmpty(int, int)
0x751: Push("alpha_pills")
0x752: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x753: Pop(1)
0x754: Stack[-4] = (bool) 0
0x755: Push((int) 0)
0x756: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x758: Push((int) 50)
0x759: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-4] = (bool) 1
0x75c: Return(); Pop(2)

0x75d: PushEmpty(object, object)
0x75e: Push((int) 363)
0x75f: Push((int) 1)
0x760: Push((int) 525663)
0x761: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: PushEmpty(bool, object, int)
0x764: Stack[-2] = Stack[-4]
0x765: Stack[-1] = (int) 265
0x766: Call2 0x784

0x767: Pop(3)
0x768: Return(); Pop(2)

0x769: Stack[-1] = 0
0x76a: PushEmpty(object, object)
0x76b: Push((int) 364)
0x76c: Push((int) 1)
0x76d: Push((int) 525664)
0x76e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x76f: Pop(3)
0x770: PushEmpty(bool, object, int)
0x771: Stack[-2] = Stack[-4]
0x772: Stack[-1] = (int) 265
0x773: Call2 0x784

0x774: Pop(3)
0x775: Return(); Pop(2)

0x776: Stack[-1] = 0
0x777: PushEmpty(object, object)
0x778: @ GetDiaryRoot(Stack[-1])
0x779: Pop(0)
0x77a: Pop(0); Push((bool) Stack[-1] == 0)
0x77b: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77c: Push("Can't retrieve diary root")
0x77d: @ Trace(Stack[-1])
0x77e: Pop(1)
0x77f: Stack[-3] = (bool) 0
0x780: Return(); Pop(2)

0x781: Stack[-3] = Stack[-1]
0x782: Return(); Pop(2)

0x783: Stack[-1] = 0
0x784: PushEmpty(object, object, int, object, object, int)
0x785: PushEmpty(object)
0x786: Call2 0x777

0x787: Stack[-4] = Stack[-1]
0x788: Pop(1)
0x789: @@ Find(Stack[-7], Stack[-2])
0x78a: Pop(0)
0x78b: Pop(0); Push((bool) Stack[-2] == 0)
0x78c: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x78d: Push("Can't find diary parent with id: ")
0x78e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x78f: @ Trace(Stack[-1])
0x790: Pop(1)
0x791: Stack[-9] = (bool) 0
0x792: Return(); Pop(6)

0x793: @@ AddChild(Stack[-8])
0x794: Pop(0)
0x795: Push((int) 7)
0x796: @ SendWorldWndMessage(Stack[-1])
0x797: Pop(1)
0x798: @@ GetCategory(Stack[-1])
0x799: Pop(0)
0x79a: @ SetDiarySection(Stack[-1])
0x79b: Pop(0)
0x79c: Stack[-9] = (bool) 0
0x79d: Return(); Pop(6)

0x79e: Stack[-2] = 0
0x79f: Stack[-3] = 0
0x7a0: PushEmpty(object, object, object, object)
0x7a1: @ GetMainOutdoorScene(Stack[-2])
0x7a2: Pop(0)
0x7a3: Pop(0); Push((bool) Stack[-2] == 0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a5: Push("Can't find main outdoor scene")
0x7a6: @ Trace(Stack[-1])
0x7a7: Pop(1)
0x7a8: Stack[-1] = 0
0x7a9: Stack[-5] = Stack[-1]
0x7aa: Return(); Pop(4)

0x7ab: @@ GetMap(Stack[-1])
0x7ac: Pop(0)
0x7ad: Stack[-5] = Stack[-1]
0x7ae: Return(); Pop(4)

0x7af: Stack[-1] = 0
0x7b0: Stack[-2] = 0
0x7b1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x7b2: @ GetMainOutdoorScene(Stack[-2])
0x7b3: Pop(0)
0x7b4: Pop(0); Push((bool) Stack[-2] == 0)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b6: Push("Can't find main outdoor scene")
0x7b7: @ Trace(Stack[-1])
0x7b8: Pop(1)
0x7b9: Return(); Pop(8)

0x7ba: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x7bb: Pop(0)
0x7bc: Pop(0); Push((bool) Stack[-1] == 0)
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7be: Push("Warning: outdoor scene locator ")
0x7bf: Pop(1); Push(Stack[-1] + Stack[-11]);
0x7c0: Push(" doesnt exist")
0x7c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7c2: @ Trace(Stack[-1])
0x7c3: Pop(1)
0x7c4: @@ GetMap(Stack[-11])
0x7c5: Pop(0)
0x7c6: Pop(0); Push((bool) Stack[-11] == 0)
0x7c7: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c8: Push("Can't find map")
0x7c9: @ Trace(Stack[-1])
0x7ca: Pop(1)
0x7cb: Return(); Pop(8)

0x7cc: Push(CvectorIndex(Stack[-4], 0))
0x7cd: Push(CvectorIndex(Stack[-5], 2))
0x7ce: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x7cf: Pop(2)
0x7d0: Return(); Pop(8)

0x7d1: Stack[-2] = 0
0x7d2: PushEmpty(int, int)
0x7d3: Push("branch")
0x7d4: @ GetVariable(Stack[-1], Stack[-2])
0x7d5: Pop(1)
0x7d6: Push((int) 0)
0x7d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d9: Stack[-3] = (int) 1
0x7da: Return(); Pop(2)

0x7db: GOTO 0x7e1

0x7dc: Push((int) 1)
0x7dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-3] = (int) 2
0x7e0: Return(); Pop(2)

0x7e1: Stack[-3] = (int) 3
0x7e2: Return(); Pop(2)

0x7e3: Stack[-1] = (int) 515545
0x7e4: Return(); Pop(0)

0x7e5: Stack[-1] = (int) 502870
0x7e6: Return(); Pop(0)

0x7e7: Stack[-1] = "ui/NPC_Mat.png"
0x7e8: Return(); Pop(0)

0x7e9: Stack[-1] = "ui/NPC_Mat_b.png"
0x7ea: Return(); Pop(0)

0x7eb: Stack[-1] = (bool) 1
0x7ec: Return(); Pop(0)

