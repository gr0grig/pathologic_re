GlobalVarCount = 0

Strings:
	W:Knife
	W:tvirin
	W:lemon
	W:funduk
	W:peanut
	W:walnut
	W:rifle_ammo
	W:revolver_ammo
	W:samopal_ammo
	A:IsOnGround
	W:nouse_container
// @pool_raw:4b006e006900660065000000740076006900720069006e0000006c0065006d006f006e000000660075006e00640075006b0000007000650061006e00750074000000770061006c006e007500740000007200690066006c0065005f0061006d006d006f0000007200650076006f006c007600650072005f0061006d006d006f000000730061006d006f00700061006c005f0061006d006d006f00000049734f6e47726f756e64006e006f007500730065005f0063006f006e007400610069006e00650072000000

Import:
	SetVisibility (1 args)
	DisableUpdate (0 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x45 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ DisableUpdate()
0x4: Pop(0)
0x5: PushEmpty(string, int, int)
0x6: Stack[-3] = "Knife" // @poff=0
0x7: Stack[-2] = (int) 1
0x8: Stack[-1] = (int) 15
0x9: Call2 0x5f

0xa: Pop(3)
0xb: PushEmpty(string, int, int)
0xc: Stack[-3] = "tvirin" // @poff=12
0xd: Stack[-2] = (int) 1
0xe: Stack[-1] = (int) 7
0xf: Call2 0x5f

0x10: Pop(3)
0x11: PushEmpty(string, int, int, int)
0x12: Stack[-4] = "lemon" // @poff=26
0x13: Stack[-3] = (int) 1
0x14: Stack[-2] = (int) 5
0x15: Stack[-1] = (int) 2
0x16: Call2 0x6a

0x17: Pop(4)
0x18: PushEmpty(string, int, int)
0x19: Stack[-3] = "funduk" // @poff=38
0x1a: Stack[-2] = (int) 1
0x1b: Stack[-1] = (int) 30
0x1c: Call2 0x5f

0x1d: Pop(3)
0x1e: PushEmpty(string, int, int)
0x1f: Stack[-3] = "peanut" // @poff=52
0x20: Stack[-2] = (int) 1
0x21: Stack[-1] = (int) 30
0x22: Call2 0x5f

0x23: Pop(3)
0x24: PushEmpty(string, int, int)
0x25: Stack[-3] = "walnut" // @poff=66
0x26: Stack[-2] = (int) 1
0x27: Stack[-1] = (int) 30
0x28: Call2 0x5f

0x29: Pop(3)
0x2a: PushEmpty(string, int, int)
0x2b: Stack[-3] = "rifle_ammo" // @poff=80
0x2c: Stack[-2] = (int) 1
0x2d: Stack[-1] = (int) 10
0x2e: Call2 0x5f

0x2f: Pop(3)
0x30: PushEmpty(string, int, int, int)
0x31: Stack[-4] = "revolver_ammo" // @poff=102
0x32: Stack[-3] = (int) 1
0x33: Stack[-2] = (int) 10
0x34: Stack[-1] = (int) 2
0x35: Call2 0x6a

0x36: Pop(4)
0x37: PushEmpty(string, int, int)
0x38: Stack[-3] = "samopal_ammo" // @poff=130
0x39: Stack[-2] = (int) 1
0x3a: Stack[-1] = (int) 13
0x3b: Call2 0x5f

0x3c: Pop(3)
0x3d: PushEmpty()
0x3e: Call2 0x41

0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: @ Hold()
0x42: Pop(0)
0x43: GOTO 0x41

0x44: Return(); Pop(0)

0x45: PushEmpty(bool, bool, bool, bool)
0x46: PushEmpty(bool)
0x47: Stack[-1] = (bool) 1
0x48: Pop(0); Push((bool) Stack[-6] == 0)
0x49: IF (Stack[-1] == 1) GOTO 0x50; Pop(1)

0x4a: PushEmpty(bool)
0x4b: Call2 0x7e

0x4c: Pop(0)
0x4d: Pop(1); Push((bool) Stack[-1] == 0)
0x4e: IF (Stack[-1] == 1) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 0
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Return(); Pop(4)

0x52: @@ IsOnGround(Stack[-2]); Obj=5 // @poff=156
0x53: Pop(0)
0x54: Push(Stack[-2])
0x55: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x56: EventDisable(0)
0x57: @ IsOverrideActive(Stack[-1])
0x58: Pop(0)
0x59: Pop(0); Push((bool) Stack[-1] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: @ Barter(Stack[-5])
0x5c: Pop(0)
0x5d: EventEnable(0)
0x5e: Return(); Pop(4)

0x5f: PushEmpty(bool, bool)
0x60: PushEmpty(bool, int, int)
0x61: Stack[-7] = Stack[-2]
0x62: Stack[-6] = Stack[-1]
0x63: Call2 0x79

0x64: Pop(2)
0x65: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x66: Push((int) 0)
0x67: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x68: Pop(1)
0x69: Return(); Pop(2)

0x6a: PushEmpty(int, bool, int, bool)
0x6b: PushEmpty(bool, int, int)
0x6c: Stack[-10] = Stack[-2]
0x6d: Stack[-9] = Stack[-1]
0x6e: Call2 0x79

0x6f: Pop(2)
0x70: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x71: @ irand(Stack[-2], Stack[-5])
0x72: Pop(0)
0x73: Push((int) 0)
0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[-4] + Stack[-1]);
0x76: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: Return(); Pop(4)

0x79: PushEmpty(int, int)
0x7a: @ irand(Stack[-1], Stack[-3])
0x7b: Pop(0)
0x7c: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x7d: Return(); Pop(2)

0x7e: PushEmpty(int, int)
0x7f: Push("nouse_container") // @poff=167
0x80: @ GetVariable(Stack[-1], Stack[-2])
0x81: Pop(1)
0x82: Stack[-3] = !Stack[-1]; Pop(0);
0x83: Return(); Pop(2)

