/*
 * This file is part of PokéFinder
 * Copyright (C) 2017 by Admiral_Fish and bumba
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "IVFilter.hpp"
#include "ui_IVFilter.h"

IVFilter::IVFilter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IVFilter)
{
    ui->setupUi(this);
}

IVFilter::~IVFilter()
{
    delete ui;
}

vector<u32> IVFilter::getEvals()
{
    vector<u32> evals = { (u32)ui->comboBoxHP->currentIndex(), (u32)ui->comboBoxAtk->currentIndex(),
                          (u32)ui->comboBoxDef->currentIndex(), (u32)ui->comboBoxSpA->currentIndex(),
                          (u32)ui->comboBoxSpD->currentIndex(), (u32)ui->comboBoxSpe->currentIndex() };

    return evals;
}

vector<u32> IVFilter::getValues()
{
    vector<u32> values = { (u32)ui->spinBoxHP->value(), (u32)ui->spinBoxAtk->value(),
                           (u32)ui->spinBoxDef->value(), (u32)ui->spinBoxSpA->value(),
                           (u32)ui->spinBoxSpD->value(), (u32)ui->spinBoxSpe->value()};

    return values;
}

void IVFilter::on_pushButton31HP_clicked()
{
    ui->comboBoxHP->setCurrentIndex(1);
    ui->spinBoxHP->setValue(31);
}

void IVFilter::on_pushButton30HP_clicked()
{
    ui->comboBoxHP->setCurrentIndex(1);
    ui->spinBoxHP->setValue(30);
}

void IVFilter::on_pushButtonG30HP_clicked()
{
    ui->comboBoxHP->setCurrentIndex(2);
    ui->spinBoxHP->setValue(30);
}

void IVFilter::on_pushButtonClearHP_clicked()
{
    ui->comboBoxHP->setCurrentIndex(0);
    ui->spinBoxHP->setValue(0);
}

void IVFilter::on_pushButton31Atk_clicked()
{
    ui->comboBoxAtk->setCurrentIndex(1);
    ui->spinBoxAtk->setValue(31);
}

void IVFilter::on_pushButton30Atk_clicked()
{
    ui->comboBoxAtk->setCurrentIndex(1);
    ui->spinBoxAtk->setValue(30);
}

void IVFilter::on_pushButtonG30Atk_clicked()
{
    ui->comboBoxAtk->setCurrentIndex(2);
    ui->spinBoxAtk->setValue(30);
}

void IVFilter::on_pushButtonClearAtk_clicked()
{
    ui->comboBoxAtk->setCurrentIndex(0);
    ui->spinBoxAtk->setValue(0);
}

void IVFilter::on_pushButton31Def_clicked()
{
    ui->comboBoxDef->setCurrentIndex(1);
    ui->spinBoxDef->setValue(31);
}

void IVFilter::on_pushButton30Def_clicked()
{
    ui->comboBoxDef->setCurrentIndex(1);
    ui->spinBoxDef->setValue(30);
}

void IVFilter::on_pushButtonG30Def_clicked()
{
    ui->comboBoxDef->setCurrentIndex(2);
    ui->spinBoxDef->setValue(30);
}

void IVFilter::on_pushButtonClearDef_clicked()
{
    ui->comboBoxDef->setCurrentIndex(0);
    ui->spinBoxDef->setValue(0);
}

void IVFilter::on_pushButton31SpA_clicked()
{
    ui->comboBoxSpA->setCurrentIndex(1);
    ui->spinBoxSpA->setValue(31);
}

void IVFilter::on_pushButton30SpA_clicked()
{
    ui->comboBoxSpA->setCurrentIndex(1);
    ui->spinBoxSpA->setValue(30);
}

void IVFilter::on_pushButtonG30SpA_clicked()
{
    ui->comboBoxSpA->setCurrentIndex(2);
    ui->spinBoxSpA->setValue(30);
}

void IVFilter::on_pushButtonClearSpA_clicked()
{
    ui->comboBoxSpA->setCurrentIndex(0);
    ui->spinBoxSpA->setValue(0);
}

void IVFilter::on_pushButton31SpD_clicked()
{
    ui->comboBoxSpD->setCurrentIndex(1);
    ui->spinBoxSpD->setValue(31);
}

void IVFilter::on_pushButton30SpD_clicked()
{
    ui->comboBoxSpD->setCurrentIndex(1);
    ui->spinBoxSpD->setValue(30);
}

void IVFilter::on_pushButtonG30SpD_clicked()
{
    ui->comboBoxSpD->setCurrentIndex(2);
    ui->spinBoxSpD->setValue(30);
}

void IVFilter::on_pushButtonClearSpD_clicked()
{
    ui->comboBoxSpD->setCurrentIndex(0);
    ui->spinBoxSpD->setValue(0);
}

void IVFilter::on_pushButton31Spe_clicked()
{
    ui->comboBoxSpe->setCurrentIndex(1);
    ui->spinBoxSpe->setValue(31);
}

void IVFilter::on_pushButton30Spe_clicked()
{
    ui->comboBoxSpe->setCurrentIndex(1);
    ui->spinBoxSpe->setValue(30);
}

void IVFilter::on_pushButtonG30Spe_clicked()
{
    ui->comboBoxSpe->setCurrentIndex(2);
    ui->spinBoxSpe->setValue(30);
}

void IVFilter::on_pushButtonClearSpe_clicked()
{
    ui->comboBoxSpe->setCurrentIndex(0);
    ui->spinBoxSpe->setValue(0);
}
