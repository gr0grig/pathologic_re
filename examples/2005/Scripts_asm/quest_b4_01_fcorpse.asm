GlobalVarCount = 0

Strings:
	A:IsOnGround
	W:nouse_container
	W:branch
	A:SetItemName
	W:Organ
	A:SetProperty
	A:GetItemID
	W:liver
	W:kidney
	W:heart
	W:blood
// @pool_raw:49734f6e47726f756e64006e006f007500730065005f0063006f006e007400610069006e006500720000006200720061006e006300680000005365744974656d4e616d65004f007200670061006e00000053657450726f7065727479004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f0064000000
// @pool_encoding:utf8

Import:
	SetVisibility (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	self (1 args)
	GetVariable (2 args)
	CreateInvItem (1 args)
	AddItem (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0xa Vars = ()
		EVENT_0 Op = 0x14 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x51

0x5: Pop(0)
0x6: PushEmpty()
0x7: Call2 0x10

0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty(object)
0xb: Call2 0x2e

0xc: Pop(0)
0xd: @ RemoveActor(Stack[-1])
0xe: Pop(1)
0xf: Return(); Pop(0)

0x10: @ Hold()
0x11: Pop(0)
0x12: GOTO 0x10

0x13: Return(); Pop(0)

0x14: PushEmpty(bool, bool, bool, bool)
0x15: PushEmpty(bool)
0x16: Stack[-1] = (bool) 1
0x17: Pop(0); Push((bool) Stack[-6] == 0)
0x18: IF (Stack[-1] == 1) GOTO 0x1f; Pop(1)

0x19: PushEmpty(bool)
0x1a: Call2 0x34

0x1b: Pop(0)
0x1c: Pop(1); Push((bool) Stack[-1] == 0)
0x1d: IF (Stack[-1] == 1) GOTO 0x1f; Pop(1)

0x1e: Stack[-1] = (bool) 0
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Return(); Pop(4)

0x21: @@ IsOnGround(Stack[-2]); Obj=5 // @poff=0
0x22: Pop(0)
0x23: Push(Stack[-2])
0x24: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x25: EventDisable(0)
0x26: @ IsOverrideActive(Stack[-1])
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-1] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2a: @ WorkWithCorpse(Stack[-5])
0x2b: Pop(0)
0x2c: EventEnable(0)
0x2d: Return(); Pop(4)

0x2e: PushEmpty(object, object)
0x2f: @ self(Stack[-1])
0x30: Pop(0)
0x31: Stack[-1] = Stack[-3]
0x32: Return(); Pop(2)

0x33: Stack[-1] = 0
0x34: PushEmpty(int, int)
0x35: Push("nouse_container") // @poff=11
0x36: @ GetVariable(Stack[-1], Stack[-2])
0x37: Pop(1)
0x38: Stack[-3] = !Stack[-1]; Pop(0);
0x39: Return(); Pop(2)

0x3a: PushEmpty(int, int)
0x3b: Push("branch") // @poff=43
0x3c: @ GetVariable(Stack[-1], Stack[-2])
0x3d: Pop(1)
0x3e: Stack[-1] = Stack[-3]
0x3f: Return(); Pop(2)

0x40: PushEmpty(object, int, bool, object, int, bool)
0x41: @ CreateInvItem(Stack[-3])
0x42: Pop(0)
0x43: @@ SetItemName(Stack[-7]); Obj=3 // @poff=57
0x44: Pop(0)
0x45: Push("Organ") // @poff=69
0x46: Push((int) 1)
0x47: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=81
0x48: Pop(2)
0x49: @@ GetItemID(Stack[-2]); Obj=3 // @poff=93
0x4a: Pop(0)
0x4b: Push((int) 0)
0x4c: Push((int) 1)
0x4d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: Return(); Pop(6)

0x50: Stack[-3] = 0
0x51: PushEmpty(int)
0x52: Call2 0x3a

0x53: Pop(0)
0x54: Push((int) 1)
0x55: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Return(); Pop(0)

0x58: PushEmpty(string)
0x59: Stack[-1] = "liver" // @poff=103
0x5a: Call2 0x40

0x5b: Pop(1)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "kidney" // @poff=115
0x5e: Call2 0x40

0x5f: Pop(1)
0x60: PushEmpty(string)
0x61: Stack[-1] = "heart" // @poff=129
0x62: Call2 0x40

0x63: Pop(1)
0x64: PushEmpty(string)
0x65: Stack[-1] = "blood" // @poff=141
0x66: Call2 0x40

0x67: Pop(1)
0x68: Return(); Pop(0)

