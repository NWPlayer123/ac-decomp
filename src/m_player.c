#include "m_player_lib.h"

#include "m_play.h"
#include "m_common_data.h"
#include "m_actor_shadow.h"
#include "m_bgm.h"
#include "sys_matrix.h"
#include "ac_tools.h"
#include "m_rcp.h"

/* Common */
#include "../src/m_player_controller.c_inc"
#include "../src/m_player_vibration.c_inc"
#include "../src/m_player_common.c_inc"
#include "../src/m_player_sound.c_inc"
#include "../src/m_player_other_func.c_inc"

/* Item */
#include "../src/m_player_item_common.c_inc"
#include "../src/m_player_item_axe.c_inc"
#include "../src/m_player_item_net.c_inc"
#include "../src/m_player_item_umbrella.c_inc"
#include "../src/m_player_item_rod.c_inc"
#include "../src/m_player_item_scoop.c_inc"
#include "../src/m_player_item_balloon.c_inc"
#include "../src/m_player_item_windmill.c_inc"
#include "../src/m_player_item_fan.c_inc"
#include "../src/m_player_item.c_inc"

/* Draw */
#include "../src/m_player_draw.c_inc"

/* Main Index */
#include "../src/m_player_main_dma.c_inc"
#include "../src/m_player_main_intro.c_inc"
#include "../src/m_player_main_refuse.c_inc"
#include "../src/m_player_main_refuse_pickup.c_inc"
#include "../src/m_player_main_return_demo.c_inc"
#include "../src/m_player_main_return_outdoor.c_inc"
#include "../src/m_player_main_return_outdoor2.c_inc"
#include "../src/m_player_main_wait.c_inc"
#include "../src/m_player_main_walk.c_inc"
#include "../src/m_player_main_run.c_inc"
#include "../src/m_player_main_dash.c_inc"
#include "../src/m_player_main_tumble.c_inc"
#include "../src/m_player_main_tumble_getup.c_inc"
#include "../src/m_player_main_turn_dash.c_inc"
#include "../src/m_player_main_fall.c_inc"
#include "../src/m_player_main_wade.c_inc"
#include "../src/m_player_main_wade_snowball.c_inc"
#include "../src/m_player_main_door.c_inc"
#include "../src/m_player_main_outdoor.c_inc"
#include "../src/m_player_main_invade.c_inc"
#include "../src/m_player_main_hold.c_inc"
#include "../src/m_player_main_push.c_inc"
#include "../src/m_player_main_pull.c_inc"
#include "../src/m_player_main_rotate_furniture.c_inc"
#include "../src/m_player_main_open_furniture.c_inc"
#include "../src/m_player_main_wait_open_furniture.c_inc"
#include "../src/m_player_main_close_furniture.c_inc"
#include "../src/m_player_main_lie_bed.c_inc"
#include "../src/m_player_main_wait_bed.c_inc"
#include "../src/m_player_main_roll_bed.c_inc"
#include "../src/m_player_main_standup_bed.c_inc"
#include "../src/m_player_main_pickup.c_inc"
#include "../src/m_player_main_pickup_jump.c_inc"
#include "../src/m_player_main_pickup_furniture.c_inc"
#include "../src/m_player_main_pickup_exchange.c_inc"
#include "../src/m_player_main_sitdown.c_inc"
#include "../src/m_player_main_sitdown_wait.c_inc"
#include "../src/m_player_main_standup.c_inc"
#include "../src/m_player_main_swing_axe.c_inc"
#include "../src/m_player_main_air_axe.c_inc"
#include "../src/m_player_main_reflect_axe.c_inc"
#include "../src/m_player_main_broken_axe.c_inc"
#include "../src/m_player_main_slip_net.c_inc"
#include "../src/m_player_main_ready_net.c_inc"
#include "../src/m_player_main_ready_walk_net.c_inc"
#include "../src/m_player_main_swing_net.c_inc"
#include "../src/m_player_main_pull_net.c_inc"
#include "../src/m_player_main_stop_net.c_inc"
#include "../src/m_player_main_notice_net.c_inc"
#include "../src/m_player_main_putaway_net.c_inc"
#include "../src/m_player_main_ready_rod.c_inc"
#include "../src/m_player_main_cast_rod.c_inc"
#include "../src/m_player_main_air_rod.c_inc"
#include "../src/m_player_main_relax_rod.c_inc"
#include "../src/m_player_main_collect_rod.c_inc"
#include "../src/m_player_main_vib_rod.c_inc"
#include "../src/m_player_main_fly_rod.c_inc"
#include "../src/m_player_main_notice_rod.c_inc"
#include "../src/m_player_main_putaway_rod.c_inc"
#include "../src/m_player_main_dig_scoop.c_inc"
#include "../src/m_player_main_fill_scoop.c_inc"
#include "../src/m_player_main_reflect_scoop.c_inc"
#include "../src/m_player_main_air_scoop.c_inc"
#include "../src/m_player_main_putin_scoop.c_inc"
#include "../src/m_player_main_putaway_scoop.c_inc"
#include "../src/m_player_main_get_scoop.c_inc"
#include "../src/m_player_main_talk.c_inc"
#include "../src/m_player_main_recieve_wait.c_inc"
#include "../src/m_player_main_recieve_stretch.c_inc"
#include "../src/m_player_main_recieve.c_inc"
#include "../src/m_player_main_recieve_putaway.c_inc"
#include "../src/m_player_main_give.c_inc"
#include "../src/m_player_main_give_wait.c_inc"
#include "../src/m_player_main_takeout_item.c_inc"
#include "../src/m_player_main_putin_item.c_inc"
#include "../src/m_player_main_demo_wait.c_inc"
#include "../src/m_player_main_demo_walk.c_inc"
#include "../src/m_player_main_demo_geton_train.c_inc"
#include "../src/m_player_main_demo_geton_train_wait.c_inc"
#include "../src/m_player_main_demo_getoff_train.c_inc"
#include "../src/m_player_main_demo_standing_train.c_inc"
#include "../src/m_player_main_demo_wade.c_inc"
#include "../src/m_player_main_hide.c_inc"
#include "../src/m_player_main_groundhog.c_inc"
#include "../src/m_player_main_release_creature.c_inc"
#include "../src/m_player_main_wash_car.c_inc"
#include "../src/m_player_main_tired.c_inc"
#include "../src/m_player_main_rotate_octagon.c_inc"
#include "../src/m_player_main_throw_money.c_inc"
#include "../src/m_player_main_pray.c_inc"
#include "../src/m_player_main_shake_tree.c_inc"
#include "../src/m_player_main_mail_jump.c_inc"
#include "../src/m_player_main_mail_land.c_inc"
#include "../src/m_player_main_ready_pitfall.c_inc"
#include "../src/m_player_main_fall_pitfall.c_inc"
#include "../src/m_player_main_struggle_pitfall.c_inc"
#include "../src/m_player_main_climbup_pitfall.c_inc"
#include "../src/m_player_main_stung_bee.c_inc"
#include "../src/m_player_main_notice_bee.c_inc"
#include "../src/m_player_main_remove_grass.c_inc"
#include "../src/m_player_main_shock.c_inc"
#include "../src/m_player_main_knock_door.c_inc"
#include "../src/m_player_main_change_cloth.c_inc"
#include "../src/m_player_main_push_snowball.c_inc"
#include "../src/m_player_main_rotate_umbrella.c_inc"
#include "../src/m_player_main_complete_payment.c_inc"
#include "../src/m_player_main_fail_emu.c_inc"
#include "../src/m_player_main_stung_mosquito.c_inc"
#include "../src/m_player_main_notice_mosquito.c_inc"
#include "../src/m_player_main_demo_geton_boat.c_inc"
#include "../src/m_player_main_swing_fan.c_inc"
#include "../src/m_player_main_switch_on_lighthouse.c_inc"
#include "../src/m_player_main_radio_exercise.c_inc"
#include "../src/m_player_main_demo_geton_boat_sitdown.c_inc"
#include "../src/m_player_main_demo_geton_boat_wait.c_inc"
#include "../src/m_player_main_demo_geton_boat_wade.c_inc"
#include "../src/m_player_main_demo_getoff_boat_standup.c_inc"
#include "../src/m_player_main_demo_getoff_boat.c_inc"
#include "../src/m_player_main_demo_get_golden_item.c_inc"
#include "../src/m_player_main_demo_get_golden_item2.c_inc"
#include "../src/m_player_main_demo_get_golden_axe_wait.c_inc"

/* TODO: looks like all the c_inc files are included before the player funcs in this file based on rodata ordering */

static void Player_actor_ct_forCorect(ACTOR* actorx, GAME* game);
static void Player_actor_set_eye_pattern(ACTOR* actorx, int idx);
static void Player_actor_set_mouth_pattern(ACTOR* actorx, int idx);
static void Player_actor_Set_old_sound_frame_counter(ACTOR* actorx);
static void Player_actor_change_proc_index(ACTOR* actorx, GAME* game);

static int Player_actor_request_main_invade_all(GAME*, int);
static int Player_actor_request_main_refuse(GAME*, int);
static int Player_actor_request_main_return_demo_all(GAME*, int, f32, int);
static int Player_actor_request_main_wait_all(GAME*, f32, f32, int, int);
static int Player_actor_request_main_talk_all(GAME*, ACTOR*, int, f32, int, int);
static int Player_actor_request_main_hold(GAME*, int, int, const xyz_t*, f32, int, int);
static int Player_actor_request_main_recieve_wait(GAME*, ACTOR*, int, int, mActor_name_t, int, int);
static int Player_actor_request_main_give_all(GAME*, ACTOR*, int, int, mActor_name_t, int, int, int, int);
static int Player_actor_request_main_sitdown(GAME*, int, const xyz_t*, int, int);
static int Player_actor_request_main_close_furniture(GAME*, int);
static int Player_actor_request_main_lie_bed(GAME*, int, const xyz_t*, int, int, int);
static int Player_actor_request_main_hide(GAME*, int);
static int Player_actor_request_main_groundhog(GAME*, int);
static int Player_actor_request_main_door(GAME*, const xyz_t*, s16, int, void*, int);
static int Player_actor_request_main_outdoor(GAME*, int, int, int);
static int Player_actor_request_main_wash_car_all(GAME*, const xyz_t*, const xyz_t*, s16, ACTOR*, int);
static int Player_actor_request_main_rotate_octagon_all(GAME*, ACTOR*, int, int, const xyz_t*, s16, int);
static int Player_actor_request_main_throw_money_all(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_pray_all(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_mail_jump_all(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_demo_wait_all(GAME*, int, void*, int);
static int Player_actor_request_main_demo_walk_all(GAME*, f32, f32, f32, int, int);
static int Player_actor_request_main_demo_geton_train(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_demo_getoff_train(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_demo_standing_train_all(GAME*, int);
static int Player_actor_request_main_stung_bee_all(GAME*, int);
static int Player_actor_request_main_shock_all(GAME*, f32, s16, s8, int, int);
static int Player_actor_request_main_change_cloth_forNPC(GAME*, mActor_name_t, int);
static int Player_actor_request_main_push_snowball_all(GAME*, void*, int, int);
static int Player_actor_request_main_stung_mosquito_all(GAME*, int, int);
static int Player_actor_request_main_switch_on_lighthouse_all(GAME*, const xyz_t*, int, int);
static int Player_actor_request_main_demo_geton_boat_all(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_demo_getoff_boat_standup_all(GAME*, const xyz_t*, s16, int);
static int Player_actor_request_main_demo_get_golden_item2_all(GAME*, int, int);
static int Player_actor_request_main_demo_get_golden_axe_wait_all(GAME*, int);
static int Player_actor_check_request_main_priority(GAME*, int);
static void* Player_actor_get_door_label(GAME*);
static int Player_actor_Set_Item_net_catch_request_table(ACTOR*, GAME*, u32, s8, const xyz_t*, f32);
static f32 Player_actor_Get_Item_net_catch_swing_timer(ACTOR*, GAME*);
static u8 Player_actor_Set_Item_net_catch_request_force(ACTOR*, GAME*, u32, s8);
static void Player_actor_Set_force_position_angle(GAME*, const xyz_t*, const s_xyz*, u8);
static u8 Player_actor_Get_force_position_angle(GAME*, xyz_t*, s_xyz*);
static int Player_actor_Get_WadeEndPos(GAME*, xyz_t*);
static int Player_actor_Check_Label_main_push_snowball(GAME*, void*);
static int Player_actor_SetParam_for_push_snowball(GAME*, const xyz_t*, s16, f32);
static int Player_actor_able_submenu_request_main_index(GAME*);
static int Player_actor_check_able_change_camera_normal_index(ACTOR*);
static int Player_actor_Check_able_force_speak_label(GAME*, ACTOR*);
static int Player_actor_check_cancel_request_change_proc_index(int);
static u32 Player_actor_Get_item_net_catch_label(ACTOR*);
static int Player_actor_Change_item_net_catch_label(ACTOR*, u32, s8);
static int Player_actor_Check_StopNet(ACTOR*, xyz_t*);
static int Player_actor_Check_HitAxe(ACTOR*, xyz_t*);
static int Player_actor_Check_VibUnit_OneFrame(ACTOR*, const xyz_t*);
static int Player_actor_Check_HitScoop(ACTOR*, xyz_t*);
static int Player_actor_Check_DigScoop(ACTOR*, xyz_t*);
static int Player_actor_check_request_change_item(GAME*);
static int Player_actor_Check_RotateOctagon(GAME*);
static int Player_actor_Check_end_stung_bee(ACTOR*);
static int Player_actor_Get_status_for_bee(ACTOR*);
static int Player_actor_Set_ScrollDemo_forWade_snowball(ACTOR*, int, const xyz_t*);
static int Player_actor_Check_tree_shaken(ACTOR*, const xyz_t*);
static int Player_actor_Check_tree_shaken_little(ACTOR*, const xyz_t*);
static int Player_actor_Check_tree_shaken_big(ACTOR*, const xyz_t*);
static int Player_actor_Check_Label_main_wade_snowball(GAME*, void*);
static int Player_actor_GetSnowballPos_forWadeSnowball(ACTOR*, xyz_t*);
static int Player_actor_CheckCondition_forWadeSnowball(GAME*, const xyz_t*, s16);
static mActor_name_t Player_actor_Get_itemNo_forWindow(ACTOR*);
static int Player_actor_check_cancel_event_without_priority(GAME*);
static int Player_actor_CheckScene_AbleSubmenu(void);
static int Player_actor_Check_stung_mosquito(GAME*, ACTOR*);

static int Player_actor_request_main_walk_all(GAME*, xyz_t*, f32, int, int);
static int Player_actor_request_main_run_all(GAME*, f32, int, int);
static int Player_actor_request_main_dash_all(GAME*, f32, int, int);

static void Player_actor_init_value(ACTOR* actorx, GAME* game) {
    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;
    GAME_PLAY* play = (GAME_PLAY*)game;
    int* shake_tree_table_ut_x_p;
    int* shake_tree_table_ut_z_p;
    s8* radio_exercise_command_ring_buffer_p;
    int i;

    player->actor_class.gravity = -1.0f;
    player->actor_class.max_velocity_y = -8.0f;
    player->actor_class.scale.x = 0.01f;
    player->actor_class.scale.y = 0.01f;
    player->actor_class.scale.z = 0.01f;
    player->balloon_actor = Actor_info_make_actor(&play->actor_info, game, mAc_PROFILE_BALLOON,
                                                  actorx->world.position.x, actorx->world.position.y,
                                                  actorx->world.position.z, 0, 0, 0, -1, -1, -1, EMPTY_NO, -1, -1, -1);
    player->animation0_idx = -1;
    player->animation1_idx = -1;
    player->_0DBC = -1;
    player->item_shape_type[0] = -1;
    player->item_shape_type[1] = -1;
    player->item_shape_type[2] = -1;
    player->item_shape_type[3] = -1;

    Player_actor_ct_forCorect(actorx, game);
    Player_actor_set_eye_pattern(actorx, 0);
    Player_actor_set_mouth_pattern(actorx, 0);

    player->request_main_invade_all_proc = &Player_actor_request_main_invade_all;
    player->request_main_refuse_all_proc = &Player_actor_request_main_refuse;
    player->request_main_return_demo_all_proc = &Player_actor_request_main_return_demo_all;
    player->request_main_wait_all_proc = &Player_actor_request_main_wait_all;
    player->request_main_talk_all_proc = &Player_actor_request_main_talk_all;
    player->request_main_hold_all_proc = &Player_actor_request_main_hold;
    player->request_main_recieve_wait_all_proc = &Player_actor_request_main_recieve_wait;
    player->request_main_give_all_proc = &Player_actor_request_main_give_all;
    player->request_main_sitdown_all_proc = &Player_actor_request_main_sitdown;
    player->request_main_close_furniture_all_proc = &Player_actor_request_main_close_furniture;
    player->request_main_lie_bed_all_proc = &Player_actor_request_main_lie_bed;
    player->request_main_hide_all_proc = &Player_actor_request_main_hide;
    player->request_main_groundhog_proc = &Player_actor_request_main_groundhog;
    player->request_main_door_all_proc = &Player_actor_request_main_door;
    player->request_main_outdoor_all_proc = &Player_actor_request_main_outdoor;
    player->request_main_demo_wait_all_proc = &Player_actor_request_main_demo_wait_all;
    player->request_main_demo_walk_all_proc = &Player_actor_request_main_demo_walk_all;
    player->request_main_demo_geton_train_all_proc = &Player_actor_request_main_demo_geton_train;
    player->request_main_demo_getoff_train_all_proc = &Player_actor_request_main_demo_getoff_train;
    player->request_main_demo_standing_train_all_proc = &Player_actor_request_main_demo_standing_train_all;
    player->request_main_rotate_octagon_all_proc = &Player_actor_request_main_rotate_octagon_all;
    player->request_main_wash_car_all_proc = &Player_actor_request_main_wash_car_all;
    player->request_main_throw_money_all_proc = &Player_actor_request_main_throw_money_all;
    player->request_main_pray_all_proc = &Player_actor_request_main_pray_all;
    player->request_main_mail_jump_all_proc = &Player_actor_request_main_mail_jump_all;
    player->request_main_stung_bee_all_proc = &Player_actor_request_main_stung_bee_all;
    player->request_main_shock_all_proc = &Player_actor_request_main_shock_all;
    player->request_main_change_cloth_forNPC_proc = &Player_actor_request_main_change_cloth_forNPC;
    player->request_main_push_snowball_all_proc = &Player_actor_request_main_push_snowball_all;
    player->request_main_stung_mosquito_all_proc = &Player_actor_request_main_stung_mosquito_all;
    player->request_main_switch_on_lighthouse_all_proc = &Player_actor_request_main_switch_on_lighthouse_all;
    player->request_main_demo_geton_boat_all_proc = &Player_actor_request_main_demo_geton_boat_all;
    player->request_main_demo_getoff_boat_standup_all_proc = &Player_actor_request_main_demo_getoff_boat_standup_all;
    player->request_main_demo_get_golden_item2_all_proc = &Player_actor_request_main_demo_get_golden_item2_all;
    player->request_main_demo_get_golden_axe_wait_all_proc = &Player_actor_request_main_demo_get_golden_axe_wait_all;
    player->check_request_main_priority_proc = &Player_actor_check_request_main_priority;
    player->get_door_label_proc = &Player_actor_get_door_label;
    player->Set_Item_net_catch_request_table_proc = &Player_actor_Set_Item_net_catch_request_table;
    player->Set_Item_net_catch_request_force_proc = &Player_actor_Set_Item_net_catch_request_force;
    player->Get_Item_net_catch_swing_timer_proc = &Player_actor_Get_Item_net_catch_swing_timer;
    player->Set_force_position_angle_proc = &Player_actor_Set_force_position_angle;
    player->Get_force_position_angle_proc = &Player_actor_Get_force_position_angle;
    player->Get_WadeEndPos_proc = &Player_actor_Get_WadeEndPos;
    player->check_cancel_request_change_proc_index_proc = &Player_actor_check_cancel_request_change_proc_index;
    player->Get_item_net_catch_label_proc = &Player_actor_Get_item_net_catch_label;
    player->Check_StopNet_proc = &Player_actor_Check_StopNet;
    player->Check_HitAxe_proc = &Player_actor_Check_HitAxe;
    player->Check_VibUnit_OneFrame_proc = &Player_actor_Check_VibUnit_OneFrame;
    player->Check_HitScoop_proc = &Player_actor_Check_HitScoop;
    player->Check_DigScoop_proc = &Player_actor_Check_DigScoop;
    player->check_request_change_item_proc = &Player_actor_check_request_change_item;
    player->Check_RotateOctagon_proc = &Player_actor_Check_RotateOctagon;
    player->Change_item_net_catch_label_proc = &Player_actor_Change_item_net_catch_label;
    player->Get_status_for_bee_proc = &Player_actor_Get_status_for_bee;
    player->Check_end_stung_bee_proc = &Player_actor_Check_end_stung_bee;
    player->Check_Label_main_push_snowball_proc = &Player_actor_Check_Label_main_push_snowball;
    player->Check_Label_main_wade_snowball_proc = &Player_actor_Check_Label_main_wade_snowball;
    player->SetParam_for_push_snowball_proc = &Player_actor_SetParam_for_push_snowball;
    player->Set_ScrollDemo_forWade_snowball_proc = &Player_actor_Set_ScrollDemo_forWade_snowball;
    player->GetSnowballPos_forWadeSnowball_proc = &Player_actor_GetSnowballPos_forWadeSnowball;
    player->CheckCondition_forWadeSnowball_proc = &Player_actor_CheckCondition_forWadeSnowball;
    player->Check_tree_shaken_proc = &Player_actor_Check_tree_shaken;
    player->Check_tree_shaken_little_proc = &Player_actor_Check_tree_shaken_little;
    player->Check_tree_shaken_big_proc = &Player_actor_Check_tree_shaken_big;
    player->Get_itemNo_forWindow_proc = &Player_actor_Get_itemNo_forWindow;
    player->able_submenu_request_main_index_proc = &Player_actor_able_submenu_request_main_index;
    player->check_able_change_camera_normal_index_proc = &Player_actor_check_able_change_camera_normal_index;
    player->CheckScene_AbleSubmenu_proc = &Player_actor_CheckScene_AbleSubmenu;
    player->check_cancel_event_without_priority_proc = &Player_actor_check_cancel_event_without_priority;
    player->Check_able_force_speak_label_proc = &Player_actor_Check_able_force_speak_label;
    player->Check_stung_mosquito_proc = &Player_actor_Check_stung_mosquito;

    shake_tree_table_ut_x_p = player->shake_tree_ut_x;
    shake_tree_table_ut_z_p = player->shake_tree_ut_z;
    for (i = 0; i < 3; i++) {
        *shake_tree_table_ut_x_p++ = -1;
        *shake_tree_table_ut_z_p++ = -1;
    }

    radio_exercise_command_ring_buffer_p = player->radio_exercise_command_ring_buffer;
    for (i = 0; i < 8; i++) {
        *radio_exercise_command_ring_buffer_p++ = -1;
    }

    Player_actor_Set_old_sound_frame_counter(actorx);
}

extern void Player_actor_ct(ACTOR* actorx, GAME* game) {
    GAME_PLAY* play = (GAME_PLAY*)game;

    if (mEv_CheckTitleDemo() > 0) {
        actorx->status_data.weight = 255;
    } else {
        actorx->status_data.weight = 50;
    }

    Player_actor_init_value(actorx, game);
    Common_Set(player_actor_exists, TRUE);
    Player_actor_Check_player_sunburn_for_ct(actorx); //
    mPlib_change_player_face(game);                   //
    Player_actor_ct_other_func1(actorx, game);        //
    Player_actor_set_eye_PositionAndAngle(actorx);    //
    Camera2_request_main_normal(play, 1, 1);
    Shape_Info_init(actorx, 0.0f, &mAc_ActorShadowCircle, 18.0f, 18.0f);
    actorx->shape_info.ofs_y = 200.0f;
    mPlib_Clear_change_data_from_submenu();       //
    Player_actor_request_main_dma(game, 41);      //
    Player_actor_change_proc_index(actorx, game); //
}

extern void Player_actor_dt(ACTOR* actorx, GAME* game) {
    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;

    Player_actor_dt_forCorect(actorx, game); //
    Common_Set(player_actor_exists, FALSE);
    mPlib_cancel_player_warp_forEvent();              //
    Player_actor_Reset_bee_chase(actorx);             //
    Player_actor_Check_player_sunburn_for_dt(actorx); //

    if (mEv_CheckTitleDemo() <= 0 && player->bgm_volume_mode != mPlayer_BGM_VOLUME_MODE_NORMAL) {
        switch (player->bgm_volume_mode) {
            case mPlayer_BGM_VOLUME_MODE_COLLECT_INSECTS:
                mBGMPsComp_volume_collect_insects_end();
                break;
            case mPlayer_BGM_VOLUME_MODE_FISHING:
                mBGMPsComp_volume_fishing_end();
                break;
        }
    }
}

typedef void (*mPlayer_REQUEST_MAIN_CHANGE_FROM_SUBMENU_PROC)(ACTOR*, GAME*);

static void Player_actor_request_main_wait_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_putin_scoop_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_give_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_demo_wait_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_release_creature_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_mail_land_from_submenu(ACTOR*, GAME*);
static void Player_actor_request_main_demo_get_golden_item_from_submenu(ACTOR*, GAME*);

static void Player_actor_request_main_change_from_submenu(ACTOR* actorx, GAME* game) {
    static const mPlayer_REQUEST_MAIN_CHANGE_FROM_SUBMENU_PROC proc[] = {
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_wait_from_submenu,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_putin_scoop_from_submenu,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_give_from_submenu,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_demo_wait_from_submenu,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_release_creature_from_submenu,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_mail_land_from_submenu,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_request_main_demo_get_golden_item_from_submenu,
        NULL,
        NULL,
    };

    if (mPlib_Check_SetOrderSubmenu()) {
        mPlayer_change_data_from_submenu_c* data = mPlib_Get_change_data_from_submenu_p();
        int idx = data->requested_main_index;

        if (mPlayer_MAIN_INDEX_VALID(idx) == FALSE || proc[idx] == NULL) {
            return;
        }

        (*proc[idx])(actorx, game);
    }

    mPlib_Clear_change_data_from_submenu();
}

static void Player_actor_request_change_item(GAME* game) {
    int item_kind = Player_actor_check_request_change_item(game);

    switch (item_kind) {
        case mPlayer_ITEM_KIND_AXE_USE_7:
            Player_actor_request_main_wait_all(game, 0.0f, 0.0f, 1, 16);
            break;
        case mPlayer_ITEM_KIND_GOLD_AXE:
            Player_actor_request_main_walk_all(game, NULL, 0.0f, 1, 16);
            break;
        case mPlayer_ITEM_KIND_NET:
            Player_actor_request_main_run_all(game, 0.0f, 1, 16);
            break;
        case mPlayer_ITEM_KIND_GOLD_NET:
            Player_actor_request_main_dash_all(game, 0.0f, 1, 16);
            break;
    }
}

typedef void (*mPlayer_SETTLE_MAIN_PROC)(ACTOR*, GAME*);

static void Player_actor_settle_main_Walk(ACTOR*, GAME*);
static void Player_actor_settle_main_Turn_dash(ACTOR*, GAME*);
static void Player_actor_settle_main_Wade(ACTOR*, GAME*);
static void Player_actor_settle_main_Outdoor(ACTOR*, GAME*);
static void Player_actor_settle_main_Push(ACTOR*, GAME*);
static void Player_actor_settle_main_Pull(ACTOR*, GAME*);
static void Player_actor_settle_main_Open_furniture(ACTOR*, GAME*);
static void Player_actor_settle_main_Wait_open_furniture(ACTOR*, GAME*);
static void Player_actor_settle_main_Close_furniture(ACTOR*, GAME*);
static void Player_actor_settle_main_Lie_bed(ACTOR*, GAME*);
static void Player_actor_settle_main_Roll_bed(ACTOR*, GAME*);
static void Player_actor_settle_main_Standup_bed(ACTOR*, GAME*);
static void Player_actor_settle_main_Pickup_jump(ACTOR*, GAME*);
static void Player_actor_settle_main_Pickup_furniture(ACTOR*, GAME*);
static void Player_actor_settle_main_Pickup_exchange(ACTOR*, GAME*);
static void Player_actor_settle_main_Sitdown(ACTOR*, GAME*);
static void Player_actor_settle_main_Standup(ACTOR*, GAME*);
static void Player_actor_settle_main_Reflect_axe(ACTOR*, GAME*);
static void Player_actor_settle_main_Broken_axe(ACTOR*, GAME*);
static void Player_actor_settle_main_Slip_net(ACTOR*, GAME*);
static void Player_actor_settle_main_Swing_net(ACTOR*, GAME*);
static void Player_actor_settle_main_Notice_net(ACTOR*, GAME*);
static void Player_actor_settle_main_Collect_rod(ACTOR*, GAME*);
static void Player_actor_settle_main_Fly_rod(ACTOR*, GAME*);
static void Player_actor_settle_main_Notice_rod(ACTOR*, GAME*);
static void Player_actor_settle_main_Reflect_scoop(ACTOR*, GAME*);
static void Player_actor_settle_main_Get_scoop(ACTOR*, GAME*);
static void Player_actor_settle_main_Talk(ACTOR*, GAME*);
static void Player_actor_settle_main_Recieve_putaway(ACTOR*, GAME*);
static void Player_actor_settle_main_Give_wait(ACTOR*, GAME*);
static void Player_actor_settle_main_Takeout_item(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_wait(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_geton_train(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_getoff_train(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_wade(ACTOR*, GAME*);
static void Player_actor_settle_main_Release_creature(ACTOR*, GAME*);
static void Player_actor_settle_main_Wash_car(ACTOR*, GAME*);
static void Player_actor_settle_main_Rotate_octagon(ACTOR*, GAME*);
static void Player_actor_settle_main_Throw_money(ACTOR*, GAME*);
static void Player_actor_settle_main_Pray(ACTOR*, GAME*);
static void Player_actor_settle_main_Mail_jump(ACTOR*, GAME*);
static void Player_actor_settle_main_Ready_pitfall(ACTOR*, GAME*);
static void Player_actor_settle_main_Fall_pitfall(ACTOR*, GAME*);
static void Player_actor_settle_main_Struggle_pitfall(ACTOR*, GAME*);
static void Player_actor_settle_main_Climbup_pitfall(ACTOR*, GAME*);
static void Player_actor_settle_main_Notice_bee(ACTOR*, GAME*);
static void Player_actor_settle_main_Shock(ACTOR*, GAME*);
static void Player_actor_settle_main_Knock_door(ACTOR*, GAME*);
static void Player_actor_settle_main_Wade_snowball(ACTOR*, GAME*);
static void Player_actor_settle_main_Complete_payment(ACTOR*, GAME*);
static void Player_actor_settle_main_Fail_emu(ACTOR*, GAME*);
static void Player_actor_settle_main_Notice_mosquito(ACTOR*, GAME*);
static void Player_actor_settle_main_Switch_on_lighthouse(ACTOR*, GAME*);
static void Player_actor_settle_main_Radio_exercise(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_geton_boat(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_geton_boat_wade(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_getoff_boat_standup(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_getoff_boat(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_get_golden_item(ACTOR*, GAME*);
static void Player_actor_settle_main_Demo_get_golden_item2(ACTOR*, GAME*);

static void Player_actor_settle_main(ACTOR* actorx, GAME* game) {
    static const mPlayer_SETTLE_MAIN_PROC proc[] = {
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Walk,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Turn_dash,
        NULL,
        &Player_actor_settle_main_Wade,
        NULL,
        &Player_actor_settle_main_Outdoor,
        NULL,
        NULL,
        &Player_actor_settle_main_Push,
        &Player_actor_settle_main_Pull,
        NULL,
        &Player_actor_settle_main_Open_furniture,
        &Player_actor_settle_main_Wait_open_furniture,
        &Player_actor_settle_main_Close_furniture,
        &Player_actor_settle_main_Lie_bed,
        NULL,
        &Player_actor_settle_main_Roll_bed,
        &Player_actor_settle_main_Standup_bed,
        NULL,
        &Player_actor_settle_main_Pickup_jump,
        &Player_actor_settle_main_Pickup_furniture,
        &Player_actor_settle_main_Pickup_exchange,
        &Player_actor_settle_main_Sitdown,
        NULL,
        &Player_actor_settle_main_Standup,
        NULL,
        NULL,
        &Player_actor_settle_main_Reflect_axe,
        &Player_actor_settle_main_Broken_axe,
        &Player_actor_settle_main_Slip_net,
        NULL,
        NULL,
        &Player_actor_settle_main_Swing_net,
        NULL,
        NULL,
        &Player_actor_settle_main_Notice_net,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Collect_rod,
        NULL,
        &Player_actor_settle_main_Fly_rod,
        &Player_actor_settle_main_Notice_rod,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Reflect_scoop,
        NULL,
        &Player_actor_settle_main_Get_scoop,
        NULL,
        NULL,
        &Player_actor_settle_main_Talk,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Recieve_putaway,
        NULL,
        &Player_actor_settle_main_Give_wait,
        &Player_actor_settle_main_Takeout_item,
        NULL,
        &Player_actor_settle_main_Demo_wait,
        NULL,
        &Player_actor_settle_main_Demo_geton_train,
        NULL,
        &Player_actor_settle_main_Demo_getoff_train,
        NULL,
        &Player_actor_settle_main_Demo_wade,
        NULL,
        NULL,
        &Player_actor_settle_main_Release_creature,
        &Player_actor_settle_main_Wash_car,
        NULL,
        &Player_actor_settle_main_Rotate_octagon,
        &Player_actor_settle_main_Throw_money,
        &Player_actor_settle_main_Pray,
        NULL,
        &Player_actor_settle_main_Mail_jump,
        NULL,
        &Player_actor_settle_main_Ready_pitfall,
        &Player_actor_settle_main_Fall_pitfall,
        &Player_actor_settle_main_Struggle_pitfall,
        &Player_actor_settle_main_Climbup_pitfall,
        NULL,
        &Player_actor_settle_main_Notice_bee,
        NULL,
        &Player_actor_settle_main_Shock,
        &Player_actor_settle_main_Knock_door,
        NULL,
        NULL,
        NULL,
        &Player_actor_settle_main_Wade_snowball,
        &Player_actor_settle_main_Complete_payment,
        &Player_actor_settle_main_Fail_emu,
        NULL,
        &Player_actor_settle_main_Notice_mosquito,
        NULL,
        &Player_actor_settle_main_Switch_on_lighthouse,
        &Player_actor_settle_main_Radio_exercise,
        &Player_actor_settle_main_Demo_geton_boat,
        NULL,
        NULL,
        &Player_actor_settle_main_Demo_geton_boat_wade,
        &Player_actor_settle_main_Demo_getoff_boat_standup,
        &Player_actor_settle_main_Demo_getoff_boat,
        &Player_actor_settle_main_Demo_get_golden_item,
        &Player_actor_settle_main_Demo_get_golden_item2,
        NULL,
    };

    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;
    int idx = player->now_main_index;

    if (mPlayer_MAIN_INDEX_VALID(idx) != FALSE) {
        if (proc[idx] != NULL) {
            (*proc[idx])(actorx, game);
        }

        Player_actor_settle_main_other_func2(actorx, game); //
    }
}

typedef void (*mPlayer_SETUP_MAIN_PROC)(ACTOR*, GAME*);

static void Player_actor_setup_main_Dma(ACTOR*, GAME*);
static void Player_actor_setup_main_Intro(ACTOR*, GAME*);
static void Player_actor_setup_main_Refuse(ACTOR*, GAME*);
static void Player_actor_setup_main_Refuse_pickup(ACTOR*, GAME*);
static void Player_actor_setup_main_Return_demo(ACTOR*, GAME*);
static void Player_actor_setup_main_Return_outdoor(ACTOR*, GAME*);
static void Player_actor_setup_main_Return_outdoor2(ACTOR*, GAME*);
static void Player_actor_setup_main_Wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Walk(ACTOR*, GAME*);
static void Player_actor_setup_main_Run(ACTOR*, GAME*);
static void Player_actor_setup_main_Dash(ACTOR*, GAME*);
static void Player_actor_setup_main_Tumble(ACTOR*, GAME*);
static void Player_actor_setup_main_Tumble_getup(ACTOR*, GAME*);
static void Player_actor_setup_main_Turn_dash(ACTOR*, GAME*);
static void Player_actor_setup_main_Fall(ACTOR*, GAME*);
static void Player_actor_setup_main_Wade(ACTOR*, GAME*);
static void Player_actor_setup_main_Door(ACTOR*, GAME*);
static void Player_actor_setup_main_Outdoor(ACTOR*, GAME*);
static void Player_actor_setup_main_Invade(ACTOR*, GAME*);
static void Player_actor_setup_main_Hold(ACTOR*, GAME*);
static void Player_actor_setup_main_Push(ACTOR*, GAME*);
static void Player_actor_setup_main_Pull(ACTOR*, GAME*);
static void Player_actor_setup_main_Rotate_furniture(ACTOR*, GAME*);
static void Player_actor_setup_main_Open_furniture(ACTOR*, GAME*);
static void Player_actor_setup_main_Wait_open_furniture(ACTOR*, GAME*);
static void Player_actor_setup_main_Close_furniture(ACTOR*, GAME*);
static void Player_actor_setup_main_Lie_bed(ACTOR*, GAME*);
static void Player_actor_setup_main_Wait_bed(ACTOR*, GAME*);
static void Player_actor_setup_main_Roll_bed(ACTOR*, GAME*);
static void Player_actor_setup_main_Standup_bed(ACTOR*, GAME*);
static void Player_actor_setup_main_Pickup(ACTOR*, GAME*);
static void Player_actor_setup_main_Pickup_jump(ACTOR*, GAME*);
static void Player_actor_setup_main_Pickup_furniture(ACTOR*, GAME*);
static void Player_actor_setup_main_Pickup_exchange(ACTOR*, GAME*);
static void Player_actor_setup_main_Sitdown(ACTOR*, GAME*);
static void Player_actor_setup_main_Sitdown_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Standup(ACTOR*, GAME*);
static void Player_actor_setup_main_Swing_axe(ACTOR*, GAME*);
static void Player_actor_setup_main_Air_axe(ACTOR*, GAME*);
static void Player_actor_setup_main_Reflect_axe(ACTOR*, GAME*);
static void Player_actor_setup_main_Broken_axe(ACTOR*, GAME*);
static void Player_actor_setup_main_Slip_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Ready_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Ready_walk_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Swing_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Pull_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Stop_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Notice_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Putaway_net(ACTOR*, GAME*);
static void Player_actor_setup_main_Ready_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Cast_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Air_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Relax_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Collect_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Vib_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Fly_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Notice_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Putaway_rod(ACTOR*, GAME*);
static void Player_actor_setup_main_Dig_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Fill_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Reflect_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Air_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Get_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Putaway_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Putin_scoop(ACTOR*, GAME*);
static void Player_actor_setup_main_Talk(ACTOR*, GAME*);
static void Player_actor_setup_main_Recieve_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Recieve_stretch(ACTOR*, GAME*);
static void Player_actor_setup_main_Recieve(ACTOR*, GAME*);
static void Player_actor_setup_main_Recieve_putaway(ACTOR*, GAME*);
static void Player_actor_setup_main_Give(ACTOR*, GAME*);
static void Player_actor_setup_main_Give_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Takeout_item(ACTOR*, GAME*);
static void Player_actor_setup_main_Putin_item(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_walk(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_train(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_train_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_getoff_train(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_standing_train(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_wade(ACTOR*, GAME*);
static void Player_actor_setup_main_Hide(ACTOR*, GAME*);
static void Player_actor_setup_main_Groundhog(ACTOR*, GAME*);
static void Player_actor_setup_main_Release_creature(ACTOR*, GAME*);
static void Player_actor_setup_main_Wash_car(ACTOR*, GAME*);
static void Player_actor_setup_main_Tired(ACTOR*, GAME*);
static void Player_actor_setup_main_Rotate_octagon(ACTOR*, GAME*);
static void Player_actor_setup_main_Throw_money(ACTOR*, GAME*);
static void Player_actor_setup_main_Pray(ACTOR*, GAME*);
static void Player_actor_setup_main_Shake_tree(ACTOR*, GAME*);
static void Player_actor_setup_main_Mail_jump(ACTOR*, GAME*);
static void Player_actor_setup_main_Mail_land(ACTOR*, GAME*);
static void Player_actor_setup_main_Ready_pitfall(ACTOR*, GAME*);
static void Player_actor_setup_main_Fall_pitfall(ACTOR*, GAME*);
static void Player_actor_setup_main_Struggle_pitfall(ACTOR*, GAME*);
static void Player_actor_setup_main_Climbup_pitfall(ACTOR*, GAME*);
static void Player_actor_setup_main_Stung_bee(ACTOR*, GAME*);
static void Player_actor_setup_main_Notice_bee(ACTOR*, GAME*);
static void Player_actor_setup_main_Remove_grass(ACTOR*, GAME*);
static void Player_actor_setup_main_Shock(ACTOR*, GAME*);
static void Player_actor_setup_main_Knock_door(ACTOR*, GAME*);
static void Player_actor_setup_main_Change_cloth(ACTOR*, GAME*);
static void Player_actor_setup_main_Push_snowball(ACTOR*, GAME*);
static void Player_actor_setup_main_Rotate_umbrella(ACTOR*, GAME*);
static void Player_actor_setup_main_Wade_snowball(ACTOR*, GAME*);
static void Player_actor_setup_main_Complete_payment(ACTOR*, GAME*);
static void Player_actor_setup_main_Fail_emu(ACTOR*, GAME*);
static void Player_actor_setup_main_Stung_mosquito(ACTOR*, GAME*);
static void Player_actor_setup_main_Notice_mosquito(ACTOR*, GAME*);
static void Player_actor_setup_main_Swing_fan(ACTOR*, GAME*);
static void Player_actor_setup_main_Switch_on_lighthouse(ACTOR*, GAME*);
static void Player_actor_setup_main_Radio_exercise(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_boat(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_boat_sitdown(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_boat_wait(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_geton_boat_wade(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_getoff_boat_standup(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_getoff_boat(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_get_golden_item(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_get_golden_item2(ACTOR*, GAME*);
static void Player_actor_setup_main_Demo_get_golden_axe_wait(ACTOR*, GAME*);

static int Player_actor_change_main_index(ACTOR* actorx, GAME* game) {
    static const mPlayer_SETUP_MAIN_PROC proc[] = {
        &Player_actor_setup_main_Dma,
        &Player_actor_setup_main_Intro,
        &Player_actor_setup_main_Refuse,
        &Player_actor_setup_main_Refuse_pickup,
        &Player_actor_setup_main_Return_demo,
        &Player_actor_setup_main_Return_outdoor,
        &Player_actor_setup_main_Return_outdoor2,
        &Player_actor_setup_main_Wait,
        &Player_actor_setup_main_Walk,
        &Player_actor_setup_main_Run,
        &Player_actor_setup_main_Dash,
        &Player_actor_setup_main_Tumble,
        &Player_actor_setup_main_Tumble_getup,
        &Player_actor_setup_main_Turn_dash,
        &Player_actor_setup_main_Fall,
        &Player_actor_setup_main_Wade,
        &Player_actor_setup_main_Door,
        &Player_actor_setup_main_Outdoor,
        &Player_actor_setup_main_Invade,
        &Player_actor_setup_main_Hold,
        &Player_actor_setup_main_Push,
        &Player_actor_setup_main_Pull,
        &Player_actor_setup_main_Rotate_furniture,
        &Player_actor_setup_main_Open_furniture,
        &Player_actor_setup_main_Wait_open_furniture,
        &Player_actor_setup_main_Close_furniture,
        &Player_actor_setup_main_Lie_bed,
        &Player_actor_setup_main_Wait_bed,
        &Player_actor_setup_main_Roll_bed,
        &Player_actor_setup_main_Standup_bed,
        &Player_actor_setup_main_Pickup,
        &Player_actor_setup_main_Pickup_jump,
        &Player_actor_setup_main_Pickup_furniture,
        &Player_actor_setup_main_Pickup_exchange,
        &Player_actor_setup_main_Sitdown,
        &Player_actor_setup_main_Sitdown_wait,
        &Player_actor_setup_main_Standup,
        &Player_actor_setup_main_Swing_axe,
        &Player_actor_setup_main_Air_axe,
        &Player_actor_setup_main_Reflect_axe,
        &Player_actor_setup_main_Broken_axe,
        &Player_actor_setup_main_Slip_net,
        &Player_actor_setup_main_Ready_net,
        &Player_actor_setup_main_Ready_walk_net,
        &Player_actor_setup_main_Swing_net,
        &Player_actor_setup_main_Pull_net,
        &Player_actor_setup_main_Stop_net,
        &Player_actor_setup_main_Notice_net,
        &Player_actor_setup_main_Putaway_net,
        &Player_actor_setup_main_Ready_rod,
        &Player_actor_setup_main_Cast_rod,
        &Player_actor_setup_main_Air_rod,
        &Player_actor_setup_main_Relax_rod,
        &Player_actor_setup_main_Collect_rod,
        &Player_actor_setup_main_Vib_rod,
        &Player_actor_setup_main_Fly_rod,
        &Player_actor_setup_main_Notice_rod,
        &Player_actor_setup_main_Putaway_rod,
        &Player_actor_setup_main_Dig_scoop,
        &Player_actor_setup_main_Fill_scoop,
        &Player_actor_setup_main_Reflect_scoop,
        &Player_actor_setup_main_Air_scoop,
        &Player_actor_setup_main_Get_scoop,
        &Player_actor_setup_main_Putaway_scoop,
        &Player_actor_setup_main_Putin_scoop,
        &Player_actor_setup_main_Talk,
        &Player_actor_setup_main_Recieve_wait,
        &Player_actor_setup_main_Recieve_stretch,
        &Player_actor_setup_main_Recieve,
        &Player_actor_setup_main_Recieve_putaway,
        &Player_actor_setup_main_Give,
        &Player_actor_setup_main_Give_wait,
        &Player_actor_setup_main_Takeout_item,
        &Player_actor_setup_main_Putin_item,
        &Player_actor_setup_main_Demo_wait,
        &Player_actor_setup_main_Demo_walk,
        &Player_actor_setup_main_Demo_geton_train,
        &Player_actor_setup_main_Demo_geton_train_wait,
        &Player_actor_setup_main_Demo_getoff_train,
        &Player_actor_setup_main_Demo_standing_train,
        &Player_actor_setup_main_Demo_wade,
        &Player_actor_setup_main_Hide,
        &Player_actor_setup_main_Groundhog,
        &Player_actor_setup_main_Release_creature,
        &Player_actor_setup_main_Wash_car,
        &Player_actor_setup_main_Tired,
        &Player_actor_setup_main_Rotate_octagon,
        &Player_actor_setup_main_Throw_money,
        &Player_actor_setup_main_Pray,
        &Player_actor_setup_main_Shake_tree,
        &Player_actor_setup_main_Mail_jump,
        &Player_actor_setup_main_Mail_land,
        &Player_actor_setup_main_Ready_pitfall,
        &Player_actor_setup_main_Fall_pitfall,
        &Player_actor_setup_main_Struggle_pitfall,
        &Player_actor_setup_main_Climbup_pitfall,
        &Player_actor_setup_main_Stung_bee,
        &Player_actor_setup_main_Notice_bee,
        &Player_actor_setup_main_Remove_grass,
        &Player_actor_setup_main_Shock,
        &Player_actor_setup_main_Knock_door,
        &Player_actor_setup_main_Change_cloth,
        &Player_actor_setup_main_Push_snowball,
        &Player_actor_setup_main_Rotate_umbrella,
        &Player_actor_setup_main_Wade_snowball,
        &Player_actor_setup_main_Complete_payment,
        &Player_actor_setup_main_Fail_emu,
        &Player_actor_setup_main_Stung_mosquito,
        &Player_actor_setup_main_Notice_mosquito,
        &Player_actor_setup_main_Swing_fan,
        &Player_actor_setup_main_Switch_on_lighthouse,
        &Player_actor_setup_main_Radio_exercise,
        &Player_actor_setup_main_Demo_geton_boat,
        &Player_actor_setup_main_Demo_geton_boat_sitdown,
        &Player_actor_setup_main_Demo_geton_boat_wait,
        &Player_actor_setup_main_Demo_geton_boat_wade,
        &Player_actor_setup_main_Demo_getoff_boat_standup,
        &Player_actor_setup_main_Demo_getoff_boat,
        &Player_actor_setup_main_Demo_get_golden_item,
        &Player_actor_setup_main_Demo_get_golden_item2,
        &Player_actor_setup_main_Demo_get_golden_axe_wait,
    };
    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;

    if (player->requested_main_index_changed) {
        int idx = player->requested_main_index;

        if (mPlayer_MAIN_INDEX_VALID(idx) == FALSE || proc[idx] == NULL) {
            return FALSE;
        }

        idx = Player_actor_CheckAndRequest_KnockDoor(actorx, game,
                                                     Player_actor_CheckAndRequest_ItemInOut(actorx, game, idx)); //
        Player_actor_Set_bgm_volume(actorx, idx);                                                                //
        Player_actor_settle_main(actorx, game);
        Player_actor_Reset_unable_hand_item_in_demo(actorx, idx);   //
        Player_actor_Reset_able_hand_all_item_in_demo(actorx, idx); //
        Player_actor_Reset_able_force_speak_label(actorx, idx);     //
        Player_actor_change_main_index_other_func1(actorx, game);   //
        (*proc[idx])(actorx, game);
        Player_actor_change_main_index_other_func2(actorx, game); //
        return TRUE;
    }

    return FALSE;
}

static void Player_actor_change_proc_index(ACTOR* actorx, GAME* game) {
    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;

    player->changed_main_index = Player_actor_change_main_index(actorx, game);
}

typedef void (*mPlayer_MAIN_PROC)(ACTOR*, GAME*);

static void Player_actor_main_Dma(ACTOR*, GAME*);
static void Player_actor_main_Intro(ACTOR*, GAME*);
static void Player_actor_main_Refuse(ACTOR*, GAME*);
static void Player_actor_main_Refuse_pickup(ACTOR*, GAME*);
static void Player_actor_main_Return_demo(ACTOR*, GAME*);
static void Player_actor_main_Return_outdoor(ACTOR*, GAME*);
static void Player_actor_main_Return_outdoor2(ACTOR*, GAME*);
static void Player_actor_main_Wait(ACTOR*, GAME*);
static void Player_actor_main_Walk(ACTOR*, GAME*);
static void Player_actor_main_Run(ACTOR*, GAME*);
static void Player_actor_main_Dash(ACTOR*, GAME*);
static void Player_actor_main_Tumble(ACTOR*, GAME*);
static void Player_actor_main_Tumble_getup(ACTOR*, GAME*);
static void Player_actor_main_Turn_dash(ACTOR*, GAME*);
static void Player_actor_main_Fall(ACTOR*, GAME*);
static void Player_actor_main_Wade(ACTOR*, GAME*);
static void Player_actor_main_Door(ACTOR*, GAME*);
static void Player_actor_main_Outdoor(ACTOR*, GAME*);
static void Player_actor_main_Invade(ACTOR*, GAME*);
static void Player_actor_main_Hold(ACTOR*, GAME*);
static void Player_actor_main_Push(ACTOR*, GAME*);
static void Player_actor_main_Pull(ACTOR*, GAME*);
static void Player_actor_main_Rotate_furniture(ACTOR*, GAME*);
static void Player_actor_main_Open_furniture(ACTOR*, GAME*);
static void Player_actor_main_Wait_open_furniture(ACTOR*, GAME*);
static void Player_actor_main_Close_furniture(ACTOR*, GAME*);
static void Player_actor_main_Lie_bed(ACTOR*, GAME*);
static void Player_actor_main_Wait_bed(ACTOR*, GAME*);
static void Player_actor_main_Roll_bed(ACTOR*, GAME*);
static void Player_actor_main_Standup_bed(ACTOR*, GAME*);
static void Player_actor_main_Pickup(ACTOR*, GAME*);
static void Player_actor_main_Pickup_jump(ACTOR*, GAME*);
static void Player_actor_main_Pickup_furniture(ACTOR*, GAME*);
static void Player_actor_main_Pickup_exchange(ACTOR*, GAME*);
static void Player_actor_main_Sitdown(ACTOR*, GAME*);
static void Player_actor_main_Sitdown_wait(ACTOR*, GAME*);
static void Player_actor_main_Standup(ACTOR*, GAME*);
static void Player_actor_main_Swing_axe(ACTOR*, GAME*);
static void Player_actor_main_Air_axe(ACTOR*, GAME*);
static void Player_actor_main_Reflect_axe(ACTOR*, GAME*);
static void Player_actor_main_Broken_axe(ACTOR*, GAME*);
static void Player_actor_main_Slip_net(ACTOR*, GAME*);
static void Player_actor_main_Ready_net(ACTOR*, GAME*);
static void Player_actor_main_Ready_walk_net(ACTOR*, GAME*);
static void Player_actor_main_Swing_net(ACTOR*, GAME*);
static void Player_actor_main_Pull_net(ACTOR*, GAME*);
static void Player_actor_main_Stop_net(ACTOR*, GAME*);
static void Player_actor_main_Notice_net(ACTOR*, GAME*);
static void Player_actor_main_Putaway_net(ACTOR*, GAME*);
static void Player_actor_main_Ready_rod(ACTOR*, GAME*);
static void Player_actor_main_Cast_rod(ACTOR*, GAME*);
static void Player_actor_main_Air_rod(ACTOR*, GAME*);
static void Player_actor_main_Relax_rod(ACTOR*, GAME*);
static void Player_actor_main_Collect_rod(ACTOR*, GAME*);
static void Player_actor_main_Vib_rod(ACTOR*, GAME*);
static void Player_actor_main_Fly_rod(ACTOR*, GAME*);
static void Player_actor_main_Notice_rod(ACTOR*, GAME*);
static void Player_actor_main_Putaway_rod(ACTOR*, GAME*);
static void Player_actor_main_Dig_scoop(ACTOR*, GAME*);
static void Player_actor_main_Fill_scoop(ACTOR*, GAME*);
static void Player_actor_main_Reflect_scoop(ACTOR*, GAME*);
static void Player_actor_main_Air_scoop(ACTOR*, GAME*);
static void Player_actor_main_Get_scoop(ACTOR*, GAME*);
static void Player_actor_main_Putaway_scoop(ACTOR*, GAME*);
static void Player_actor_main_Putin_scoop(ACTOR*, GAME*);
static void Player_actor_main_Talk(ACTOR*, GAME*);
static void Player_actor_main_Recieve_wait(ACTOR*, GAME*);
static void Player_actor_main_Recieve_stretch(ACTOR*, GAME*);
static void Player_actor_main_Recieve(ACTOR*, GAME*);
static void Player_actor_main_Recieve_putaway(ACTOR*, GAME*);
static void Player_actor_main_Give(ACTOR*, GAME*);
static void Player_actor_main_Give_wait(ACTOR*, GAME*);
static void Player_actor_main_Takeout_item(ACTOR*, GAME*);
static void Player_actor_main_Putin_item(ACTOR*, GAME*);
static void Player_actor_main_Demo_wait(ACTOR*, GAME*);
static void Player_actor_main_Demo_walk(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_train(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_train_wait(ACTOR*, GAME*);
static void Player_actor_main_Demo_getoff_train(ACTOR*, GAME*);
static void Player_actor_main_Demo_standing_train(ACTOR*, GAME*);
static void Player_actor_main_Demo_wade(ACTOR*, GAME*);
static void Player_actor_main_Hide(ACTOR*, GAME*);
static void Player_actor_main_Groundhog(ACTOR*, GAME*);
static void Player_actor_main_Release_creature(ACTOR*, GAME*);
static void Player_actor_main_Wash_car(ACTOR*, GAME*);
static void Player_actor_main_Tired(ACTOR*, GAME*);
static void Player_actor_main_Rotate_octagon(ACTOR*, GAME*);
static void Player_actor_main_Throw_money(ACTOR*, GAME*);
static void Player_actor_main_Pray(ACTOR*, GAME*);
static void Player_actor_main_Shake_tree(ACTOR*, GAME*);
static void Player_actor_main_Mail_jump(ACTOR*, GAME*);
static void Player_actor_main_Mail_land(ACTOR*, GAME*);
static void Player_actor_main_Ready_pitfall(ACTOR*, GAME*);
static void Player_actor_main_Fall_pitfall(ACTOR*, GAME*);
static void Player_actor_main_Struggle_pitfall(ACTOR*, GAME*);
static void Player_actor_main_Climbup_pitfall(ACTOR*, GAME*);
static void Player_actor_main_Stung_bee(ACTOR*, GAME*);
static void Player_actor_main_Notice_bee(ACTOR*, GAME*);
static void Player_actor_main_Remove_grass(ACTOR*, GAME*);
static void Player_actor_main_Shock(ACTOR*, GAME*);
static void Player_actor_main_Knock_door(ACTOR*, GAME*);
static void Player_actor_main_Change_cloth(ACTOR*, GAME*);
static void Player_actor_main_Push_snowball(ACTOR*, GAME*);
static void Player_actor_main_Rotate_umbrella(ACTOR*, GAME*);
static void Player_actor_main_Wade_snowball(ACTOR*, GAME*);
static void Player_actor_main_Complete_payment(ACTOR*, GAME*);
static void Player_actor_main_Fail_emu(ACTOR*, GAME*);
static void Player_actor_main_Stung_mosquito(ACTOR*, GAME*);
static void Player_actor_main_Notice_mosquito(ACTOR*, GAME*);
static void Player_actor_main_Swing_fan(ACTOR*, GAME*);
static void Player_actor_main_Switch_on_lighthouse(ACTOR*, GAME*);
static void Player_actor_main_Radio_exercise(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_boat(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_boat_sitdown(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_boat_wait(ACTOR*, GAME*);
static void Player_actor_main_Demo_geton_boat_wade(ACTOR*, GAME*);
static void Player_actor_main_Demo_getoff_boat_standup(ACTOR*, GAME*);
static void Player_actor_main_Demo_getoff_boat(ACTOR*, GAME*);
static void Player_actor_main_Demo_get_golden_item(ACTOR*, GAME*);
static void Player_actor_main_Demo_get_golden_item2(ACTOR*, GAME*);
static void Player_actor_main_Demo_get_golden_axe_wait(ACTOR*, GAME*);

extern void Player_actor_move(ACTOR* actorx, GAME* game) {
    static const mPlayer_MAIN_PROC proc[] = {
        &Player_actor_main_Dma,
        &Player_actor_main_Intro,
        &Player_actor_main_Refuse,
        &Player_actor_main_Refuse_pickup,
        &Player_actor_main_Return_demo,
        &Player_actor_main_Return_outdoor,
        &Player_actor_main_Return_outdoor2,
        &Player_actor_main_Wait,
        &Player_actor_main_Walk,
        &Player_actor_main_Run,
        &Player_actor_main_Dash,
        &Player_actor_main_Tumble,
        &Player_actor_main_Tumble_getup,
        &Player_actor_main_Turn_dash,
        &Player_actor_main_Fall,
        &Player_actor_main_Wade,
        &Player_actor_main_Door,
        &Player_actor_main_Outdoor,
        &Player_actor_main_Invade,
        &Player_actor_main_Hold,
        &Player_actor_main_Push,
        &Player_actor_main_Pull,
        &Player_actor_main_Rotate_furniture,
        &Player_actor_main_Open_furniture,
        &Player_actor_main_Wait_open_furniture,
        &Player_actor_main_Close_furniture,
        &Player_actor_main_Lie_bed,
        &Player_actor_main_Wait_bed,
        &Player_actor_main_Roll_bed,
        &Player_actor_main_Standup_bed,
        &Player_actor_main_Pickup,
        &Player_actor_main_Pickup_jump,
        &Player_actor_main_Pickup_furniture,
        &Player_actor_main_Pickup_exchange,
        &Player_actor_main_Sitdown,
        &Player_actor_main_Sitdown_wait,
        &Player_actor_main_Standup,
        &Player_actor_main_Swing_axe,
        &Player_actor_main_Air_axe,
        &Player_actor_main_Reflect_axe,
        &Player_actor_main_Broken_axe,
        &Player_actor_main_Slip_net,
        &Player_actor_main_Ready_net,
        &Player_actor_main_Ready_walk_net,
        &Player_actor_main_Swing_net,
        &Player_actor_main_Pull_net,
        &Player_actor_main_Stop_net,
        &Player_actor_main_Notice_net,
        &Player_actor_main_Putaway_net,
        &Player_actor_main_Ready_rod,
        &Player_actor_main_Cast_rod,
        &Player_actor_main_Air_rod,
        &Player_actor_main_Relax_rod,
        &Player_actor_main_Collect_rod,
        &Player_actor_main_Vib_rod,
        &Player_actor_main_Fly_rod,
        &Player_actor_main_Notice_rod,
        &Player_actor_main_Putaway_rod,
        &Player_actor_main_Dig_scoop,
        &Player_actor_main_Fill_scoop,
        &Player_actor_main_Reflect_scoop,
        &Player_actor_main_Air_scoop,
        &Player_actor_main_Get_scoop,
        &Player_actor_main_Putaway_scoop,
        &Player_actor_main_Putin_scoop,
        &Player_actor_main_Talk,
        &Player_actor_main_Recieve_wait,
        &Player_actor_main_Recieve_stretch,
        &Player_actor_main_Recieve,
        &Player_actor_main_Recieve_putaway,
        &Player_actor_main_Give,
        &Player_actor_main_Give_wait,
        &Player_actor_main_Takeout_item,
        &Player_actor_main_Putin_item,
        &Player_actor_main_Demo_wait,
        &Player_actor_main_Demo_walk,
        &Player_actor_main_Demo_geton_train,
        &Player_actor_main_Demo_geton_train_wait,
        &Player_actor_main_Demo_getoff_train,
        &Player_actor_main_Demo_standing_train,
        &Player_actor_main_Demo_wade,
        &Player_actor_main_Hide,
        &Player_actor_main_Groundhog,
        &Player_actor_main_Release_creature,
        &Player_actor_main_Wash_car,
        &Player_actor_main_Tired,
        &Player_actor_main_Rotate_octagon,
        &Player_actor_main_Throw_money,
        &Player_actor_main_Pray,
        &Player_actor_main_Shake_tree,
        &Player_actor_main_Mail_jump,
        &Player_actor_main_Mail_land,
        &Player_actor_main_Ready_pitfall,
        &Player_actor_main_Fall_pitfall,
        &Player_actor_main_Struggle_pitfall,
        &Player_actor_main_Climbup_pitfall,
        &Player_actor_main_Stung_bee,
        &Player_actor_main_Notice_bee,
        &Player_actor_main_Remove_grass,
        &Player_actor_main_Shock,
        &Player_actor_main_Knock_door,
        &Player_actor_main_Change_cloth,
        &Player_actor_main_Push_snowball,
        &Player_actor_main_Rotate_umbrella,
        &Player_actor_main_Wade_snowball,
        &Player_actor_main_Complete_payment,
        &Player_actor_main_Fail_emu,
        &Player_actor_main_Stung_mosquito,
        &Player_actor_main_Notice_mosquito,
        &Player_actor_main_Swing_fan,
        &Player_actor_main_Switch_on_lighthouse,
        &Player_actor_main_Radio_exercise,
        &Player_actor_main_Demo_geton_boat,
        &Player_actor_main_Demo_geton_boat_sitdown,
        &Player_actor_main_Demo_geton_boat_wait,
        &Player_actor_main_Demo_geton_boat_wade,
        &Player_actor_main_Demo_getoff_boat_standup,
        &Player_actor_main_Demo_getoff_boat,
        &Player_actor_main_Demo_get_golden_item,
        &Player_actor_main_Demo_get_golden_item2,
        &Player_actor_main_Demo_get_golden_axe_wait,
    };
    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;
    int idx;

    Player_actor_move_other_func1(actorx, game); //
    idx = player->now_main_index;
    if (mPlayer_MAIN_INDEX_VALID(idx) == FALSE || proc[idx] == NULL) {
        return;
    }

    (*proc[idx])(actorx, game);
    Player_actor_move_other_func2(actorx, game); //
}

typedef void (*mPlayer_DRAW_PROC)(ACTOR*, GAME*);

static void Player_actor_draw_Normal(ACTOR*, GAME*);

extern void Player_actor_draw(ACTOR* actorx, GAME* game) {
    static const s8 data[] = {
        mPlayer_DRAW_TYPE_NONE,   mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NONE,   mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL, mPlayer_DRAW_TYPE_NORMAL,
        mPlayer_DRAW_TYPE_NORMAL,
    };

    static const mPlayer_DRAW_PROC proc[] = {
        (mPlayer_DRAW_PROC)&none_proc2,
        &Player_actor_draw_Normal,
    };

    PLAYER_ACTOR* player = (PLAYER_ACTOR*)actorx;
    int main_idx = player->now_main_index;

    if (mPlayer_MAIN_INDEX_VALID(main_idx) != FALSE) {
        int draw_idx = data[main_idx];

        if (draw_idx >= 0 && draw_idx < mPlayer_DRAW_TYPE_NUM && proc[draw_idx] != NULL) {
            (*proc[draw_idx])(actorx, game);
            Player_actor_draw_other_func2(actorx, game); //
        }
    }
}