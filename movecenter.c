void
movecenter(const Arg *arg)
{
    selmon->sel->x = selmon->sel->mon->mx + (selmon->sel->mon->mw - WIDTH(selmon->sel)) / 2;
    selmon->sel->y = selmon->sel->mon->my + (selmon->sel->mon->mh - HEIGHT(selmon->sel)) / 2;
    arrange(selmon);
}